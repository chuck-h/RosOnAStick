/*******************************************************************************
* File Name: ROSSerial_UART_PINS.h
* Version 1.20
*
* Description:
*  This file provides constants and parameter values for the pin components
*  buried into SCB Component.
*
* Note:
*
********************************************************************************
* Copyright 2013-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_SCB_PINS_ROSSerial_UART_H)
#define CY_SCB_PINS_ROSSerial_UART_H

#include "cydevice_trm.h"
#include "cyfitter.h"
#include "cytypes.h"


/***************************************
*   Conditional Compilation Parameters
****************************************/

/* Unconfigured pins */
#define ROSSerial_UART_REMOVE_MOSI_SCL_RX_WAKE_PIN    (1u)
#define ROSSerial_UART_REMOVE_MOSI_SCL_RX_PIN         (1u)
#define ROSSerial_UART_REMOVE_MISO_SDA_TX_PIN         (1u)
#define ROSSerial_UART_REMOVE_SCLK_PIN                (1u)
#define ROSSerial_UART_REMOVE_SS0_PIN                 (1u)
#define ROSSerial_UART_REMOVE_SS1_PIN                 (1u)
#define ROSSerial_UART_REMOVE_SS2_PIN                 (1u)
#define ROSSerial_UART_REMOVE_SS3_PIN                 (1u)

/* Mode defined pins */
#define ROSSerial_UART_REMOVE_I2C_PINS                (1u)
#define ROSSerial_UART_REMOVE_SPI_MASTER_PINS         (1u)
#define ROSSerial_UART_REMOVE_SPI_SLAVE_PINS          (1u)
#define ROSSerial_UART_REMOVE_SPI_MASTER_SS0_PIN      (1u)
#define ROSSerial_UART_REMOVE_SPI_MASTER_SS1_PIN      (1u)
#define ROSSerial_UART_REMOVE_SPI_MASTER_SS2_PIN      (1u)
#define ROSSerial_UART_REMOVE_SPI_MASTER_SS3_PIN      (1u)
#define ROSSerial_UART_REMOVE_UART_TX_PIN             (0u)
#define ROSSerial_UART_REMOVE_UART_RX_TX_PIN          (1u)
#define ROSSerial_UART_REMOVE_UART_RX_PIN             (0u)
#define ROSSerial_UART_REMOVE_UART_RX_WAKE_PIN        (1u)

/* Unconfigured pins */
#define ROSSerial_UART_MOSI_SCL_RX_WAKE_PIN   (0u == ROSSerial_UART_REMOVE_MOSI_SCL_RX_WAKE_PIN)
#define ROSSerial_UART_MOSI_SCL_RX_PIN        (0u == ROSSerial_UART_REMOVE_MOSI_SCL_RX_PIN)
#define ROSSerial_UART_MISO_SDA_TX_PIN        (0u == ROSSerial_UART_REMOVE_MISO_SDA_TX_PIN)
#define ROSSerial_UART_SCLK_PIN               (0u == ROSSerial_UART_REMOVE_SCLK_PIN)
#define ROSSerial_UART_SS0_PIN                (0u == ROSSerial_UART_REMOVE_SS0_PIN)
#define ROSSerial_UART_SS1_PIN                (0u == ROSSerial_UART_REMOVE_SS1_PIN)
#define ROSSerial_UART_SS2_PIN                (0u == ROSSerial_UART_REMOVE_SS2_PIN)
#define ROSSerial_UART_SS3_PIN                (0u == ROSSerial_UART_REMOVE_SS3_PIN)

