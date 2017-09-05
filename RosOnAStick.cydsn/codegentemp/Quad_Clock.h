/*******************************************************************************
* File Name: Quad_Clock.h
* Version 2.20
*
*  Description:
*   Provides the function and constant definitions for the clock component.
*
*  Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_CLOCK_Quad_Clock_H)
#define CY_CLOCK_Quad_Clock_H

#include <cytypes.h>
#include <cyfitter.h>


/***************************************
*        Function Prototypes
***************************************/
#if defined CYREG_PERI_DIV_CMD

void Quad_Clock_StartEx(uint32 alignClkDiv);
#define Quad_Clock_Start() \
    Quad_Clock_StartEx(Quad_Clock__PA_DIV_ID)

#else

void Quad_Clock_Start(void);

#endif/* CYREG_PERI_DIV_CMD */

void Quad_Clock_Stop(void);

void Quad_Clock_SetFractionalDividerRegister(uint16 clkDivider, uint8 clkFractional);

uint16 Quad_Clock_GetDividerRegister(void);
uint8  Quad_Clock_GetFractionalDividerRegister(void);

#define Quad_Clock_Enable()                         Quad_Clock_Start()
#define Quad_Clock_Disable()                        Quad_Clock_Stop()
#define Quad_Clock_SetDividerRegister(clkDivider, reset)  \
    Quad_Clock_SetFractionalDividerRegister((clkDivider), 0u)
#define Quad_Clock_SetDivider(clkDivider)           Quad_Clock_SetDividerRegister((clkDivider), 1u)
#define Quad_Clock_SetDividerValue(clkDivider)      Quad_Clock_SetDividerRegister((clkDivider) - 1u, 1u)


/***************************************
*             Registers
***************************************/
#if defined CYREG_PERI_DIV_CMD

#define Quad_Clock_DIV_ID     Quad_Clock__DIV_ID

#define Quad_Clock_CMD_REG    (*(reg32 *)CYREG_PERI_DIV_CMD)
#define Quad_Clock_CTRL_REG   (*(reg32 *)Quad_Clock__CTRL_REGISTER)
#define Quad_Clock_DIV_REG    (*(reg32 *)Quad_Clock__DIV_REGISTER)

#define Quad_Clock_CMD_DIV_SHIFT          (0u)
#define Quad_Clock_CMD_PA_DIV_SHIFT       (8u)
#define Quad_Clock_CMD_DISABLE_SHIFT      (30u)
#define Quad_Clock_CMD_ENABLE_SHIFT       (31u)

#define Quad_Clock_CMD_DISABLE_MASK       ((uint32)((uint32)1u << Quad_Clock_CMD_DISABLE_SHIFT))
#define Quad_Clock_CMD_ENABLE_MASK        ((uint32)((uint32)1u << Quad_Clock_CMD_ENABLE_SHIFT))

#define Quad_Clock_DIV_FRAC_MASK  (0x000000F8u)
#define Quad_Clock_DIV_FRAC_SHIFT (3u)
#define Quad_Clock_DIV_INT_MASK   (0xFFFFFF00u)
#define Quad_Clock_DIV_INT_SHIFT  (8u)

#else 

#define Quad_Clock_DIV_REG        (*(reg32 *)Quad_Clock__REGISTER)
#define Quad_Clock_ENABLE_REG     Quad_Clock_DIV_REG
#define Quad_Clock_DIV_FRAC_MASK  Quad_Clock__FRAC_MASK
#define Quad_Clock_DIV_FRAC_SHIFT (16u)
#define Quad_Clock_DIV_INT_MASK   Quad_Clock__DIVIDER_MASK
#define Quad_Clock_DIV_INT_SHIFT  (0u)

#endif/* CYREG_PERI_DIV_CMD */

#endif /* !defined(CY_CLOCK_Quad_Clock_H) */

/* [] END OF FILE */
