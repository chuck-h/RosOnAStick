/*******************************************************************************
* File Name: ROSSerial_UART_UART.c
* Version 1.20
*
* Description:
*  This file provides the source code to the API for the SCB Component in
*  UART mode.
*
* Note:
*
*******************************************************************************
* Copyright 2013-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "ROSSerial_UART_PVT.h"
#include "ROSSerial_UART_SPI_UART_PVT.h"


#if(ROSSerial_UART_SCB_MODE_UNCONFIG_CONST_CFG)

    /***************************************
    *  Config Structure Initialization
    ***************************************/

    const ROSSerial_UART_UART_INIT_STRUCT ROSSerial_UART_configUart =
    {
        ROSSerial_UART_UART_SUB_MODE,
        ROSSerial_UART_UART_DIRECTION,
        ROSSerial_UART_UART_DATA_BITS_NUM,
        ROSSerial_UART_UART_PARITY_TYPE,
        ROSSerial_UART_UART_STOP_BITS_NUM,
        ROSSerial_UART_UART_OVS_FACTOR,
        ROSSerial_UART_UART_IRDA_LOW_POWER,
        ROSSerial_UART_UART_MEDIAN_FILTER_ENABLE,
        ROSSerial_UART_UART_RETRY_ON_NACK,
        ROSSerial_UART_UART_IRDA_POLARITY,
        ROSSerial_UART_UART_DROP_ON_PARITY_ERR,
        ROSSerial_UART_UART_DROP_ON_FRAME_ERR,
        ROSSerial_UART_UART_WAKE_ENABLE,
        0u,
        NULL,
        0u,
        NULL,
        ROSSerial_UART_UART_MP_MODE_ENABLE,
        ROSSerial_UART_UART_MP_ACCEPT_ADDRESS,
        ROSSerial_UART_UART_MP_RX_ADDRESS,
        ROSSerial_UART_UART_MP_RX_ADDRESS_MASK,
        (uint32) ROSSerial_UART_SCB_IRQ_INTERNAL,
        ROSSerial_UART_UART_INTR_RX_MASK,
        ROSSerial_UART_UART_RX_TRIGGER_LEVEL,
        ROSSerial_UART_UART_INTR_TX_MASK,
        ROSSerial_UART_UART_TX_TRIGGER_LEVEL
    };


    /*******************************************************************************
    * Function Name: ROSSerial_UART_UartInit
    ********************************************************************************
    *
    * Summary:
    *  Configures the SCB for the UART operation.
    *
    * Parameters:
    *  config:  Pointer to a structure that contains the following ordered list of
    *           fields. These fields match the selections available in the
    *           customizer.
    *
    * Return:
    *  None
    *
    *******************************************************************************/
    void ROSSerial_UART_UartInit(const ROSSerial_UART_UART_INIT_STRUCT *config)
    {
        if(NULL == config)
        {
            CYASSERT(0u != 0u); /* Halt execution due bad function parameter */
        }
        else
        {
            /* Configure pins */
            ROSSerial_UART_SetPins(ROSSerial_UART_SCB_MODE_UART, config->mode, config->direction);

            /* Store internal configuration */
            ROSSerial_UART_scbMode       = (uint8) ROSSerial_UART_SCB_MODE_UART;
            ROSSerial_UART_scbEnableWake = (uint8) config->enableWake;
            ROSSerial_UART_scbEnableIntr = (uint8) config->enableInterrupt;

            /* Set RX direction internal variables */
            ROSSerial_UART_rxBuffer      =         config->rxBuffer;
            ROSSerial_UART_rxDataBits    = (uint8) config->dataBits;
            ROSSerial_UART_rxBufferSize  = (uint8) config->rxBufferSize;

            /* Set TX direction internal variables */
            ROSSerial_UART_txBuffer      =         config->txBuffer;
            ROSSerial_UART_txDataBits    = (uint8) config->dataBits;
            ROSSerial_UART_txBufferSize  = (uint8) config->txBufferSize;

            /* Configure UART interface */
            if(ROSSerial_UART_UART_MODE_IRDA == config->mode)
            {
                /* OVS settings: IrDA */
                ROSSerial_UART_CTRL_REG  = ((0u != config->enableIrdaLowPower) ?
                                                (ROSSerial_UART_UART_GET_CTRL_OVS_IRDA_LP(config->oversample)) :
                                                (ROSSerial_UART_CTRL_OVS_IRDA_OVS16));
            }
            else
            {
                /* OVS settings: UART and SmartCard */
                ROSSerial_UART_CTRL_REG  = ROSSerial_UART_GET_CTRL_OVS(config->oversample);
            }

            ROSSerial_UART_CTRL_REG     |= ROSSerial_UART_GET_CTRL_ADDR_ACCEPT(config->multiprocAcceptAddr) |
                                             ROSSerial_UART_CTRL_UART;

            /* Configure sub-mode: UART, SmartCard or IrDA */
            ROSSerial_UART_UART_CTRL_REG = ROSSerial_UART_GET_UART_CTRL_MODE(config->mode);

            /* Configure RX direction */
            ROSSerial_UART_UART_RX_CTRL_REG = ROSSerial_UART_GET_UART_RX_CTRL_MODE(config->stopBits)              |
                                        ROSSerial_UART_GET_UART_RX_CTRL_POLARITY(config->enableInvertedRx)          |
                                        ROSSerial_UART_GET_UART_RX_CTRL_MP_MODE(config->enableMultiproc)            |
                                        ROSSerial_UART_GET_UART_RX_CTRL_DROP_ON_PARITY_ERR(config->dropOnParityErr) |
                                        ROSSerial_UART_GET_UART_RX_CTRL_DROP_ON_FRAME_ERR(config->dropOnFrameErr);

            if(ROSSerial_UART_UART_PARITY_NONE != config->parity)
            {
               ROSSerial_UART_UART_RX_CTRL_REG |= ROSSerial_UART_GET_UART_RX_CTRL_PARITY(config->parity) |
                                                    ROSSerial_UART_UART_RX_CTRL_PARITY_ENABLED;
            }

            ROSSerial_UART_RX_CTRL_REG      = ROSSerial_UART_GET_RX_CTRL_DATA_WIDTH(config->dataBits)       |
                                                ROSSerial_UART_GET_RX_CTRL_MEDIAN(config->enableMedianFilter) |
                                                ROSSerial_UART_GET_UART_RX_CTRL_ENABLED(config->direction);

            ROSSerial_UART_RX_FIFO_CTRL_REG = ROSSerial_UART_GET_RX_FIFO_CTRL_TRIGGER_LEVEL(config->rxTriggerLevel);

            /* Configure MP address */
            ROSSerial_UART_RX_MATCH_REG     = ROSSerial_UART_GET_RX_MATCH_ADDR(config->multiprocAddr) |
                                                ROSSerial_UART_GET_RX_MATCH_MASK(config->multiprocAddrMask);

            /* Configure RX direction */
            ROSSerial_UART_UART_TX_CTRL_REG = ROSSerial_UART_GET_UART_TX_CTRL_MODE(config->stopBits) |
                                                ROSSerial_UART_GET_UART_TX_CTRL_RETRY_NACK(config->enableRetryNack);

            if(ROSSerial_UART_UART_PARITY_NONE != config->parity)
            {
               ROSSerial_UART_UART_TX_CTRL_REG |= ROSSerial_UART_GET_UART_TX_CTRL_PARITY(config->parity) |
                                                    ROSSerial_UART_UART_TX_CTRL_PARITY_ENABLED;
            }

            ROSSerial_UART_TX_CTRL_REG      = ROSSerial_UART_GET_TX_CTRL_DATA_WIDTH(config->dataBits)    |
                                                ROSSerial_UART_GET_UART_TX_CTRL_ENABLED(config->direction);

            ROSSerial_UART_TX_FIFO_CTRL_REG = ROSSerial_UART_GET_TX_FIFO_CTRL_TRIGGER_LEVEL(config->txTriggerLevel);



            /* Configure interrupt with UART handler but do not enable it */
            CyIntDisable    (ROSSerial_UART_ISR_NUMBER);
            CyIntSetPriority(ROSSerial_UART_ISR_NUMBER, ROSSerial_UART_ISR_PRIORITY);
            (void) CyIntSetVector(ROSSerial_UART_ISR_NUMBER, &ROSSerial_UART_SPI_UART_ISR);

            /* Configure WAKE interrupt */
        #if(ROSSerial_UART_UART_RX_WAKEUP_IRQ)
            CyIntDisable    (ROSSerial_UART_RX_WAKE_ISR_NUMBER);
            CyIntSetPriority(ROSSerial_UART_RX_WAKE_ISR_NUMBER, ROSSerial_UART_RX_WAKE_ISR_PRIORITY);
            (void) CyIntSetVector(ROSSerial_UART_RX_WAKE_ISR_NUMBER, &ROSSerial_UART_UART_WAKEUP_ISR);
        #endif /* (ROSSerial_UART_UART_RX_WAKEUP_IRQ) */

            /* Configure interrupt sources */
            ROSSerial_UART_INTR_I2C_EC_MASK_REG = ROSSerial_UART_NO_INTR_SOURCES;
            ROSSerial_UART_INTR_SPI_EC_MASK_REG = ROSSerial_UART_NO_INTR_SOURCES;
            ROSSerial_UART_INTR_SLAVE_MASK_REG  = ROSSerial_UART_NO_INTR_SOURCES;
            ROSSerial_UART_INTR_MASTER_MASK_REG = ROSSerial_UART_NO_INTR_SOURCES;
            ROSSerial_UART_INTR_RX_MASK_REG     = config->rxInterruptMask;
            ROSSerial_UART_INTR_TX_MASK_REG     = config->txInterruptMask;

            /* Clear RX buffer indexes */
            ROSSerial_UART_rxBufferHead     = 0u;
            ROSSerial_UART_rxBufferTail     = 0u;
            ROSSerial_UART_rxBufferOverflow = 0u;

            /* Clrea TX buffer indexes */
            ROSSerial_UART_txBufferHead = 0u;
            ROSSerial_UART_txBufferTail = 0u;
        }
    }

