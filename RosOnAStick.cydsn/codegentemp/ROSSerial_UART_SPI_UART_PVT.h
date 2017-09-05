/*******************************************************************************
* File Name: ROSSerial_UART_SPI_UART_PVT.h
* Version 1.20
*
* Description:
*  This private file provides constants and parameter values for the
*  SCB Component in SPI and UART modes.
*  Please do not use this file or its content in your project.
*
* Note:
*
********************************************************************************
* Copyright 2013-2014, Cypress Semiconductor Corporation. All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_SCB_SPI_UART_PVT_ROSSerial_UART_H)
#define CY_SCB_SPI_UART_PVT_ROSSerial_UART_H

#include "ROSSerial_UART_SPI_UART.h"


/***************************************
*     Internal Global Vars
***************************************/

#if(ROSSerial_UART_INTERNAL_RX_SW_BUFFER_CONST)
    extern volatile uint32  ROSSerial_UART_rxBufferHead;
    extern volatile uint32  ROSSerial_UART_rxBufferTail;
    extern volatile uint8   ROSSerial_UART_rxBufferOverflow;
#endif /* (ROSSerial_UART_INTERNAL_RX_SW_BUFFER_CONST) */

#if(ROSSerial_UART_INTERNAL_TX_SW_BUFFER_CONST)
    extern volatile uint32  ROSSerial_UART_txBufferHead;
    extern volatile uint32  ROSSerial_UART_txBufferTail;
#endif /* (ROSSerial_UART_INTERNAL_TX_SW_BUFFER_CONST) */

#if(ROSSerial_UART_INTERNAL_RX_SW_BUFFER)
    extern volatile uint8 ROSSerial_UART_rxBufferInternal[ROSSerial_UART_RX_BUFFER_SIZE];
#endif /* (ROSSerial_UART_INTERNAL_RX_SW_BUFFER) */

#if(ROSSerial_UART_INTERNAL_TX_SW_BUFFER)
    extern volatile uint8 ROSSerial_UART_txBufferInternal[ROSSerial_UART_TX_BUFFER_SIZE];
#endif /* (ROSSerial_UART_INTERNAL_TX_SW_BUFFER) */


/***************************************
*     Private Function Prototypes
***************************************/

#if(ROSSerial_UART_SCB_MODE_SPI_CONST_CFG)
    void ROSSerial_UART_SpiInit(void);
#endif /* (ROSSerial_UART_SCB_MODE_SPI_CONST_CFG) */

#if(ROSSerial_UART_SPI_WAKE_ENABLE_CONST)
    void ROSSerial_UART_SpiSaveConfig(void);
    void ROSSerial_UART_SpiRestoreConfig(void);
#endif /* (ROSSerial_UART_SPI_WAKE_ENABLE_CONST) */

#if(ROSSerial_UART_SCB_MODE_UART_CONST_CFG)
    void ROSSerial_UART_UartInit(void);
#endif /* (ROSSerial_UART_SCB_MODE_UART_CONST_CFG) */

#if(ROSSerial_UART_UART_WAKE_ENABLE_CONST)
    void ROSSerial_UART_UartSaveConfig(void);
    void ROSSerial_UART_UartRestoreConfig(void);
#endif /* (ROSSerial_UART_UART_WAKE_ENABLE_CONST) */

/* Interrupt processing */
#define ROSSerial_UART_SpiUartEnableIntRx(intSourceMask)  ROSSerial_UART_SetRxInterruptMode(intSourceMask)
#define ROSSerial_UART_SpiUartEnableIntTx(intSourceMask)  ROSSerial_UART_SetTxInterruptMode(intSourceMask)
uint32  ROSSerial_UART_SpiUartDisableIntRx(void);
uint32  ROSSerial_UART_SpiUartDisableIntTx(void);

#endif /* (CY_SCB_SPI_UART_PVT_ROSSerial_UART_H) */


/* [] END OF FILE */
