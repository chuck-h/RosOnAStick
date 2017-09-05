/*******************************************************************************
* File Name: ROSSerial_UART_tx.h  
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

#if !defined(CY_PINS_ROSSerial_UART_tx_H) /* Pins ROSSerial_UART_tx_H */
#define CY_PINS_ROSSerial_UART_tx_H

#include "cytypes.h"
#include "cyfitter.h"
#include "ROSSerial_UART_tx_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    ROSSerial_UART_tx_Write(uint8 value) ;
void    ROSSerial_UART_tx_SetDriveMode(uint8 mode) ;
uint8   ROSSerial_UART_tx_ReadDataReg(void) ;
uint8   ROSSerial_UART_tx_Read(void) ;
uint8   ROSSerial_UART_tx_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define ROSSerial_UART_tx_DRIVE_MODE_BITS        (3)
#define ROSSerial_UART_tx_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - ROSSerial_UART_tx_DRIVE_MODE_BITS))
#define ROSSerial_UART_tx_DRIVE_MODE_SHIFT       (0x00u)
#define ROSSerial_UART_tx_DRIVE_MODE_MASK        (0x07u << ROSSerial_UART_tx_DRIVE_MODE_SHIFT)

#define ROSSerial_UART_tx_DM_ALG_HIZ         (0x00u << ROSSerial_UART_tx_DRIVE_MODE_SHIFT)
#define ROSSerial_UART_tx_DM_DIG_HIZ         (0x01u << ROSSerial_UART_tx_DRIVE_MODE_SHIFT)
#define ROSSerial_UART_tx_DM_RES_UP          (0x02u << ROSSerial_UART_tx_DRIVE_MODE_SHIFT)
#define ROSSerial_UART_tx_DM_RES_DWN         (0x03u << ROSSerial_UART_tx_DRIVE_MODE_SHIFT)
#define ROSSerial_UART_tx_DM_OD_LO           (0x04u << ROSSerial_UART_tx_DRIVE_MODE_SHIFT)
#define ROSSerial_UART_tx_DM_OD_HI           (0x05u << ROSSerial_UART_tx_DRIVE_MODE_SHIFT)
#define ROSSerial_UART_tx_DM_STRONG          (0x06u << ROSSerial_UART_tx_DRIVE_MODE_SHIFT)
#define ROSSerial_UART_tx_DM_RES_UPDWN       (0x07u << ROSSerial_UART_tx_DRIVE_MODE_SHIFT)

/* Digital Port Constants */
#define ROSSerial_UART_tx_MASK               ROSSerial_UART_tx__MASK
#define ROSSerial_UART_tx_SHIFT              ROSSerial_UART_tx__SHIFT
#define ROSSerial_UART_tx_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define ROSSerial_UART_tx_PS                     (* (reg32 *) ROSSerial_UART_tx__PS)
/* Port Configuration */
#define ROSSerial_UART_tx_PC                     (* (reg32 *) ROSSerial_UART_tx__PC)
/* Data Register */
#define ROSSerial_UART_tx_DR                     (* (reg32 *) ROSSerial_UART_tx__DR)
/* Input Buffer Disable Override */
#define ROSSerial_UART_tx_INP_DIS                (* (reg32 *) ROSSerial_UART_tx__PC2)


#if defined(ROSSerial_UART_tx__INTSTAT)  /* Interrupt Registers */

    #define ROSSerial_UART_tx_INTSTAT                (* (reg32 *) ROSSerial_UART_tx__INTSTAT)

#endif /* Interrupt Registers */

#endif /* End Pins ROSSerial_UART_tx_H */


/* [] END OF FILE */
