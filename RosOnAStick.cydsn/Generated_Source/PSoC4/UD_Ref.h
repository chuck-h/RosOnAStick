/*******************************************************************************
* File Name: UD_Ref.h  
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

#if !defined(CY_PINS_UD_Ref_H) /* Pins UD_Ref_H */
#define CY_PINS_UD_Ref_H

#include "cytypes.h"
#include "cyfitter.h"
#include "UD_Ref_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    UD_Ref_Write(uint8 value) ;
void    UD_Ref_SetDriveMode(uint8 mode) ;
uint8   UD_Ref_ReadDataReg(void) ;
uint8   UD_Ref_Read(void) ;
uint8   UD_Ref_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define UD_Ref_DRIVE_MODE_BITS        (3)
#define UD_Ref_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - UD_Ref_DRIVE_MODE_BITS))
#define UD_Ref_DRIVE_MODE_SHIFT       (0x00u)
#define UD_Ref_DRIVE_MODE_MASK        (0x07u << UD_Ref_DRIVE_MODE_SHIFT)

#define UD_Ref_DM_ALG_HIZ         (0x00u << UD_Ref_DRIVE_MODE_SHIFT)
#define UD_Ref_DM_DIG_HIZ         (0x01u << UD_Ref_DRIVE_MODE_SHIFT)
#define UD_Ref_DM_RES_UP          (0x02u << UD_Ref_DRIVE_MODE_SHIFT)
#define UD_Ref_DM_RES_DWN         (0x03u << UD_Ref_DRIVE_MODE_SHIFT)
#define UD_Ref_DM_OD_LO           (0x04u << UD_Ref_DRIVE_MODE_SHIFT)
#define UD_Ref_DM_OD_HI           (0x05u << UD_Ref_DRIVE_MODE_SHIFT)
#define UD_Ref_DM_STRONG          (0x06u << UD_Ref_DRIVE_MODE_SHIFT)
#define UD_Ref_DM_RES_UPDWN       (0x07u << UD_Ref_DRIVE_MODE_SHIFT)

/* Digital Port Constants */
#define UD_Ref_MASK               UD_Ref__MASK
#define UD_Ref_SHIFT              UD_Ref__SHIFT
#define UD_Ref_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define UD_Ref_PS                     (* (reg32 *) UD_Ref__PS)
/* Port Configuration */
#define UD_Ref_PC                     (* (reg32 *) UD_Ref__PC)
/* Data Register */
#define UD_Ref_DR                     (* (reg32 *) UD_Ref__DR)
/* Input Buffer Disable Override */
#define UD_Ref_INP_DIS                (* (reg32 *) UD_Ref__PC2)


#if defined(UD_Ref__INTSTAT)  /* Interrupt Registers */

    #define UD_Ref_INTSTAT                (* (reg32 *) UD_Ref__INTSTAT)

#endif /* Interrupt Registers */

#endif /* End Pins UD_Ref_H */


/* [] END OF FILE */
