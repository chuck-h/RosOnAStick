/*******************************************************************************
* File Name: UD_Ref.c  
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
#include "UD_Ref.h"

#define SetP4PinDriveMode(shift, mode)  \
    do { \
        UD_Ref_PC =   (UD_Ref_PC & \
                                (uint32)(~(uint32)(UD_Ref_DRIVE_MODE_IND_MASK << (UD_Ref_DRIVE_MODE_BITS * (shift))))) | \
                                (uint32)((uint32)(mode) << (UD_Ref_DRIVE_MODE_BITS * (shift))); \
    } while (0)


/*******************************************************************************
* Function Name: UD_Ref_Write
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
void UD_Ref_Write(uint8 value) 
{
    uint8 drVal = (uint8)(UD_Ref_DR & (uint8)(~UD_Ref_MASK));
    drVal = (drVal | ((uint8)(value << UD_Ref_SHIFT) & UD_Ref_MASK));
    UD_Ref_DR = (uint32)drVal;
}


/*******************************************************************************
* Function Name: UD_Ref_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to one of the following drive modes.
*
*  UD_Ref_DM_STRONG     Strong Drive 
*  UD_Ref_DM_OD_HI      Open Drain, Drives High 
*  UD_Ref_DM_OD_LO      Open Drain, Drives Low 
*  UD_Ref_DM_RES_UP     Resistive Pull Up 
*  UD_Ref_DM_RES_DWN    Resistive Pull Down 
*  UD_Ref_DM_RES_UPDWN  Resistive Pull Up/Down 
*  UD_Ref_DM_DIG_HIZ    High Impedance Digital 
*  UD_Ref_DM_ALG_HIZ    High Impedance Analog 
*
* Return: 
*  None
*
*******************************************************************************/
void UD_Ref_SetDriveMode(uint8 mode) 
{
	SetP4PinDriveMode(UD_Ref__0__SHIFT, mode);
}


/*******************************************************************************
* Function Name: UD_Ref_Read
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
*  Macro UD_Ref_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 UD_Ref_Read(void) 
{
    return (uint8)((UD_Ref_PS & UD_Ref_MASK) >> UD_Ref_SHIFT);
}


/*******************************************************************************
* Function Name: UD_Ref_ReadDataReg
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
uint8 UD_Ref_ReadDataReg(void) 
{
    return (uint8)((UD_Ref_DR & UD_Ref_MASK) >> UD_Ref_SHIFT);
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(UD_Ref_INTSTAT) 

    /*******************************************************************************
    * Function Name: UD_Ref_ClearInterrupt
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
    uint8 UD_Ref_ClearInterrupt(void) 
    {
		uint8 maskedStatus = (uint8)(UD_Ref_INTSTAT & UD_Ref_MASK);
		UD_Ref_INTSTAT = maskedStatus;
        return maskedStatus >> UD_Ref_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 


/* [] END OF FILE */
