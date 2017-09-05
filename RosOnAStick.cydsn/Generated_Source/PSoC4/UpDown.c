/*******************************************************************************
* File Name: UpDown.c  
* Version 2.40
*
*  Description:
*     The Counter component consists of a 8, 16, 24 or 32-bit counter with
*     a selectable period between 2 and 2^Width - 1.  
*
*   Note:
*     None
*
*******************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#include "UpDown.h"

uint8 UpDown_initVar = 0u;


/*******************************************************************************
* Function Name: UpDown_Init
********************************************************************************
* Summary:
*     Initialize to the schematic state
* 
* Parameters:  
*  void  
*
* Return: 
*  void
*
*******************************************************************************/
void UpDown_Init(void) 
{
        #if (!UpDown_UsingFixedFunction && !UpDown_ControlRegRemoved)
            uint8 ctrl;
        #endif /* (!UpDown_UsingFixedFunction && !UpDown_ControlRegRemoved) */
        
        #if(!UpDown_UsingFixedFunction) 
            /* Interrupt State Backup for Critical Region*/
            uint8 UpDown_interruptState;
        #endif /* (!UpDown_UsingFixedFunction) */
        
        #if (UpDown_UsingFixedFunction)
            /* Clear all bits but the enable bit (if it's already set for Timer operation */
            UpDown_CONTROL &= UpDown_CTRL_ENABLE;
            
            /* Clear the mode bits for continuous run mode */
            #if (CY_PSOC5A)
                UpDown_CONTROL2 &= ((uint8)(~UpDown_CTRL_MODE_MASK));
            #endif /* (CY_PSOC5A) */
            #if (CY_PSOC3 || CY_PSOC5LP)
                UpDown_CONTROL3 &= ((uint8)(~UpDown_CTRL_MODE_MASK));                
            #endif /* (CY_PSOC3 || CY_PSOC5LP) */
            /* Check if One Shot mode is enabled i.e. RunMode !=0*/
            #if (UpDown_RunModeUsed != 0x0u)
                /* Set 3rd bit of Control register to enable one shot mode */
                UpDown_CONTROL |= UpDown_ONESHOT;
            #endif /* (UpDown_RunModeUsed != 0x0u) */
            
            /* Set the IRQ to use the status register interrupts */
            UpDown_CONTROL2 |= UpDown_CTRL2_IRQ_SEL;
            
            /* Clear and Set SYNCTC and SYNCCMP bits of RT1 register */
            UpDown_RT1 &= ((uint8)(~UpDown_RT1_MASK));
            UpDown_RT1 |= UpDown_SYNC;     
                    
            /*Enable DSI Sync all all inputs of the Timer*/
            UpDown_RT1 &= ((uint8)(~UpDown_SYNCDSI_MASK));
            UpDown_RT1 |= UpDown_SYNCDSI_EN;

        #else
            #if(!UpDown_ControlRegRemoved)
            /* Set the default compare mode defined in the parameter */
            ctrl = UpDown_CONTROL & ((uint8)(~UpDown_CTRL_CMPMODE_MASK));
            UpDown_CONTROL = ctrl | UpDown_DEFAULT_COMPARE_MODE;
            
            /* Set the default capture mode defined in the parameter */
            ctrl = UpDown_CONTROL & ((uint8)(~UpDown_CTRL_CAPMODE_MASK));
            
            #if( 0 != UpDown_CAPTURE_MODE_CONF)
                UpDown_CONTROL = ctrl | UpDown_DEFAULT_CAPTURE_MODE;
            #else
                UpDown_CONTROL = ctrl;
            #endif /* 0 != UpDown_CAPTURE_MODE */ 
            
            #endif /* (!UpDown_ControlRegRemoved) */
        #endif /* (UpDown_UsingFixedFunction) */
        
        /* Clear all data in the FIFO's */
        #if (!UpDown_UsingFixedFunction)
            UpDown_ClearFIFO();
        #endif /* (!UpDown_UsingFixedFunction) */
        
        /* Set Initial values from Configuration */
        UpDown_WritePeriod(UpDown_INIT_PERIOD_VALUE);
        #if (!(UpDown_UsingFixedFunction && (CY_PSOC5A)))
            UpDown_WriteCounter(UpDown_INIT_COUNTER_VALUE);
        #endif /* (!(UpDown_UsingFixedFunction && (CY_PSOC5A))) */
        UpDown_SetInterruptMode(UpDown_INIT_INTERRUPTS_MASK);
        
        #if (!UpDown_UsingFixedFunction)
            /* Read the status register to clear the unwanted interrupts */
            (void)UpDown_ReadStatusRegister();
            /* Set the compare value (only available to non-fixed function implementation */
            UpDown_WriteCompare(UpDown_INIT_COMPARE_VALUE);
            /* Use the interrupt output of the status register for IRQ output */
            
            /* CyEnterCriticalRegion and CyExitCriticalRegion are used to mark following region critical*/
            /* Enter Critical Region*/
            UpDown_interruptState = CyEnterCriticalSection();
            
            UpDown_STATUS_AUX_CTRL |= UpDown_STATUS_ACTL_INT_EN_MASK;
            
            /* Exit Critical Region*/
            CyExitCriticalSection(UpDown_interruptState);
            
        #endif /* (!UpDown_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: UpDown_Enable
********************************************************************************
* Summary:
*     Enable the Counter
* 
* Parameters:  
*  void  
*
* Return: 
*  void
*
* Side Effects: 
*   If the Enable mode is set to Hardware only then this function has no effect 
*   on the operation of the counter.
*
*******************************************************************************/
void UpDown_Enable(void) 
{
    /* Globally Enable the Fixed Function Block chosen */
    #if (UpDown_UsingFixedFunction)
        UpDown_GLOBAL_ENABLE |= UpDown_BLOCK_EN_MASK;
        UpDown_GLOBAL_STBY_ENABLE |= UpDown_BLOCK_STBY_EN_MASK;
    #endif /* (UpDown_UsingFixedFunction) */  
        
    /* Enable the counter from the control register  */
    /* If Fixed Function then make sure Mode is set correctly */
    /* else make sure reset is clear */
    #if(!UpDown_ControlRegRemoved || UpDown_UsingFixedFunction)
        UpDown_CONTROL |= UpDown_CTRL_ENABLE;                
    #endif /* (!UpDown_ControlRegRemoved || UpDown_UsingFixedFunction) */
    
}


/*******************************************************************************
* Function Name: UpDown_Start
********************************************************************************
* Summary:
*  Enables the counter for operation 
*
* Parameters:  
*  void  
*
* Return: 
*  void
*
* Global variables:
*  UpDown_initVar: Is modified when this function is called for the  
*   first time. Is used to ensure that initialization happens only once.
*
*******************************************************************************/
void UpDown_Start(void) 
{
    if(UpDown_initVar == 0u)
    {
        UpDown_Init();
        
        UpDown_initVar = 1u; /* Clear this bit for Initialization */        
    }
    
    /* Enable the Counter */
    UpDown_Enable();        
}


/*******************************************************************************
* Function Name: UpDown_Stop
********************************************************************************
* Summary:
* Halts the counter, but does not change any modes or disable interrupts.
*
* Parameters:  
*  void  
*
* Return: 
*  void
*
* Side Effects: If the Enable mode is set to Hardware only then this function
*               has no effect on the operation of the counter.
*
*******************************************************************************/
void UpDown_Stop(void) 
{
    /* Disable Counter */
    #if(!UpDown_ControlRegRemoved || UpDown_UsingFixedFunction)
        UpDown_CONTROL &= ((uint8)(~UpDown_CTRL_ENABLE));        
    #endif /* (!UpDown_ControlRegRemoved || UpDown_UsingFixedFunction) */
    
    /* Globally disable the Fixed Function Block chosen */
    #if (UpDown_UsingFixedFunction)
        UpDown_GLOBAL_ENABLE &= ((uint8)(~UpDown_BLOCK_EN_MASK));
        UpDown_GLOBAL_STBY_ENABLE &= ((uint8)(~UpDown_BLOCK_STBY_EN_MASK));
    #endif /* (UpDown_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: UpDown_SetInterruptMode
********************************************************************************
* Summary:
* Configures which interrupt sources are enabled to generate the final interrupt
*
* Parameters:  
*  InterruptsMask: This parameter is an or'd collection of the status bits
*                   which will be allowed to generate the counters interrupt.   
*
* Return: 
*  void
*
*******************************************************************************/
void UpDown_SetInterruptMode(uint8 interruptsMask) 
{
    UpDown_STATUS_MASK = interruptsMask;
}


/*******************************************************************************
* Function Name: UpDown_ReadStatusRegister
********************************************************************************
* Summary:
*   Reads the status register and returns it's state. This function should use
*       defined types for the bit-field information as the bits in this
*       register may be permuteable.
*
* Parameters:  
*  void
*
* Return: 
*  (uint8) The contents of the status register
*
* Side Effects:
*   Status register bits may be clear on read. 
*
*******************************************************************************/
uint8   UpDown_ReadStatusRegister(void) 
{
    return UpDown_STATUS;
}


#if(!UpDown_ControlRegRemoved)
/*******************************************************************************
* Function Name: UpDown_ReadControlRegister
********************************************************************************
* Summary:
*   Reads the control register and returns it's state. This function should use
*       defined types for the bit-field information as the bits in this
*       register may be permuteable.
*
* Parameters:  
*  void
*
* Return: 
*  (uint8) The contents of the control register
*
*******************************************************************************/
uint8   UpDown_ReadControlRegister(void) 
{
    return UpDown_CONTROL;
}


/*******************************************************************************
* Function Name: UpDown_WriteControlRegister
********************************************************************************
* Summary:
*   Sets the bit-field of the control register.  This function should use
*       defined types for the bit-field information as the bits in this
*       register may be permuteable.
*
* Parameters:  
*  void
*
* Return: 
*  (uint8) The contents of the control register
*
*******************************************************************************/
void    UpDown_WriteControlRegister(uint8 control) 
{
    UpDown_CONTROL = control;
}

#endif  /* (!UpDown_ControlRegRemoved) */


#if (!(UpDown_UsingFixedFunction && (CY_PSOC5A)))
/*******************************************************************************
* Function Name: UpDown_WriteCounter
********************************************************************************
* Summary:
*   This funtion is used to set the counter to a specific value
*
* Parameters:  
*  counter:  New counter value. 
*
* Return: 
*  void 
*
*******************************************************************************/
void UpDown_WriteCounter(uint32 counter) \
                                   
{
    #if(UpDown_UsingFixedFunction)
        /* assert if block is already enabled */
        CYASSERT (0u == (UpDown_GLOBAL_ENABLE & UpDown_BLOCK_EN_MASK));
        /* If block is disabled, enable it and then write the counter */
        UpDown_GLOBAL_ENABLE |= UpDown_BLOCK_EN_MASK;
        CY_SET_REG16(UpDown_COUNTER_LSB_PTR, (uint16)counter);
        UpDown_GLOBAL_ENABLE &= ((uint8)(~UpDown_BLOCK_EN_MASK));
    #else
        CY_SET_REG32(UpDown_COUNTER_LSB_PTR, counter);
    #endif /* (UpDown_UsingFixedFunction) */
}
#endif /* (!(UpDown_UsingFixedFunction && (CY_PSOC5A))) */


/*******************************************************************************
* Function Name: UpDown_ReadCounter
********************************************************************************
* Summary:
* Returns the current value of the counter.  It doesn't matter
* if the counter is enabled or running.
*
* Parameters:  
*  void:  
*
* Return: 
*  (uint32) The present value of the counter.
*
*******************************************************************************/
uint32 UpDown_ReadCounter(void) 
{
    /* Force capture by reading Accumulator */
    /* Must first do a software capture to be able to read the counter */
    /* It is up to the user code to make sure there isn't already captured data in the FIFO */
    #if(UpDown_UsingFixedFunction)
		(void)CY_GET_REG16(UpDown_COUNTER_LSB_PTR);
	#else
		(void)CY_GET_REG8(UpDown_COUNTER_LSB_PTR_8BIT);
	#endif/* (UpDown_UsingFixedFunction) */
    
    /* Read the data from the FIFO (or capture register for Fixed Function)*/
    #if(UpDown_UsingFixedFunction)
        return ((uint32)CY_GET_REG16(UpDown_STATICCOUNT_LSB_PTR));
    #else
        return (CY_GET_REG32(UpDown_STATICCOUNT_LSB_PTR));
    #endif /* (UpDown_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: UpDown_ReadCapture
********************************************************************************
* Summary:
*   This function returns the last value captured.
*
* Parameters:  
*  void
*
* Return: 
*  (uint32) Present Capture value.
*
*******************************************************************************/
uint32 UpDown_ReadCapture(void) 
{
    #if(UpDown_UsingFixedFunction)
        return ((uint32)CY_GET_REG16(UpDown_STATICCOUNT_LSB_PTR));
    #else
        return (CY_GET_REG32(UpDown_STATICCOUNT_LSB_PTR));
    #endif /* (UpDown_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: UpDown_WritePeriod
********************************************************************************
* Summary:
* Changes the period of the counter.  The new period 
* will be loaded the next time terminal count is detected.
*
* Parameters:  
*  period: (uint32) A value of 0 will result in
*         the counter remaining at zero.  
*
* Return: 
*  void
*
*******************************************************************************/
void UpDown_WritePeriod(uint32 period) 
{
    #if(UpDown_UsingFixedFunction)
        CY_SET_REG16(UpDown_PERIOD_LSB_PTR,(uint16)period);
    #else
        CY_SET_REG32(UpDown_PERIOD_LSB_PTR, period);
    #endif /* (UpDown_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: UpDown_ReadPeriod
********************************************************************************
* Summary:
* Reads the current period value without affecting counter operation.
*
* Parameters:  
*  void:  
*
* Return: 
*  (uint32) Present period value.
*
*******************************************************************************/
uint32 UpDown_ReadPeriod(void) 
{
    #if(UpDown_UsingFixedFunction)
        return ((uint32)CY_GET_REG16(UpDown_PERIOD_LSB_PTR));
    #else
        return (CY_GET_REG32(UpDown_PERIOD_LSB_PTR));
    #endif /* (UpDown_UsingFixedFunction) */
}


#if (!UpDown_UsingFixedFunction)
/*******************************************************************************
* Function Name: UpDown_WriteCompare
********************************************************************************
* Summary:
* Changes the compare value.  The compare output will 
* reflect the new value on the next UDB clock.  The compare output will be 
* driven high when the present counter value compares true based on the 
* configured compare mode setting. 
*
* Parameters:  
*  Compare:  New compare value. 
*
* Return: 
*  void
*
*******************************************************************************/
void UpDown_WriteCompare(uint32 compare) \
                                   
{
    #if(UpDown_UsingFixedFunction)
        CY_SET_REG16(UpDown_COMPARE_LSB_PTR, (uint16)compare);
    #else
        CY_SET_REG32(UpDown_COMPARE_LSB_PTR, compare);
    #endif /* (UpDown_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: UpDown_ReadCompare
********************************************************************************
* Summary:
* Returns the compare value.
*
* Parameters:  
*  void:
*
* Return: 
*  (uint32) Present compare value.
*
*******************************************************************************/
uint32 UpDown_ReadCompare(void) 
{
    return (CY_GET_REG32(UpDown_COMPARE_LSB_PTR));
}


#if (UpDown_COMPARE_MODE_SOFTWARE)
/*******************************************************************************
* Function Name: UpDown_SetCompareMode
********************************************************************************
* Summary:
*  Sets the software controlled Compare Mode.
*
* Parameters:
*  compareMode:  Compare Mode Enumerated Type.
*
* Return:
*  void
*
*******************************************************************************/
void UpDown_SetCompareMode(uint8 compareMode) 
{
    /* Clear the compare mode bits in the control register */
    UpDown_CONTROL &= ((uint8)(~UpDown_CTRL_CMPMODE_MASK));
    
    /* Write the new setting */
    UpDown_CONTROL |= compareMode;
}
#endif  /* (UpDown_COMPARE_MODE_SOFTWARE) */


#if (UpDown_CAPTURE_MODE_SOFTWARE)
/*******************************************************************************
* Function Name: UpDown_SetCaptureMode
********************************************************************************
* Summary:
*  Sets the software controlled Capture Mode.
*
* Parameters:
*  captureMode:  Capture Mode Enumerated Type.
*
* Return:
*  void
*
*******************************************************************************/
void UpDown_SetCaptureMode(uint8 captureMode) 
{
    /* Clear the capture mode bits in the control register */
    UpDown_CONTROL &= ((uint8)(~UpDown_CTRL_CAPMODE_MASK));
    
    /* Write the new setting */
    UpDown_CONTROL |= ((uint8)((uint8)captureMode << UpDown_CTRL_CAPMODE0_SHIFT));
}
#endif  /* (UpDown_CAPTURE_MODE_SOFTWARE) */


/*******************************************************************************
* Function Name: UpDown_ClearFIFO
********************************************************************************
* Summary:
*   This function clears all capture data from the capture FIFO
*
* Parameters:  
*  void:
*
* Return: 
*  None
*
*******************************************************************************/
void UpDown_ClearFIFO(void) 
{

    while(0u != (UpDown_ReadStatusRegister() & UpDown_STATUS_FIFONEMP))
    {
        (void)UpDown_ReadCapture();
    }

}
#endif  /* (!UpDown_UsingFixedFunction) */


/* [] END OF FILE */