#else

    /*******************************************************************************
    * Function Name: ROSSerial_UART_UartInit
    ********************************************************************************
    *
    * Summary:
    *  Configures the SCB for the UART operation.
    *
    * Parameters:
    *  None
    *
    * Return:
    *  None
    *
    *******************************************************************************/
    void ROSSerial_UART_UartInit(void)
    {
        /* Configure UART interface */
        ROSSerial_UART_CTRL_REG = ROSSerial_UART_UART_DEFAULT_CTRL;

        /* Configure sub-mode: UART, SmartCard or IrDA */
        ROSSerial_UART_UART_CTRL_REG = ROSSerial_UART_UART_DEFAULT_UART_CTRL;

        /* Configure RX direction */
        ROSSerial_UART_UART_RX_CTRL_REG = ROSSerial_UART_UART_DEFAULT_UART_RX_CTRL;
        ROSSerial_UART_RX_CTRL_REG      = ROSSerial_UART_UART_DEFAULT_RX_CTRL;
        ROSSerial_UART_RX_FIFO_CTRL_REG = ROSSerial_UART_UART_DEFAULT_RX_FIFO_CTRL;
        ROSSerial_UART_RX_MATCH_REG     = ROSSerial_UART_UART_DEFAULT_RX_MATCH_REG;

        /* Configure TX direction */
        ROSSerial_UART_UART_TX_CTRL_REG = ROSSerial_UART_UART_DEFAULT_UART_TX_CTRL;
        ROSSerial_UART_TX_CTRL_REG      = ROSSerial_UART_UART_DEFAULT_TX_CTRL;
        ROSSerial_UART_TX_FIFO_CTRL_REG = ROSSerial_UART_UART_DEFAULT_TX_FIFO_CTRL;

        /* Configure interrupt with UART handler but do not enable it */
    #if(ROSSerial_UART_SCB_IRQ_INTERNAL)
        CyIntDisable    (ROSSerial_UART_ISR_NUMBER);
        CyIntSetPriority(ROSSerial_UART_ISR_NUMBER, ROSSerial_UART_ISR_PRIORITY);
        (void) CyIntSetVector(ROSSerial_UART_ISR_NUMBER, &ROSSerial_UART_SPI_UART_ISR);
    #endif /* (ROSSerial_UART_SCB_IRQ_INTERNAL) */

        /* Configure WAKE interrupt */
    #if(ROSSerial_UART_UART_RX_WAKEUP_IRQ)
        CyIntDisable    (ROSSerial_UART_RX_WAKE_ISR_NUMBER);
        CyIntSetPriority(ROSSerial_UART_RX_WAKE_ISR_NUMBER, ROSSerial_UART_RX_WAKE_ISR_PRIORITY);
        (void) CyIntSetVector(ROSSerial_UART_RX_WAKE_ISR_NUMBER, &ROSSerial_UART_UART_WAKEUP_ISR);
    #endif /* (ROSSerial_UART_UART_RX_WAKEUP_IRQ) */

        /* Configure interrupt sources */
        ROSSerial_UART_INTR_I2C_EC_MASK_REG = ROSSerial_UART_UART_DEFAULT_INTR_I2C_EC_MASK;
        ROSSerial_UART_INTR_SPI_EC_MASK_REG = ROSSerial_UART_UART_DEFAULT_INTR_SPI_EC_MASK;
        ROSSerial_UART_INTR_SLAVE_MASK_REG  = ROSSerial_UART_UART_DEFAULT_INTR_SLAVE_MASK;
        ROSSerial_UART_INTR_MASTER_MASK_REG = ROSSerial_UART_UART_DEFAULT_INTR_MASTER_MASK;
        ROSSerial_UART_INTR_RX_MASK_REG     = ROSSerial_UART_UART_DEFAULT_INTR_RX_MASK;
        ROSSerial_UART_INTR_TX_MASK_REG     = ROSSerial_UART_UART_DEFAULT_INTR_TX_MASK;

    #if(ROSSerial_UART_INTERNAL_RX_SW_BUFFER_CONST)
        ROSSerial_UART_rxBufferHead     = 0u;
        ROSSerial_UART_rxBufferTail     = 0u;
        ROSSerial_UART_rxBufferOverflow = 0u;
    #endif /* (ROSSerial_UART_INTERNAL_RX_SW_BUFFER_CONST) */

    #if(ROSSerial_UART_INTERNAL_TX_SW_BUFFER_CONST)
        ROSSerial_UART_txBufferHead = 0u;
        ROSSerial_UART_txBufferTail = 0u;
    #endif /* (ROSSerial_UART_INTERNAL_TX_SW_BUFFER_CONST) */
    }
