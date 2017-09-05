/*******************************************************************************
* File Name: ROSSerial_UART_PM.c
* Version 1.20
*
* Description:
*  This file provides the source code to the Power Management support for
*  the SCB Component.
*
* Note:
*
********************************************************************************
* Copyright 2013-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "ROSSerial_UART.h"
#include "ROSSerial_UART_PVT.h"

#if(ROSSerial_UART_SCB_MODE_I2C_INC)
    #include "ROSSerial_UART_I2C_PVT.h"
#endif /* (ROSSerial_UART_SCB_MODE_I2C_INC) */

#if(ROSSerial_UART_SCB_MODE_EZI2C_INC)
    #include "ROSSerial_UART_EZI2C_PVT.h"
#endif /* (ROSSerial_UART_SCB_MODE_EZI2C_INC) */

#if(ROSSerial_UART_SCB_MODE_SPI_INC || ROSSerial_UART_SCB_MODE_UART_INC)
    #include "ROSSerial_UART_SPI_UART_PVT.h"
#endif /* (ROSSerial_UART_SCB_MODE_SPI_INC || ROSSerial_UART_SCB_MODE_UART_INC) */


/***************************************
*   Backup Structure declaration
***************************************/

#if(ROSSerial_UART_SCB_MODE_UNCONFIG_CONST_CFG || \
   (ROSSerial_UART_SCB_MODE_I2C_CONST_CFG   && (!ROSSerial_UART_I2C_WAKE_ENABLE_CONST))   || \
   (ROSSerial_UART_SCB_MODE_EZI2C_CONST_CFG && (!ROSSerial_UART_EZI2C_WAKE_ENABLE_CONST)) || \
   (ROSSerial_UART_SCB_MODE_SPI_CONST_CFG   && (!ROSSerial_UART_SPI_WAKE_ENABLE_CONST))   || \
   (ROSSerial_UART_SCB_MODE_UART_CONST_CFG  && (!ROSSerial_UART_UART_WAKE_ENABLE_CONST)))

    ROSSerial_UART_BACKUP_STRUCT ROSSerial_UART_backup =
    {
        0u, /* enableState */
    };
#endif


/*******************************************************************************
* Function Name: ROSSerial_UART_Sleep
********************************************************************************
*
* Summary:
*  Prepares the component to enter Deep Sleep.
*  The “Enable wakeup from Sleep Mode” selection has an influence on
*  this function implementation.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void ROSSerial_UART_Sleep(void)
{
#if(ROSSerial_UART_SCB_MODE_UNCONFIG_CONST_CFG)

    if(ROSSerial_UART_SCB_WAKE_ENABLE_CHECK)
    {
        if(ROSSerial_UART_SCB_MODE_I2C_RUNTM_CFG)
        {
            ROSSerial_UART_I2CSaveConfig();
        }
        else if(ROSSerial_UART_SCB_MODE_EZI2C_RUNTM_CFG)
        {
            ROSSerial_UART_EzI2CSaveConfig();
        }
    #if(!ROSSerial_UART_CY_SCBIP_V1_I2C_ONLY)
        else if(ROSSerial_UART_SCB_MODE_SPI_RUNTM_CFG)
        {
            ROSSerial_UART_SpiSaveConfig();
        }
        else if(ROSSerial_UART_SCB_MODE_UART_RUNTM_CFG)
        {
            ROSSerial_UART_UartSaveConfig();
        }
    #endif /* (!ROSSerial_UART_CY_SCBIP_V1_I2C_ONLY) */
        else
        {
            /* Unknown mode: do nothing */
        }
    }
    else
    {
        ROSSerial_UART_backup.enableState = (uint8) ROSSerial_UART_GET_CTRL_ENABLED;

        if(0u != ROSSerial_UART_backup.enableState)
        {
            ROSSerial_UART_Stop();
        }
    }

