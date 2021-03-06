/*******************************************************************************
* File Name: ROSSerial_UART.c
* Version 1.20
*
* Description:
*  This file provides the source code to the API for the SCB Component.
*
* Note:
*
*******************************************************************************
* Copyright 2013-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "ROSSerial_UART_PVT.h"

#if(ROSSerial_UART_SCB_MODE_I2C_INC)
    #include "ROSSerial_UART_I2C_PVT.h"
#endif /* (ROSSerial_UART_SCB_MODE_I2C_INC) */

#if(ROSSerial_UART_SCB_MODE_EZI2C_INC)
    #include "ROSSerial_UART_EZI2C_PVT.h"
#endif /* (ROSSerial_UART_SCB_MODE_EZI2C_INC) */

#if(ROSSerial_UART_SCB_MODE_SPI_INC || ROSSerial_UART_SCB_MODE_UART_INC)
    #include "ROSSerial_UART_SPI_UART_PVT.h"
#endif /* (ROSSerial_UART_SCB_MODE_SPI_INC || ROSSerial_UART_SCB_MODE_UART_INC) */


/***************************************
*    Run Time Configuration Vars
***************************************/

/* Stores internal component configuration for unconfigured mode */
#if(ROSSerial_UART_SCB_MODE_UNCONFIG_CONST_CFG)
    /* Common config vars */
    uint8 ROSSerial_UART_scbMode = ROSSerial_UART_SCB_MODE_UNCONFIG;
    uint8 ROSSerial_UART_scbEnableWake;
    uint8 ROSSerial_UART_scbEnableIntr;

    /* I2C config vars */
    uint8 ROSSerial_UART_mode;
    uint8 ROSSerial_UART_acceptAddr;

    /* SPI/UART config vars */
    volatile uint8 * ROSSerial_UART_rxBuffer;
    uint8  ROSSerial_UART_rxDataBits;
    uint32 ROSSerial_UART_rxBufferSize;

    volatile uint8 * ROSSerial_UART_txBuffer;
    uint8  ROSSerial_UART_txDataBits;
    uint32 ROSSerial_UART_txBufferSize;

    /* EZI2C config vars */
    uint8 ROSSerial_UART_numberOfAddr;
    uint8 ROSSerial_UART_subAddrSize;
#endif /* (ROSSerial_UART_SCB_MODE_UNCONFIG_CONST_CFG) */


/***************************************
*     Common SCB Vars
***************************************/

uint8 ROSSerial_UART_initVar = 0u;

#if !defined (CY_REMOVE_ROSSerial_UART_CUSTOM_INTR_HANDLER)
    cyisraddress ROSSerial_UART_customIntrHandler = NULL;
#endif /* !defined (CY_REMOVE_ROSSerial_UART_CUSTOM_INTR_HANDLER) */


/***************************************
*    Private Function Prototypes
***************************************/

static void ROSSerial_UART_ScbEnableIntr(void);
static void ROSSerial_UART_ScbModeStop(void);


/*******************************************************************************
* Function Name: ROSSerial_UART_Init
********************************************************************************
*
* Summary:
*  Initializes the SCB component to operate in one of the selected configurations:
*  I2C, SPI, UART or EZ I2C.
*  When the configuration is set to �Unconfigured SCB�, this function does
*  not do any initialization. Use mode-specific initialization APIs instead:
*  SCB_I2CInit, SCB_SpiInit, SCB_UartInit or SCB_EzI2CInit.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void ROSSerial_UART_Init(void)
{
#if(ROSSerial_UART_SCB_MODE_UNCONFIG_CONST_CFG)
    if(ROSSerial_UART_SCB_MODE_UNCONFIG_RUNTM_CFG)
    {
        ROSSerial_UART_initVar = 0u; /* Clear init var */
    }
    else
    {
        /* Initialization was done before call */
    }

#elif(ROSSerial_UART_SCB_MODE_I2C_CONST_CFG)
    ROSSerial_UART_I2CInit();

#elif(ROSSerial_UART_SCB_MODE_SPI_CONST_CFG)
    ROSSerial_UART_SpiInit();