#endif /* (ROSSerial_UART_SCB_MODE_UNCONFIG_CONST_CFG) */


/*******************************************************************************
* Function Name: ROSSerial_UART_UartSetRxAddress
********************************************************************************
*
* Summary:
*  Sets the hardware detectable receiver address for the UART in the Multiprocessor
*  mode.
*
* Parameters:
*  address: Address for hardware address detection.
*
* Return:
*  None
*
*******************************************************************************/
void ROSSerial_UART_UartSetRxAddress(uint32 address)
{
     uint32 matchReg;

    matchReg = ROSSerial_UART_RX_MATCH_REG;

    matchReg &= ((uint32) ~ROSSerial_UART_RX_MATCH_ADDR_MASK); /* Clear address bits */
    matchReg |= ((uint32)  (address & ROSSerial_UART_RX_MATCH_ADDR_MASK)); /* Set address  */

    ROSSerial_UART_RX_MATCH_REG = matchReg;
}


/*******************************************************************************
* Function Name: ROSSerial_UART_UartSetRxAddressMask
********************************************************************************
*
* Summary:
*  Sets the hardware address mask for the UART in the Multiprocessor mode.
*
* Parameters:
*  addressMask: Address mask.
*   0 - address bit does not care while comparison.
*   1 - address bit is significant while comparison.
*
* Return:
*  None
*
*******************************************************************************/
void ROSSerial_UART_UartSetRxAddressMask(uint32 addressMask)
{
    uint32 matchReg;

    matchReg = ROSSerial_UART_RX_MATCH_REG;

    matchReg &= ((uint32) ~ROSSerial_UART_RX_MATCH_MASK_MASK); /* Clear address mask bits */
    matchReg |= ((uint32) (addressMask << ROSSerial_UART_RX_MATCH_MASK_POS));

    ROSSerial_UART_RX_MATCH_REG = matchReg;
}


