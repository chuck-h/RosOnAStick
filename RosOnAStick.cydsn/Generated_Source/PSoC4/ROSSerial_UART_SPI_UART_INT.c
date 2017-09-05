/*******************************************************************************
* File Name: ROSSerial_UART_SPI_UART_INT.c
* Version 1.20
*
* Description:
*  This file provides the source code to the Interrupt Service Routine for
*  the SCB Component in SPI and UART modes.
*
* Note:
*
********************************************************************************
* Copyright 2013-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "ROSSerial_UART_PVT.h"
#include "ROSSerial_UART_SPI_UART_PVT.h"


/*******************************************************************************
* Function Name: ROSSerial_UART_SPI_UART_ISR
********************************************************************************
*
* Summary:
*  Handles the Interrupt Service Routine for the SCB SPI or UART modes.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
CY_ISR(ROSSerial_UART_SPI_UART_ISR)
{
#if(ROSSerial_UART_INTERNAL_RX_SW_BUFFER_CONST)
    uint32 locHead;
    uint32 dataRx;
#endif /* (ROSSerial_UART_INTERNAL_RX_SW_BUFFER_CONST) */

#if(ROSSerial_UART_INTERNAL_TX_SW_BUFFER_CONST)
    uint32 locTail;
#endif /* (ROSSerial_UART_INTERNAL_TX_SW_BUFFER_CONST) */

    if(NULL != ROSSerial_UART_customIntrHandler)
    {
        ROSSerial_UART_customIntrHandler();
    }

    #if(ROSSerial_UART_CHECK_SPI_WAKE_ENABLE)
    {
        /* Clear SPI wakeup source */
        ROSSerial_UART_ClearSpiExtClkInterruptSource(ROSSerial_UART_INTR_SPI_EC_WAKE_UP);
    }
    #endif

    #if(ROSSerial_UART_CHECK_RX_SW_BUFFER)
    {
        if(ROSSerial_UART_CHECK_INTR_RX_MASKED(ROSSerial_UART_INTR_RX_NOT_EMPTY))
        {
            while(0u != ROSSerial_UART_GET_RX_FIFO_ENTRIES)
            {
                /* Get data from RX FIFO */
                dataRx = ROSSerial_UART_RX_FIFO_RD_REG;

                /* Move local head index */
                locHead = (ROSSerial_UART_rxBufferHead + 1u);

                /* Adjust local head index */
                if(ROSSerial_UART_RX_BUFFER_SIZE == locHead)
                {
                    locHead = 0u;
                }

                if(locHead == ROSSerial_UART_rxBufferTail)
                {
                    /* Overflow: through away new data */
                    ROSSerial_UART_rxBufferOverflow = (uint8) ROSSerial_UART_INTR_RX_OVERFLOW;
                }
                else
                {
                    /* Store received data */
                    ROSSerial_UART_PutWordInRxBuffer(locHead, dataRx);

                    /* Move head index */
                    ROSSerial_UART_rxBufferHead = locHead;
                }
            }

            ROSSerial_UART_ClearRxInterruptSource(ROSSerial_UART_INTR_RX_NOT_EMPTY);
        }
    }
    #endif


    #if(ROSSerial_UART_CHECK_TX_SW_BUFFER)
    {
        if(ROSSerial_UART_CHECK_INTR_TX_MASKED(ROSSerial_UART_INTR_TX_NOT_FULL))
        {
            /* Put data into TX FIFO */
            while(ROSSerial_UART_FIFO_SIZE != ROSSerial_UART_GET_TX_FIFO_ENTRIES)
            {
                /* Check for a room in TX software buffer */
                if(ROSSerial_UART_txBufferHead != ROSSerial_UART_txBufferTail)
                {
                    /* Move local tail index */
                    locTail = (ROSSerial_UART_txBufferTail + 1u);

                    /* Adjust local tail index */
                    if(ROSSerial_UART_TX_BUFFER_SIZE == locTail)
                    {
                        locTail = 0u;
                    }

                    /* Put data into TX FIFO */
                    ROSSerial_UART_TX_FIFO_WR_REG = ROSSerial_UART_GetWordFromTxBuffer(locTail);

                    /* Move tail index */
                    ROSSerial_UART_txBufferTail = locTail;
                }
                else
                {
                    /* TX software buffer is empty: complete transmition */
                    ROSSerial_UART_DISABLE_INTR_TX(ROSSerial_UART_INTR_TX_NOT_FULL);
                    break;
                }
            }

            ROSSerial_UART_ClearTxInterruptSource(ROSSerial_UART_INTR_TX_NOT_FULL);
        }
    }
    #endif
}


/* [] END OF FILE */