#else

    #if (ROSSerial_UART_SCB_MODE_I2C_CONST_CFG && ROSSerial_UART_I2C_WAKE_ENABLE_CONST)
        ROSSerial_UART_I2CSaveConfig();

    #elif (ROSSerial_UART_SCB_MODE_EZI2C_CONST_CFG && ROSSerial_UART_EZI2C_WAKE_ENABLE_CONST)
        ROSSerial_UART_EzI2CSaveConfig();

    #elif (ROSSerial_UART_SCB_MODE_SPI_CONST_CFG && ROSSerial_UART_SPI_WAKE_ENABLE_CONST)
        ROSSerial_UART_SpiSaveConfig();

    #elif (ROSSerial_UART_SCB_MODE_UART_CONST_CFG && ROSSerial_UART_UART_WAKE_ENABLE_CONST)
        ROSSerial_UART_UartSaveConfig();

    #else

        ROSSerial_UART_backup.enableState = (uint8) ROSSerial_UART_GET_CTRL_ENABLED;

        if(0u != ROSSerial_UART_backup.enableState)
        {
            ROSSerial_UART_Stop();
        }

    #endif /* defined (ROSSerial_UART_SCB_MODE_I2C_CONST_CFG) && (ROSSerial_UART_I2C_WAKE_ENABLE_CONST) */

#endif /* (ROSSerial_UART_SCB_MODE_UNCONFIG_CONST_CFG) */
}


/*******************************************************************************
* Function Name: ROSSerial_UART_Wakeup
********************************************************************************
*
* Summary:
*  Prepares the component for the Active mode operation after exiting Deep Sleep.
*  The “Enable wakeup from Sleep Mode” option has an influence on this function
*  implementation.
*  This function should not be called after exiting Sleep.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void ROSSerial_UART_Wakeup(void)
{
#if(ROSSerial_UART_SCB_MODE_UNCONFIG_CONST_CFG)

    if(ROSSerial_UART_SCB_WAKE_ENABLE_CHECK)
    {
        if(ROSSerial_UART_SCB_MODE_I2C_RUNTM_CFG)
        {
            ROSSerial_UART_I2CRestoreConfig();
        }
        else if(ROSSerial_UART_SCB_MODE_EZI2C_RUNTM_CFG)
        {
            ROSSerial_UART_EzI2CRestoreConfig();
        }
    #if(!ROSSerial_UART_CY_SCBIP_V1_I2C_ONLY)
        else if(ROSSerial_UART_SCB_MODE_SPI_RUNTM_CFG)
        {
            ROSSerial_UART_SpiRestoreConfig();
        }
        else if(ROSSerial_UART_SCB_MODE_UART_RUNTM_CFG)
        {
            ROSSerial_UART_UartRestoreConfig();
        }
    #endif /* (!ROSSerial_UART_CY_SCBIP_V1_I2C_ONLY) */
        else
        {
            /* Unknown mode: do nothing */
        }
    }
    else
    {
        if(0u != ROSSerial_UART_backup.enableState)
        {
            ROSSerial_UART_Enable();
        }
    }

#else

    #if (ROSSerial_UART_SCB_MODE_I2C_CONST_CFG  && ROSSerial_UART_I2C_WAKE_ENABLE_CONST)
        ROSSerial_UART_I2CRestoreConfig();

    #elif (ROSSerial_UART_SCB_MODE_EZI2C_CONST_CFG && ROSSerial_UART_EZI2C_WAKE_ENABLE_CONST)
        ROSSerial_UART_EzI2CRestoreConfig();

    #elif (ROSSerial_UART_SCB_MODE_SPI_CONST_CFG && ROSSerial_UART_SPI_WAKE_ENABLE_CONST)
        ROSSerial_UART_SpiRestoreConfig();

    #elif (ROSSerial_UART_SCB_MODE_UART_CONST_CFG && ROSSerial_UART_UART_WAKE_ENABLE_CONST)
        ROSSerial_UART_UartRestoreConfig();

    #else

        if(0u != ROSSerial_UART_backup.enableState)
        {
            ROSSerial_UART_Enable();
        }

    #endif /* (ROSSerial_UART_I2C_WAKE_ENABLE_CONST) */

#endif /* (ROSSerial_UART_SCB_MODE_UNCONFIG_CONST_CFG) */
}


/* [] END OF FILE */