#if(ROSSerial_UART_UART_RX_DIRECTION)
    /*******************************************************************************
    * Function Name: ROSSerial_UART_UartGetChar
    ********************************************************************************
    *
    * Summary:
    *  Retrieves the next data element from the receive buffer.
    *  This function is designed for ASCII characters and returns a char
    *  where 1 to 255 are valid characters and 0 indicates an error occurred or
    *  no data present.
    *  - The RX software buffer is disabled: returns the data element retrieved from the RX FIFO.
    *    Undefined data will be returned if the RX FIFO is empty.
    *  - The RX software buffer is enabled: returns the data element from the software receive
    *    buffer.
    *
    * Parameters:
    *  None
    *
    * Return:
    *  The next data element from the receive buffer.
    *  ASCII character values from 1 to 255 are valid.
    *  A returned zero signifies an error condition or no data available.
    *
    *******************************************************************************/
    uint32 ROSSerial_UART_UartGetChar(void)
    {
        uint32 rxData = 0u;

        /* Read data only if there is data to read */
        if(0u != ROSSerial_UART_SpiUartGetRxBufferSize())
        {
            rxData = ROSSerial_UART_SpiUartReadRxData();
        }

        if(ROSSerial_UART_CHECK_INTR_RX(ROSSerial_UART_INTR_RX_ERR))
        {
            rxData = 0u; /* Error occurred: return zero */
            ROSSerial_UART_ClearRxInterruptSource(ROSSerial_UART_INTR_RX_ERR);
        }

        return(rxData);
    }


    /*******************************************************************************
    * Function Name: ROSSerial_UART_UartGetByte
    ********************************************************************************
    *
    * Summary:
    *  Retrieves the next data element from the receive buffer, returns the received byte
    *  and error condition.
    *   - The RX software buffer is disabled: returns the data element retrieved from the RX FIFO.
    *     Undefined data will be returned if the RX FIFO is empty.
    *   - The RX software buffer is enabled: returns data element from the software receive
    *     buffer.
    *
    * Parameters:
    *  None
    *
    * Return:
    *  Bits 15-8 contains status and bits 7-0 contains the next data element from
    *  receive buffer. If the bits 15-8 are non-zero, an error has occurred.
    *
    *******************************************************************************/
    uint32 ROSSerial_UART_UartGetByte(void)
    {
        uint32 rxData;
        uint32 tmpStatus;
        uint32 intSourceMask;

        intSourceMask = ROSSerial_UART_SpiUartDisableIntRx();

        if(0u != ROSSerial_UART_SpiUartGetRxBufferSize())
        {
             /*
             * Enable interrupt to receive more bytes: at least one byte is in
             * buffer.
             */
            ROSSerial_UART_SpiUartEnableIntRx(intSourceMask);

            /* Get received byte */
            rxData = ROSSerial_UART_SpiUartReadRxData();
        }
        else
        {
            /*
            * Read byte directly from RX FIFO: the underflow is raised in case
            * of empty. In other case the first received byte will be read.
            */
            rxData = ROSSerial_UART_RX_FIFO_RD_REG;

            /*
            * Enable interrupt to receive more bytes.
            * The RX_NOT_EMPTY interrupt is cleared by the interrupt routine in case
            * the byte was received and read above.
            */
            ROSSerial_UART_SpiUartEnableIntRx(intSourceMask);
        }

        /* Get and clear RX error mask */
        tmpStatus = (ROSSerial_UART_GetRxInterruptSource() & ROSSerial_UART_INTR_RX_ERR);
        ROSSerial_UART_ClearRxInterruptSource(ROSSerial_UART_INTR_RX_ERR);

        /*
        * Put together data and error status:
        * MP mode and accept address: the 9th bit is set to notify mark.
        */
        rxData |= ((uint32) (tmpStatus << 8u));

        return(rxData);
    }

