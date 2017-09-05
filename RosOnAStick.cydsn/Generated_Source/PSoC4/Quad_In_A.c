/*******************************************************************************
* File Name: Quad_In_A.c  
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
#include "Quad_In_A.h"

#define SetP4PinDriveMode(shift, mode)  \
    do { \
        Quad_In_A_PC =   (Quad_In_A_PC & \
                                (uint32)(~(uint32)(Quad_In_A_DRIVE_MODE_IND_MASK << (Quad_In_A_DRIVE_MODE_BITS * (shift))))) | \
                                (uint32)((uint32)(mode) << (Quad_In_A_DRIVE_MODE_BITS * (shift))); \
    } while (0)


/*******************************************************************************
* Function Name: Quad_In_A_Write
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
void Quad_In_A_Write(uint8 value) 
{
    uint8 drVal = (uint8)(Quad_In_A_DR & (uint8)(~Quad_In_A_MASK));
    drVal = (drVal | ((uint8)(value << Quad_In_A_SHIFT) & Quad_In_A_MASK));
    Quad_In_A_DR = (uint32)drVal;
}


/*******************************************************************************
* Function Name: Quad_In_A_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to one of the following drive modes.
*
*  Quad_In_A_DM_STRONG     Strong Drive 
*  Quad_In_A_DM_OD_HI      Open Drain, Drives High 
*  Quad_In_A_DM_OD_LO      Open Drain, Drives Low 
*  Quad_In_A_DM_RES_UP     Resistive Pull Up 
*  Quad_In_A_DM_RES_DWN    Resistive Pull Down 
*  Quad_In_A_DM_RES_UPDWN  Resistive Pull Up/Down 
*  Quad_In_A_DM_DIG_HIZ    High Impedance Digital 
*  Quad_In_A_DM_ALG_HIZ    High Impedance Analog 
*
* Return: 
*  None
*
*******************************************************************************/
void Quad_In_A_SetDriveMode(uint8 mode) 
{
	SetP4PinDriveMode(Quad_In_A__0__SHIFT, mode);
}


/*******************************************************************************
* Function Name: Quad_In_A_Read
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
*  Macro Quad_In_A_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 Quad_In_A_Read(void) 
{
    return (uint8)((Quad_In_A_PS & Quad_In_A_MASK) >> Quad_In_A_SHIFT);
}


/*******************************************************************************
* Function Name: Quad_In_A_ReadDataReg
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
uint8 Quad_In_A_ReadDataReg(void) 
{
    return (uint8)((Quad_In_A_DR & Quad_In_A_MASK) >> Quad_In_A_SHIFT);
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(Quad_In_A_INTSTAT) 

    /*******************************************************************************
    * Function Name: Quad_In_A_ClearInterrupt
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
    uint8 Quad_In_A_ClearInterrupt(void) 
    {
		uint8 maskedStatus = (uint8)(Quad_In_A_INTSTAT & Quad_In_A_MASK);
		Quad_In_A_INTSTAT = maskedStatus;
        return maskedStatus >> Quad_In_A_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 


/* [] END OF FILE */
