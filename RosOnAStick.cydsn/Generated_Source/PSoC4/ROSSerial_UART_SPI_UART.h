/*******************************************************************************
* File Name: ROSSerial_UART_SPI_UART.h
* Version 1.20
*
* Description:
*  This file provides constants and parameter values for the SCB Component in
*  SPI and UART modes.
*
* Note:
*
********************************************************************************
* Copyright 2013-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_SCB_SPI_UART_ROSSerial_UART_H)
#define CY_SCB_SPI_UART_ROSSerial_UART_H

#include "ROSSerial_UART.h"


/***************************************
*   SPI Initial Parameter Constants
****************************************/

#define ROSSerial_UART_SPI_MODE                   (0u)
#define ROSSerial_UART_SPI_SUB_MODE               (0u)
#define ROSSerial_UART_SPI_CLOCK_MODE             (0u)
#define ROSSerial_UART_SPI_OVS_FACTOR             (16u)
#define ROSSerial_UART_SPI_MEDIAN_FILTER_ENABLE   (0u)
#define ROSSerial_UART_SPI_LATE_MISO_SAMPLE_ENABLE (0u)
#define ROSSerial_UART_SPI_RX_DATA_BITS_NUM       (8u)
#define ROSSerial_UART_SPI_TX_DATA_BITS_NUM       (8u)
#define ROSSerial_UART_SPI_WAKE_ENABLE            (0u)
#define ROSSerial_UART_SPI_BITS_ORDER             (1u)
#define ROSSerial_UART_SPI_TRANSFER_SEPARATION    (1u)
#define ROSSerial_UART_SPI_NUMBER_OF_SS_LINES     (1u)
#define ROSSerial_UART_SPI_RX_BUFFER_SIZE         (8u)
#define ROSSerial_UART_SPI_TX_BUFFER_SIZE         (8u)

#define ROSSerial_UART_SPI_INTERRUPT_MODE         (0u)

#define ROSSerial_UART_SPI_INTR_RX_MASK           (0u)
#define ROSSerial_UART_SPI_INTR_TX_MASK           (0u)

#define ROSSerial_UART_SPI_RX_TRIGGER_LEVEL       (7u)
#define ROSSerial_UART_SPI_TX_TRIGGER_LEVEL       (0u)


/***************************************
*   UART Initial Parameter Constants
****************************************/

#define ROSSerial_UART_UART_SUB_MODE              (0u)
#define ROSSerial_UART_UART_DIRECTION             (3u)
#define ROSSerial_UART_UART_DATA_BITS_NUM         (8u)
#define ROSSerial_UART_UART_PARITY_TYPE           (2u)
#define ROSSerial_UART_UART_STOP_BITS_NUM         (2u)
#define ROSSerial_UART_UART_OVS_FACTOR            (16u)
#define ROSSerial_UART_UART_IRDA_LOW_POWER        (0u)
#define ROSSerial_UART_UART_MEDIAN_FILTER_ENABLE  (0u)
#define ROSSerial_UART_UART_RETRY_ON_NACK         (0u)
#define ROSSerial_UART_UART_IRDA_POLARITY         (0u)
#define ROSSerial_UART_UART_DROP_ON_FRAME_ERR     (0u)
#define ROSSerial_UART_UART_DROP_ON_PARITY_ERR    (0u)
#define ROSSerial_UART_UART_WAKE_ENABLE           (0u)
#define ROSSerial_UART_UART_RX_BUFFER_SIZE        (64u)
#define ROSSerial_UART_UART_TX_BUFFER_SIZE        (128u)
#define ROSSerial_UART_UART_MP_MODE_ENABLE        (0u)
#define ROSSerial_UART_UART_MP_ACCEPT_ADDRESS     (0u)
#define ROSSerial_UART_UART_MP_RX_ADDRESS         (2u)
#define ROSSerial_UART_UART_MP_RX_ADDRESS_MASK    (255u)

#define ROSSerial_UART_UART_INTERRUPT_MODE        (1u)

#define ROSSerial_UART_UART_INTR_RX_MASK          (4u)
#define ROSSerial_UART_UART_INTR_TX_MASK          (0u)

#define ROSSerial_UART_UART_RX_TRIGGER_LEVEL      (7u)
#define ROSSerial_UART_UART_TX_TRIGGER_LEVEL      (0u)

/* Sources of RX errors */
#define ROSSerial_UART_INTR_RX_ERR        (ROSSerial_UART_INTR_RX_OVERFLOW    | \
                                             ROSSerial_UART_INTR_RX_UNDERFLOW   | \
                                             ROSSerial_UART_INTR_RX_FRAME_ERROR | \
                                             ROSSerial_UART_INTR_RX_PARITY_ERROR)

/* UART direction enum */
#define ROSSerial_UART_UART_RX    (1u)
#define ROSSerial_UART_UART_TX    (2u)
#define ROSSerial_UART_UART_TX_RX (3u)


/***************************************
*   Conditional Compilation Parameters
****************************************/