#endif /* (ROSSerial_UART_UART_RX_DIRECTION) */


#if(ROSSerial_UART_UART_TX_DIRECTION)
    /*******************************************************************************
    * Function Name: ROSSerial_UART_UartPutString
    ********************************************************************************
    *
    * Summary:
    *  Places a NULL terminated string in the transmit buffer to be sent at the
    *  next available bus time.
    *  This function is blocking and waits until there is space available to put
    *  all the requested data into the  transmit buffer.
    *
    * Parameters:
    *  string: pointer to the null terminated string array to be placed in the
    *          transmit buffer.
    *
    * Return:
    *  None
    *
    *******************************************************************************/
    void ROSSerial_UART_UartPutString(const char8 string[])
    {
        uint32 bufIndex;

        bufIndex = 0u;

        /* Block the control flow until all data has been sent */
        while(string[bufIndex] != ((char8) 0))
        {
            ROSSerial_UART_UartPutChar((uint32) string[bufIndex]);
            bufIndex++;
        }
    }


    /*******************************************************************************
    * Function Name: ROSSerial_UART_UartPutCRLF
    ********************************************************************************
    *
    * Summary:
    *  Places a byte of data followed by a carriage return (0x0D) and line feed (0x0A)
    *  into the transmit buffer.
    *  This function is blocking and waits until there is space available to put
    *  all the requested data into the  transmit buffer.
    *
    * Parameters:
    *  txDataByte : the data to be transmitted.
    *
    * Return:
    *  None
    *
    *******************************************************************************/
    void ROSSerial_UART_UartPutCRLF(uint32 txDataByte)
    {
        ROSSerial_UART_UartPutChar(txDataByte);  /* Blocks control flow until all data has been sent */
        ROSSerial_UART_UartPutChar(0x0Du);       /* Blocks control flow until all data has been sent */
        ROSSerial_UART_UartPutChar(0x0Au);       /* Blocks control flow until all data has been sent */
    }