#elif(ROSSerial_UART_SCB_MODE_UART_CONST_CFG)
    ROSSerial_UART_UartInit();

#elif(ROSSerial_UART_SCB_MODE_EZI2C_CONST_CFG)
    ROSSerial_UART_EzI2CInit();

#endif /* (ROSSerial_UART_SCB_MODE_UNCONFIG_CONST_CFG) */
}


/*******************************************************************************
* Function Name: ROSSerial_UART_Enable
********************************************************************************
*
* Summary:
*  Enables the SCB component operation.
*  The SCB configuration should be not changed when the component is enabled.
*  Any configuration changes should be made after disabling the component.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void ROSSerial_UART_Enable(void)
{
#if(ROSSerial_UART_SCB_MODE_UNCONFIG_CONST_CFG)
    /* Enable SCB block, only if it is already configured */
    if(!ROSSerial_UART_SCB_MODE_UNCONFIG_RUNTM_CFG)
    {
        ROSSerial_UART_CTRL_REG |= ROSSerial_UART_CTRL_ENABLED;

        ROSSerial_UART_ScbEnableIntr();
    }
#else
    ROSSerial_UART_CTRL_REG |= ROSSerial_UART_CTRL_ENABLED;

    ROSSerial_UART_ScbEnableIntr();
#endif /* (ROSSerial_UART_SCB_MODE_UNCONFIG_CONST_CFG) */
}


/*******************************************************************************
* Function Name: ROSSerial_UART_Start
********************************************************************************
*
* Summary:
*  Invokes SCB_Init() and SCB_Enable().
*  After this function call, the component is enabled and ready for operation.
*  When configuration is set to �Unconfigured SCB�, the component must first be
*  initialized to operate in one of the following configurations: I2C, SPI, UART
*  or EZ I2C. Otherwise this function does not enable the component.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  ROSSerial_UART_initVar - used to check initial configuration, modified
*  on first function call.
*
*******************************************************************************/
void ROSSerial_UART_Start(void)
{
    if(0u == ROSSerial_UART_initVar)
    {
        ROSSerial_UART_Init();
        ROSSerial_UART_initVar = 1u; /* Component was initialized */
    }

    ROSSerial_UART_Enable();
}


/*******************************************************************************
* Function Name: ROSSerial_UART_Stop
********************************************************************************
*
* Summary:
*  Disables the SCB component and its interrupt.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void ROSSerial_UART_Stop(void)
{
#if(ROSSerial_UART_SCB_IRQ_INTERNAL)
    ROSSerial_UART_DisableInt();
#endif /* (ROSSerial_UART_SCB_IRQ_INTERNAL) */

    ROSSerial_UART_CTRL_REG &= (uint32) ~ROSSerial_UART_CTRL_ENABLED;  /* Disable SCB block */

#if(ROSSerial_UART_SCB_IRQ_INTERNAL)
    ROSSerial_UART_ClearPendingInt();
#endif /* (ROSSerial_UART_SCB_IRQ_INTERNAL) */

    ROSSerial_UART_ScbModeStop(); /* Calls scbMode specific Stop function */
}


/*******************************************************************************
* Function Name: ROSSerial_UART_SetCustomInterruptHandler
********************************************************************************
*
* Summary:
*  Registers a function to be called by the internal interrupt handler.
*  First the function that is registered is called, then the internal interrupt
*  handler performs any operations such as software buffer management functions
*  before the interrupt returns.  It is the user's responsibility not to break the
*  software buffer operations. Only one custom handler is supported, which is
*  the function provided by the most recent call.
*  At initialization time no custom handler is registered.
*
* Parameters:
*  func: Pointer to the function to register.
*        The value NULL indicates to remove the current custom interrupt
*        handler.
*
* Return:
*  None
*
*******************************************************************************/
void ROSSerial_UART_SetCustomInterruptHandler(cyisraddress func)
{
#if !defined (CY_REMOVE_ROSSerial_UART_CUSTOM_INTR_HANDLER)
    ROSSerial_UART_customIntrHandler = func; /* Register interrupt handler */
#else
    if(NULL != func)
    {
        /* Suppress compiler warning */
    }
#endif /* !defined (CY_REMOVE_ROSSerial_UART_CUSTOM_INTR_HANDLER) */
}