#if(ROSSerial_UART_SCB_MODE_UNCONFIG_CONST_CFG)

    /* Direction */
    #define ROSSerial_UART_RX_DIRECTION           (1u)
    #define ROSSerial_UART_TX_DIRECTION           (1u)
    #define ROSSerial_UART_UART_RX_DIRECTION      (1u)
    #define ROSSerial_UART_UART_TX_DIRECTION      (1u)

    /* Only external RX and TX buffer for uncofigured mode */
    #define ROSSerial_UART_INTERNAL_RX_SW_BUFFER   (0u)
    #define ROSSerial_UART_INTERNAL_TX_SW_BUFFER   (0u)

    /* Get RX and TX buffer size */
    #define ROSSerial_UART_RX_BUFFER_SIZE (ROSSerial_UART_rxBufferSize)
    #define ROSSerial_UART_TX_BUFFER_SIZE (ROSSerial_UART_txBufferSize)

    /* Return true if buffer is provided */
    #define ROSSerial_UART_CHECK_RX_SW_BUFFER (NULL != ROSSerial_UART_rxBuffer)
    #define ROSSerial_UART_CHECK_TX_SW_BUFFER (NULL != ROSSerial_UART_txBuffer)

    /* Always provide global variables to support RX and TX buffers */
    #define ROSSerial_UART_INTERNAL_RX_SW_BUFFER_CONST    (1u)
    #define ROSSerial_UART_INTERNAL_TX_SW_BUFFER_CONST    (1u)

    /* Get wakeup enable option */
    #define ROSSerial_UART_SPI_WAKE_ENABLE_CONST  (1u)
    #define ROSSerial_UART_CHECK_SPI_WAKE_ENABLE  (0u != ROSSerial_UART_scbEnableWake)
    #define ROSSerial_UART_UART_WAKE_ENABLE_CONST (1u)

#else

    /* SPI internal RX and TX buffers */
    #define ROSSerial_UART_INTERNAL_SPI_RX_SW_BUFFER  (ROSSerial_UART_SPI_RX_BUFFER_SIZE > \
                                                                                            ROSSerial_UART_FIFO_SIZE)
    #define ROSSerial_UART_INTERNAL_SPI_TX_SW_BUFFER  (ROSSerial_UART_SPI_TX_BUFFER_SIZE > \
                                                                                            ROSSerial_UART_FIFO_SIZE)

    /* UART internal RX and TX buffers */
    #define ROSSerial_UART_INTERNAL_UART_RX_SW_BUFFER  (ROSSerial_UART_UART_RX_BUFFER_SIZE > \
                                                                                            ROSSerial_UART_FIFO_SIZE)
    #define ROSSerial_UART_INTERNAL_UART_TX_SW_BUFFER  (ROSSerial_UART_UART_TX_BUFFER_SIZE > \
                                                                                            ROSSerial_UART_FIFO_SIZE)

    /* SPI Direction */
    #define ROSSerial_UART_SPI_RX_DIRECTION (1u)
    #define ROSSerial_UART_SPI_TX_DIRECTION (1u)

    /* UART Direction */
    #define ROSSerial_UART_UART_RX_DIRECTION (0u != (ROSSerial_UART_UART_DIRECTION & ROSSerial_UART_UART_RX))
    #define ROSSerial_UART_UART_TX_DIRECTION (0u != (ROSSerial_UART_UART_DIRECTION & ROSSerial_UART_UART_TX))

    /* Direction */
    #define ROSSerial_UART_RX_DIRECTION ((ROSSerial_UART_SCB_MODE_SPI_CONST_CFG) ? \
                                            (ROSSerial_UART_SPI_RX_DIRECTION) : (ROSSerial_UART_UART_RX_DIRECTION))

    #define ROSSerial_UART_TX_DIRECTION ((ROSSerial_UART_SCB_MODE_SPI_CONST_CFG) ? \
                                            (ROSSerial_UART_SPI_TX_DIRECTION) : (ROSSerial_UART_UART_TX_DIRECTION))

    /* Internal RX and TX buffer: for SPI or UART */
    #if(ROSSerial_UART_SCB_MODE_SPI_CONST_CFG)

        /* Internal SPI RX and TX buffer */
        #define ROSSerial_UART_INTERNAL_RX_SW_BUFFER  (ROSSerial_UART_INTERNAL_SPI_RX_SW_BUFFER)
        #define ROSSerial_UART_INTERNAL_TX_SW_BUFFER  (ROSSerial_UART_INTERNAL_SPI_TX_SW_BUFFER)

        /* Internal SPI RX and TX buffer size */
        #define ROSSerial_UART_RX_BUFFER_SIZE         (ROSSerial_UART_SPI_RX_BUFFER_SIZE + 1u)
        #define ROSSerial_UART_TX_BUFFER_SIZE         (ROSSerial_UART_SPI_TX_BUFFER_SIZE)

        /* Get wakeup enable option */
        #define ROSSerial_UART_SPI_WAKE_ENABLE_CONST  (0u != ROSSerial_UART_SPI_WAKE_ENABLE)
        #define ROSSerial_UART_UART_WAKE_ENABLE_CONST (0u)

    #else

        /* Internal UART RX and TX buffer */
        #define ROSSerial_UART_INTERNAL_RX_SW_BUFFER  (ROSSerial_UART_INTERNAL_UART_RX_SW_BUFFER)
        #define ROSSerial_UART_INTERNAL_TX_SW_BUFFER  (ROSSerial_UART_INTERNAL_UART_TX_SW_BUFFER)

        /* Internal UART RX and TX buffer size */
        #define ROSSerial_UART_RX_BUFFER_SIZE         (ROSSerial_UART_UART_RX_BUFFER_SIZE + 1u)
        #define ROSSerial_UART_TX_BUFFER_SIZE         (ROSSerial_UART_UART_TX_BUFFER_SIZE)

        /* Get wakeup enable option */
        #define ROSSerial_UART_SPI_WAKE_ENABLE_CONST  (0u)
        #define ROSSerial_UART_UART_WAKE_ENABLE_CONST (0u != ROSSerial_UART_UART_WAKE_ENABLE)
    #endif /* (ROSSerial_UART_SCB_MODE_SPI_CONST_CFG) */

    /* Internal RX and TX buffer: for SPI or UART. Used in conditional compilation check */
    #define ROSSerial_UART_CHECK_RX_SW_BUFFER (ROSSerial_UART_INTERNAL_RX_SW_BUFFER)
    #define ROSSerial_UART_CHECK_TX_SW_BUFFER (ROSSerial_UART_INTERNAL_TX_SW_BUFFER)

    /* Provide global variables to support RX and TX buffers */
    #define ROSSerial_UART_INTERNAL_RX_SW_BUFFER_CONST    (ROSSerial_UART_INTERNAL_RX_SW_BUFFER)
    #define ROSSerial_UART_INTERNAL_TX_SW_BUFFER_CONST    (ROSSerial_UART_INTERNAL_TX_SW_BUFFER)

    /* Wakeup for SPI */
    #define ROSSerial_UART_CHECK_SPI_WAKE_ENABLE  (ROSSerial_UART_SPI_WAKE_ENABLE_CONST)