#endif /* (ROSSerial_UART_UART_TX_DIRECTION) */


#if(ROSSerial_UART_UART_WAKE_ENABLE_CONST)
    /*******************************************************************************
    * Function Name: ROSSerial_UART_UartSaveConfig
    ********************************************************************************
    *
    * Summary:
    *  Clears and enables interrupt on a falling edge of the Rx input. The GPIO
    *  event wakes up the device and SKIP_START feature allows the UART continue
    *  receiving data bytes properly. The GPIO interrupt does not track in the active
    *  mode therefore requires to be cleared by this API.
    *
    * Parameters:
    *  None
    *
    * Return:
    *  None
    *
    *******************************************************************************/
    void ROSSerial_UART_UartSaveConfig(void)
    {
        /* Clear interrupt activity:
        *  - set skip start and disable RX. On GPIO wakeup RX will be enabled.
        *  - clear rx_wake interrupt source as it triggers during normal operation.
        *  - clear wake interrupt pending state as it becomes pending in active mode.
        */

        ROSSerial_UART_UART_RX_CTRL_REG |= ROSSerial_UART_UART_RX_CTRL_SKIP_START;

    #if(ROSSerial_UART_SCB_MODE_UNCONFIG_CONST_CFG)
        #if(ROSSerial_UART_MOSI_SCL_RX_WAKE_PIN)
            (void) ROSSerial_UART_spi_mosi_i2c_scl_uart_rx_wake_ClearInterrupt();
        #endif /* (ROSSerial_UART_MOSI_SCL_RX_WAKE_PIN) */
    #else
        #if(ROSSerial_UART_UART_RX_WAKE_PIN)
            (void) ROSSerial_UART_rx_wake_ClearInterrupt();
        #endif /* (ROSSerial_UART_UART_RX_WAKE_PIN) */
    #endif /* (ROSSerial_UART_SCB_MODE_UNCONFIG_CONST_CFG) */

    #if(ROSSerial_UART_UART_RX_WAKEUP_IRQ)
        ROSSerial_UART_RxWakeClearPendingInt();
        ROSSerial_UART_RxWakeEnableInt();
    #endif /* (ROSSerial_UART_UART_RX_WAKEUP_IRQ) */
    }


    /*******************************************************************************
    * Function Name: ROSSerial_UART_UartRestoreConfig
    ********************************************************************************
    *
    * Summary:
    *  Disables the RX GPIO interrupt. Until this function is called the interrupt remains
    *  active and triggers on every falling edge of the UART RX line.
    *
    * Parameters:
    *  None
    *
    * Return:
    *  None
    *
    *******************************************************************************/
    void ROSSerial_UART_UartRestoreConfig(void)
    {
    /* Disable RX GPIO interrupt: no more triggers in active mode */
    #if(ROSSerial_UART_UART_RX_WAKEUP_IRQ)
        ROSSerial_UART_RxWakeDisableInt();
    #endif /* (ROSSerial_UART_UART_RX_WAKEUP_IRQ) */
    }
