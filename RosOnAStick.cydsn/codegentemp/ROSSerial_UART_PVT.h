/*******************************************************************************
* File Name: .h
* Version 1.20
*
* Description:
*  This private file provides constants and parameter values for the
*  SCB Component.
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

#if !defined(CY_SCB_PVT_ROSSerial_UART_H)
#define CY_SCB_PVT_ROSSerial_UART_H

#include "ROSSerial_UART.h"


/***************************************
*     Private Function Prototypes
***************************************/

/* APIs to service INTR_I2C_EC register */
#define ROSSerial_UART_SetI2CExtClkInterruptMode(interruptMask) ROSSerial_UART_WRITE_INTR_I2C_EC_MASK(interruptMask)
#define ROSSerial_UART_ClearI2CExtClkInterruptSource(interruptMask) ROSSerial_UART_CLEAR_INTR_I2C_EC(interruptMask)
#define ROSSerial_UART_GetI2CExtClkInterruptSource()                (ROSSerial_UART_INTR_I2C_EC_REG)
#define ROSSerial_UART_GetI2CExtClkInterruptMode()                  (ROSSerial_UART_INTR_I2C_EC_MASK_REG)
#define ROSSerial_UART_GetI2CExtClkInterruptSourceMasked()          (ROSSerial_UART_INTR_I2C_EC_MASKED_REG)

#if(!ROSSerial_UART_CY_SCBIP_V1_I2C_ONLY)
/* APIs to service INTR_SPI_EC register */
#define ROSSerial_UART_SetSpiExtClkInterruptMode(interruptMask) ROSSerial_UART_WRITE_INTR_SPI_EC_MASK(interruptMask)
#define ROSSerial_UART_ClearSpiExtClkInterruptSource(interruptMask) ROSSerial_UART_CLEAR_INTR_SPI_EC(interruptMask)
#define ROSSerial_UART_GetExtSpiClkInterruptSource()                 (ROSSerial_UART_INTR_SPI_EC_REG)
#define ROSSerial_UART_GetExtSpiClkInterruptMode()                   (ROSSerial_UART_INTR_SPI_EC_MASK_REG)
#define ROSSerial_UART_GetExtSpiClkInterruptSourceMasked()           (ROSSerial_UART_INTR_SPI_EC_MASKED_REG)
#endif /* (!ROSSerial_UART_CY_SCBIP_V1_I2C_ONLY) */

#if(ROSSerial_UART_SCB_MODE_UNCONFIG_CONST_CFG)
    extern void ROSSerial_UART_SetPins(uint32 mode, uint32 subMode, uint32 uartTxRx);
#endif /* (ROSSerial_UART_SCB_MODE_UNCONFIG_CONST_CFG) */


/***************************************
*     Vars with External Linkage
***************************************/

#if !defined (CY_REMOVE_ROSSerial_UART_CUSTOM_INTR_HANDLER)
    extern cyisraddress ROSSerial_UART_customIntrHandler;
#endif /* !defined (CY_REMOVE_ROSSerial_UART_CUSTOM_INTR_HANDLER) */

extern ROSSerial_UART_BACKUP_STRUCT ROSSerial_UART_backup;

#if(ROSSerial_UART_SCB_MODE_UNCONFIG_CONST_CFG)
    /* Common config vars */
    extern uint8 ROSSerial_UART_scbMode;
    extern uint8 ROSSerial_UART_scbEnableWake;
    extern uint8 ROSSerial_UART_scbEnableIntr;

    /* I2C config vars */
    extern uint8 ROSSerial_UART_mode;
    extern uint8 ROSSerial_UART_acceptAddr;

    /* SPI/UART config vars */
    extern volatile uint8 * ROSSerial_UART_rxBuffer;
    extern uint8   ROSSerial_UART_rxDataBits;
    extern uint32  ROSSerial_UART_rxBufferSize;

    extern volatile uint8 * ROSSerial_UART_txBuffer;
    extern uint8   ROSSerial_UART_txDataBits;
    extern uint32  ROSSerial_UART_txBufferSize;

    /* EZI2C config vars */
    extern uint8 ROSSerial_UART_numberOfAddr;
    extern uint8 ROSSerial_UART_subAddrSize;
#endif /* (ROSSerial_UART_SCB_MODE_UNCONFIG_CONST_CFG) */


/***************************************
*  Conditional Macro
****************************************/

#if(ROSSerial_UART_SCB_MODE_UNCONFIG_CONST_CFG)
    /* Define run time operation mode */
    #define ROSSerial_UART_SCB_MODE_I2C_RUNTM_CFG     (ROSSerial_UART_SCB_MODE_I2C      == ROSSerial_UART_scbMode)
    #define ROSSerial_UART_SCB_MODE_SPI_RUNTM_CFG     (ROSSerial_UART_SCB_MODE_SPI      == ROSSerial_UART_scbMode)
    #define ROSSerial_UART_SCB_MODE_UART_RUNTM_CFG    (ROSSerial_UART_SCB_MODE_UART     == ROSSerial_UART_scbMode)
    #define ROSSerial_UART_SCB_MODE_EZI2C_RUNTM_CFG   (ROSSerial_UART_SCB_MODE_EZI2C    == ROSSerial_UART_scbMode)
    #define ROSSerial_UART_SCB_MODE_UNCONFIG_RUNTM_CFG \
                                                        (ROSSerial_UART_SCB_MODE_UNCONFIG == ROSSerial_UART_scbMode)

    /* Define wakeup enable */
    #define ROSSerial_UART_SCB_WAKE_ENABLE_CHECK        (0u != ROSSerial_UART_scbEnableWake)
#endif /* (ROSSerial_UART_SCB_MODE_UNCONFIG_CONST_CFG) */

#endif /* (CY_SCB_PVT_ROSSerial_UART_H) */


/* [] END OF FILE */