/* Mode defined pins */
#define ROSSerial_UART_I2C_PINS               (0u == ROSSerial_UART_REMOVE_I2C_PINS)
#define ROSSerial_UART_SPI_MASTER_PINS        (0u == ROSSerial_UART_REMOVE_SPI_MASTER_PINS)
#define ROSSerial_UART_SPI_SLAVE_PINS         (0u == ROSSerial_UART_REMOVE_SPI_SLAVE_PINS)
#define ROSSerial_UART_SPI_MASTER_SS0_PIN     (0u == ROSSerial_UART_REMOVE_SPI_MASTER_SS0_PIN)
#define ROSSerial_UART_SPI_MASTER_SS1_PIN     (0u == ROSSerial_UART_REMOVE_SPI_MASTER_SS1_PIN)
#define ROSSerial_UART_SPI_MASTER_SS2_PIN     (0u == ROSSerial_UART_REMOVE_SPI_MASTER_SS2_PIN)
#define ROSSerial_UART_SPI_MASTER_SS3_PIN     (0u == ROSSerial_UART_REMOVE_SPI_MASTER_SS3_PIN)
#define ROSSerial_UART_UART_TX_PIN            (0u == ROSSerial_UART_REMOVE_UART_TX_PIN)
#define ROSSerial_UART_UART_RX_TX_PIN         (0u == ROSSerial_UART_REMOVE_UART_RX_TX_PIN)
#define ROSSerial_UART_UART_RX_PIN            (0u == ROSSerial_UART_REMOVE_UART_RX_PIN)
#define ROSSerial_UART_UART_RX_WAKE_PIN       (0u == ROSSerial_UART_REMOVE_UART_RX_WAKE_PIN)


/***************************************
*             Includes
****************************************/

#if(ROSSerial_UART_MOSI_SCL_RX_WAKE_PIN)
    #include "ROSSerial_UART_spi_mosi_i2c_scl_uart_rx_wake.h"
#endif /* (ROSSerial_UART_MOSI_SCL_RX_WAKE_PIN) */

#if(ROSSerial_UART_MOSI_SCL_RX_PIN)
    #include "ROSSerial_UART_spi_mosi_i2c_scl_uart_rx.h"
#endif /* (ROSSerial_UART_MOSI_SCL_RX_PIN) */

#if(ROSSerial_UART_MISO_SDA_TX_PIN)
    #include "ROSSerial_UART_spi_miso_i2c_sda_uart_tx.h"
#endif /* (ROSSerial_UART_MISO_SDA_TX_PIN_PIN) */

#if(ROSSerial_UART_SCLK_PIN)
    #include "ROSSerial_UART_spi_sclk.h"
#endif /* (ROSSerial_UART_SCLK_PIN) */

#if(ROSSerial_UART_SS0_PIN)
    #include "ROSSerial_UART_spi_ss0.h"
#endif /* (ROSSerial_UART_SS1_PIN) */

#if(ROSSerial_UART_SS1_PIN)
    #include "ROSSerial_UART_spi_ss1.h"
#endif /* (ROSSerial_UART_SS1_PIN) */

#if(ROSSerial_UART_SS2_PIN)
    #include "ROSSerial_UART_spi_ss2.h"
#endif /* (ROSSerial_UART_SS2_PIN) */

#if(ROSSerial_UART_SS3_PIN)
    #include "ROSSerial_UART_spi_ss3.h"
#endif /* (ROSSerial_UART_SS3_PIN) */

#if(ROSSerial_UART_I2C_PINS)
    #include "ROSSerial_UART_scl.h"
    #include "ROSSerial_UART_sda.h"
#endif /* (ROSSerial_UART_I2C_PINS) */

#if(ROSSerial_UART_SPI_MASTER_PINS)
    #include "ROSSerial_UART_sclk_m.h"
    #include "ROSSerial_UART_mosi_m.h"
    #include "ROSSerial_UART_miso_m.h"
#endif /* (ROSSerial_UART_SPI_MASTER_PINS) */

#if(ROSSerial_UART_SPI_SLAVE_PINS)
    #include "ROSSerial_UART_sclk_s.h"
    #include "ROSSerial_UART_mosi_s.h"
    #include "ROSSerial_UART_miso_s.h"
    #include "ROSSerial_UART_ss_s.h"