#endif /* End (ROSSerial_UART_SCB_MODE_UNCONFIG_CONST_CFG) */

/* Bootloader communication interface enable: NOT supported yet */
#define ROSSerial_UART_SPI_BTLDR_COMM_ENABLED   ((CYDEV_BOOTLOADER_IO_COMP == CyBtldr_ROSSerial_UART) || \
                                                    (CYDEV_BOOTLOADER_IO_COMP == CyBtldr_Custom_Interface))

#define ROSSerial_UART_UART_BTLDR_COMM_ENABLED   ((CYDEV_BOOTLOADER_IO_COMP == CyBtldr_ROSSerial_UART) || \
                                                    (CYDEV_BOOTLOADER_IO_COMP == CyBtldr_Custom_Interface))


/***************************************
*       Type Definitions
***************************************/

/* ROSSerial_UART_SPI_INIT_STRUCT */
typedef struct
{
    uint32 mode;
    uint32 submode;
    uint32 sclkMode;
    uint32 oversample;
    uint32 enableMedianFilter;
    uint32 enableLateSampling;
    uint32 enableWake;
    uint32 rxDataBits;
    uint32 txDataBits;
    uint32 bitOrder;
    uint32 transferSeperation;
    uint32 rxBufferSize;
    uint8* rxBuffer;
    uint32 txBufferSize;
    uint8* txBuffer;
    uint32 enableInterrupt;
    uint32 rxInterruptMask;
    uint32 rxTriggerLevel;
    uint32 txInterruptMask;
    uint32 txTriggerLevel;
} ROSSerial_UART_SPI_INIT_STRUCT;

/* ROSSerial_UART_UART_INIT_STRUCT */
typedef struct
{
    uint32 mode;
    uint32 direction;
    uint32 dataBits;
    uint32 parity;
    uint32 stopBits;
    uint32 oversample;
    uint32 enableIrdaLowPower;
    uint32 enableMedianFilter;
    uint32 enableRetryNack;
    uint32 enableInvertedRx;
    uint32 dropOnParityErr;
    uint32 dropOnFrameErr;
    uint32 enableWake;
    uint32 rxBufferSize;
    uint8* rxBuffer;
    uint32 txBufferSize;
    uint8* txBuffer;
    uint32 enableMultiproc;
    uint32 multiprocAcceptAddr;
    uint32 multiprocAddr;
    uint32 multiprocAddrMask;
    uint32 enableInterrupt;
    uint32 rxInterruptMask;
    uint32 rxTriggerLevel;
    uint32 txInterruptMask;
    uint32 txTriggerLevel;
} ROSSerial_UART_UART_INIT_STRUCT;


/***************************************
*        Function Prototypes
***************************************/

/* SPI specific functions */
#if(ROSSerial_UART_SCB_MODE_UNCONFIG_CONST_CFG)
    void ROSSerial_UART_SpiInit(const ROSSerial_UART_SPI_INIT_STRUCT *config);
#endif /* (ROSSerial_UART_SCB_MODE_UNCONFIG_CONST_CFG) */

#if(ROSSerial_UART_SCB_MODE_SPI_INC)
    void ROSSerial_UART_SpiSetActiveSlaveSelect(uint32 activeSelect);
#endif /* (ROSSerial_UART_SCB_MODE_SPI_INC) */

/* UART specific functions */
#if(ROSSerial_UART_SCB_MODE_UNCONFIG_CONST_CFG)
    void ROSSerial_UART_UartInit(const ROSSerial_UART_UART_INIT_STRUCT *config);
