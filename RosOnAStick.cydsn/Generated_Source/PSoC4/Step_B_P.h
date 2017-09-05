/*******************************************************************************
* File Name: Step_B_P.h  
* Version 2.0
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Step_B_P_H) /* Pins Step_B_P_H */
#define CY_PINS_Step_B_P_H

#include "cytypes.h"
#include "cyfitter.h"
#include "Step_B_P_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Step_B_P_Write(uint8 value) ;
void    Step_B_P_SetDriveMode(uint8 mode) ;
uint8   Step_B_P_ReadDataReg(void) ;
uint8   Step_B_P_Read(void) ;
uint8   Step_B_P_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Step_B_P_DRIVE_MODE_BITS        (3)
#define Step_B_P_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - Step_B_P_DRIVE_MODE_BITS))
#define Step_B_P_DRIVE_MODE_SHIFT       (0x00u)
#define Step_B_P_DRIVE_MODE_MASK        (0x07u << Step_B_P_DRIVE_MODE_SHIFT)

#define Step_B_P_DM_ALG_HIZ         (0x00u << Step_B_P_DRIVE_MODE_SHIFT)
#define Step_B_P_DM_DIG_HIZ         (0x01u << Step_B_P_DRIVE_MODE_SHIFT)
#define Step_B_P_DM_RES_UP          (0x02u << Step_B_P_DRIVE_MODE_SHIFT)
#define Step_B_P_DM_RES_DWN         (0x03u << Step_B_P_DRIVE_MODE_SHIFT)
#define Step_B_P_DM_OD_LO           (0x04u << Step_B_P_DRIVE_MODE_SHIFT)
#define Step_B_P_DM_OD_HI           (0x05u << Step_B_P_DRIVE_MODE_SHIFT)
#define Step_B_P_DM_STRONG          (0x06u << Step_B_P_DRIVE_MODE_SHIFT)
#define Step_B_P_DM_RES_UPDWN       (0x07u << Step_B_P_DRIVE_MODE_SHIFT)

/* Digital Port Constants */
#define Step_B_P_MASK               Step_B_P__MASK
#define Step_B_P_SHIFT              Step_B_P__SHIFT
#define Step_B_P_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Step_B_P_PS                     (* (reg32 *) Step_B_P__PS)
/* Port Configuration */
#define Step_B_P_PC                     (* (reg32 *) Step_B_P__PC)
/* Data Register */
#define Step_B_P_DR                     (* (reg32 *) Step_B_P__DR)
/* Input Buffer Disable Override */
#define Step_B_P_INP_DIS                (* (reg32 *) Step_B_P__PC2)


#if defined(Step_B_P__INTSTAT)  /* Interrupt Registers */

    #define Step_B_P_INTSTAT                (* (reg32 *) Step_B_P__INTSTAT)

#endif /* Interrupt Registers */

#endif /* End Pins Step_B_P_H */


/* [] END OF FILE */
