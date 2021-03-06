/***************************************************************************//**
* \file .h
* \version 3.20
*
* \brief
*  This private file provides constants and parameter values for the
*  SCB Component.
*  Please do not use this file or its content in your project.
*
* Note:
*
********************************************************************************
* \copyright
* Copyright 2013-2016, Cypress Semiconductor Corporation. All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_SCB_PVT_I2CMaster_H)
#define CY_SCB_PVT_I2CMaster_H

#include "I2CMaster.h"


/***************************************
*     Private Function Prototypes
***************************************/

/* APIs to service INTR_I2C_EC register */
#define I2CMaster_SetI2CExtClkInterruptMode(interruptMask) I2CMaster_WRITE_INTR_I2C_EC_MASK(interruptMask)
#define I2CMaster_ClearI2CExtClkInterruptSource(interruptMask) I2CMaster_CLEAR_INTR_I2C_EC(interruptMask)
#define I2CMaster_GetI2CExtClkInterruptSource()                (I2CMaster_INTR_I2C_EC_REG)
#define I2CMaster_GetI2CExtClkInterruptMode()                  (I2CMaster_INTR_I2C_EC_MASK_REG)
#define I2CMaster_GetI2CExtClkInterruptSourceMasked()          (I2CMaster_INTR_I2C_EC_MASKED_REG)

#if (!I2CMaster_CY_SCBIP_V1)
    /* APIs to service INTR_SPI_EC register */
    #define I2CMaster_SetSpiExtClkInterruptMode(interruptMask) \
                                                                I2CMaster_WRITE_INTR_SPI_EC_MASK(interruptMask)
    #define I2CMaster_ClearSpiExtClkInterruptSource(interruptMask) \
                                                                I2CMaster_CLEAR_INTR_SPI_EC(interruptMask)
    #define I2CMaster_GetExtSpiClkInterruptSource()                 (I2CMaster_INTR_SPI_EC_REG)
    #define I2CMaster_GetExtSpiClkInterruptMode()                   (I2CMaster_INTR_SPI_EC_MASK_REG)
    #define I2CMaster_GetExtSpiClkInterruptSourceMasked()           (I2CMaster_INTR_SPI_EC_MASKED_REG)
#endif /* (!I2CMaster_CY_SCBIP_V1) */

#if(I2CMaster_SCB_MODE_UNCONFIG_CONST_CFG)
    extern void I2CMaster_SetPins(uint32 mode, uint32 subMode, uint32 uartEnableMask);
#endif /* (I2CMaster_SCB_MODE_UNCONFIG_CONST_CFG) */


/***************************************
*     Vars with External Linkage
***************************************/

#if (I2CMaster_SCB_IRQ_INTERNAL)
#if !defined (CY_REMOVE_I2CMaster_CUSTOM_INTR_HANDLER)
    extern cyisraddress I2CMaster_customIntrHandler;
#endif /* !defined (CY_REMOVE_I2CMaster_CUSTOM_INTR_HANDLER) */
#endif /* (I2CMaster_SCB_IRQ_INTERNAL) */

extern I2CMaster_BACKUP_STRUCT I2CMaster_backup;

#if(I2CMaster_SCB_MODE_UNCONFIG_CONST_CFG)
    /* Common configuration variables */
    extern uint8 I2CMaster_scbMode;
    extern uint8 I2CMaster_scbEnableWake;
    extern uint8 I2CMaster_scbEnableIntr;

    /* I2C configuration variables */
    extern uint8 I2CMaster_mode;
    extern uint8 I2CMaster_acceptAddr;

    /* SPI/UART configuration variables */
    extern volatile uint8 * I2CMaster_rxBuffer;
    extern uint8   I2CMaster_rxDataBits;
    extern uint32  I2CMaster_rxBufferSize;

    extern volatile uint8 * I2CMaster_txBuffer;
    extern uint8   I2CMaster_txDataBits;
    extern uint32  I2CMaster_txBufferSize;

    /* EZI2C configuration variables */
    extern uint8 I2CMaster_numberOfAddr;
    extern uint8 I2CMaster_subAddrSize;
#endif /* (I2CMaster_SCB_MODE_UNCONFIG_CONST_CFG) */

#if (! (I2CMaster_SCB_MODE_I2C_CONST_CFG || \
        I2CMaster_SCB_MODE_EZI2C_CONST_CFG))
    extern uint16 I2CMaster_IntrTxMask;
#endif /* (! (I2CMaster_SCB_MODE_I2C_CONST_CFG || \
              I2CMaster_SCB_MODE_EZI2C_CONST_CFG)) */


/***************************************
*        Conditional Macro
****************************************/

#if(I2CMaster_SCB_MODE_UNCONFIG_CONST_CFG)
    /* Defines run time operation mode */
    #define I2CMaster_SCB_MODE_I2C_RUNTM_CFG     (I2CMaster_SCB_MODE_I2C      == I2CMaster_scbMode)
    #define I2CMaster_SCB_MODE_SPI_RUNTM_CFG     (I2CMaster_SCB_MODE_SPI      == I2CMaster_scbMode)
    #define I2CMaster_SCB_MODE_UART_RUNTM_CFG    (I2CMaster_SCB_MODE_UART     == I2CMaster_scbMode)
    #define I2CMaster_SCB_MODE_EZI2C_RUNTM_CFG   (I2CMaster_SCB_MODE_EZI2C    == I2CMaster_scbMode)
    #define I2CMaster_SCB_MODE_UNCONFIG_RUNTM_CFG \
                                                        (I2CMaster_SCB_MODE_UNCONFIG == I2CMaster_scbMode)

    /* Defines wakeup enable */
    #define I2CMaster_SCB_WAKE_ENABLE_CHECK       (0u != I2CMaster_scbEnableWake)
#endif /* (I2CMaster_SCB_MODE_UNCONFIG_CONST_CFG) */

/* Defines maximum number of SCB pins */
#if (!I2CMaster_CY_SCBIP_V1)
    #define I2CMaster_SCB_PINS_NUMBER    (7u)
#else
    #define I2CMaster_SCB_PINS_NUMBER    (2u)
#endif /* (!I2CMaster_CY_SCBIP_V1) */

#endif /* (CY_SCB_PVT_I2CMaster_H) */


/* [] END OF FILE */