#endif /* (ROSSerial_UART_SCB_MODE_UNCONFIG_CONST_CFG) */

#if(ROSSerial_UART_SCB_MODE_UART_INC)
    void ROSSerial_UART_UartSetRxAddress(uint32 address);
    void ROSSerial_UART_UartSetRxAddressMask(uint32 addressMask);
#endif /* (ROSSerial_UART_SCB_MODE_UART_INC) */

/* UART RX direction APIs */
#if(ROSSerial_UART_UART_RX_DIRECTION)
    uint32 ROSSerial_UART_UartGetChar(void);
    uint32 ROSSerial_UART_UartGetByte(void);
#endif /* (ROSSerial_UART_UART_RX_DIRECTION) */

/* UART TX direction APIs */
#if(ROSSerial_UART_UART_TX_DIRECTION)
    #define ROSSerial_UART_UartPutChar(ch)    ROSSerial_UART_SpiUartWriteTxData((uint32)(ch))
    void ROSSerial_UART_UartPutString(const char8 string[]);
    void ROSSerial_UART_UartPutCRLF(uint32 txDataByte);
#endif /* (ROSSerial_UART_UART_TX_DIRECTION) */

/* Common APIs Rx direction */
#if(ROSSerial_UART_RX_DIRECTION)
    uint32 ROSSerial_UART_SpiUartReadRxData(void);
    uint32 ROSSerial_UART_SpiUartGetRxBufferSize(void);
    void   ROSSerial_UART_SpiUartClearRxBuffer(void);
#endif /* (ROSSerial_UART_RX_DIRECTION) */

/* Common APIs Tx direction */
#if(ROSSerial_UART_TX_DIRECTION)
    void   ROSSerial_UART_SpiUartWriteTxData(uint32 txData);
    void   ROSSerial_UART_SpiUartPutArray(const uint8 wrBuf[], uint32 count);
    void   ROSSerial_UART_SpiUartClearTxBuffer(void);
    uint32 ROSSerial_UART_SpiUartGetTxBufferSize(void);
#endif /* (ROSSerial_UART_TX_DIRECTION) */

CY_ISR_PROTO(ROSSerial_UART_SPI_UART_ISR);

#if(ROSSerial_UART_UART_RX_WAKEUP_IRQ)
    CY_ISR_PROTO(ROSSerial_UART_UART_WAKEUP_ISR);
#endif /* (ROSSerial_UART_UART_RX_WAKEUP_IRQ) */

#if defined(CYDEV_BOOTLOADER_IO_COMP) && (ROSSerial_UART_SPI_BTLDR_COMM_ENABLED)
    /* SPI Bootloader physical layer functions */
    void ROSSerial_UART_SpiCyBtldrCommStart(void);
    void ROSSerial_UART_SpiCyBtldrCommStop (void);
    void ROSSerial_UART_SpiCyBtldrCommReset(void);
    cystatus ROSSerial_UART_SpiCyBtldrCommRead       (uint8 pData[], uint16 size, uint16 * count, uint8 timeOut);
    cystatus ROSSerial_UART_SpiCyBtldrCommWrite(const uint8 pData[], uint16 size, uint16 * count, uint8 timeOut);
#endif /* defined(CYDEV_BOOTLOADER_IO_COMP) && (ROSSerial_UART_SPI_BTLDR_COMM_ENABLED) */

#if defined(CYDEV_BOOTLOADER_IO_COMP) && (ROSSerial_UART_UART_BTLDR_COMM_ENABLED)
    /* UART Bootloader physical layer functions */
    void ROSSerial_UART_UartCyBtldrCommStart(void);
    void ROSSerial_UART_UartCyBtldrCommStop (void);
    void ROSSerial_UART_UartCyBtldrCommReset(void);
    cystatus ROSSerial_UART_UartCyBtldrCommRead       (uint8 pData[], uint16 size, uint16 * count, uint8 timeOut);
    cystatus ROSSerial_UART_UartCyBtldrCommWrite(const uint8 pData[], uint16 size, uint16 * count, uint8 timeOut);
#endif /* defined(CYDEV_BOOTLOADER_IO_COMP) && (ROSSerial_UART_UART_BTLDR_COMM_ENABLED) */


/***************************************
*     Buffer Access Macro Definitions
***************************************/

#if(ROSSerial_UART_SCB_MODE_UNCONFIG_CONST_CFG)
    /* RX direction */
    void   ROSSerial_UART_PutWordInRxBuffer  (uint32 idx, uint32 rxDataByte);
    uint32 ROSSerial_UART_GetWordFromRxBuffer(uint32 idx);

    /* TX direction */
    void   ROSSerial_UART_PutWordInTxBuffer  (uint32 idx, uint32 txDataByte);
    uint32 ROSSerial_UART_GetWordFromTxBuffer(uint32 idx);