/*******************************************************************************
* Function Name: ROSSerial_UART_ScbModeEnableIntr
********************************************************************************
*
* Summary:
*  Enables an interrupt for a specific mode.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
static void ROSSerial_UART_ScbEnableIntr(void)
{
#if(ROSSerial_UART_SCB_IRQ_INTERNAL)
    #if(ROSSerial_UART_SCB_MODE_UNCONFIG_CONST_CFG)
        /* Enable interrupt in the NVIC */
        if(0u != ROSSerial_UART_scbEnableIntr)
        {
            ROSSerial_UART_EnableInt();
        }
    #else
        ROSSerial_UART_EnableInt();

    #endif /* (ROSSerial_UART_SCB_MODE_UNCONFIG_CONST_CFG) */
#endif /* (ROSSerial_UART_SCB_IRQ_INTERNAL) */
}


/*******************************************************************************
* Function Name: ROSSerial_UART_ScbModeStop
********************************************************************************
*
* Summary:
*  Calls the Stop function for a specific operation mode.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
static void ROSSerial_UART_ScbModeStop(void)
{
#if(ROSSerial_UART_SCB_MODE_UNCONFIG_CONST_CFG)
    if(ROSSerial_UART_SCB_MODE_I2C_RUNTM_CFG)
    {
        ROSSerial_UART_I2CStop();
    }
    else if(ROSSerial_UART_SCB_MODE_EZI2C_RUNTM_CFG)
    {
        ROSSerial_UART_EzI2CStop();
    }
    else
    {
        /* Do nohing for other modes */
    }
#elif(ROSSerial_UART_SCB_MODE_I2C_CONST_CFG)
    ROSSerial_UART_I2CStop();

#elif(ROSSerial_UART_SCB_MODE_EZI2C_CONST_CFG)
    ROSSerial_UART_EzI2CStop();

#endif /* (ROSSerial_UART_SCB_MODE_UNCONFIG_CONST_CFG) */
}