#endif /* (ROSSerial_UART_SPI_SLAVE_PINS) */

#if(ROSSerial_UART_SPI_MASTER_SS0_PIN)
    #include "ROSSerial_UART_ss0_m.h"
#endif /* (ROSSerial_UART_SPI_MASTER_SS0_PIN) */

#if(ROSSerial_UART_SPI_MASTER_SS1_PIN)
    #include "ROSSerial_UART_ss1_m.h"
#endif /* (ROSSerial_UART_SPI_MASTER_SS1_PIN) */

#if(ROSSerial_UART_SPI_MASTER_SS2_PIN)
    #include "ROSSerial_UART_ss2_m.h"
#endif /* (ROSSerial_UART_SPI_MASTER_SS2_PIN) */

#if(ROSSerial_UART_SPI_MASTER_SS3_PIN)
    #include "ROSSerial_UART_ss3_m.h"
#endif /* (ROSSerial_UART_SPI_MASTER_SS3_PIN) */

#if(ROSSerial_UART_UART_TX_PIN)
    #include "ROSSerial_UART_tx.h"
#endif /* (ROSSerial_UART_UART_TX_PIN) */

#if(ROSSerial_UART_UART_RX_TX_PIN)
    #include "ROSSerial_UART_rx_tx.h"
#endif /* (ROSSerial_UART_UART_RX_TX_PIN) */

#if(ROSSerial_UART_UART_RX_PIN)
    #include "ROSSerial_UART_rx.h"
#endif /* (ROSSerial_UART_UART_RX_PIN) */

#if(ROSSerial_UART_UART_RX_WAKE_PIN)
    #include "ROSSerial_UART_rx_wake.h"
#endif /* (ROSSerial_UART_UART_RX_WAKE_PIN) */


/***************************************
*              Registers
***************************************/

#if(ROSSerial_UART_MOSI_SCL_RX_WAKE_PIN)
    #define ROSSerial_UART_MOSI_SCL_RX_WAKE_HSIOM_REG  \
                                                (*(reg32 *) ROSSerial_UART_spi_mosi_i2c_scl_uart_rx_wake__0__HSIOM)
    #define ROSSerial_UART_MOSI_SCL_RX_WAKE_HSIOM_PTR  \
                                                ( (reg32 *) ROSSerial_UART_spi_mosi_i2c_scl_uart_rx_wake__0__HSIOM)
    #define ROSSerial_UART_MOSI_SCL_RX_WAKE_HSIOM_MASK \
                                                (ROSSerial_UART_spi_mosi_i2c_scl_uart_rx_wake__0__HSIOM_MASK)
    #define ROSSerial_UART_MOSI_SCL_RX_WAKE_HSIOM_POS  \
                                                (ROSSerial_UART_spi_mosi_i2c_scl_uart_rx_wake__0__HSIOM_SHIFT)

    #define ROSSerial_UART_MOSI_SCL_RX_WAKE_INTCFG_REG    (*(reg32 *) \
                                                              ROSSerial_UART_spi_mosi_i2c_scl_uart_rx_wake__0__INTCFG)
    #define ROSSerial_UART_MOSI_SCL_RX_WAKE_INTCFG_PTR    ( (reg32 *) \
                                                              ROSSerial_UART_spi_mosi_i2c_scl_uart_rx_wake__0__INTCFG)

    #define ROSSerial_UART_INTCFG_TYPE_MASK                  (0x03u)
    #define ROSSerial_UART_MOSI_SCL_RX_WAKE_INTCFG_TYPE_POS  (ROSSerial_UART_spi_mosi_i2c_scl_uart_rx_wake__SHIFT)
    #define ROSSerial_UART_MOSI_SCL_RX_WAKE_INTCFG_TYPE_MASK ((uint32)                                           \
                                                                    ((uint32) ROSSerial_UART_INTCFG_TYPE_MASK << \
                                                                    ROSSerial_UART_MOSI_SCL_RX_WAKE_INTCFG_TYPE_POS))