#else

    /* RX direction */
    #if(ROSSerial_UART_INTERNAL_RX_SW_BUFFER_CONST)
        #define ROSSerial_UART_PutWordInRxBuffer(idx, rxDataByte) \
                do{                                                 \
                    ROSSerial_UART_rxBufferInternal[(idx)] = ((uint8) (rxDataByte)); \
                }while(0)

        #define ROSSerial_UART_GetWordFromRxBuffer(idx) ROSSerial_UART_rxBufferInternal[(idx)]

    #endif /* (ROSSerial_UART_INTERNAL_RX_SW_BUFFER_CONST) */

    /* TX direction */
    #if(ROSSerial_UART_INTERNAL_TX_SW_BUFFER_CONST)
        #define ROSSerial_UART_PutWordInTxBuffer(idx, txDataByte) \
                    do{                                             \
                        ROSSerial_UART_txBufferInternal[(idx)] = ((uint8) (txDataByte)); \
                    }while(0)

        #define ROSSerial_UART_GetWordFromTxBuffer(idx) ROSSerial_UART_txBufferInternal[(idx)]

    #endif /* (ROSSerial_UART_INTERNAL_TX_SW_BUFFER_CONST) */

#endif /* (ROSSerial_UART_TX_SW_BUFFER_ENABLE) */


/***************************************
*         SPI API Constants
***************************************/

/* SPI mode enum */
#define ROSSerial_UART_SPI_SLAVE  (0u)
#define ROSSerial_UART_SPI_MASTER (1u)

/* SPI sub mode enum */
#define ROSSerial_UART_SPI_MODE_MOTOROLA      (0x00u)
#define ROSSerial_UART_SPI_MODE_TI_COINCIDES  (0x01u)
#define ROSSerial_UART_SPI_MODE_TI_PRECEDES   (0x11u)
#define ROSSerial_UART_SPI_MODE_NATIONAL      (0x02u)
#define ROSSerial_UART_SPI_MODE_MASK          (0x03u)
#define ROSSerial_UART_SPI_MODE_TI_PRECEDES_MASK  (0x10u)

/* SPI phase and polarity mode enum */
#define ROSSerial_UART_SPI_SCLK_CPHA0_CPOL0   (0x00u)
#define ROSSerial_UART_SPI_SCLK_CPHA0_CPOL1   (0x02u)
#define ROSSerial_UART_SPI_SCLK_CPHA1_CPOL0   (0x01u)
#define ROSSerial_UART_SPI_SCLK_CPHA1_CPOL1   (0x03u)

/* SPI bits order enum */
#define ROSSerial_UART_BITS_ORDER_LSB_FIRST   (0u)
#define ROSSerial_UART_BITS_ORDER_MSB_FIRST   (1u)

/* SPI transfer separation enum */
#define ROSSerial_UART_SPI_TRANSFER_SEPARATED     (0u)
#define ROSSerial_UART_SPI_TRANSFER_CONTINUOUS    (1u)

/* SPI master active slave select constants for ROSSerial_UART_SpiSetActiveSlaveSelect() */
#define ROSSerial_UART_SPIM_ACTIVE_SS0    (0x00u)
#define ROSSerial_UART_SPIM_ACTIVE_SS1    (0x01u)
#define ROSSerial_UART_SPIM_ACTIVE_SS2    (0x02u)
#define ROSSerial_UART_SPIM_ACTIVE_SS3    (0x03u)


/***************************************
*         UART API Constants
***************************************/

/* UART sub-modes enum */
#define ROSSerial_UART_UART_MODE_STD          (0u)
#define ROSSerial_UART_UART_MODE_SMARTCARD    (1u)
#define ROSSerial_UART_UART_MODE_IRDA         (2u)

/* UART direction enum */
#define ROSSerial_UART_UART_RX    (1u)
#define ROSSerial_UART_UART_TX    (2u)
#define ROSSerial_UART_UART_TX_RX (3u)

/* UART parity enum */
#define ROSSerial_UART_UART_PARITY_EVEN   (0u)
#define ROSSerial_UART_UART_PARITY_ODD    (1u)
#define ROSSerial_UART_UART_PARITY_NONE   (2u)

/* UART stop bits enum */
#define ROSSerial_UART_UART_STOP_BITS_1   (2u)
#define ROSSerial_UART_UART_STOP_BITS_1_5 (3u)
#define ROSSerial_UART_UART_STOP_BITS_2   (4u)

/* UART IrDA low power OVS enum */
#define ROSSerial_UART_UART_IRDA_LP_OVS16     (16u)
#define ROSSerial_UART_UART_IRDA_LP_OVS32     (32u)
#define ROSSerial_UART_UART_IRDA_LP_OVS48     (48u)
#define ROSSerial_UART_UART_IRDA_LP_OVS96     (96u)
#define ROSSerial_UART_UART_IRDA_LP_OVS192    (192u)
#define ROSSerial_UART_UART_IRDA_LP_OVS768    (768u)
#define ROSSerial_UART_UART_IRDA_LP_OVS1536   (1536u)

/* Uart MP: mark (address) and space (data) bit definitions */
#define ROSSerial_UART_UART_MP_MARK       (0x100u)
#define ROSSerial_UART_UART_MP_SPACE      (0x000u)


/***************************************
*     Vars with External Linkage
***************************************/

#if(ROSSerial_UART_SCB_MODE_UNCONFIG_CONST_CFG)
    extern const ROSSerial_UART_SPI_INIT_STRUCT  ROSSerial_UART_configSpi;
    extern const ROSSerial_UART_UART_INIT_STRUCT ROSSerial_UART_configUart;