#if(ROSSerial_UART_SCB_MODE_UNCONFIG_CONST_CFG)
    /*******************************************************************************
    * Function Name: ROSSerial_UART_SetPins
    ********************************************************************************
    *
    * Summary:
    *  Sets the pins settings accordingly to the selected operation mode.
    *  Only available in the Unconfigured operation mode. The mode specific
    *  initialization function calls it.
    *  Pins configuration is set by PSoC Creator when a specific mode of operation
    *  is selected in design time.
    *
    * Parameters:
    *  mode:      Mode of SCB operation.
    *  subMode:   Sub-mode of SCB operation. It is only required for SPI and UART
    *             modes.
    *  uartTxRx:  Direction for UART.
    *
    * Return:
    *  None
    *
    *******************************************************************************/
    void ROSSerial_UART_SetPins(uint32 mode, uint32 subMode, uint32 uartTxRx)
    {
        uint32 hsiomSel [ROSSerial_UART_SCB_PINS_NUMBER];
        uint32 pinsDm   [ROSSerial_UART_SCB_PINS_NUMBER];
        uint32 pinsInBuf = 0u;

        uint32 i;

        /* Set default HSIOM to GPIO and Drive Mode to Analog Hi-Z */
        for(i = 0u; i < ROSSerial_UART_SCB_PINS_NUMBER; i++)
        {
            hsiomSel[i]  = ROSSerial_UART_HSIOM_DEF_SEL;
            pinsDm[i]    = ROSSerial_UART_PIN_DM_ALG_HIZ;
        }

        if((ROSSerial_UART_SCB_MODE_I2C   == mode) ||
           (ROSSerial_UART_SCB_MODE_EZI2C == mode))
        {
            hsiomSel[ROSSerial_UART_MOSI_SCL_RX_PIN_INDEX] = ROSSerial_UART_HSIOM_I2C_SEL;
            hsiomSel[ROSSerial_UART_MISO_SDA_TX_PIN_INDEX] = ROSSerial_UART_HSIOM_I2C_SEL;

            pinsDm[ROSSerial_UART_MOSI_SCL_RX_PIN_INDEX] = ROSSerial_UART_PIN_DM_OD_LO;
            pinsDm[ROSSerial_UART_MISO_SDA_TX_PIN_INDEX] = ROSSerial_UART_PIN_DM_OD_LO;
        }
    #if(!ROSSerial_UART_CY_SCBIP_V1_I2C_ONLY)
        else if(ROSSerial_UART_SCB_MODE_SPI == mode)
        {
            hsiomSel[ROSSerial_UART_MOSI_SCL_RX_PIN_INDEX] = ROSSerial_UART_HSIOM_SPI_SEL;
            hsiomSel[ROSSerial_UART_MISO_SDA_TX_PIN_INDEX] = ROSSerial_UART_HSIOM_SPI_SEL;
            hsiomSel[ROSSerial_UART_SCLK_PIN_INDEX]        = ROSSerial_UART_HSIOM_SPI_SEL;

            if(ROSSerial_UART_SPI_SLAVE == subMode)
            {
                /* Slave */
                pinsDm[ROSSerial_UART_MOSI_SCL_RX_PIN_INDEX] = ROSSerial_UART_PIN_DM_DIG_HIZ;
                pinsDm[ROSSerial_UART_MISO_SDA_TX_PIN_INDEX] = ROSSerial_UART_PIN_DM_STRONG;
                pinsDm[ROSSerial_UART_SCLK_PIN_INDEX]        = ROSSerial_UART_PIN_DM_DIG_HIZ;

            #if(ROSSerial_UART_SS0_PIN)
                /* Only SS0 is valid choice for Slave */
                hsiomSel[ROSSerial_UART_SS0_PIN_INDEX] = ROSSerial_UART_HSIOM_SPI_SEL;
                pinsDm  [ROSSerial_UART_SS0_PIN_INDEX] = ROSSerial_UART_PIN_DM_DIG_HIZ;
            #endif /* (ROSSerial_UART_SS1_PIN) */

            #if(ROSSerial_UART_MISO_SDA_TX_PIN)
                /* Disable input buffer */
                 pinsInBuf |= ROSSerial_UART_MISO_SDA_TX_PIN_MASK;
            #endif /* (ROSSerial_UART_MISO_SDA_TX_PIN_PIN) */
            }
            else /* (Master) */
            {
                pinsDm[ROSSerial_UART_MOSI_SCL_RX_PIN_INDEX] = ROSSerial_UART_PIN_DM_STRONG;
                pinsDm[ROSSerial_UART_MISO_SDA_TX_PIN_INDEX] = ROSSerial_UART_PIN_DM_DIG_HIZ;
                pinsDm[ROSSerial_UART_SCLK_PIN_INDEX]        = ROSSerial_UART_PIN_DM_STRONG;

            #if(ROSSerial_UART_SS0_PIN)
                hsiomSel [ROSSerial_UART_SS0_PIN_INDEX] = ROSSerial_UART_HSIOM_SPI_SEL;
                pinsDm   [ROSSerial_UART_SS0_PIN_INDEX] = ROSSerial_UART_PIN_DM_STRONG;
                pinsInBuf                                |= ROSSerial_UART_SS0_PIN_MASK;
            #endif /* (ROSSerial_UART_SS0_PIN) */

            #if(ROSSerial_UART_SS1_PIN)
                hsiomSel [ROSSerial_UART_SS1_PIN_INDEX] = ROSSerial_UART_HSIOM_SPI_SEL;
                pinsDm   [ROSSerial_UART_SS1_PIN_INDEX] = ROSSerial_UART_PIN_DM_STRONG;
                pinsInBuf                                |= ROSSerial_UART_SS1_PIN_MASK;
            #endif /* (ROSSerial_UART_SS1_PIN) */

            #if(ROSSerial_UART_SS2_PIN)
                hsiomSel [ROSSerial_UART_SS2_PIN_INDEX] = ROSSerial_UART_HSIOM_SPI_SEL;
                pinsDm   [ROSSerial_UART_SS2_PIN_INDEX] = ROSSerial_UART_PIN_DM_STRONG;
                pinsInBuf                                |= ROSSerial_UART_SS2_PIN_MASK;
            #endif /* (ROSSerial_UART_SS2_PIN) */

            #if(ROSSerial_UART_SS3_PIN)
                hsiomSel [ROSSerial_UART_SS3_PIN_INDEX] = ROSSerial_UART_HSIOM_SPI_SEL;
                pinsDm   [ROSSerial_UART_SS3_PIN_INDEX] = ROSSerial_UART_PIN_DM_STRONG;
                pinsInBuf                                |= ROSSerial_UART_SS3_PIN_MASK;
            #endif /* (ROSSerial_UART_SS2_PIN) */

                /* Disable input buffers */
            #if(ROSSerial_UART_MOSI_SCL_RX_PIN)
                pinsInBuf |= ROSSerial_UART_MOSI_SCL_RX_PIN_MASK;
            #endif /* (ROSSerial_UART_MOSI_SCL_RX_PIN) */

             #if(ROSSerial_UART_MOSI_SCL_RX_WAKE_PIN)
                pinsInBuf |= ROSSerial_UART_MOSI_SCL_RX_WAKE_PIN_MASK;
            #endif /* (ROSSerial_UART_MOSI_SCL_RX_WAKE_PIN) */

            #if(ROSSerial_UART_SCLK_PIN)
                pinsInBuf |= ROSSerial_UART_SCLK_PIN_MASK;
            #endif /* (ROSSerial_UART_SCLK_PIN) */
            }
        }
        else /* UART */
        {
            if(ROSSerial_UART_UART_MODE_SMARTCARD == subMode)
            {
                /* SmartCard */
                hsiomSel[ROSSerial_UART_MISO_SDA_TX_PIN_INDEX] = ROSSerial_UART_HSIOM_UART_SEL;
                pinsDm  [ROSSerial_UART_MISO_SDA_TX_PIN_INDEX] = ROSSerial_UART_PIN_DM_OD_LO;
            }
            else /* Standard or IrDA */
            {
                if(0u != (ROSSerial_UART_UART_RX & uartTxRx))
                {
                    hsiomSel[ROSSerial_UART_MOSI_SCL_RX_PIN_INDEX] = ROSSerial_UART_HSIOM_UART_SEL;
                    pinsDm  [ROSSerial_UART_MOSI_SCL_RX_PIN_INDEX] = ROSSerial_UART_PIN_DM_DIG_HIZ;
                }

                if(0u != (ROSSerial_UART_UART_TX & uartTxRx))
                {
                    hsiomSel[ROSSerial_UART_MISO_SDA_TX_PIN_INDEX] = ROSSerial_UART_HSIOM_UART_SEL;
                    pinsDm  [ROSSerial_UART_MISO_SDA_TX_PIN_INDEX] = ROSSerial_UART_PIN_DM_STRONG;

                #if(ROSSerial_UART_MISO_SDA_TX_PIN)
                     pinsInBuf |= ROSSerial_UART_MISO_SDA_TX_PIN_MASK;
                #endif /* (ROSSerial_UART_MISO_SDA_TX_PIN_PIN) */
                }
            }
        }
    #endif /* (!ROSSerial_UART_CY_SCBIP_V1_I2C_ONLY) */

    /* Configure pins: set HSIOM, DM and InputBufEnable */
    /* Note: the DR register settigns do not effect the pin output if HSIOM is other than GPIO */

    #if(ROSSerial_UART_MOSI_SCL_RX_PIN)
        ROSSerial_UART_SET_HSIOM_SEL(ROSSerial_UART_MOSI_SCL_RX_HSIOM_REG,
                                       ROSSerial_UART_MOSI_SCL_RX_HSIOM_MASK,
                                       ROSSerial_UART_MOSI_SCL_RX_HSIOM_POS,
                                       hsiomSel[ROSSerial_UART_MOSI_SCL_RX_PIN_INDEX]);

        ROSSerial_UART_spi_mosi_i2c_scl_uart_rx_SetDriveMode((uint8) pinsDm[ROSSerial_UART_MOSI_SCL_RX_PIN_INDEX]);

        ROSSerial_UART_SET_INP_DIS(ROSSerial_UART_spi_mosi_i2c_scl_uart_rx_INP_DIS,
                                     ROSSerial_UART_spi_mosi_i2c_scl_uart_rx_MASK,
                                     (0u != (pinsInBuf & ROSSerial_UART_MOSI_SCL_RX_PIN_MASK)));
    #endif /* (ROSSerial_UART_MOSI_SCL_RX_PIN) */

    #if(ROSSerial_UART_MOSI_SCL_RX_WAKE_PIN)
        ROSSerial_UART_SET_HSIOM_SEL(ROSSerial_UART_MOSI_SCL_RX_WAKE_HSIOM_REG,
                                       ROSSerial_UART_MOSI_SCL_RX_WAKE_HSIOM_MASK,
                                       ROSSerial_UART_MOSI_SCL_RX_WAKE_HSIOM_POS,
                                       hsiomSel[ROSSerial_UART_MOSI_SCL_RX_WAKE_PIN_INDEX]);

        ROSSerial_UART_spi_mosi_i2c_scl_uart_rx_wake_SetDriveMode((uint8)
                                                               pinsDm[ROSSerial_UART_MOSI_SCL_RX_WAKE_PIN_INDEX]);

        ROSSerial_UART_SET_INP_DIS(ROSSerial_UART_spi_mosi_i2c_scl_uart_rx_wake_INP_DIS,
                                     ROSSerial_UART_spi_mosi_i2c_scl_uart_rx_wake_MASK,
                                     (0u != (pinsInBuf & ROSSerial_UART_MOSI_SCL_RX_WAKE_PIN_MASK)));

         /* Set interrupt on falling edge */
        ROSSerial_UART_SET_INCFG_TYPE(ROSSerial_UART_MOSI_SCL_RX_WAKE_INTCFG_REG,
                                        ROSSerial_UART_MOSI_SCL_RX_WAKE_INTCFG_TYPE_MASK,
                                        ROSSerial_UART_MOSI_SCL_RX_WAKE_INTCFG_TYPE_POS,
                                        ROSSerial_UART_INTCFG_TYPE_FALLING_EDGE);
    #endif /* (ROSSerial_UART_MOSI_SCL_RX_WAKE_PIN) */

    #if(ROSSerial_UART_MISO_SDA_TX_PIN)
        ROSSerial_UART_SET_HSIOM_SEL(ROSSerial_UART_MISO_SDA_TX_HSIOM_REG,
                                       ROSSerial_UART_MISO_SDA_TX_HSIOM_MASK,
                                       ROSSerial_UART_MISO_SDA_TX_HSIOM_POS,
                                       hsiomSel[ROSSerial_UART_MISO_SDA_TX_PIN_INDEX]);

        ROSSerial_UART_spi_miso_i2c_sda_uart_tx_SetDriveMode((uint8) pinsDm[ROSSerial_UART_MISO_SDA_TX_PIN_INDEX]);

        ROSSerial_UART_SET_INP_DIS(ROSSerial_UART_spi_miso_i2c_sda_uart_tx_INP_DIS,
                                     ROSSerial_UART_spi_miso_i2c_sda_uart_tx_MASK,
                                    (0u != (pinsInBuf & ROSSerial_UART_MISO_SDA_TX_PIN_MASK)));
    #endif /* (ROSSerial_UART_MOSI_SCL_RX_PIN) */

    #if(ROSSerial_UART_SCLK_PIN)
        ROSSerial_UART_SET_HSIOM_SEL(ROSSerial_UART_SCLK_HSIOM_REG, ROSSerial_UART_SCLK_HSIOM_MASK,
                                       ROSSerial_UART_SCLK_HSIOM_POS, hsiomSel[ROSSerial_UART_SCLK_PIN_INDEX]);

        ROSSerial_UART_spi_sclk_SetDriveMode((uint8) pinsDm[ROSSerial_UART_SCLK_PIN_INDEX]);

        ROSSerial_UART_SET_INP_DIS(ROSSerial_UART_spi_sclk_INP_DIS,
                             ROSSerial_UART_spi_sclk_MASK,
                            (0u != (pinsInBuf & ROSSerial_UART_SCLK_PIN_MASK)));
    #endif /* (ROSSerial_UART_SCLK_PIN) */

    #if(ROSSerial_UART_SS0_PIN)
        ROSSerial_UART_SET_HSIOM_SEL(ROSSerial_UART_SS0_HSIOM_REG, ROSSerial_UART_SS0_HSIOM_MASK,
                                       ROSSerial_UART_SS0_HSIOM_POS, hsiomSel[ROSSerial_UART_SS0_PIN_INDEX]);

        ROSSerial_UART_spi_ss0_SetDriveMode((uint8) pinsDm[ROSSerial_UART_SS0_PIN_INDEX]);

        ROSSerial_UART_SET_INP_DIS(ROSSerial_UART_spi_ss0_INP_DIS,
                                     ROSSerial_UART_spi_ss0_MASK,
                                     (0u != (pinsInBuf & ROSSerial_UART_SS0_PIN_MASK)));
    #endif /* (ROSSerial_UART_SS1_PIN) */

    #if(ROSSerial_UART_SS1_PIN)
        ROSSerial_UART_SET_HSIOM_SEL(ROSSerial_UART_SS1_HSIOM_REG, ROSSerial_UART_SS1_HSIOM_MASK,
                                       ROSSerial_UART_SS1_HSIOM_POS, hsiomSel[ROSSerial_UART_SS1_PIN_INDEX]);

        ROSSerial_UART_spi_ss1_SetDriveMode((uint8) pinsDm[ROSSerial_UART_SS1_PIN_INDEX]);

        ROSSerial_UART_SET_INP_DIS(ROSSerial_UART_spi_ss1_INP_DIS,
                                     ROSSerial_UART_spi_ss1_MASK,
                                     (0u != (pinsInBuf & ROSSerial_UART_SS1_PIN_MASK)));
    #endif /* (ROSSerial_UART_SS1_PIN) */

    #if(ROSSerial_UART_SS2_PIN)
        ROSSerial_UART_SET_HSIOM_SEL(ROSSerial_UART_SS2_HSIOM_REG, ROSSerial_UART_SS2_HSIOM_MASK,
                                       ROSSerial_UART_SS2_HSIOM_POS, hsiomSel[ROSSerial_UART_SS2_PIN_INDEX]);

        ROSSerial_UART_spi_ss2_SetDriveMode((uint8) pinsDm[ROSSerial_UART_SS2_PIN_INDEX]);

        ROSSerial_UART_SET_INP_DIS(ROSSerial_UART_spi_ss2_INP_DIS,
                                     ROSSerial_UART_spi_ss2_MASK,
                                     (0u != (pinsInBuf & ROSSerial_UART_SS2_PIN_MASK)));
    #endif /* (ROSSerial_UART_SS2_PIN) */

    #if(ROSSerial_UART_SS3_PIN)
        ROSSerial_UART_SET_HSIOM_SEL(ROSSerial_UART_SS3_HSIOM_REG,  ROSSerial_UART_SS3_HSIOM_MASK,
                                       ROSSerial_UART_SS3_HSIOM_POS, hsiomSel[ROSSerial_UART_SS3_PIN_INDEX]);

        ROSSerial_UART_spi_ss3_SetDriveMode((uint8) pinsDm[ROSSerial_UART_SS3_PIN_INDEX]);

        ROSSerial_UART_SET_INP_DIS(ROSSerial_UART_spi_ss3_INP_DIS,
                                     ROSSerial_UART_spi_ss3_MASK,
                                     (0u != (pinsInBuf & ROSSerial_UART_SS3_PIN_MASK)));
    #endif /* (ROSSerial_UART_SS3_PIN) */
    }

#endif /* (ROSSerial_UART_SCB_MODE_UNCONFIG_CONST_CFG) */


/* [] END OF FILE */