#endif /* (ROSSerial_UART_MOSI_SCL_RX_WAKE_PIN) */

#if(ROSSerial_UART_MOSI_SCL_RX_PIN)
    #define ROSSerial_UART_MOSI_SCL_RX_HSIOM_REG      (*(reg32 *) ROSSerial_UART_spi_mosi_i2c_scl_uart_rx__0__HSIOM)
    #define ROSSerial_UART_MOSI_SCL_RX_HSIOM_PTR      ( (reg32 *) ROSSerial_UART_spi_mosi_i2c_scl_uart_rx__0__HSIOM)
    #define ROSSerial_UART_MOSI_SCL_RX_HSIOM_MASK     (ROSSerial_UART_spi_mosi_i2c_scl_uart_rx__0__HSIOM_MASK)
    #define ROSSerial_UART_MOSI_SCL_RX_HSIOM_POS      (ROSSerial_UART_spi_mosi_i2c_scl_uart_rx__0__HSIOM_SHIFT)
#endif /* (ROSSerial_UART_MOSI_SCL_RX_PIN) */

#if(ROSSerial_UART_MISO_SDA_TX_PIN)
    #define ROSSerial_UART_MISO_SDA_TX_HSIOM_REG      (*(reg32 *) ROSSerial_UART_spi_miso_i2c_sda_uart_tx__0__HSIOM)
    #define ROSSerial_UART_MISO_SDA_TX_HSIOM_PTR      ( (reg32 *) ROSSerial_UART_spi_miso_i2c_sda_uart_tx__0__HSIOM)
    #define ROSSerial_UART_MISO_SDA_TX_HSIOM_MASK     (ROSSerial_UART_spi_miso_i2c_sda_uart_tx__0__HSIOM_MASK)
    #define ROSSerial_UART_MISO_SDA_TX_HSIOM_POS      (ROSSerial_UART_spi_miso_i2c_sda_uart_tx__0__HSIOM_SHIFT)
#endif /* (ROSSerial_UART_MISO_SDA_TX_PIN_PIN) */

#if(ROSSerial_UART_SCLK_PIN)
    #define ROSSerial_UART_SCLK_HSIOM_REG     (*(reg32 *) ROSSerial_UART_spi_sclk__0__HSIOM)
    #define ROSSerial_UART_SCLK_HSIOM_PTR     ( (reg32 *) ROSSerial_UART_spi_sclk__0__HSIOM)
    #define ROSSerial_UART_SCLK_HSIOM_MASK    (ROSSerial_UART_spi_sclk__0__HSIOM_MASK)
    #define ROSSerial_UART_SCLK_HSIOM_POS     (ROSSerial_UART_spi_sclk__0__HSIOM_SHIFT)
#endif /* (ROSSerial_UART_SCLK_PIN) */

#if(ROSSerial_UART_SS0_PIN)
    #define ROSSerial_UART_SS0_HSIOM_REG      (*(reg32 *) ROSSerial_UART_spi_ss0__0__HSIOM)
    #define ROSSerial_UART_SS0_HSIOM_PTR      ( (reg32 *) ROSSerial_UART_spi_ss0__0__HSIOM)
    #define ROSSerial_UART_SS0_HSIOM_MASK     (ROSSerial_UART_spi_ss0__0__HSIOM_MASK)
    #define ROSSerial_UART_SS0_HSIOM_POS      (ROSSerial_UART_spi_ss0__0__HSIOM_SHIFT)
#endif /* (ROSSerial_UART_SS1_PIN) */

#if(ROSSerial_UART_SS1_PIN)
    #define ROSSerial_UART_SS1_HSIOM_REG      (*(reg32 *) ROSSerial_UART_spi_ss1__0__HSIOM)
    #define ROSSerial_UART_SS1_HSIOM_PTR      ( (reg32 *) ROSSerial_UART_spi_ss1__0__HSIOM)
    #define ROSSerial_UART_SS1_HSIOM_MASK     (ROSSerial_UART_spi_ss1__0__HSIOM_MASK)
    #define ROSSerial_UART_SS1_HSIOM_POS      (ROSSerial_UART_spi_ss1__0__HSIOM_SHIFT)