#endif /* (ROSSerial_UART_SCB_MODE_UNCONFIG_CONST_CFG) */


/***************************************
*    Specific SPI Macro Definitions
***************************************/

#define ROSSerial_UART_GET_SPI_INTR_SLAVE_MASK(sourceMask)  ((sourceMask) & ROSSerial_UART_INTR_SLAVE_SPI_BUS_ERROR)
#define ROSSerial_UART_GET_SPI_INTR_MASTER_MASK(sourceMask) ((sourceMask) & ROSSerial_UART_INTR_MASTER_SPI_DONE)
#define ROSSerial_UART_GET_SPI_INTR_RX_MASK(sourceMask) \
                                             ((sourceMask) & (uint32) ~ROSSerial_UART_INTR_SLAVE_SPI_BUS_ERROR)

#define ROSSerial_UART_GET_SPI_INTR_TX_MASK(sourceMask) \
                                             ((sourceMask) & (uint32) ~ROSSerial_UART_INTR_MASTER_SPI_DONE)


/***************************************
*    Specific UART Macro Definitions
***************************************/

#define ROSSerial_UART_UART_GET_CTRL_OVS_IRDA_LP(oversample) \
        ((ROSSerial_UART_UART_IRDA_LP_OVS16   == (oversample)) ? ROSSerial_UART_CTRL_OVS_IRDA_LP_OVS16 : \
         ((ROSSerial_UART_UART_IRDA_LP_OVS32   == (oversample)) ? ROSSerial_UART_CTRL_OVS_IRDA_LP_OVS32 : \
          ((ROSSerial_UART_UART_IRDA_LP_OVS48   == (oversample)) ? ROSSerial_UART_CTRL_OVS_IRDA_LP_OVS48 : \
           ((ROSSerial_UART_UART_IRDA_LP_OVS96   == (oversample)) ? ROSSerial_UART_CTRL_OVS_IRDA_LP_OVS96 : \
            ((ROSSerial_UART_UART_IRDA_LP_OVS192  == (oversample)) ? ROSSerial_UART_CTRL_OVS_IRDA_LP_OVS192 : \
             ((ROSSerial_UART_UART_IRDA_LP_OVS768  == (oversample)) ? ROSSerial_UART_CTRL_OVS_IRDA_LP_OVS768 : \
              ((ROSSerial_UART_UART_IRDA_LP_OVS1536 == (oversample)) ? ROSSerial_UART_CTRL_OVS_IRDA_LP_OVS1536 : \
                                                                          ROSSerial_UART_CTRL_OVS_IRDA_LP_OVS16)))))))

#define ROSSerial_UART_GET_UART_RX_CTRL_ENABLED(direction) ((0u != (ROSSerial_UART_UART_RX & (direction))) ? \
                                                                    (ROSSerial_UART_RX_CTRL_ENABLED) : (0u))

#define ROSSerial_UART_GET_UART_TX_CTRL_ENABLED(direction) ((0u != (ROSSerial_UART_UART_TX & (direction))) ? \
                                                                    (ROSSerial_UART_TX_CTRL_ENABLED) : (0u))


/***************************************
*        SPI Register Settings
***************************************/

#define ROSSerial_UART_CTRL_SPI      (ROSSerial_UART_CTRL_MODE_SPI)
#define ROSSerial_UART_SPI_RX_CTRL   (ROSSerial_UART_RX_CTRL_ENABLED)
#define ROSSerial_UART_SPI_TX_CTRL   (ROSSerial_UART_TX_CTRL_ENABLED)


/***************************************
*       SPI Init Register Settings
***************************************/

