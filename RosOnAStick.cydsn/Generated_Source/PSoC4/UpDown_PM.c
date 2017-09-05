/*******************************************************************************
* File Name: UpDown_PM.c  
* Version 2.40
*
*  Description:
*    This file provides the power management source code to API for the
*    Counter.  
*
*   Note:
*     None
*
*******************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#include "UpDown.h"

static UpDown_backupStruct UpDown_backup;


/*******************************************************************************
* Function Name: UpDown_SaveConfig
********************************************************************************
* Summary:
*     Save the current user configuration
*
* Parameters:  
*  void
*
* Return: 
*  void
*
* Global variables:
*  UpDown_backup:  Variables of this global structure are modified to 
*  store the values of non retention configuration registers when Sleep() API is 
*  called.
*
*******************************************************************************/
void UpDown_SaveConfig(void) 
{
    #if (!UpDown_UsingFixedFunction)

        UpDown_backup.CounterUdb = UpDown_ReadCounter();

        #if (CY_UDB_V0)
            UpDown_backup.CounterPeriod = UpDown_ReadPeriod();
            UpDown_backup.CompareValue = UpDown_ReadCompare();
            UpDown_backup.InterruptMaskValue = UpDown_STATUS_MASK;
        #endif /* CY_UDB_V0 */

        #if(!UpDown_ControlRegRemoved)
            UpDown_backup.CounterControlRegister = UpDown_ReadControlRegister();
        #endif /* (!UpDown_ControlRegRemoved) */

    #endif /* (!UpDown_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: UpDown_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the current user configuration.
*
* Parameters:  
*  void
*
* Return: 
*  void
*
* Global variables:
*  UpDown_backup:  Variables of this global structure are used to 
*  restore the values of non retention registers on wakeup from sleep mode.
*
*******************************************************************************/
void UpDown_RestoreConfig(void) 
{      
    #if (!UpDown_UsingFixedFunction)

        #if (CY_UDB_V0)
            uint8 UpDown_interruptState;
        #endif  /* (CY_UDB_V0) */

       UpDown_WriteCounter(UpDown_backup.CounterUdb);

        #if (CY_UDB_V0)
            UpDown_WritePeriod(UpDown_backup.CounterPeriod);
            UpDown_WriteCompare(UpDown_backup.CompareValue);

            UpDown_interruptState = CyEnterCriticalSection();
            UpDown_STATUS_AUX_CTRL |= UpDown_STATUS_ACTL_INT_EN_MASK;
            CyExitCriticalSection(UpDown_interruptState);

            UpDown_STATUS_MASK = UpDown_backup.InterruptMaskValue;
        #endif  /* (CY_UDB_V0) */

        #if(!UpDown_ControlRegRemoved)
            UpDown_WriteControlRegister(UpDown_backup.CounterControlRegister);
        #endif /* (!UpDown_ControlRegRemoved) */

    #endif /* (!UpDown_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: UpDown_Sleep
********************************************************************************
* Summary:
*     Stop and Save the user configuration
*
* Parameters:  
*  void
*
* Return: 
*  void
*
* Global variables:
*  UpDown_backup.enableState:  Is modified depending on the enable 
*  state of the block before entering sleep mode.
*
*******************************************************************************/
void UpDown_Sleep(void) 
{
    #if(!UpDown_ControlRegRemoved)
        /* Save Counter's enable state */
        if(UpDown_CTRL_ENABLE == (UpDown_CONTROL & UpDown_CTRL_ENABLE))
        {
            /* Counter is enabled */
            UpDown_backup.CounterEnableState = 1u;
        }
        else
        {
            /* Counter is disabled */
            UpDown_backup.CounterEnableState = 0u;
        }
    #else
        UpDown_backup.CounterEnableState = 1u;
        if(UpDown_backup.CounterEnableState != 0u)
        {
            UpDown_backup.CounterEnableState = 0u;
        }
    #endif /* (!UpDown_ControlRegRemoved) */
    
    UpDown_Stop();
    UpDown_SaveConfig();
}


/*******************************************************************************
* Function Name: UpDown_Wakeup
********************************************************************************
*
* Summary:
*  Restores and enables the user configuration
*  
* Parameters:  
*  void
*
* Return: 
*  void
*
* Global variables:
*  UpDown_backup.enableState:  Is used to restore the enable state of 
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void UpDown_Wakeup(void) 
{
    UpDown_RestoreConfig();
    #if(!UpDown_ControlRegRemoved)
        if(UpDown_backup.CounterEnableState == 1u)
        {
            /* Enable Counter's operation */
            UpDown_Enable();
        } /* Do nothing if Counter was disabled before */    
    #endif /* (!UpDown_ControlRegRemoved) */
    
}


/* [] END OF FILE */