#endif /* (ROSSerial_UART_UART_WAKE_ENABLE_CONST) */


#if(ROSSerial_UART_UART_RX_WAKEUP_IRQ)
    /*******************************************************************************
    * Function Name: ROSSerial_UART_UART_WAKEUP_ISR
    ********************************************************************************
    *
    * Summary:
    *  Handles the Interrupt Service Routine for the SCB UART mode GPIO wakeup event. This
    *  event is configured to trigger on a falling edge of the RX line.
    *
    * Parameters:
    *  None
    *
    * Return:
    *  None
    *
    *******************************************************************************/
    CY_ISR(ROSSerial_UART_UART_WAKEUP_ISR)
    {
        /* Clear interrupt source: the event becomes multi triggered and is only disabled
        * by ROSSerial_UART_UartRestoreConfig() call.
        */
    #if(ROSSerial_UART_SCB_MODE_UNCONFIG_CONST_CFG)
        #if(ROSSerial_UART_MOSI_SCL_RX_WAKE_PIN)
            (void) ROSSerial_UART_spi_mosi_i2c_scl_uart_rx_wake_ClearInterrupt();
        #endif /* (ROSSerial_UART_MOSI_SCL_RX_WAKE_PIN) */
    #else
        #if(ROSSerial_UART_UART_RX_WAKE_PIN)
            (void) ROSSerial_UART_rx_wake_ClearInterrupt();
        #endif /* (ROSSerial_UART_UART_RX_WAKE_PIN) */
    #endif /* (ROSSerial_UART_SCB_MODE_UNCONFIG_CONST_CFG) */
    }
#endif /* (ROSSerial_UART_UART_RX_WAKEUP_IRQ) */


/* [] END OF FILE */