#if(ROSSerial_UART_SCB_MODE_SPI_CONST_CFG)

    /* SPI Configuration */
    #define ROSSerial_UART_SPI_DEFAULT_CTRL \
                    (ROSSerial_UART_GET_CTRL_OVS(ROSSerial_UART_SPI_OVS_FACTOR)         | \
                     ROSSerial_UART_GET_CTRL_EC_AM_MODE(ROSSerial_UART_SPI_WAKE_ENABLE) | \
                     ROSSerial_UART_CTRL_SPI)

    #define ROSSerial_UART_SPI_DEFAULT_SPI_CTRL \
                    (ROSSerial_UART_GET_SPI_CTRL_CONTINUOUS    (ROSSerial_UART_SPI_TRANSFER_SEPARATION)       | \
                     ROSSerial_UART_GET_SPI_CTRL_SELECT_PRECEDE(ROSSerial_UART_SPI_SUB_MODE &                   \
                                                                  ROSSerial_UART_SPI_MODE_TI_PRECEDES_MASK)     | \
                     ROSSerial_UART_GET_SPI_CTRL_SCLK_MODE     (ROSSerial_UART_SPI_CLOCK_MODE)                | \
                     ROSSerial_UART_GET_SPI_CTRL_LATE_MISO_SAMPLE(ROSSerial_UART_SPI_LATE_MISO_SAMPLE_ENABLE) | \
                     ROSSerial_UART_GET_SPI_CTRL_SUB_MODE      (ROSSerial_UART_SPI_SUB_MODE)                  | \
                     ROSSerial_UART_GET_SPI_CTRL_MASTER_MODE   (ROSSerial_UART_SPI_MODE))

    /* RX direction */
    #define ROSSerial_UART_SPI_DEFAULT_RX_CTRL \
                    (ROSSerial_UART_GET_RX_CTRL_DATA_WIDTH(ROSSerial_UART_SPI_RX_DATA_BITS_NUM)     | \
                     ROSSerial_UART_GET_RX_CTRL_BIT_ORDER (ROSSerial_UART_SPI_BITS_ORDER)           | \
                     ROSSerial_UART_GET_RX_CTRL_MEDIAN    (ROSSerial_UART_SPI_MEDIAN_FILTER_ENABLE) | \
                     ROSSerial_UART_SPI_RX_CTRL)

    #define ROSSerial_UART_SPI_DEFAULT_RX_FIFO_CTRL \
                    ROSSerial_UART_GET_RX_FIFO_CTRL_TRIGGER_LEVEL(ROSSerial_UART_SPI_RX_TRIGGER_LEVEL)

    /* TX direction */
    #define ROSSerial_UART_SPI_DEFAULT_TX_CTRL \
                    (ROSSerial_UART_GET_TX_CTRL_DATA_WIDTH(ROSSerial_UART_SPI_TX_DATA_BITS_NUM) | \
                     ROSSerial_UART_GET_TX_CTRL_BIT_ORDER (ROSSerial_UART_SPI_BITS_ORDER)       | \
                     ROSSerial_UART_SPI_TX_CTRL)

    #define ROSSerial_UART_SPI_DEFAULT_TX_FIFO_CTRL \
                    ROSSerial_UART_GET_TX_FIFO_CTRL_TRIGGER_LEVEL(ROSSerial_UART_SPI_TX_TRIGGER_LEVEL)

    /* Interrupt sources */
    #define ROSSerial_UART_SPI_DEFAULT_INTR_SPI_EC_MASK   (ROSSerial_UART_NO_INTR_SOURCES)

    #define ROSSerial_UART_SPI_DEFAULT_INTR_I2C_EC_MASK   (ROSSerial_UART_NO_INTR_SOURCES)
    #define ROSSerial_UART_SPI_DEFAULT_INTR_SLAVE_MASK \
                    (ROSSerial_UART_SPI_INTR_RX_MASK & ROSSerial_UART_INTR_SLAVE_SPI_BUS_ERROR)

    #define ROSSerial_UART_SPI_DEFAULT_INTR_MASTER_MASK \
                    (ROSSerial_UART_SPI_INTR_TX_MASK & ROSSerial_UART_INTR_MASTER_SPI_DONE)

    #define ROSSerial_UART_SPI_DEFAULT_INTR_RX_MASK \
                    (ROSSerial_UART_SPI_INTR_RX_MASK & (uint32) ~ROSSerial_UART_INTR_SLAVE_SPI_BUS_ERROR)

    #define ROSSerial_UART_SPI_DEFAULT_INTR_TX_MASK \
                    (ROSSerial_UART_SPI_INTR_TX_MASK & (uint32) ~ROSSerial_UART_INTR_MASTER_SPI_DONE)

#endif /* (ROSSerial_UART_SCB_MODE_SPI_CONST_CFG) */


/***************************************
*        UART Register Settings
***************************************/

#define ROSSerial_UART_CTRL_UART      (ROSSerial_UART_CTRL_MODE_UART)
#define ROSSerial_UART_UART_RX_CTRL   (ROSSerial_UART_RX_CTRL_LSB_FIRST) /* LSB for UART goes first */
#define ROSSerial_UART_UART_TX_CTRL   (ROSSerial_UART_TX_CTRL_LSB_FIRST) /* LSB for UART goes first */


/***************************************
*      UART Init Register Settings
***************************************/

