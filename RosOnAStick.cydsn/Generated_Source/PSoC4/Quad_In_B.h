/*******************************************************************************
* File Name: Quad_In_B.h  
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

#if !defined(CY_PINS_Quad_In_B_H) /* Pins Quad_In_B_H */
#define CY_PINS_Quad_In_B_H

#include "cytypes.h"
#include "cyfitter.h"
#include "Quad_In_B_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Quad_In_B_Write(uint8 value) ;
void    Quad_In_B_SetDriveMode(uint8 mode) ;
uint8   Quad_In_B_ReadDataReg(void) ;
uint8   Quad_In_B_Read(void) ;
uint8   Quad_In_B_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Quad_In_B_DRIVE_MODE_BITS        (3)
#define Quad_In_B_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - Quad_In_B_DRIVE_MODE_BITS))
#define Quad_In_B_DRIVE_MODE_SHIFT       (0x00u)
#define Quad_In_B_DRIVE_MODE_MASK        (0x07u << Quad_In_B_DRIVE_MODE_SHIFT)

#define Quad_In_B_DM_ALG_HIZ         (0x00u << Quad_In_B_DRIVE_MODE_SHIFT)
#define Quad_In_B_DM_DIG_HIZ         (0x01u << Quad_In_B_DRIVE_MODE_SHIFT)
#define Quad_In_B_DM_RES_UP          (0x02u << Quad_In_B_DRIVE_MODE_SHIFT)
#define Quad_In_B_DM_RES_DWN         (0x03u << Quad_In_B_DRIVE_MODE_SHIFT)
#define Quad_In_B_DM_OD_LO           (0x04u << Quad_In_B_DRIVE_MODE_SHIFT)
#define Quad_In_B_DM_OD_HI           (0x05u << Quad_In_B_DRIVE_MODE_SHIFT)
#define Quad_In_B_DM_STRONG          (0x06u << Quad_In_B_DRIVE_MODE_SHIFT)
#define Quad_In_B_DM_RES_UPDWN       (0x07u << Quad_In_B_DRIVE_MODE_SHIFT)

/* Digital Port Constants */
#define Quad_In_B_MASK               Quad_In_B__MASK
#define Quad_In_B_SHIFT              Quad_In_B__SHIFT
#define Quad_In_B_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Quad_In_B_PS                     (* (reg32 *) Quad_In_B__PS)
/* Port Configuration */
#define Quad_In_B_PC                     (* (reg32 *) Quad_In_B__PC)
/* Data Register */
#define Quad_In_B_DR                     (* (reg32 *) Quad_In_B__DR)
/* Input Buffer Disable Override */
#define Quad_In_B_INP_DIS                (* (reg32 *) Quad_In_B__PC2)


#if defined(Quad_In_B__INTSTAT)  /* Interrupt Registers */

    #define Quad_In_B_INTSTAT                (* (reg32 *) Quad_In_B__INTSTAT)

#endif /* Interrupt Registers */

#endif /* End Pins Quad_In_B_H */


/* [] END OF FILE */
