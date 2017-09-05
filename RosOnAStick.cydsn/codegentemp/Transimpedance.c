/*******************************************************************************
* File Name: Transimpedance.c
* Version 1.0
*
* Description:
*  This file provides the source code to the API for OpAmp (Analog Buffer)
*  Component.
*
*
********************************************************************************
* Copyright 2013, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "Transimpedance.h"
#include <CyLib.h>

uint32 Transimpedance_initVar = 0u;


/*******************************************************************************
* Function Name: Transimpedance_Init
********************************************************************************
*
* Summary:
*  Initialize component's parameters to the parameters set by user in the
*  customizer of the component placed onto schematic. Usually called in
*  Transimpedance_Start().
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void Transimpedance_Init(void)
{
    /* Enable STB */
    Transimpedance_OA_CTRL |= ((uint32)1u << Transimpedance_OA_CTB_EN_SHIFT);
    Transimpedance_OA_RES_CTRL = 0u;
    Transimpedance_OA_COMP_TRIM_REG = Transimpedance_OA_COMP_TRIM_VALUE;
    #if(0u != Transimpedance_OUTPUT_CURRENT)
        /* 10 mA current */
        Transimpedance_OA_RES_CTRL |= Transimpedance_OA_DRIVE_STR_SEL_10X;
    #endif /* 0u != Transimpedance_OUTPUT_CURRENT */
}


/*******************************************************************************
* Function Name: Transimpedance_Enable
********************************************************************************
*
* Summary:
*  Enables the OpAmp block operation
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void Transimpedance_Enable(void)
{
    Transimpedance_OA_RES_CTRL &= (~(uint32)Transimpedance_OA_PWR_MODE_MASK);
    Transimpedance_OA_RES_CTRL |= Transimpedance_POWER | ((uint32)1u << Transimpedance_OA_PUMP_CTRL_SHIFT);
}


/*******************************************************************************
* Function Name:   Transimpedance_Start
********************************************************************************
*
* Summary:
*  The start function initializes the Analog Buffer with the default values and
*  sets the power to the given level. A power level of 0, is same as
*  executing the stop function.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  Transimpedance_initVar: Used to check the initial configuration, modified
*  when this function is called for the first time.
*
*******************************************************************************/
void Transimpedance_Start(void)
{
    if(Transimpedance_initVar == 0u)
    {
        Transimpedance_initVar = 1u;
        Transimpedance_Init();
    }
    Transimpedance_Enable();
}


/*******************************************************************************
* Function Name: Transimpedance_Stop
********************************************************************************
*
* Summary:
*  Powers down amplifier to lowest power state.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void Transimpedance_Stop(void)
{
    Transimpedance_OA_RES_CTRL &= (~(uint32)(Transimpedance_OA_PWR_MODE_MASK |
        ((uint32)1u << Transimpedance_OA_PUMP_CTRL_SHIFT)));
}


/*******************************************************************************
* Function Name: Transimpedance_SetPower
********************************************************************************
*
* Summary:
*  Sets power level of Analog buffer.
*
* Parameters:
*  power: Sets power level between low (1) and high power (3).
*
* Return:
*  None
*
**********************************************************************************/
void Transimpedance_SetPower(uint32 power)
{
    Transimpedance_OA_RES_CTRL &= (~(uint32)Transimpedance_OA_PWR_MODE_MASK);
    Transimpedance_OA_RES_CTRL |= (power & Transimpedance_OA_PWR_MODE_MASK);
}


/*******************************************************************************
* Function Name: Transimpedance_PumpControl
********************************************************************************
*
* Summary:
*  Turns the boost pump on or off.
*
* Parameters:
*  onOff: Transimpedance_PUMPON, Transimpedance_PUMPOFF.
*
* Return:
*  None
*
**********************************************************************************/
void Transimpedance_PumpControl(uint32 onOff)
{
    Transimpedance_OA_RES_CTRL &= (~(uint32)Transimpedance_OA_PUMP_EN_MASK);
    Transimpedance_OA_RES_CTRL |= ((onOff & Transimpedance_PUMP_PROTECT_MASK)
        << Transimpedance_OA_PUMP_CTRL_SHIFT);
}


/* [] END OF FILE */
