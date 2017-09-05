/*******************************************************************************
* File Name: Transimpedance.h
* Version 1.0
*
* Description:
*  This file contains the function prototypes and constants used in
*  the OpAmp (Analog Buffer) Component.
*
*
********************************************************************************
* Copyright 2013, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/


#if !defined(CY_OPAMP_Transimpedance_H)
#define CY_OPAMP_Transimpedance_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*   Data Struct Definition
***************************************/

/* Structure to save state before go to sleep */
typedef struct
{
    uint8  enableState;
} Transimpedance_BACKUP_STRUCT;

/* Component init state */
extern uint32 Transimpedance_initVar;


/**************************************
*        Function Prototypes
**************************************/
void Transimpedance_Init(void);
void Transimpedance_Enable(void);
void Transimpedance_Start(void);
void Transimpedance_Stop(void);
void Transimpedance_SetPower(uint32 power);
void Transimpedance_PumpControl(uint32 onOff);
void Transimpedance_Sleep(void);
void Transimpedance_Wakeup(void);
void Transimpedance_SaveConfig(void);
void Transimpedance_RestoreConfig(void);


/**************************************
*           API Constants
**************************************/
#define Transimpedance_LOWPOWER                   (1u)
#define Transimpedance_MEDPOWER                   (2u)
#define Transimpedance_HIGHPOWER                  (3u)

#define Transimpedance_OUTPUT_CURRENT             (1u)
#define Transimpedance_POWER                      (2u)
#define Transimpedance_MODE                       (0u)
#define Transimpedance_OA_COMP_TRIM_VALUE         (3u)


/**************************************
*             Registers
**************************************/
#define Transimpedance_OA_CTRL                    (*(reg32 *)Transimpedance_cy_psoc4_abuf__CTBM_CTB_CTRL)
#define Transimpedance_OA_RES_CTRL                (*(reg32 *)Transimpedance_cy_psoc4_abuf__OA_RES_CTRL)
#define Transimpedance_OA_COMP_TRIM_REG           (*(reg32 *)Transimpedance_cy_psoc4_abuf__OA_COMP_TRIM)

/* Bit Field  OA_CTRL */
#define Transimpedance_OA_CTB_EN_SHIFT            (31u)

/* PUMP ON/OFF defines */
#define Transimpedance_PUMPON                     (1u)
#define Transimpedance_PUMPOFF                    (0u)

#define Transimpedance_PUMP_PROTECT_MASK          (1u)

/* Bit Field  OA_CTRL */
#define Transimpedance_OA_PWR_MODE_MASK           (0x3u)
#define Transimpedance_OA_DRIVE_STR_SEL_MASK      (0x4u)
#define Transimpedance_OA_DRIVE_STR_SEL_10X       (0x4u)
#define Transimpedance_OA_PUMP_EN_MASK            (0x800u)
#define Transimpedance_OA_PUMP_CTRL_SHIFT         (11u)

#endif    /* CY_OPAMP_Transimpedance_H */


/* [] END OF FILE */
