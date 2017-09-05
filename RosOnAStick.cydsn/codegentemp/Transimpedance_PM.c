/*******************************************************************************
* File Name: Transimpedance_PM.c
* Version 1.0
*
* Description:
*  This file provides the power management source code to the API for the
*  OpAmp (Analog Buffer) component.
*
*
********************************************************************************
* Copyright 2013, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "Transimpedance.h"

static Transimpedance_BACKUP_STRUCT  Transimpedance_backup;


/*******************************************************************************
* Function Name: Transimpedance_SaveConfig
********************************************************************************
*
* Summary:
*  Saves the current user configuration registers.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void Transimpedance_SaveConfig(void)
{
}


/*******************************************************************************
* Function Name: Transimpedance_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the current user configuration registers.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void Transimpedance_RestoreConfig(void)
{
}


/*******************************************************************************
* Function Name: Transimpedance_Sleep
********************************************************************************
*
* Summary:
*  Disables block's operation and saves its configuration. Should be called
*  just prior to entering sleep.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  Transimpedance_backup: The structure field 'enableState' is modified
*  depending on the enable state of the block before entering to sleep mode.
*
*******************************************************************************/
void Transimpedance_Sleep(void)
{
    /* Save OpAmp enable state */
    if((Transimpedance_OA_RES_CTRL & Transimpedance_OA_PWR_MODE_MASK) != 0u)
    {
        /* Component is enabled */
        Transimpedance_backup.enableState = 1u;
        /* Stops the component */
        Transimpedance_Stop();
    }
    else
    {
        /* Component is disabled */
        Transimpedance_backup.enableState = 0u;
    }
    /* Saves the configuration */
    Transimpedance_SaveConfig();
}


/*******************************************************************************
* Function Name: Transimpedance_Wakeup
********************************************************************************
*
* Summary:
*  Enables block's operation and restores its configuration. Should be called
*  just after awaking from sleep.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  Transimpedance_backup: The structure field 'enableState' is used to
*  restore the enable state of block after wakeup from sleep mode.
*
*******************************************************************************/
void Transimpedance_Wakeup(void)
{
    /* Restore the user configuration */
    Transimpedance_RestoreConfig();

    /* Enables the component operation */
    if(Transimpedance_backup.enableState == 1u)
    {
        Transimpedance_Enable();
    } /* Do nothing if component was disable before */
}


/* [] END OF FILE */