#endif /* (ROSSerial_UART_SS1_PIN) */

#if(ROSSerial_UART_SS2_PIN)
    #define ROSSerial_UART_SS2_HSIOM_REG     (*(reg32 *) ROSSerial_UART_spi_ss2__0__HSIOM)
    #define ROSSerial_UART_SS2_HSIOM_PTR     ( (reg32 *) ROSSerial_UART_spi_ss2__0__HSIOM)
    #define ROSSerial_UART_SS2_HSIOM_MASK    (ROSSerial_UART_spi_ss2__0__HSIOM_MASK)
    #define ROSSerial_UART_SS2_HSIOM_POS     (ROSSerial_UART_spi_ss2__0__HSIOM_SHIFT)
#endif /* (ROSSerial_UART_SS2_PIN) */

#if(ROSSerial_UART_SS3_PIN)
    #define ROSSerial_UART_SS3_HSIOM_REG     (*(reg32 *) ROSSerial_UART_spi_ss3__0__HSIOM)
    #define ROSSerial_UART_SS3_HSIOM_PTR     ( (reg32 *) ROSSerial_UART_spi_ss3__0__HSIOM)
    #define ROSSerial_UART_SS3_HSIOM_MASK    (ROSSerial_UART_spi_ss3__0__HSIOM_MASK)
    #define ROSSerial_UART_SS3_HSIOM_POS     (ROSSerial_UART_spi_ss3__0__HSIOM_SHIFT)
#endif /* (ROSSerial_UART_SS3_PIN) */

#if(ROSSerial_UART_I2C_PINS)
    #define ROSSerial_UART_SCL_HSIOM_REG     (*(reg32 *) ROSSerial_UART_scl__0__HSIOM)
    #define ROSSerial_UART_SCL_HSIOM_PTR     ( (reg32 *) ROSSerial_UART_scl__0__HSIOM)
    #define ROSSerial_UART_SCL_HSIOM_MASK    (ROSSerial_UART_scl__0__HSIOM_MASK)
    #define ROSSerial_UART_SCL_HSIOM_POS     (ROSSerial_UART_scl__0__HSIOM_SHIFT)

    #define ROSSerial_UART_SDA_HSIOM_REG     (*(reg32 *) ROSSerial_UART_sda__0__HSIOM)
    #define ROSSerial_UART_SDA_HSIOM_PTR     ( (reg32 *) ROSSerial_UART_sda__0__HSIOM)
    #define ROSSerial_UART_SDA_HSIOM_MASK    (ROSSerial_UART_sda__0__HSIOM_MASK)
    #define ROSSerial_UART_SDA_HSIOM_POS     (ROSSerial_UART_sda__0__HSIOM_SHIFT)
#endif /* (ROSSerial_UART_I2C_PINS) */


/***************************************
*        Registers Constants
***************************************/

/* Pins constants */
#define ROSSerial_UART_HSIOM_DEF_SEL      (0x00u)
#define ROSSerial_UART_HSIOM_GPIO_SEL     (0x00u)
#define ROSSerial_UART_HSIOM_UART_SEL     (0x09u)
#define ROSSerial_UART_HSIOM_I2C_SEL      (0x0Eu)
#define ROSSerial_UART_HSIOM_SPI_SEL      (0x0Fu)

#if(!ROSSerial_UART_CY_SCBIP_V1_I2C_ONLY)
    #define ROSSerial_UART_SCB_PINS_NUMBER    (7u)
#else
    #define ROSSerial_UART_SCB_PINS_NUMBER    (2u)
#endif /* (!ROSSerial_UART_CY_SCBIP_V1_I2C_ONLY) */