#if(ROSSerial_UART_SCB_MODE_UART_CONST_CFG)

    /* UART configuration */
    #if(ROSSerial_UART_UART_MODE_IRDA == ROSSerial_UART_UART_SUB_MODE)

        #define ROSSerial_UART_DEFAULT_CTRL_OVS   ((0u != ROSSerial_UART_UART_IRDA_LOW_POWER) ?              \
                                (ROSSerial_UART_UART_GET_CTRL_OVS_IRDA_LP(ROSSerial_UART_UART_OVS_FACTOR)) : \
                                (ROSSerial_UART_CTRL_OVS_IRDA_OVS16))

    #else

        #define ROSSerial_UART_DEFAULT_CTRL_OVS   ROSSerial_UART_GET_CTRL_OVS(ROSSerial_UART_UART_OVS_FACTOR)

    #endif /* (ROSSerial_UART_UART_MODE_IRDA == ROSSerial_UART_UART_SUB_MODE) */

    #define ROSSerial_UART_UART_DEFAULT_CTRL \
                                (ROSSerial_UART_GET_CTRL_ADDR_ACCEPT(ROSSerial_UART_UART_MP_ACCEPT_ADDRESS) | \
                                 ROSSerial_UART_DEFAULT_CTRL_OVS                                              | \
                                 ROSSerial_UART_CTRL_UART)

    #define ROSSerial_UART_UART_DEFAULT_UART_CTRL \
                                    (ROSSerial_UART_GET_UART_CTRL_MODE(ROSSerial_UART_UART_SUB_MODE))

    /* RX direction */
    #define ROSSerial_UART_UART_DEFAULT_RX_CTRL_PARITY \
                                ((ROSSerial_UART_UART_PARITY_NONE != ROSSerial_UART_UART_PARITY_TYPE) ?      \
                                  (ROSSerial_UART_GET_UART_RX_CTRL_PARITY(ROSSerial_UART_UART_PARITY_TYPE) | \
                                   ROSSerial_UART_UART_RX_CTRL_PARITY_ENABLED) : (0u))

    #define ROSSerial_UART_UART_DEFAULT_UART_RX_CTRL \
                    (ROSSerial_UART_GET_UART_RX_CTRL_MODE(ROSSerial_UART_UART_STOP_BITS_NUM)                    | \
                     ROSSerial_UART_GET_UART_RX_CTRL_POLARITY(ROSSerial_UART_UART_IRDA_POLARITY)                | \
                     ROSSerial_UART_GET_UART_RX_CTRL_MP_MODE(ROSSerial_UART_UART_MP_MODE_ENABLE)                | \
                     ROSSerial_UART_GET_UART_RX_CTRL_DROP_ON_PARITY_ERR(ROSSerial_UART_UART_DROP_ON_PARITY_ERR) | \
                     ROSSerial_UART_GET_UART_RX_CTRL_DROP_ON_FRAME_ERR(ROSSerial_UART_UART_DROP_ON_FRAME_ERR)   | \
                     ROSSerial_UART_UART_DEFAULT_RX_CTRL_PARITY)

    #define ROSSerial_UART_UART_DEFAULT_RX_CTRL \
                                (ROSSerial_UART_GET_RX_CTRL_DATA_WIDTH(ROSSerial_UART_UART_DATA_BITS_NUM)        | \
                                 ROSSerial_UART_GET_RX_CTRL_MEDIAN    (ROSSerial_UART_UART_MEDIAN_FILTER_ENABLE) | \
                                 ROSSerial_UART_GET_UART_RX_CTRL_ENABLED(ROSSerial_UART_UART_DIRECTION))

    #define ROSSerial_UART_UART_DEFAULT_RX_FIFO_CTRL \
                                ROSSerial_UART_GET_RX_FIFO_CTRL_TRIGGER_LEVEL(ROSSerial_UART_UART_RX_TRIGGER_LEVEL)

    #define ROSSerial_UART_UART_DEFAULT_RX_MATCH_REG  ((0u != ROSSerial_UART_UART_MP_MODE_ENABLE) ?          \
                                (ROSSerial_UART_GET_RX_MATCH_ADDR(ROSSerial_UART_UART_MP_RX_ADDRESS) | \
                                 ROSSerial_UART_GET_RX_MATCH_MASK(ROSSerial_UART_UART_MP_RX_ADDRESS_MASK)) : (0u))

    /* TX direction */
    #define ROSSerial_UART_UART_DEFAULT_TX_CTRL_PARITY (ROSSerial_UART_UART_DEFAULT_RX_CTRL_PARITY)

    #define ROSSerial_UART_UART_DEFAULT_UART_TX_CTRL \
                                (ROSSerial_UART_GET_UART_TX_CTRL_MODE(ROSSerial_UART_UART_STOP_BITS_NUM)       | \
                                 ROSSerial_UART_GET_UART_TX_CTRL_RETRY_NACK(ROSSerial_UART_UART_RETRY_ON_NACK) | \
                                 ROSSerial_UART_UART_DEFAULT_TX_CTRL_PARITY)

    #define ROSSerial_UART_UART_DEFAULT_TX_CTRL \
                                (ROSSerial_UART_GET_TX_CTRL_DATA_WIDTH(ROSSerial_UART_UART_DATA_BITS_NUM) | \
                                 ROSSerial_UART_GET_UART_TX_CTRL_ENABLED(ROSSerial_UART_UART_DIRECTION))

    #define ROSSerial_UART_UART_DEFAULT_TX_FIFO_CTRL \
                                ROSSerial_UART_GET_TX_FIFO_CTRL_TRIGGER_LEVEL(ROSSerial_UART_UART_TX_TRIGGER_LEVEL)

    /* Interrupt sources */
    #define ROSSerial_UART_UART_DEFAULT_INTR_I2C_EC_MASK  (ROSSerial_UART_NO_INTR_SOURCES)
    #define ROSSerial_UART_UART_DEFAULT_INTR_SPI_EC_MASK  (ROSSerial_UART_NO_INTR_SOURCES)
    #define ROSSerial_UART_UART_DEFAULT_INTR_SLAVE_MASK   (ROSSerial_UART_NO_INTR_SOURCES)
    #define ROSSerial_UART_UART_DEFAULT_INTR_MASTER_MASK  (ROSSerial_UART_NO_INTR_SOURCES)
    #define ROSSerial_UART_UART_DEFAULT_INTR_RX_MASK      (ROSSerial_UART_UART_INTR_RX_MASK)
    #define ROSSerial_UART_UART_DEFAULT_INTR_TX_MASK      (ROSSerial_UART_UART_INTR_TX_MASK)

#endif /* (ROSSerial_UART_SCB_MODE_UART_CONST_CFG) */

#endif /* CY_SCB_SPI_UART_ROSSerial_UART_H */


/* [] END OF FILE */
