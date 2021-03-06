/*******************************************************************************
* File Name: Step_B_N.c  
* Version 2.0
*
* Description:
*  This file contains API to enable firmware control of a Pins component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "Step_B_N.h"

#define SetP4PinDriveMode(shift, mode)  \
    do { \
        Step_B_N_PC =   (Step_B_N_PC & \
                                (uint32)(~(uint32)(Step_B_N_DRIVE_MODE_IND_MASK << (Step_B_N_DRIVE_MODE_BITS * (shift))))) | \
                                (uint32)((uint32)(mode) << (Step_B_N_DRIVE_MODE_BITS * (shift))); \
    } while (0)


/*******************************************************************************
* Function Name: Step_B_N_Write
********************************************************************************
*
* Summary:
*  Assign a new value to the digital port's data output register.  
*
* Parameters:  
*  prtValue:  The value to be assigned to the Digital Port. 
*
* Return: 
*  None 
*  
*******************************************************************************/
void Step_B_N_Write(uint8 value) 
{
    uint8 drVal = (uint8)(Step_B_N_DR & (uint8)(~Step_B_N_MASK));
    drVal = (drVal | ((uint8)(value << Step_B_N_SHIFT) & Step_B_N_MASK));
    Step_B_N_DR = (uint32)drVal;
}


/*******************************************************************************
* Function Name: Step_B_N_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to one of the following drive modes.
*
*  Step_B_N_DM_STRONG     Strong Drive 
*  Step_B_N_DM_OD_HI      Open Drain, Drives High 
*  Step_B_N_DM_OD_LO      Open Drain, Drives Low 
*  Step_B_N_DM_RES_UP     Resistive Pull Up 
*  Step_B_N_DM_RES_DWN    Resistive Pull Down 
*  Step_B_N_DM_RES_UPDWN  Resistive Pull Up/Down 
*  Step_B_N_DM_DIG_HIZ    High Impedance Digital 
*  Step_B_N_DM_ALG_HIZ    High Impedance Analog 
*
* Return: 
*  None
*
*******************************************************************************/
void Step_B_N_SetDriveMode(uint8 mode) 
{
	SetP4PinDriveMode(Step_B_N__0__SHIFT, mode);
}


/*******************************************************************************
* Function Name: Step_B_N_Read
********************************************************************************
*
* Summary:
*  Read the current value on the pins of the Digital Port in right justified 
*  form.
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value of the Digital Port as a right justified number
*  
* Note:
*  Macro Step_B_N_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 Step_B_N_Read(void) 
{
    return (uint8)((Step_B_N_PS & Step_B_N_MASK) >> Step_B_N_SHIFT);
}


/*******************************************************************************
* Function Name: Step_B_N_ReadDataReg
********************************************************************************
*
* Summary:
*  Read the current value assigned to a Digital Port's data output register
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value assigned to the Digital Port's data output register
*  
*******************************************************************************/
uint8 Step_B_N_ReadDataReg(void) 
{
    return (uint8)((Step_B_N_DR & Step_B_N_MASK) >> Step_B_N_SHIFT);
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(Step_B_N_INTSTAT) 

    /*******************************************************************************
    * Function Name: Step_B_N_ClearInterrupt
    ********************************************************************************
    *
    * Summary:
    *  Clears any active interrupts attached to port and returns the value of the 
    *  interrupt status register.
    *
    * Parameters:  
    *  None 
    *
    * Return: 
    *  Returns the value of the interrupt status register
    *  
    *******************************************************************************/
    uint8 Step_B_N_ClearInterrupt(void) 
    {
		uint8 maskedStatus = (uint8)(Step_B_N_INTSTAT & Step_B_N_MASK);
		Step_B_N_INTSTAT = maskedStatus;
        return maskedStatus >> Step_B_N_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 


/* [] END OF FILE */