#define ROSSerial_UART_MOSI_SCL_RX_PIN_INDEX      (0u) /* RX pins without interrupt */
#define ROSSerial_UART_MOSI_SCL_RX_WAKE_PIN_INDEX (0u) /* RX pin with interrupt     */
#define ROSSerial_UART_MISO_SDA_TX_PIN_INDEX      (1u)
#define ROSSerial_UART_SCLK_PIN_INDEX             (2u)
#define ROSSerial_UART_SS0_PIN_INDEX              (3u)
#define ROSSerial_UART_SS1_PIN_INDEX              (4u)
#define ROSSerial_UART_SS2_PIN_INDEX              (5u)
#define ROSSerial_UART_SS3_PIN_INDEX              (6u)

#define ROSSerial_UART_MOSI_SCL_RX_PIN_MASK      ((uint32) 0x01u << ROSSerial_UART_MOSI_SCL_RX_PIN_INDEX)
#define ROSSerial_UART_MOSI_SCL_RX_WAKE_PIN_MASK ((uint32) 0x01u << ROSSerial_UART_MOSI_SCL_RX_WAKE_PIN_INDEX)
#define ROSSerial_UART_MISO_SDA_TX_PIN_MASK      ((uint32) 0x01u << ROSSerial_UART_MISO_SDA_TX_PIN_INDEX)
#define ROSSerial_UART_SCLK_PIN_MASK             ((uint32) 0x01u << ROSSerial_UART_SCLK_PIN_INDEX)
#define ROSSerial_UART_SS0_PIN_MASK              ((uint32) 0x01u << ROSSerial_UART_SS0_PIN_INDEX)
#define ROSSerial_UART_SS1_PIN_MASK              ((uint32) 0x01u << ROSSerial_UART_SS1_PIN_INDEX)
#define ROSSerial_UART_SS2_PIN_MASK              ((uint32) 0x01u << ROSSerial_UART_SS2_PIN_INDEX)
#define ROSSerial_UART_SS3_PIN_MASK              ((uint32) 0x01u << ROSSerial_UART_SS3_PIN_INDEX)

#define ROSSerial_UART_INTCFG_TYPE_FALLING_EDGE   (0x02u)

/* Pin DM defines */
#define ROSSerial_UART_PIN_DM_ALG_HIZ  (0u)
#define ROSSerial_UART_PIN_DM_DIG_HIZ  (1u)
#define ROSSerial_UART_PIN_DM_OD_LO    (4u)
#define ROSSerial_UART_PIN_DM_STRONG   (6u)


/***************************************
*          Macro Definitions
***************************************/

/* Set bits-mask in register */
#define ROSSerial_UART_SET_REGISTER_BITS(reg, mask, pos, mode) \
                    do                                           \
                    {                                            \
                        (reg) = (((reg) & ((uint32) ~(uint32) (mask))) | ((uint32) ((uint32) (mode) << (pos)))); \
                    }while(0)

/* Set bit the in register */
#define ROSSerial_UART_SET_REGISTER_BIT(reg, mask, val) \
                    ((val) ? ((reg) |= (mask)) : ((reg) &= ((uint32) ~((uint32) (mask)))))

#define ROSSerial_UART_SET_HSIOM_SEL(reg, mask, pos, sel) ROSSerial_UART_SET_REGISTER_BITS(reg, mask, pos, sel)
#define ROSSerial_UART_SET_INCFG_TYPE(reg, mask, pos, intType) \
                                                        ROSSerial_UART_SET_REGISTER_BITS(reg, mask, pos, intType)
#define ROSSerial_UART_SET_INP_DIS(reg, mask, val) ROSSerial_UART_SET_REGISTER_BIT(reg, mask, val)

/* ROSSerial_UART_SET_I2C_SCL_DR(val) - Sets I2C SCL DR register.
*  ROSSerial_UART_SET_I2C_SCL_HSIOM_SEL(sel) - Sets I2C SCL HSIOM settings.
*/
/* SCB I2C: scl signal */
#if(ROSSerial_UART_I2C_PINS)
    #define ROSSerial_UART_SET_I2C_SCL_DR(val) ROSSerial_UART_scl_Write(val)

    #define ROSSerial_UART_SET_I2C_SCL_HSIOM_SEL(sel) \
                          ROSSerial_UART_SET_HSIOM_SEL(ROSSerial_UART_SCL_HSIOM_REG,  \
                                                         ROSSerial_UART_SCL_HSIOM_MASK, \
                                                         ROSSerial_UART_SCL_HSIOM_POS,  \
                                                         (sel))
    #define ROSSerial_UART_WAIT_SCL_SET_HIGH  (0u == ROSSerial_UART_scl_Read())

/* Unconfigured SCB: scl signal */
#elif(ROSSerial_UART_MOSI_SCL_RX_WAKE_PIN)
    #define ROSSerial_UART_SET_I2C_SCL_DR(val) \
                            ROSSerial_UART_spi_mosi_i2c_scl_uart_rx_wake_Write(val)

    #define ROSSerial_UART_SET_I2C_SCL_HSIOM_SEL(sel) \
                    ROSSerial_UART_SET_HSIOM_SEL(ROSSerial_UART_MOSI_SCL_RX_WAKE_HSIOM_REG,  \
                                                   ROSSerial_UART_MOSI_SCL_RX_WAKE_HSIOM_MASK, \
                                                   ROSSerial_UART_MOSI_SCL_RX_WAKE_HSIOM_POS,  \
                                                   (sel))

    #define ROSSerial_UART_WAIT_SCL_SET_HIGH  (0u == ROSSerial_UART_spi_mosi_i2c_scl_uart_rx_wake_Read())

#elif(ROSSerial_UART_MOSI_SCL_RX_PIN)
    #define ROSSerial_UART_SET_I2C_SCL_DR(val) \
                            ROSSerial_UART_spi_mosi_i2c_scl_uart_rx_Write(val)


    #define ROSSerial_UART_SET_I2C_SCL_HSIOM_SEL(sel) \
                            ROSSerial_UART_SET_HSIOM_SEL(ROSSerial_UART_MOSI_SCL_RX_HSIOM_REG,  \
                                                           ROSSerial_UART_MOSI_SCL_RX_HSIOM_MASK, \
                                                           ROSSerial_UART_MOSI_SCL_RX_HSIOM_POS,  \
                                                           (sel))

    #define ROSSerial_UART_WAIT_SCL_SET_HIGH  (0u == ROSSerial_UART_spi_mosi_i2c_scl_uart_rx_Read())

#else
    #define ROSSerial_UART_SET_I2C_SCL_DR(val) \
                                                    do{ ; }while(0)
    #define ROSSerial_UART_SET_I2C_SCL_HSIOM_SEL(sel) \
                                                    do{ ; }while(0)

    #define ROSSerial_UART_WAIT_SCL_SET_HIGH  (0u)
#endif /* (ROSSerial_UART_MOSI_SCL_RX_PIN) */

/* SCB I2C: sda signal */
#if(ROSSerial_UART_I2C_PINS)
    #define ROSSerial_UART_WAIT_SDA_SET_HIGH  (0u == ROSSerial_UART_sda_Read())

/* Unconfigured SCB: sda signal */
#elif(ROSSerial_UART_MISO_SDA_TX_PIN)
    #define ROSSerial_UART_WAIT_SDA_SET_HIGH  (0u == ROSSerial_UART_spi_miso_i2c_sda_uart_tx_Read())

#else
    #define ROSSerial_UART_WAIT_SDA_SET_HIGH  (0u)
#endif /* (ROSSerial_UART_MOSI_SCL_RX_PIN) */

#endif /* (CY_SCB_PINS_ROSSerial_UART_H) */


/* [] END OF FILE */
