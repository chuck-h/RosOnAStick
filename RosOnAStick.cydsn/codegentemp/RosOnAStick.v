// ======================================================================
// RosOnAStick.v generated from TopDesign.cysch
// 09/04/2017 at 18:17
// This file is auto generated. ANY EDITS YOU MAKE MAY BE LOST WHEN THIS FILE IS REGENERATED!!!
// ======================================================================

/* -- WARNING: The following section of defines are deprecated and will be removed in a future release -- */
`define CYDEV_CHIP_DIE_LEOPARD 1
`define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3
`define CYDEV_CHIP_REV_LEOPARD_ES3 3
`define CYDEV_CHIP_REV_LEOPARD_ES2 1
`define CYDEV_CHIP_REV_LEOPARD_ES1 0
`define CYDEV_CHIP_DIE_TMA4 2
`define CYDEV_CHIP_REV_TMA4_PRODUCTION 17
`define CYDEV_CHIP_REV_TMA4_ES 17
`define CYDEV_CHIP_REV_TMA4_ES2 33
`define CYDEV_CHIP_DIE_PSOC4A 3
`define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17
`define CYDEV_CHIP_REV_PSOC4A_ES0 17
`define CYDEV_CHIP_DIE_PSOC5LP 4
`define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0
`define CYDEV_CHIP_REV_PSOC5LP_ES0 0
`define CYDEV_CHIP_DIE_PANTHER 5
`define CYDEV_CHIP_REV_PANTHER_PRODUCTION 1
`define CYDEV_CHIP_REV_PANTHER_ES1 1
`define CYDEV_CHIP_REV_PANTHER_ES0 0
`define CYDEV_CHIP_DIE_EXPECT 3
`define CYDEV_CHIP_REV_EXPECT 17
`define CYDEV_CHIP_DIE_ACTUAL 3
/* -- WARNING: The previous section of defines are deprecated and will be removed in a future release -- */
`define CYDEV_CHIP_FAMILY_UNKNOWN 0
`define CYDEV_CHIP_MEMBER_UNKNOWN 0
`define CYDEV_CHIP_FAMILY_PSOC3 1
`define CYDEV_CHIP_MEMBER_3A 1
`define CYDEV_CHIP_REVISION_3A_PRODUCTION 3
`define CYDEV_CHIP_REVISION_3A_ES3 3
`define CYDEV_CHIP_REVISION_3A_ES2 1
`define CYDEV_CHIP_REVISION_3A_ES1 0
`define CYDEV_CHIP_FAMILY_PSOC4 2
`define CYDEV_CHIP_MEMBER_4G 2
`define CYDEV_CHIP_REVISION_4G_PRODUCTION 17
`define CYDEV_CHIP_REVISION_4G_ES 17
`define CYDEV_CHIP_REVISION_4G_ES2 33
`define CYDEV_CHIP_MEMBER_4U 3
`define CYDEV_CHIP_REVISION_4U_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4E 4
`define CYDEV_CHIP_REVISION_4E_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4O 5
`define CYDEV_CHIP_REVISION_4O_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4N 6
`define CYDEV_CHIP_REVISION_4N_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4D 7
`define CYDEV_CHIP_REVISION_4D_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4J 8
`define CYDEV_CHIP_REVISION_4J_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4K 9
`define CYDEV_CHIP_REVISION_4K_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4H 10
`define CYDEV_CHIP_REVISION_4H_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4A 11
`define CYDEV_CHIP_REVISION_4A_PRODUCTION 17
`define CYDEV_CHIP_REVISION_4A_ES0 17
`define CYDEV_CHIP_MEMBER_4F 12
`define CYDEV_CHIP_REVISION_4F_PRODUCTION 0
`define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0
`define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0
`define CYDEV_CHIP_MEMBER_4F 13
`define CYDEV_CHIP_REVISION_4F_PRODUCTION 0
`define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0
`define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0
`define CYDEV_CHIP_MEMBER_4M 14
`define CYDEV_CHIP_REVISION_4M_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4L 15
`define CYDEV_CHIP_REVISION_4L_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4I 16
`define CYDEV_CHIP_REVISION_4I_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4C 17
`define CYDEV_CHIP_REVISION_4C_PRODUCTION 0
`define CYDEV_CHIP_FAMILY_PSOC5 3
`define CYDEV_CHIP_MEMBER_5B 18
`define CYDEV_CHIP_REVISION_5B_PRODUCTION 0
`define CYDEV_CHIP_REVISION_5B_ES0 0
`define CYDEV_CHIP_MEMBER_5A 19
`define CYDEV_CHIP_REVISION_5A_PRODUCTION 1
`define CYDEV_CHIP_REVISION_5A_ES1 1
`define CYDEV_CHIP_REVISION_5A_ES0 0
`define CYDEV_CHIP_FAMILY_USED 2
`define CYDEV_CHIP_MEMBER_USED 11
`define CYDEV_CHIP_REVISION_USED 17
// Component: ZeroTerminal
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\ZeroTerminal"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\ZeroTerminal\ZeroTerminal.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\ZeroTerminal"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\ZeroTerminal\ZeroTerminal.v"
`endif

// Component: cy_virtualmux_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\cy_virtualmux_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\cy_virtualmux_v1_0\cy_virtualmux_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\cy_virtualmux_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\cy_virtualmux_v1_0\cy_virtualmux_v1_0.v"
`endif

// Component: or_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\or_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\or_v1_0\or_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\or_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\or_v1_0\or_v1_0.v"
`endif

// SCB_P4_v1_20(BitWidthReplacementStringRx=uint8, BitWidthReplacementStringTx=uint8, BufNum=1, Cond=#, DBGW_SCB_IP_V0=true, DBGW_SCB_IP_V1=false, EndCond=#endif, EzI2cBitWidthReplacementString=uint16, EzI2cClkFreqDes=1600, EzI2cClockFromTerm=false, EzI2cClockStretching=true, EzI2cDataRate=100, EzI2cIsPrimarySlaveAddressHex=true, EzI2cIsSecondarySlaveAddressHex=true, EzI2cMedianFilterEnable=true, EzI2cNumberOfAddresses=0, EzI2cOvsFactor=16, EzI2cPrimarySlaveAddress=8, EzI2cSecondarySlaveAddress=9, EzI2cSlaveAddressMask=254, EzI2cSubAddressSize=0, EzI2cWakeEnable=false, I2cAcceptAddress=false, I2cClkFreqDes=1600, I2cClockFromTerm=false, I2cDataRate=100, I2cExternIntrHandler=false, I2cIsSlaveAddressHex=true, I2cIsSlaveAddressMaskHex=true, I2cMedianFilterEnable=true, I2cMode=1, I2cOvsFactor=16, I2cOvsFactorHigh=8, I2cOvsFactorLow=8, I2cSlaveAddress=8, I2cSlaveAddressMask=254, I2cWakeEnable=false, PinName0Unconfig=spi_mosi_i2c_scl_uart_rx, PinName1Unconfig=spi_miso_i2c_sda_uart_tx, RemoveI2cPins=true, RemoveMisoSdaTx=true, RemoveMosiSclRx=true, RemoveMosiSclRxWake=true, RemoveScbClk=true, RemoveScbIrq=false, RemoveSpiMasterPins=true, RemoveSpiMasterSs0Pin=true, RemoveSpiMasterSs1Pin=true, RemoveSpiMasterSs2Pin=true, RemoveSpiMasterSs3Pin=true, RemoveSpiSclk=true, RemoveSpiSlavePins=true, RemoveSpiSs0=true, RemoveSpiSs1=true, RemoveSpiSs2=true, RemoveSpiSs3=true, RemoveUartRxPin=false, RemoveUartRxTxPin=true, RemoveUartRxWake=true, RemoveUartRxWakeupIrq=true, RemoveUartTxPin=false, ScbClkFreqDes=1843.2, ScbClockSelect=0, ScbClockTermEnable=true, ScbCustomIntrHandlerEnable=true, ScbInterruptTermEnable=false, ScbMisoSdaTxEnable=true, ScbMode=4, ScbModeHw=2, ScbMosiSclRxEnable=true, ScbRxWakeIrqEnable=false, ScbSclkEnable=false, ScbSs0Enable=false, ScbSs1Enable=false, ScbSs2Enable=false, ScbSs3Enable=false, SpiBitRate=1000, SpiBitsOrder=1, SpiClkFreqDes=16000, SpiClockFromTerm=false, SpiInterruptMode=0, SpiIntrMasterSpiDone=false, SpiIntrRxFull=false, SpiIntrRxNotEmpty=false, SpiIntrRxOverflow=false, SpiIntrRxTrigger=false, SpiIntrRxUnderflow=false, SpiIntrSlaveBusError=false, SpiIntrTxEmpty=false, SpiIntrTxNotFull=false, SpiIntrTxOverflow=false, SpiIntrTxTrigger=false, SpiIntrTxUnderflow=false, SpiLateMisoSampleEnable=false, SpiMedianFilterEnable=false, SpiMode=0, SpiNumberOfRxDataBits=8, SpiNumberOfSelectLines=1, SpiNumberOfTxDataBits=8, SpiOvsFactor=16, SpiRxBufferSize=8, SpiRxIntrMask=0, SpiRxTriggerLevel=7, SpiSclkMode=0, SpiSubMode=0, SpiTransferSeparation=1, SpiTxBufferSize=8, SpiTxIntrMask=0, SpiTxTriggerLevel=0, SpiWakeEnable=false, UartClkFreqDes=1843.2, UartClockFromTerm=true, UartDataRate=115200, UartDirection=3, UartDropOnFrameErr=false, UartDropOnParityErr=false, UartInterruptMode=1, UartIntrRxFrameErr=false, UartIntrRxFull=false, UartIntrRxNotEmpty=true, UartIntrRxOverflow=false, UartIntrRxParityErr=false, UartIntrRxTrigger=false, UartIntrRxUnderflow=false, UartIntrTxEmpty=false, UartIntrTxNotFull=false, UartIntrTxOverflow=false, UartIntrTxTrigger=false, UartIntrTxUartDone=false, UartIntrTxUartLostArb=false, UartIntrTxUartNack=false, UartIntrTxUnderflow=false, UartIrdaLowPower=false, UartIrdaPolarity=0, UartMedianFilterEnable=false, UartMpEnable=false, UartMpRxAcceptAddress=false, UartMpRxAddress=2, UartMpRxAddressMask=255, UartNumberOfDataBits=8, UartNumberOfStopBits=2, UartOvsFactor=16, UartParityType=2, UartRxBufferSize=64, UartRxEnable=true, UartRxIntrMask=4, UartRxTriggerLevel=7, UartSmCardRetryOnNack=false, UartSubMode=0, UartTxBufferSize=128, UartTxEnable=true, UartTxIntrMask=0, UartTxTriggerLevel=0, UartWakeEnable=false, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMPONENT_NAME=SCB_P4_v1_20, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=ROSSerial_UART, CY_INSTANCE_SHORT_NAME=ROSSerial_UART, CY_MAJOR_VERSION=1, CY_MINOR_VERSION=20, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  3.3 CP3, INSTANCE_NAME=ROSSerial_UART, )
module SCB_P4_v1_20_0 (
    sclk,
    interrupt,
    clock);
    output      sclk;
    output      interrupt;
    input       clock;


          wire  Net_427;
          wire  Net_416;
          wire  Net_245;
          wire  Net_676;
          wire  Net_452;
          wire  Net_459;
          wire  Net_496;
          wire  Net_660;
          wire  Net_656;
          wire  Net_687;
          wire  Net_703;
          wire  Net_682;
          wire  Net_422;
          wire  Net_379;
          wire  Net_555;
          wire  Net_387;
          wire  uncfg_rx_irq;
          wire  Net_458;
          wire  Net_596;
          wire  Net_252;
          wire  Net_547;
          wire  rx_irq;
          wire [3:0] ss;
          wire  Net_467;
          wire  Net_655;
          wire  Net_663;
          wire  Net_581;
          wire  Net_474;
          wire  Net_651;
          wire  Net_580;
          wire  Net_654;
          wire  Net_653;
          wire  Net_652;
          wire  Net_284;

    ZeroTerminal ZeroTerminal_5 (
        .z(Net_459));

	// select_s_VM (cy_virtualmux_v1_0)
	assign Net_652 = Net_459;

    ZeroTerminal ZeroTerminal_4 (
        .z(Net_452));

    ZeroTerminal ZeroTerminal_3 (
        .z(Net_676));

    ZeroTerminal ZeroTerminal_2 (
        .z(Net_245));

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_416));

	// rx_VM (cy_virtualmux_v1_0)
	assign Net_654 = Net_379;

	// rx_wake_VM (cy_virtualmux_v1_0)
	assign Net_682 = uncfg_rx_irq;

	// clock_VM (cy_virtualmux_v1_0)
	assign Net_655 = clock;

	// sclk_s_VM (cy_virtualmux_v1_0)
	assign Net_653 = Net_416;

	// mosi_s_VM (cy_virtualmux_v1_0)
	assign Net_651 = Net_676;

	// miso_m_VM (cy_virtualmux_v1_0)
	assign Net_663 = Net_245;

	wire [0:0] tmpOE__tx_net;
	wire [0:0] tmpFB_0__tx_net;
	wire [0:0] tmpIO_0__tx_net;
	wire [0:0] tmpINTERRUPT_0__tx_net;
	electrical [0:0] tmpSIOVREF__tx_net;

	cy_psoc3_pins_v1_10
		#(.id("43ec2fa1-bf22-4b71-9477-b6ca7b97f0b0/23b8206d-1c77-4e61-be4a-b4037d5de5fc"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b0),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("B"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b0),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b00),
		  .width(1))
		tx
		 (.oe(tmpOE__tx_net),
		  .y({Net_656}),
		  .fb({tmpFB_0__tx_net[0:0]}),
		  .io({tmpIO_0__tx_net[0:0]}),
		  .siovref(tmpSIOVREF__tx_net),
		  .interrupt({tmpINTERRUPT_0__tx_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__tx_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    ZeroTerminal ZeroTerminal_7 (
        .z(Net_427));


    assign sclk = Net_284 | Net_427;


	cy_isr_v1_0
		#(.int_type(2'b10))
		SCB_IRQ
		 (.int_signal(interrupt));


	wire [0:0] tmpOE__rx_net;
	wire [0:0] tmpIO_0__rx_net;
	wire [0:0] tmpINTERRUPT_0__rx_net;
	electrical [0:0] tmpSIOVREF__rx_net;

	cy_psoc3_pins_v1_10
		#(.id("43ec2fa1-bf22-4b71-9477-b6ca7b97f0b0/78e33e5d-45ea-4b75-88d5-73274e8a7ce4"),
		  .drive_mode(3'b001),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b0),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("I"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b0),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b00),
		  .width(1))
		rx
		 (.oe(tmpOE__rx_net),
		  .y({1'b0}),
		  .fb({Net_379}),
		  .io({tmpIO_0__rx_net[0:0]}),
		  .siovref(tmpSIOVREF__rx_net),
		  .interrupt({tmpINTERRUPT_0__rx_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__rx_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    cy_m0s8_scb_v1_0 SCB (
        .rx(Net_654),
        .miso_m(Net_663),
        .clock(Net_655),
        .select_m(ss[3:0]),
        .sclk_m(Net_687),
        .mosi_s(Net_651),
        .select_s(Net_652),
        .sclk_s(Net_653),
        .mosi_m(Net_660),
        .scl(Net_580),
        .sda(Net_581),
        .tx(Net_656),
        .miso_s(Net_703),
        .interrupt(interrupt));
    defparam SCB.scb_mode = 2;



endmodule

// SCB_P4_v3_20(ApplySbClockParam=false, BitWidthReplacementStringRx=uint8, BitWidthReplacementStringTx=uint8, BufNum=1, Cond=#, DBGW_SCB_IP_V0=true, DBGW_SCB_IP_V1=false, DBGW_SCB_IP_V2=false, DW_Hide_i2c=false, DW_Hide_Scbv0Feature=false, DW_Hide_Scbv2Feature=true, DW_Hide_Spi=true, DW_Hide_Uart=true, DW_Hide_UartFlowControl=true, DW_INTR_SPI_EC=, DW_INTR_SPI_EC_MASK=, DW_INTR_SPI_EC_MASKED=, DW_SPI_CTRL=, DW_SPI_STATUS=, DW_UART_CTRL=, DW_UART_FLOW_CTRL=, DW_UART_RX_CTRL=, DW_UART_TX_CTRL=, EndCond=#endif, EzI2cBitWidthReplacementString=uint16, EzI2cBusVoltage=3.3, EzI2cByteModeEnable=false, EzI2cClkFreqDes=1550, EzI2cClockFromTerm=false, EzI2cClockStretching=true, EzI2cDataRate=100, EzI2cIsPrimarySlaveAddressHex=true, EzI2cIsSecondarySlaveAddressHex=true, EzI2cMedianFilterEnable=true, EzI2cNumberOfAddresses=0, EzI2cOvsFactor=16, EzI2cPrimarySlaveAddress=8, EzI2cSecondarySlaveAddress=9, EzI2cSlaveAddressMask=254, EzI2cSlewRate=0, EzI2cSubAddressSize=0, EzI2cWakeEnable=false, I2cAcceptAddress=false, I2cAcceptGeneralCall=false, I2cBusVoltage=3.3, I2cBusVoltageLevel=, I2cByteModeEnable=false, I2cClkFreqDes=1550, I2cClockFromTerm=false, I2cDataRate=100, I2cExternIntrHandler=false, I2cIsSlaveAddressHex=true, I2cIsSlaveAddressMaskHex=true, I2cManualOversampleControl=false, I2cMedianFilterEnable=true, I2cMode=2, I2cOvsFactor=16, I2cOvsFactorHigh=8, I2cOvsFactorLow=8, I2cSlaveAddress=8, I2cSlaveAddressMask=254, I2cSlewRate=0, I2cSlewRateSettings=0, I2cWakeEnable=false, PinLocationP4A=true, PinName0Unconfig=uart_rx_i2c_scl_spi_mosi, PinName0UnconfigWake=uart_rx_wake_i2c_scl_spi_mosi, PinName1Unconfig=uart_tx_i2c_sda_spi_miso, PinName2Unconfig=spi_sclk, PinName3Unconfig=spi_ss0, Pn0Unconfig=RX_SCL_MOSI, Pn0UnconfigWake=RX_WAKE_SCL_MOSI, Pn1Unconfig=TX_SDA_MISO, Pn2Unconfig=SCLK, Pn3Unconfig=SS0, RemoveI2cPins=false, RemoveMisoSdaTx=true, RemoveMosiSclRx=true, RemoveMosiSclRxWake=true, RemoveScbClk=false, RemoveScbIrq=false, RemoveSpiMasterMiso=true, RemoveSpiMasterMosi=true, RemoveSpiMasterPins=true, RemoveSpiMasterSclk=true, RemoveSpiMasterSs0Pin=true, RemoveSpiMasterSs1Pin=true, RemoveSpiMasterSs2Pin=true, RemoveSpiMasterSs3Pin=true, RemoveSpiSclk=true, RemoveSpiSlaveMiso=true, RemoveSpiSlaveMosi=true, RemoveSpiSlavePins=true, RemoveSpiSs0=true, RemoveSpiSs1=true, RemoveSpiSs2=true, RemoveSpiSs3=true, RemoveUartCtsPin=true, RemoveUartRtsPin=true, RemoveUartRxPin=true, RemoveUartRxTxPin=true, RemoveUartRxWake=true, RemoveUartRxWakeupIrq=true, RemoveUartTxPin=true, RxTriggerOutputEnable=false, ScbClkFreqDes=1550, ScbClkMinusTolerance=0, ScbClkPlusTolerance=106.451612903226, ScbClockSelect=1, ScbClockTermEnable=false, ScbCustomIntrHandlerEnable=true, ScbInterruptTermEnable=false, ScbMisoSdaTxEnable=true, ScbMode=1, ScbModeHw=0, ScbMosiSclRxEnable=true, ScbRxWakeIrqEnable=false, ScbSclkEnable=false, ScbSs0Enable=false, ScbSs1Enable=false, ScbSs2Enable=false, ScbSs3Enable=false, ScbSymbolVisibility=0, SpiBitRate=1000, SpiBitsOrder=1, SpiByteModeEnable=false, SpiClkFreqDes=16000, SpiClockFromTerm=false, SpiFreeRunningSclk=false, SpiInterruptMode=0, SpiIntrMasterSpiDone=false, SpiIntrRxFull=false, SpiIntrRxNotEmpty=false, SpiIntrRxOverflow=false, SpiIntrRxTrigger=false, SpiIntrRxUnderflow=false, SpiIntrSlaveBusError=false, SpiIntrTxEmpty=false, SpiIntrTxNotFull=false, SpiIntrTxOverflow=false, SpiIntrTxTrigger=false, SpiIntrTxUnderflow=false, SpiLateMisoSampleEnable=false, SpiManualOversampleControl=true, SpiMasterMode=false, SpiMedianFilterEnable=false, SpimMisoTermEnable=false, SpimMosiTermEnable=false, SpiMode=0, SpimSclkTermEnable=false, SpimSs0TermEnable=false, SpimSs1TermEnable=false, SpimSs2TermEnable=false, SpimSs3TermEnable=false, SpiNumberOfRxDataBits=8, SpiNumberOfSelectLines=1, SpiNumberOfTxDataBits=8, SpiOvsFactor=16, SpiRemoveMiso=false, SpiRemoveMosi=false, SpiRemoveSclk=false, SpiRxBufferSize=8, SpiRxIntrMask=0, SpiRxOutputEnable=false, SpiRxTriggerLevel=7, SpiSclkMode=0, SpiSlaveMode=false, SpiSmartioEnable=false, SpisMisoTermEnable=false, SpisMosiTermEnable=false, SpiSs0Polarity=0, SpiSs1Polarity=0, SpiSs2Polarity=0, SpiSs3Polarity=0, SpisSclkTermEnable=false, SpisSsTermEnable=false, SpiSubMode=0, SpiTransferSeparation=1, SpiTxBufferSize=8, SpiTxIntrMask=0, SpiTxOutputEnable=false, SpiTxTriggerLevel=0, SpiWakeEnable=false, TermMode_clock=0, TermMode_interrupt=0, TermVisibility_clock=false, TermVisibility_interrupt=false, TriggerOutputEnable=false, TxTriggerOutputEnable=false, UartByteModeEnable=false, UartClkFreqDes=1382.4, UartClockFromTerm=false, UartCtsEnable=false, UartCtsPolarity=0, UartCtsTermEnable=false, UartDataRate=115200, UartDirection=3, UartDropOnFrameErr=false, UartDropOnParityErr=false, UartInterruptMode=0, UartIntrRxFrameErr=false, UartIntrRxFull=false, UartIntrRxNotEmpty=false, UartIntrRxOverflow=false, UartIntrRxParityErr=false, UartIntrRxTrigger=false, UartIntrRxUnderflow=false, UartIntrTxEmpty=false, UartIntrTxNotFull=false, UartIntrTxOverflow=false, UartIntrTxTrigger=false, UartIntrTxUartDone=false, UartIntrTxUartLostArb=false, UartIntrTxUartNack=false, UartIntrTxUnderflow=false, UartIrdaLowPower=false, UartIrdaPolarity=0, UartMedianFilterEnable=false, UartMpEnable=false, UartMpRxAcceptAddress=false, UartMpRxAddress=2, UartMpRxAddressMask=255, UartNumberOfDataBits=8, UartNumberOfStopBits=2, UartOvsFactor=12, UartParityType=2, UartRtsEnable=false, UartRtsPolarity=0, UartRtsTermEnable=false, UartRtsTriggerLevel=4, UartRxBufferSize=8, UartRxEnable=false, UartRxIntrMask=0, UartRxOutputEnable=false, UartRxTermEnable=false, UartRxTriggerLevel=7, UartSmartioEnable=false, UartSmCardRetryOnNack=false, UartSubMode=0, UartTxBufferSize=8, UartTxEnable=false, UartTxIntrMask=0, UartTxOutputEnable=false, UartTxTermEnable=false, UartTxTriggerLevel=0, UartWakeEnable=false, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMPONENT_NAME=SCB_P4_v3_20, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=I2CMaster, CY_INSTANCE_SHORT_NAME=I2CMaster, CY_MAJOR_VERSION=3, CY_MINOR_VERSION=20, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  3.3 CP3, INSTANCE_NAME=I2CMaster, )
module SCB_P4_v3_20_1 (
    interrupt,
    clock,
    rx_tr_out,
    tx_tr_out,
    s_mosi,
    s_sclk,
    s_ss,
    m_miso,
    m_mosi,
    m_sclk,
    m_ss0,
    m_ss1,
    m_ss2,
    m_ss3,
    s_miso,
    rx_in,
    cts_in,
    tx_out,
    rts_out);
    output      interrupt;
    input       clock;
    output      rx_tr_out;
    output      tx_tr_out;
    input       s_mosi;
    input       s_sclk;
    input       s_ss;
    input       m_miso;
    output      m_mosi;
    output      m_sclk;
    output      m_ss0;
    output      m_ss1;
    output      m_ss2;
    output      m_ss3;
    output      s_miso;
    input       rx_in;
    input       cts_in;
    output      tx_out;
    output      rts_out;


          wire  uncfg_rx_irq;
          wire  sclk_m_wire;
          wire  Net_1264;
          wire  Net_1258;
          wire  rx_irq;
          wire [3:0] select_m_wire;
          wire  Net_1099;
          wire  Net_1090;
          wire  Net_467;
          wire  Net_1316;
          wire  Net_252;
          wire  Net_1089;
          wire  Net_1320;
          wire  Net_1257;
          wire  sclk_s_wire;
          wire  Net_1268;
          wire  Net_1297;
          wire  Net_547;
          wire  Net_1001;
          wire  mosi_s_wire;
          wire  rts_wire;
          wire  mosi_m_wire;
          wire  Net_891;
          wire  Net_1263;
          wire  miso_s_wire;
          wire  cts_wire;
          wire  Net_899;
          wire  tx_wire;
          wire  Net_1028;
          wire  rx_wire;
          wire  Net_916;
          wire  Net_1000;
          wire  scl_wire;
          wire  miso_m_wire;
          wire  Net_1172;
          wire  Net_1170;
          wire  select_s_wire;
          wire  sda_wire;
          wire  Net_847;


	cy_clock_v1_0
		#(.id("3dbba19d-7851-4a83-b204-a0a386fe8d68/2dc2d7a8-ce2b-43c7-af4a-821c8cd73ccf"),
		  .source_clock_id(""),
		  .divisor(0),
		  .period("645161290.322581"),
		  .is_direct(0),
		  .is_digital(0))
		SCBCLK
		 (.clock_out(Net_847));


	// select_s_VM (cy_virtualmux_v1_0)
	assign select_s_wire = s_ss;

	// rx_VM (cy_virtualmux_v1_0)
	assign rx_wire = rx_in;

	// rx_wake_VM (cy_virtualmux_v1_0)
	assign Net_1257 = uncfg_rx_irq;

	// clock_VM (cy_virtualmux_v1_0)
	assign Net_1170 = Net_847;

	// sclk_s_VM (cy_virtualmux_v1_0)
	assign sclk_s_wire = s_sclk;

	// mosi_s_VM (cy_virtualmux_v1_0)
	assign mosi_s_wire = s_mosi;

	// miso_m_VM (cy_virtualmux_v1_0)
	assign miso_m_wire = m_miso;

	wire [0:0] tmpOE__sda_net;
	wire [0:0] tmpFB_0__sda_net;
	wire [0:0] tmpINTERRUPT_0__sda_net;
	electrical [0:0] tmpSIOVREF__sda_net;

	cy_psoc3_pins_v1_10
		#(.id("3dbba19d-7851-4a83-b204-a0a386fe8d68/5382e105-1382-4a2e-b9f4-3bb2feba71e0"),
		  .drive_mode(3'b100),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b0),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("B"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b00),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		sda
		 (.oe(tmpOE__sda_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__sda_net[0:0]}),
		  .io({sda_wire}),
		  .siovref(tmpSIOVREF__sda_net),
		  .interrupt({tmpINTERRUPT_0__sda_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__sda_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__scl_net;
	wire [0:0] tmpFB_0__scl_net;
	wire [0:0] tmpINTERRUPT_0__scl_net;
	electrical [0:0] tmpSIOVREF__scl_net;

	cy_psoc3_pins_v1_10
		#(.id("3dbba19d-7851-4a83-b204-a0a386fe8d68/22863ebe-a37b-476f-b252-6e49a8c00b12"),
		  .drive_mode(3'b100),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b0),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("B"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b00),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		scl
		 (.oe(tmpOE__scl_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__scl_net[0:0]}),
		  .io({scl_wire}),
		  .siovref(tmpSIOVREF__scl_net),
		  .interrupt({tmpINTERRUPT_0__scl_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__scl_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    ZeroTerminal ZeroTerminal_7 (
        .z(Net_1099));


    assign Net_1258 = Net_847 | Net_1099;


	cy_isr_v1_0
		#(.int_type(2'b10))
		SCB_IRQ
		 (.int_signal(interrupt));


	// cts_VM (cy_virtualmux_v1_0)
	assign cts_wire = cts_in;

    cy_m0s8_scb_v2_0 SCB (
        .rx(rx_wire),
        .miso_m(miso_m_wire),
        .select_m(select_m_wire[3:0]),
        .sclk_m(sclk_m_wire),
        .mosi_s(mosi_s_wire),
        .select_s(select_s_wire),
        .sclk_s(sclk_s_wire),
        .mosi_m(mosi_m_wire),
        .scl(scl_wire),
        .sda(sda_wire),
        .tx(tx_wire),
        .miso_s(miso_s_wire),
        .interrupt(interrupt),
        .cts(cts_wire),
        .rts(rts_wire),
        .tx_req(tx_tr_out),
        .rx_req(rx_tr_out),
        .clock(Net_1170));
    defparam SCB.scb_mode = 0;

	// Device_VM4 (cy_virtualmux_v1_0)
	assign uncfg_rx_irq = Net_1028;


    assign m_mosi = mosi_m_wire;

    assign m_sclk = sclk_m_wire;

    assign m_ss0 = select_m_wire[0];

    assign m_ss1 = select_m_wire[1];

    assign m_ss2 = select_m_wire[2];

    assign m_ss3 = select_m_wire[3];

    assign s_miso = miso_s_wire;

    assign tx_out = tx_wire;

    assign rts_out = rts_wire;


endmodule

// Component: cy_analog_virtualmux_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\cy_analog_virtualmux_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\cy_analog_virtualmux_v1_0\cy_analog_virtualmux_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\cy_analog_virtualmux_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\cy_analog_virtualmux_v1_0\cy_analog_virtualmux_v1_0.v"
`endif

// Component: Bus_Connect_v1_10
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cycomponentlibrary\CyComponentLibrary.cylib\Bus_Connect_v1_10"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cycomponentlibrary\CyComponentLibrary.cylib\Bus_Connect_v1_10\Bus_Connect_v1_10.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cycomponentlibrary\CyComponentLibrary.cylib\Bus_Connect_v1_10"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cycomponentlibrary\CyComponentLibrary.cylib\Bus_Connect_v1_10\Bus_Connect_v1_10.v"
`endif

// ADC_SAR_SEQ_P4_v1_10(AdcAClock=4, AdcAdjust=0, AdcAlternateResolution=0, AdcAvgMode=1, AdcAvgSamplesNum=0, AdcBClock=4, AdcCClock=4, AdcChannelsEnConf=7, AdcChannelsModeConf=0, AdcClock=1, AdcClockFrequency=8999964, AdcCompareMode=0, AdcDataFormatJustification=0, AdcDClock=4, AdcDifferentialResultFormat=1, AdcHighLimit=2047, AdcInjChannelEnabled=false, AdcInputBufGain=0, AdcLowLimit=0, AdcMaxResolution=12, AdcSampleMode=0, AdcSarMuxChannelConfig=000, AdcSequencedChannels=3, AdcSingleEndedNegativeInput=0, AdcSingleResultFormat=1, AdcSymbolHasSingleEndedInputChannel=false, AdcTotalChannels=3, AdcVrefSelect=3, AdcVrefVoltage_mV=1024, rm_int=false, SeqChannelsConfigTable=<?xml version="1.0" encoding="utf-16"?><CyChannelsConfigTable xmlns:Version="1_10"><m_channelsConfigTable><CyChannelsConfigTableRow><m_enabled>false</m_enabled><m_resolution>Twelve</m_resolution><m_mode>Diff</m_mode><m_averaged>false</m_averaged><m_acqTime>AClocks</m_acqTime><m_limitsDetectIntrEnabled>false</m_limitsDetectIntrEnabled><m_saturationIntrEnabled>false</m_saturationIntrEnabled></CyChannelsConfigTableRow><CyChannelsConfigTableRow><m_enabled>true</m_enabled><m_resolution>Twelve</m_resolution><m_mode>Single</m_mode><m_averaged>false</m_averaged><m_acqTime>AClocks</m_acqTime><m_limitsDetectIntrEnabled>false</m_limitsDetectIntrEnabled><m_saturationIntrEnabled>false</m_saturationIntrEnabled></CyChannelsConfigTableRow><CyChannelsConfigTableRow><m_enabled>true</m_enabled><m_resolution>Twelve</m_resolution><m_mode>Single</m_mode><m_averaged>false</m_averaged><m_acqTime>AClocks</m_acqTime><m_limitsDetectIntrEnabled>false</m_limitsDetectIntrEnabled><m_saturationIntrEnabled>false</m_saturationIntrEnabled></CyChannelsConfigTableRow><CyChannelsConfigTableRow><m_enabled>true</m_enabled><m_resolution>Twelve</m_resolution><m_mode>Single</m_mode><m_averaged>false</m_averaged><m_acqTime>AClocks</m_acqTime><m_limitsDetectIntrEnabled>false</m_limitsDetectIntrEnabled><m_saturationIntrEnabled>false</m_saturationIntrEnabled></CyChannelsConfigTableRow></m_channelsConfigTable></CyChannelsConfigTable>, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMPONENT_NAME=ADC_SAR_SEQ_P4_v1_10, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=ADC_SAR_SEQ, CY_INSTANCE_SHORT_NAME=ADC_SAR_SEQ, CY_MAJOR_VERSION=1, CY_MINOR_VERSION=10, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  3.3 CP3, INSTANCE_NAME=ADC_SAR_SEQ, )
module ADC_SAR_SEQ_P4_v1_10_2 (
    soc,
    aclk,
    Vref,
    sdone,
    eoc,
    vinPlus2,
    vinPlus1,
    vinPlus0);
    input       soc;
    input       aclk;
    inout       Vref;
    electrical  Vref;
    output      sdone;
    output      eoc;
    inout       vinPlus2;
    electrical  vinPlus2;
    inout       vinPlus1;
    electrical  vinPlus1;
    inout       vinPlus0;
    electrical  vinPlus0;


          wire  Net_3093;
          wire  Net_3090;
          wire  Net_2786;
    electrical  Net_2785;
    electrical  Net_2784;
    electrical  Net_2783;
          wire  Net_2782;
    electrical  Net_2781;
    electrical  Net_2780;
    electrical  Net_2779;
    electrical  Net_2575;
    electrical  Net_2574;
    electrical  Net_2573;
    electrical  Net_2572;
    electrical  Net_2571;
    electrical  Net_2570;
    electrical  Net_2569;
    electrical  Net_2568;
    electrical  Net_2567;
    electrical  Net_2566;
    electrical  Net_2565;
    electrical  Net_2564;
    electrical  muxout_plus;
    electrical  Net_2563;
    electrical  Net_2562;
    electrical  Net_2561;
    electrical  Net_2560;
    electrical  Net_2559;
    electrical  Net_2557;
    electrical  Net_2556;
    electrical  Net_2555;
    electrical  Net_2554;
    electrical  muxout_minus;
    electrical  Net_2553;
    electrical  Net_2552;
    electrical  Net_2551;
    electrical  Net_2550;
    electrical  Net_2549;
    electrical  Net_2548;
    electrical  Net_2547;
    electrical [16:0] mux_bus_minus;
    electrical [16:0] mux_bus_plus;
    electrical  Net_2546;
    electrical  Net_2545;
    electrical  Net_2544;
    electrical  Net_2542;
    electrical  Net_2541;
          wire  Net_2221;
    electrical  Net_1849;
    electrical  Net_1848;
    electrical  Net_1846;
          wire  Net_2273;
          wire [11:0] Net_2272;
          wire  Net_2271;
          wire [3:0] Net_2270;
          wire  Net_2269;
          wire  Net_15;
          wire  Net_13;
          wire  Net_14;
          wire  Net_11;
          wire  Net_26;
    electrical  Net_2793;
    electrical  Net_2794;
          wire  Net_1845;
    electrical [2:0] Net_1450;
    electrical [2:0] Net_2375;
    electrical  Net_1851;
    electrical  Net_2580;
    electrical  Net_3046;
    electrical  Net_3016;
    electrical  Net_2020;
    electrical  Net_124;
    electrical  Net_2102;
    electrical  Net_2099;
          wire [1:0] Net_1963;
          wire  Net_17;
    electrical  Net_8;
    electrical  Net_43;

    cy_psoc4_sar_v1_0 cy_psoc4_sar (
        .vplus(Net_2020),
        .vminus(Net_124),
        .vref(Net_8),
        .ext_vref(Net_43),
        .clock(Net_17),
        .sw_negvref(Net_26),
        .cfg_st_sel(Net_1963[1:0]),
        .cfg_average(Net_11),
        .cfg_resolution(Net_14),
        .cfg_differential(Net_13),
        .trigger(soc),
        .data_hilo_sel(Net_15),
        .sample_done(sdone),
        .chan_id_valid(Net_2269),
        .chan_id(Net_2270[3:0]),
        .data_valid(Net_2271),
        .eos_intr(eoc),
        .data(Net_2272[11:0]),
        .irq(Net_2273));

	// clk_src_sel (cy_virtualmux_v1_0)
	assign Net_17 = Net_1845;

	// int_vref_sel (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 int_vref_sel_connect(Net_8, Net_1846);
	defparam int_vref_sel_connect.sig_width = 1;

	// ext_vref_sel (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 ext_vref_sel_connect(Net_43, Net_1848);
	defparam ext_vref_sel_connect.sig_width = 1;

    cy_analog_noconnect_v1_0 cy_analog_noconnect_1 (
        .noconnect(Net_1846));

	wire [0:0] tmpOE__Bypass_net;
	wire [0:0] tmpFB_0__Bypass_net;
	wire [0:0] tmpIO_0__Bypass_net;
	wire [0:0] tmpINTERRUPT_0__Bypass_net;
	electrical [0:0] tmpSIOVREF__Bypass_net;

	cy_psoc3_pins_v1_10
		#(.id("ec9ed0dc-1e17-417b-9469-0ca3144d4e79/16a808f6-2e13-45b9-bce0-b001c8655113"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b0),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1))
		Bypass
		 (.oe(tmpOE__Bypass_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Bypass_net[0:0]}),
		  .analog({Net_1848}),
		  .io({tmpIO_0__Bypass_net[0:0]}),
		  .siovref(tmpSIOVREF__Bypass_net),
		  .interrupt({tmpINTERRUPT_0__Bypass_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Bypass_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    ZeroTerminal ZeroTerminal_3 (
        .z(Net_14));

    ZeroTerminal ZeroTerminal_4 (
        .z(Net_13));

    ZeroTerminal ZeroTerminal_5 (
        .z(Net_15));

    ZeroTerminal ZeroTerminal_6 (
        .z(Net_1963[0]));

    ZeroTerminal ZeroTerminal_7 (
        .z(Net_1963[1]));


	cy_clock_v1_0
		#(.id("ec9ed0dc-1e17-417b-9469-0ca3144d4e79/a12a1691-924f-48e5-a017-176d592c3b32"),
		  .source_clock_id(""),
		  .divisor(0),
		  .period("111111555.557333"),
		  .is_direct(0),
		  .is_digital(0))
		intClock
		 (.clock_out(Net_1845));


    ZeroTerminal ZeroTerminal_2 (
        .z(Net_11));

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_26));

	// ext_vneg_sel (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 ext_vneg_sel_connect(Net_2580, Net_1851);
	defparam ext_vneg_sel_connect.sig_width = 1;

    cy_analog_noconnect_v1_0 cy_analog_noconnect_3 (
        .noconnect(Net_1851));

	// cy_analog_virtualmux_vplus9 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_vplus9_connect(mux_bus_plus[9], Net_2541);
	defparam cy_analog_virtualmux_vplus9_connect.sig_width = 1;

	// cy_analog_virtualmux_vplus8 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_vplus8_connect(mux_bus_plus[8], Net_2542);
	defparam cy_analog_virtualmux_vplus8_connect.sig_width = 1;

	// cy_analog_virtualmux_vplus1 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_vplus1_connect(mux_bus_plus[1], vinPlus1);
	defparam cy_analog_virtualmux_vplus1_connect.sig_width = 1;

	// cy_analog_virtualmux_vplus2 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_vplus2_connect(mux_bus_plus[2], vinPlus2);
	defparam cy_analog_virtualmux_vplus2_connect.sig_width = 1;

	// cy_analog_virtualmux_vplus3 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_vplus3_connect(mux_bus_plus[3], Net_2546);
	defparam cy_analog_virtualmux_vplus3_connect.sig_width = 1;

	// cy_analog_virtualmux_vplus4 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_vplus4_connect(mux_bus_plus[4], Net_2547);
	defparam cy_analog_virtualmux_vplus4_connect.sig_width = 1;

    cy_psoc4_sarmux_v1_0 cy_psoc4_sarmux_8 (
        .muxin_plus(Net_1450[2:0]),
        .muxin_minus(Net_2375[2:0]),
        .cmn_neg(Net_2580),
        .vout_plus(Net_2794),
        .vout_minus(Net_2793));
    defparam cy_psoc4_sarmux_8.input_mode = "000";
    defparam cy_psoc4_sarmux_8.muxin_width = 3;

	// cy_analog_virtualmux_vplus6 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_vplus6_connect(mux_bus_plus[6], Net_2548);
	defparam cy_analog_virtualmux_vplus6_connect.sig_width = 1;

	// cy_analog_virtualmux_vplus7 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_vplus7_connect(mux_bus_plus[7], Net_2549);
	defparam cy_analog_virtualmux_vplus7_connect.sig_width = 1;

    Bus_Connect_v1_10 Connect_1 (
        .in_bus(mux_bus_plus[16:0]),
        .out_bus(Net_1450[2:0]));
    defparam Connect_1.in_width = 17;
    defparam Connect_1.out_width = 3;

	// cy_analog_virtualmux_vplus5 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_vplus5_connect(mux_bus_plus[5], Net_2550);
	defparam cy_analog_virtualmux_vplus5_connect.sig_width = 1;

	// cy_analog_virtualmux_vplus10 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_vplus10_connect(mux_bus_plus[10], Net_2551);
	defparam cy_analog_virtualmux_vplus10_connect.sig_width = 1;

	// cy_analog_virtualmux_vplus11 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_vplus11_connect(mux_bus_plus[11], Net_2552);
	defparam cy_analog_virtualmux_vplus11_connect.sig_width = 1;

	// cy_analog_virtualmux_vplus12 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_vplus12_connect(mux_bus_plus[12], Net_2553);
	defparam cy_analog_virtualmux_vplus12_connect.sig_width = 1;

	// cy_analog_virtualmux_vplus13 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_vplus13_connect(mux_bus_plus[13], Net_2554);
	defparam cy_analog_virtualmux_vplus13_connect.sig_width = 1;

	// cy_analog_virtualmux_vplus14 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_vplus14_connect(mux_bus_plus[14], Net_2555);
	defparam cy_analog_virtualmux_vplus14_connect.sig_width = 1;

	// cy_analog_virtualmux_vplus15 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_vplus15_connect(mux_bus_plus[15], Net_2556);
	defparam cy_analog_virtualmux_vplus15_connect.sig_width = 1;

	// cy_analog_virtualmux_vplus_inj (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_vplus_inj_connect(Net_3016, Net_2557);
	defparam cy_analog_virtualmux_vplus_inj_connect.sig_width = 1;

    cy_analog_noconnect_v1_0 cy_analog_noconnect_6 (
        .noconnect(Net_2544));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_7 (
        .noconnect(Net_2545));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_8 (
        .noconnect(Net_2546));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_9 (
        .noconnect(Net_2547));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_10 (
        .noconnect(Net_2550));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_11 (
        .noconnect(Net_2548));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_12 (
        .noconnect(Net_2549));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_13 (
        .noconnect(Net_2542));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_14 (
        .noconnect(Net_2541));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_15 (
        .noconnect(Net_2551));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_16 (
        .noconnect(Net_2552));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_17 (
        .noconnect(Net_2553));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_18 (
        .noconnect(Net_2554));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_19 (
        .noconnect(Net_2555));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_20 (
        .noconnect(Net_2556));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_21 (
        .noconnect(Net_2557));

	// cy_analog_virtualmux_37 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_37_connect(Net_3016, mux_bus_plus[3]);
	defparam cy_analog_virtualmux_37_connect.sig_width = 1;

	// cy_analog_virtualmux_vminus0 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_vminus0_connect(mux_bus_minus[0], Net_2559);
	defparam cy_analog_virtualmux_vminus0_connect.sig_width = 1;

	// cy_analog_virtualmux_vminus1 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_vminus1_connect(mux_bus_minus[1], Net_2560);
	defparam cy_analog_virtualmux_vminus1_connect.sig_width = 1;

	// cy_analog_virtualmux_vminus2 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_vminus2_connect(mux_bus_minus[2], Net_2561);
	defparam cy_analog_virtualmux_vminus2_connect.sig_width = 1;

	// cy_analog_virtualmux_vminus3 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_vminus3_connect(mux_bus_minus[3], Net_2562);
	defparam cy_analog_virtualmux_vminus3_connect.sig_width = 1;

	// cy_analog_virtualmux_vminus4 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_vminus4_connect(mux_bus_minus[4], Net_2563);
	defparam cy_analog_virtualmux_vminus4_connect.sig_width = 1;

	// cy_analog_virtualmux_vminus5 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_vminus5_connect(mux_bus_minus[5], Net_2564);
	defparam cy_analog_virtualmux_vminus5_connect.sig_width = 1;

	// cy_analog_virtualmux_vminus6 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_vminus6_connect(mux_bus_minus[6], Net_2565);
	defparam cy_analog_virtualmux_vminus6_connect.sig_width = 1;

	// cy_analog_virtualmux_vminus7 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_vminus7_connect(mux_bus_minus[7], Net_2566);
	defparam cy_analog_virtualmux_vminus7_connect.sig_width = 1;

	// cy_analog_virtualmux_vminus8 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_vminus8_connect(mux_bus_minus[8], Net_2567);
	defparam cy_analog_virtualmux_vminus8_connect.sig_width = 1;

	// cy_analog_virtualmux_vminus9 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_vminus9_connect(mux_bus_minus[9], Net_2568);
	defparam cy_analog_virtualmux_vminus9_connect.sig_width = 1;

	// cy_analog_virtualmux_vminus10 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_vminus10_connect(mux_bus_minus[10], Net_2569);
	defparam cy_analog_virtualmux_vminus10_connect.sig_width = 1;

	// cy_analog_virtualmux_vminus11 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_vminus11_connect(mux_bus_minus[11], Net_2570);
	defparam cy_analog_virtualmux_vminus11_connect.sig_width = 1;

	// cy_analog_virtualmux_vminus12 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_vminus12_connect(mux_bus_minus[12], Net_2571);
	defparam cy_analog_virtualmux_vminus12_connect.sig_width = 1;

	// cy_analog_virtualmux_vminus13 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_vminus13_connect(mux_bus_minus[13], Net_2572);
	defparam cy_analog_virtualmux_vminus13_connect.sig_width = 1;

	// cy_analog_virtualmux_vminus14 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_vminus14_connect(mux_bus_minus[14], Net_2573);
	defparam cy_analog_virtualmux_vminus14_connect.sig_width = 1;

	// cy_analog_virtualmux_vminus15 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_vminus15_connect(mux_bus_minus[15], Net_2574);
	defparam cy_analog_virtualmux_vminus15_connect.sig_width = 1;

	// cy_analog_virtualmux_vminus_inj (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_vminus_inj_connect(Net_3046, Net_2575);
	defparam cy_analog_virtualmux_vminus_inj_connect.sig_width = 1;

    cy_analog_noconnect_v1_0 cy_analog_noconnect_37 (
        .noconnect(Net_2575));

	// cy_analog_virtualmux_36 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_36_connect(Net_3046, mux_bus_minus[3]);
	defparam cy_analog_virtualmux_36_connect.sig_width = 1;

	// cy_analog_virtualmux_42 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_42_connect(Net_2020, muxout_plus);
	defparam cy_analog_virtualmux_42_connect.sig_width = 1;

	// cy_analog_virtualmux_43 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_43_connect(Net_124, muxout_minus);
	defparam cy_analog_virtualmux_43_connect.sig_width = 1;

    cy_analog_noconnect_v1_0 cy_analog_noconnect_39 (
        .noconnect(Net_2779));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_40 (
        .noconnect(Net_2783));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_38 (
        .noconnect(Net_2780));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_41 (
        .noconnect(Net_2781));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_43 (
        .noconnect(Net_2784));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_44 (
        .noconnect(Net_2785));

    Bus_Connect_v1_10 Connect_2 (
        .in_bus(mux_bus_minus[16:0]),
        .out_bus(Net_2375[2:0]));
    defparam Connect_2.in_width = 17;
    defparam Connect_2.out_width = 3;

    cy_analog_noconnect_v1_0 cy_analog_noconnect_2 (
        .noconnect(Net_2559));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_4 (
        .noconnect(Net_2560));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_22 (
        .noconnect(Net_2561));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_23 (
        .noconnect(Net_2562));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_24 (
        .noconnect(Net_2563));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_25 (
        .noconnect(Net_2564));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_26 (
        .noconnect(Net_2565));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_27 (
        .noconnect(Net_2566));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_28 (
        .noconnect(Net_2567));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_29 (
        .noconnect(Net_2568));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_30 (
        .noconnect(Net_2569));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_31 (
        .noconnect(Net_2570));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_32 (
        .noconnect(Net_2571));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_33 (
        .noconnect(Net_2572));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_34 (
        .noconnect(Net_2573));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_35 (
        .noconnect(Net_2574));


	cy_isr_v1_0
		#(.int_type(2'b10))
		IRQ
		 (.int_signal(Net_2273));



    assign Net_3093 = Net_1845 | Net_3090;

    ZeroTerminal ZeroTerminal_8 (
        .z(Net_3090));

	// adc_plus_in_sel (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 adc_plus_in_sel_connect(muxout_plus, Net_2794);
	defparam adc_plus_in_sel_connect.sig_width = 1;

	// adc_minus_in_sel (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 adc_minus_in_sel_connect(muxout_minus, Net_2793);
	defparam adc_minus_in_sel_connect.sig_width = 1;


    cy_connect_v1_0 vinPlus0__cy_connect_v1_0(vinPlus0, mux_bus_plus[0]);
    defparam vinPlus0__cy_connect_v1_0.sig_width = 1;


endmodule

// TCPWM_P4_v1_10(PWMCompare=1500, PWMCompareBuf=65535, PWMCompareSwap=0, PWMCountMode=3, PWMCountPresent=false, PWMDeadTimeCycle=0, PWMInterruptMask=0, PWMKillEvent=0, PWMLinenSignal=0, PWMLineSignal=0, PWMMode=4, PWMPeriod=20000, PWMPeriodBuf=65535, PWMPeriodSwap=0, PWMPrescaler=0, PWMReloadMode=0, PWMReloadPresent=false, PWMRunMode=0, PWMSetAlign=0, PWMStartMode=0, PWMStartPresent=false, PWMStopEvent=0, PWMStopMode=0, PWMStopPresent=false, PWMSwitchMode=0, PWMSwitchPresent=false, QuadEncodingModes=0, QuadIndexMode=0, QuadIndexPresent=false, QuadInterruptMask=1, QuadPhiAMode=3, QuadPhiBMode=3, QuadStopMode=0, QuadStopPresent=false, TCCaptureMode=0, TCCapturePresent=false, TCCompare=65535, TCCompareBuf=65535, TCCompareSwap=0, TCCompCapMode=2, TCCountingModes=0, TCCountMode=3, TCCountPresent=false, TCInterruptMask=1, TCPeriod=65535, TCPrescaler=0, TCPWMCapturePresent=false, TCPWMConfig=7, TCPWMCountPresent=false, TCPWMReloadPresent=false, TCPWMStartPresent=false, TCPWMStopPresent=false, TCReloadMode=0, TCReloadPresent=false, TCRunMode=0, TCStartMode=0, TCStartPresent=false, TCStopMode=0, TCStopPresent=false, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMPONENT_NAME=TCPWM_P4_v1_10, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=PWM_1, CY_INSTANCE_SHORT_NAME=PWM_1, CY_MAJOR_VERSION=1, CY_MINOR_VERSION=10, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  3.3 CP3, INSTANCE_NAME=PWM_1, )
module TCPWM_P4_v1_10_3 (
    stop,
    count,
    reload,
    start,
    capture,
    interrupt,
    ov,
    un,
    cc,
    clock,
    line,
    line_n);
    input       stop;
    input       count;
    input       reload;
    input       start;
    input       capture;
    output      interrupt;
    output      ov;
    output      un;
    output      cc;
    input       clock;
    output      line;
    output      line_n;

    parameter PWMCountMode = 3;
    parameter PWMReloadMode = 0;
    parameter PWMReloadPresent = 0;
    parameter PWMStartMode = 0;
    parameter PWMStopMode = 0;
    parameter PWMSwitchMode = 0;
    parameter QuadIndexMode = 0;
    parameter QuadPhiAMode = 3;
    parameter QuadPhiBMode = 3;
    parameter QuadStopMode = 0;
    parameter TCCaptureMode = 0;
    parameter TCCountMode = 3;
    parameter TCReloadMode = 0;
    parameter TCStartMode = 0;
    parameter TCStopMode = 0;


    cy_m0s8_tcpwm_v1_0 cy_m0s8_tcpwm_1 (
        .capture(capture),
        .underflow(un),
        .overflow(ov),
        .line_out_compl(line_n),
        .line_out(line),
        .compare_match(cc),
        .interrupt(interrupt),
        .count(count),
        .reload(reload),
        .stop(stop),
        .start(start),
        .clock(clock));



endmodule

// TCPWM_P4_v1_10(PWMCompare=65535, PWMCompareBuf=65535, PWMCompareSwap=0, PWMCountMode=3, PWMCountPresent=false, PWMDeadTimeCycle=0, PWMInterruptMask=1, PWMKillEvent=0, PWMLinenSignal=0, PWMLineSignal=0, PWMMode=4, PWMPeriod=65535, PWMPeriodBuf=65535, PWMPeriodSwap=0, PWMPrescaler=0, PWMReloadMode=0, PWMReloadPresent=false, PWMRunMode=0, PWMSetAlign=0, PWMStartMode=0, PWMStartPresent=false, PWMStopEvent=0, PWMStopMode=0, PWMStopPresent=false, PWMSwitchMode=0, PWMSwitchPresent=false, QuadEncodingModes=2, QuadIndexMode=0, QuadIndexPresent=false, QuadInterruptMask=0, QuadPhiAMode=3, QuadPhiBMode=3, QuadStopMode=0, QuadStopPresent=false, TCCaptureMode=0, TCCapturePresent=false, TCCompare=65535, TCCompareBuf=65535, TCCompareSwap=0, TCCompCapMode=2, TCCountingModes=0, TCCountMode=3, TCCountPresent=false, TCInterruptMask=1, TCPeriod=65535, TCPrescaler=0, TCPWMCapturePresent=false, TCPWMConfig=3, TCPWMCountPresent=false, TCPWMReloadPresent=false, TCPWMStartPresent=false, TCPWMStopPresent=false, TCReloadMode=0, TCReloadPresent=false, TCRunMode=0, TCStartMode=0, TCStartPresent=false, TCStopMode=0, TCStopPresent=false, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMPONENT_NAME=TCPWM_P4_v1_10, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=QuadDec_1, CY_INSTANCE_SHORT_NAME=QuadDec_1, CY_MAJOR_VERSION=1, CY_MINOR_VERSION=10, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  3.3 CP3, INSTANCE_NAME=QuadDec_1, )
module TCPWM_P4_v1_10_4 (
    stop,
    count,
    reload,
    start,
    capture,
    interrupt,
    ov,
    un,
    cc,
    clock,
    line,
    line_n);
    input       stop;
    input       count;
    input       reload;
    input       start;
    input       capture;
    output      interrupt;
    output      ov;
    output      un;
    output      cc;
    input       clock;
    output      line;
    output      line_n;

    parameter PWMCountMode = 3;
    parameter PWMReloadMode = 0;
    parameter PWMReloadPresent = 0;
    parameter PWMStartMode = 0;
    parameter PWMStopMode = 0;
    parameter PWMSwitchMode = 0;
    parameter QuadIndexMode = 0;
    parameter QuadPhiAMode = 3;
    parameter QuadPhiBMode = 3;
    parameter QuadStopMode = 0;
    parameter TCCaptureMode = 0;
    parameter TCCountMode = 3;
    parameter TCReloadMode = 0;
    parameter TCStartMode = 0;
    parameter TCStopMode = 0;


    cy_m0s8_tcpwm_v1_0 cy_m0s8_tcpwm_1 (
        .capture(capture),
        .underflow(un),
        .overflow(ov),
        .line_out_compl(line_n),
        .line_out(line),
        .compare_match(cc),
        .interrupt(interrupt),
        .count(count),
        .reload(reload),
        .stop(stop),
        .start(start),
        .clock(clock));



endmodule

// Component: cy_constant_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\cy_constant_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\cy_constant_v1_0\cy_constant_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\cy_constant_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\cy_constant_v1_0\cy_constant_v1_0.v"
`endif

// Component: mux_v1_10
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\mux_v1_10"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\mux_v1_10\mux_v1_10.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\mux_v1_10"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\mux_v1_10\mux_v1_10.v"
`endif

// Component: OneTerminal
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\OneTerminal"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\OneTerminal\OneTerminal.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\OneTerminal"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\OneTerminal\OneTerminal.v"
`endif

// IDAC_P4_v1_0(IDACRange=0, IDACValue=14, Polarity=1, Resolution=7, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMPONENT_NAME=IDAC_P4_v1_0, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=CapSense:IDAC2, CY_INSTANCE_SHORT_NAME=IDAC2, CY_MAJOR_VERSION=1, CY_MINOR_VERSION=0, CY_REMOVE=false, CY_SUPPRESS_API_GEN=true, CY_VERSION=PSoC Creator  3.3 CP3, INSTANCE_NAME=CapSense_IDAC2, )
module IDAC_P4_v1_0_5 (
    Iout);
    inout       Iout;
    electrical  Iout;


          wire  Net_3;

    cy_psoc4_csidac_v1_0 cy_psoc4_idac (
        .en(Net_3),
        .iout(Iout));
    defparam cy_psoc4_idac.resolution = 7;

    OneTerminal OneTerminal_1 (
        .o(Net_3));



endmodule

// IDAC_P4_v1_0(IDACRange=0, IDACValue=16, Polarity=1, Resolution=8, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMPONENT_NAME=IDAC_P4_v1_0, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=CapSense:IDAC1, CY_INSTANCE_SHORT_NAME=IDAC1, CY_MAJOR_VERSION=1, CY_MINOR_VERSION=0, CY_REMOVE=false, CY_SUPPRESS_API_GEN=true, CY_VERSION=PSoC Creator  3.3 CP3, INSTANCE_NAME=CapSense_IDAC1, )
module IDAC_P4_v1_0_6 (
    Iout);
    inout       Iout;
    electrical  Iout;


          wire  Net_3;

    cy_psoc4_csidac_v1_0 cy_psoc4_idac (
        .en(Net_3),
        .iout(Iout));
    defparam cy_psoc4_idac.resolution = 8;

    OneTerminal OneTerminal_1 (
        .o(Net_3));



endmodule

// CapSense_CSD_P4_v2_0(AnalogSwitchDivider=12, AvgSamplesNumber=1, CalibrationResulution=7, CmodPrecharge=1, ConnectInactiveSensors=0, CshTankPrecharge=1, CurrentSource=0, CustomEzI2CInstanceName=SCB, DbPwmMode=0, DbPwmPeriod=0, DfbEnable=false, DynamicButtonNumber=5, EmcSensorNumber=10, EnableAutoCalibration=false, EnableBIST=false, EnableTuneHelper=false, GuardSensorEnable=false, I2cCommunication=0, IDACRange=0, IDACsCount=2, ImmunityLevel=1, InputClkFreq=3, IsStreetFighter=false, KValueScalingFactor=8, LowBaselineReset=5, M0S8CSD_BLOCK_NUM=1, M0S8CSD_BLOCK_VER=0, M0S8GPIO2_BLOCK_NUM=1, M0S8GPIO2_BLOCK_VER=0, M0S8HSIOM4A_BLOCK_NUM=1, M0S8HSIOM4A_BLOCK_VER=0, M0S8IOSS_BLOCK_NUM=0, M0S8IOSS_BLOCK_VER=-1, M0S8PCLK_BLOCK_NUM=1, M0S8PCLK_BLOCK_VER=0, M0S8PERI_BLOCK_NUM=0, M0S8PERI_BLOCK_VER=-1, ModulatorClkDivider=12, NegativeNoiseThreshold=20, OversamplingEn=true, PrechargeClkDivider=12, PrechargeClkFreq=3, PrsOptions=0, PrtRegNameReplacementString=CYREG, RawDataFilterType=8, SensorAutoReset=false, SensorNumber=1, SensorsFreqSettingsInd=true, ShieldDelay=0, ShieldEnable=false, ShieldTankEnable=false, SizeReplacementString=uint8, SliderThresholdsUpdateManual=false, SnsAlias=Button0__BTN, ThresholdMode=false, TunerIntfAddress=8, TunerIntfDataRate=400, TunerProperties=, TuningMethod=2, WaterProofingEnabled=false, WidgetResolution=8, WidgetsData=<?xml version="1.0" encoding="utf-16"?> <CyWidgetsList xmlns:Version="2_0">   <ListMainTerminal>     <CyTerminal NameIndex="0" WidgetName="Button0__BTN" />   </ListMainTerminal>   <ListButtons>     <CyButton Name="Button0" Type="Button" Count="1" Angle="0" Fliped="false" Fliped2D="false" ScaleFactor="1">       <Location>         <X>2147483647</X>         <Y>2147483647</Y>       </Location>       <Properties>         <Hysteresis>10</Hysteresis>         <Debounce>5</Debounce>         <FingerThreshold>100</FingerThreshold>         <NoiseThreshold>20</NoiseThreshold>         <ScanResolution>_12</ScanResolution>       </Properties>     </CyButton>   </ListButtons>   <ListMatrixButtons />   <ListTouchPads />   <ListSliders />   <GuardSensor Name="GuardSensor" Type="Button" Count="1" Angle="0" Fliped="false" Fliped2D="false" ScaleFactor="1">     <Location>       <X>2147483647</X>       <Y>2147483647</Y>     </Location>     <Properties>       <Hysteresis>10</Hysteresis>       <Debounce>5</Debounce>       <FingerThreshold>100</FingerThreshold>       <NoiseThreshold>20</NoiseThreshold>       <ScanResolution>_12</ScanResolution>     </Properties>   </GuardSensor>   <GuardSensorTerminal NameIndex="0" WidgetName="GuardSensor__GRD" />   <CyScanSlotsList>     <ListScanSlots>       <CyScanSlot IDAC1Settings="120" IDAC2Settings="80" Sensitivity="2" AnalogSwitchDivider="2" ModulatorDivider="2" WidgetName="Button0__BTN">         <ListTerminalsNames>           <string>Button0__BTN</string>         </ListTerminalsNames>       </CyScanSlot>     </ListScanSlots>     <GuardSensorScanSlot IDAC1Settings="120" IDAC2Settings="80" Sensitivity="2" AnalogSwitchDivider="2" ModulatorDivider="2" WidgetName="GuardSensor__GRD">       <ListTerminalsNames>         <string>GuardSensor__GRD</string>       </ListTerminalsNames>     </GuardSensorScanSlot>   </CyScanSlotsList> </CyWidgetsList>, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMPONENT_NAME=CapSense_CSD_P4_v2_0, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=CapSense, CY_INSTANCE_SHORT_NAME=CapSense, CY_MAJOR_VERSION=2, CY_MINOR_VERSION=0, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  3.3 CP3, INSTANCE_NAME=CapSense, )
module CapSense_CSD_P4_v2_0_7 (
    sclk2);
    output      sclk2;


          wire  Net_534;
          wire  Net_474;
          wire  Net_540;
          wire  Net_329;
          wire  Net_312;
          wire  Net_104;
          wire  Net_328;
    electrical  Net_398;
    electrical  Net_241;
    electrical  Net_246;
          wire  Net_420;
          wire  Net_429;
    electrical  Net_245;
          wire  Net_248;
    electrical  Net_270;

    cy_psoc4_csd_v1_0 CSD_FFB (
        .source(Net_245),
        .csh(Net_246),
        .shield(Net_241),
        .cmod(Net_398),
        .sample_out(Net_328),
        .sense_in(Net_104),
        .clk1(Net_429),
        .clk2(Net_420),
        .irq(Net_248),
        .sample_in(Net_312),
        .sense_out(Net_329),
        .amuxa(Net_270));
    defparam CSD_FFB.is_capsense = 1;
    defparam CSD_FFB.sensors_count = 1;
    defparam CSD_FFB.shield_count = 1;


	cy_clock_v1_0
		#(.id("205a08d3-4db2-4c67-b4c8-311da02505d2/74063576-f256-4f8f-8a82-9abdee876261"),
		  .source_clock_id("413DE2EF-D9F2-4233-A808-DFAF137FD877"),
		  .divisor(255),
		  .period("0"),
		  .is_direct(0),
		  .is_digital(0))
		SampleClk
		 (.clock_out(Net_420));


	wire [0:0] tmpOE__Cmod_net;
	wire [0:0] tmpFB_0__Cmod_net;
	wire [0:0] tmpIO_0__Cmod_net;
	wire [0:0] tmpINTERRUPT_0__Cmod_net;
	electrical [0:0] tmpSIOVREF__Cmod_net;

	cy_psoc3_pins_v1_10
		#(.id("205a08d3-4db2-4c67-b4c8-311da02505d2/899719c0-e797-4403-a44f-07a66de2cbeb"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases("Cmod"),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b0),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1))
		Cmod
		 (.oe(tmpOE__Cmod_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Cmod_net[0:0]}),
		  .analog({Net_398}),
		  .io({tmpIO_0__Cmod_net[0:0]}),
		  .siovref(tmpSIOVREF__Cmod_net),
		  .interrupt({tmpINTERRUPT_0__Cmod_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Cmod_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};


	cy_isr_v1_0
		#(.int_type(2'b10))
		ISR
		 (.int_signal(Net_248));


    IDAC_P4_v1_0_5 IDAC2 (
        .Iout(Net_270));

	wire [0:0] tmpOE__Sns_net;
	wire [0:0] tmpFB_0__Sns_net;
	wire [0:0] tmpIO_0__Sns_net;
	wire [0:0] tmpINTERRUPT_0__Sns_net;
	electrical [0:0] tmpSIOVREF__Sns_net;

	cy_psoc3_pins_v1_10
		#(.id("205a08d3-4db2-4c67-b4c8-311da02505d2/73b612cd-240c-4d8e-8340-ea28aabf4b11"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("NONCONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases("Button0__BTN"),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b0),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .slew_rate(1'b0),
		  .spanning(1),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1))
		Sns
		 (.oe(tmpOE__Sns_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Sns_net[0:0]}),
		  .analog({Net_245}),
		  .io({tmpIO_0__Sns_net[0:0]}),
		  .siovref(tmpSIOVREF__Sns_net),
		  .interrupt({tmpINTERRUPT_0__Sns_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Sns_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    IDAC_P4_v1_0_6 IDAC1 (
        .Iout(Net_270));

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_312));

    ZeroTerminal ZeroTerminal_2 (
        .z(Net_104));


    assign sclk2 = Net_420 | Net_474;

    ZeroTerminal ZeroTerminal_7 (
        .z(Net_474));


	cy_clock_v1_0
		#(.id("205a08d3-4db2-4c67-b4c8-311da02505d2/9a635726-510c-483c-9c5c-3e233ee2906a"),
		  .source_clock_id("413DE2EF-D9F2-4233-A808-DFAF137FD877"),
		  .divisor(255),
		  .period("0"),
		  .is_direct(0),
		  .is_digital(0))
		SenseClk
		 (.clock_out(Net_429));




endmodule

// Component: CyControlReg_v1_70
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\CyControlReg_v1_70"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\CyControlReg_v1_70\CyControlReg_v1_70.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\CyControlReg_v1_70"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\CyControlReg_v1_70\CyControlReg_v1_70.v"
`endif

// Component: cy_dffe_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\cy_dffe_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\cy_dffe_v1_0\cy_dffe_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\cy_dffe_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\cy_dffe_v1_0\cy_dffe_v1_0.v"
`endif

// Component: B_Counter_v2_40
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cycomponentlibrary\CyComponentLibrary.cylib\B_Counter_v2_40"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cycomponentlibrary\CyComponentLibrary.cylib\B_Counter_v2_40\B_Counter_v2_40.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cycomponentlibrary\CyComponentLibrary.cylib\B_Counter_v2_40"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cycomponentlibrary\CyComponentLibrary.cylib\B_Counter_v2_40\B_Counter_v2_40.v"
`endif

// Counter_v2_40(CaptureMode=0, CaptureModeSoftware=0, ClockMode=2, CompareMode=1, CompareModeSoftware=0, CompareStatusEdgeSense=true, CompareValue=128, CONTROL3=0, ControlRegRemoved=0, CtlModeReplacementString=SyncCtl, CyGetRegReplacementString=CY_GET_REG32, CySetRegReplacementString=CY_SET_REG32, EnableMode=0, FF16=false, FF8=false, FixedFunction=false, FixedFunctionUsed=0, InitCounterValue=4294967294, InterruptOnCapture=false, InterruptOnCompare=false, InterruptOnOverUnderFlow=false, InterruptOnTC=false, Period=4294967294, RegDefReplacementString=reg32, RegSizeReplacementString=uint32, ReloadOnCapture=false, ReloadOnCompare=false, ReloadOnOverUnder=false, ReloadOnReset=false, Resolution=32, RstStatusReplacementString=sSTSReg_rstSts, RunMode=0, UDB16=false, UDB24=false, UDB32=true, UDB8=false, UDBControlReg=true, UseInterrupt=true, VerilogSectionReplacementString=sC32, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMPONENT_NAME=Counter_v2_40, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=UpDown, CY_INSTANCE_SHORT_NAME=UpDown, CY_MAJOR_VERSION=2, CY_MINOR_VERSION=40, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  3.3 CP3, INSTANCE_NAME=UpDown, )
module Counter_v2_40_8 (
    clock,
    comp,
    tc,
    reset,
    interrupt,
    enable,
    capture,
    upCnt,
    downCnt,
    up_ndown,
    count);
    input       clock;
    output      comp;
    output      tc;
    input       reset;
    output      interrupt;
    input       enable;
    input       capture;
    input       upCnt;
    input       downCnt;
    input       up_ndown;
    input       count;

    parameter CaptureMode = 0;
    parameter ClockMode = 2;
    parameter CompareMode = 1;
    parameter CompareStatusEdgeSense = 1;
    parameter EnableMode = 0;
    parameter ReloadOnCapture = 0;
    parameter ReloadOnCompare = 0;
    parameter ReloadOnOverUnder = 0;
    parameter ReloadOnReset = 0;
    parameter Resolution = 32;
    parameter RunMode = 0;
    parameter UseInterrupt = 1;

          wire  Net_95;
          wire  Net_89;

	// VirtualMux_1 (cy_virtualmux_v1_0)
	assign Net_89 = up_ndown;

    ZeroTerminal ZeroTerminal_2 (
        .z(Net_95));

    B_Counter_v2_40 CounterUDB (
        .reset(reset),
        .tc_out(tc),
        .cmp_out(comp),
        .clock(clock),
        .irq_out(interrupt),
        .up_ndown(Net_89),
        .upcnt(upCnt),
        .dwncnt(downCnt),
        .enable(enable),
        .capture(capture),
        .count(count));
    defparam CounterUDB.CaptureMode = 0;
    defparam CounterUDB.ClockMode = 2;
    defparam CounterUDB.CompareMode = 1;
    defparam CounterUDB.CompareStatusEdgeSense = 1;
    defparam CounterUDB.EnableMode = 0;
    defparam CounterUDB.ReloadOnCapture = 0;
    defparam CounterUDB.ReloadOnCompare = 0;
    defparam CounterUDB.ReloadOnOverUnder = 0;
    defparam CounterUDB.ReloadOnReset = 0;
    defparam CounterUDB.Resolution = 32;
    defparam CounterUDB.RunMode = 0;
    defparam CounterUDB.UseInterrupt = 1;



endmodule

// Component: cydff_v1_30
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\cydff_v1_30"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\cydff_v1_30\cydff_v1_30.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\cydff_v1_30"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\cydff_v1_30\cydff_v1_30.v"
`endif

// Component: xor_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\xor_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\xor_v1_0\xor_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\xor_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\xor_v1_0\xor_v1_0.v"
`endif

// Component: and_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\and_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\and_v1_0\and_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\and_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\and_v1_0\and_v1_0.v"
`endif

// Component: nand_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\nand_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\nand_v1_0\nand_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\nand_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\nand_v1_0\nand_v1_0.v"
`endif

// Component: cy_tff_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\cy_tff_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\cy_tff_v1_0\cy_tff_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\cy_tff_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\cy_tff_v1_0\cy_tff_v1_0.v"
`endif

// OpAmp_P4_v1_0(Compensation=3, Mode=0, OutputCurrent=1, Power=2, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMPONENT_NAME=OpAmp_P4_v1_0, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=Transimpedance, CY_INSTANCE_SHORT_NAME=Transimpedance, CY_MAJOR_VERSION=1, CY_MINOR_VERSION=0, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  3.3 CP3, INSTANCE_NAME=Transimpedance, )
module OpAmp_P4_v1_0_9 (
    Vplus,
    Vout,
    Vminus);
    inout       Vplus;
    electrical  Vplus;
    inout       Vout;
    electrical  Vout;
    inout       Vminus;
    electrical  Vminus;


          wire  Net_12;
    electrical  Net_23;
    electrical  Net_19;
    electrical  Net_18;
    electrical  Net_9;

    cy_psoc4_abuf_v1_0 cy_psoc4_abuf (
        .vplus(Vplus),
        .vminus(Net_9),
        .vout1(Net_18),
        .vout10(Net_19),
        .rs_bot(Net_23),
        .cmpout(Net_12));
    defparam cy_psoc4_abuf.deepsleep_available = 0;
    defparam cy_psoc4_abuf.has_resistor = 0;
    defparam cy_psoc4_abuf.needs_dsab = 0;

	// cy_analog_virtualmux_1 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_1_connect(Net_9, Vminus);
	defparam cy_analog_virtualmux_1_connect.sig_width = 1;

	// cy_analog_virtualmux_2 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_2_connect(Vout, Net_19);
	defparam cy_analog_virtualmux_2_connect.sig_width = 1;

    cy_analog_noconnect_v1_0 cy_analog_noconnect_1 (
        .noconnect(Net_23));



endmodule

// top
module top ;

          wire  Net_813;
          wire  Net_739;
          wire  Net_738;
          wire  Net_737;
          wire  Net_736;
          wire  Net_735;
          wire  Net_734;
          wire  Net_733;
          wire  Net_732;
          wire  Net_431;
          wire  Net_430;
          wire  Net_429;
          wire  Net_428;
          wire  Net_427;
          wire  Net_426;
          wire  Net_417;
          wire  Net_454;
          wire  Net_107;
          wire  Net_102;
          wire  Net_82;
          wire  Net_81;
          wire  Net_80;
          wire  Net_79;
          wire  Net_78;
          wire  Net_77;
          wire  Net_76;
          wire  Net_73;
          wire  Net_72;
          wire  Net_117;
          wire  Net_116;
          wire  Net_115;
          wire  Net_114;
          wire  Net_113;
          wire  Net_112;
          wire  Net_111;
          wire  Net_110;
          wire  Net_109;
          wire  Net_108;
          wire  Net_51;
          wire  Net_50;
          wire  Net_49;
          wire  Net_48;
    electrical  Net_47;
          wire  Net_845;
          wire  Net_844;
          wire  Net_843;
          wire  Net_842;
          wire  Net_841;
          wire  Net_840;
          wire  Net_839;
          wire  Net_838;
          wire  Net_837;
          wire  Net_836;
          wire  Net_835;
          wire  Net_834;
          wire  Net_833;
          wire  Net_832;
          wire  Net_831;
          wire  Net_830;
          wire  Net_829;
          wire  Net_828;
          wire  Net_827;
    electrical  Net_37;
          wire  Net_26;
          wire  Net_25;
          wire  Net_35;
    electrical  Net_822;
    electrical  Net_824;
    electrical  Net_823;
    electrical  Net_437;
    electrical  Net_52;
          wire  Net_83;
          wire  Net_589;
          wire  Net_591;
          wire  Net_771;
          wire  Net_779;
          wire  Net_520;
          wire  Net_638;
          wire  Net_639;
          wire  Net_656;
          wire  Net_543;
          wire  Net_554;
          wire  Net_641;
          wire  Net_558;
          wire  Net_776;
          wire  Net_547;
          wire [3:0] Net_382;
          wire [1:0] Net_377;
          wire  Net_286;
          wire [3:0] Net_287;
          wire  Net_378;
          wire [3:0] Net_379;
          wire  Net_71;
          wire  Net_75;
          wire  Net_74;
          wire  Net_95;
    electrical  Net_88;
    electrical  Net_86;
          wire  Net_21;


	cy_clock_v1_0
		#(.id("2e3617c1-c103-40f4-a77c-2f0165330878"),
		  .source_clock_id("413DE2EF-D9F2-4233-A808-DFAF137FD877"),
		  .divisor(0),
		  .period("542534722.222222"),
		  .is_direct(0),
		  .is_digital(0))
		ROSSerial_UART_Clock
		 (.clock_out(Net_21));


    SCB_P4_v1_20_0 ROSSerial_UART (
        .sclk(Net_25),
        .interrupt(Net_26),
        .clock(Net_21));

	wire [0:0] tmpOE__P1_6_net;
	wire [0:0] tmpFB_0__P1_6_net;
	wire [0:0] tmpIO_0__P1_6_net;
	wire [0:0] tmpINTERRUPT_0__P1_6_net;
	electrical [0:0] tmpSIOVREF__P1_6_net;

	cy_psoc3_pins_v1_10
		#(.id("52f31aa9-2f0a-497d-9a1f-1424095e13e6"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b0),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1))
		P1_6
		 (.oe(tmpOE__P1_6_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__P1_6_net[0:0]}),
		  .io({tmpIO_0__P1_6_net[0:0]}),
		  .siovref(tmpSIOVREF__P1_6_net),
		  .interrupt({tmpINTERRUPT_0__P1_6_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__P1_6_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    cy_annotation_universal_v1_0 LED1 (
        .connect({
            Net_37,
            Net_88
        })
    );
    defparam LED1.comp_name = "LED_v1_0";
    defparam LED1.port_names = "A, K";
    defparam LED1.width = 2;

    cy_annotation_universal_v1_0 Resistor (
        .connect({
            Net_37,
            Net_86
        })
    );
    defparam Resistor.comp_name = "Resistor_v1_0";
    defparam Resistor.port_names = "T1, T2";
    defparam Resistor.width = 2;

    cy_annotation_universal_v1_0 GND_1 (
        .connect({
            Net_88
        })
    );
    defparam GND_1.comp_name = "Gnd_v1_0";
    defparam GND_1.port_names = "T1";
    defparam GND_1.width = 1;

    SCB_P4_v3_20_1 I2CMaster (
        .cts_in(1'b0),
        .tx_out(Net_828),
        .rts_out(Net_829),
        .interrupt(Net_830),
        .clock(1'b0),
        .rx_tr_out(Net_832),
        .tx_tr_out(Net_833),
        .s_mosi(1'b0),
        .s_sclk(1'b0),
        .s_ss(1'b0),
        .m_miso(1'b0),
        .m_mosi(Net_838),
        .m_sclk(Net_839),
        .m_ss0(Net_840),
        .m_ss1(Net_841),
        .m_ss2(Net_842),
        .m_ss3(Net_843),
        .s_miso(Net_844),
        .rx_in(1'b0));

    ADC_SAR_SEQ_P4_v1_10_2 ADC_SAR_SEQ (
        .Vref(Net_47),
        .sdone(Net_48),
        .eoc(Net_49),
        .aclk(1'b0),
        .soc(1'b0),
        .vinPlus0(Net_52),
        .vinPlus1(Net_437),
        .vinPlus2(Net_823));

    TCPWM_P4_v1_10_3 PWM_1 (
        .stop(1'b0),
        .reload(1'b0),
        .start(1'b0),
        .count(1'b1),
        .capture(1'b0),
        .interrupt(Net_113),
        .ov(Net_114),
        .un(Net_115),
        .cc(Net_116),
        .line(Net_95),
        .line_n(Net_117),
        .clock(Net_71));
    defparam PWM_1.PWMCountMode = 3;
    defparam PWM_1.PWMReloadMode = 0;
    defparam PWM_1.PWMReloadPresent = 0;
    defparam PWM_1.PWMStartMode = 0;
    defparam PWM_1.PWMStopMode = 0;
    defparam PWM_1.PWMSwitchMode = 0;
    defparam PWM_1.QuadIndexMode = 0;
    defparam PWM_1.QuadPhiAMode = 3;
    defparam PWM_1.QuadPhiBMode = 3;
    defparam PWM_1.QuadStopMode = 0;
    defparam PWM_1.TCCaptureMode = 0;
    defparam PWM_1.TCCountMode = 3;
    defparam PWM_1.TCReloadMode = 0;
    defparam PWM_1.TCStartMode = 0;
    defparam PWM_1.TCStopMode = 0;

    TCPWM_P4_v1_10_4 QuadDec_1 (
        .stop(1'b0),
        .reload(1'b0),
        .start(Net_74),
        .count(Net_75),
        .capture(1'b0),
        .interrupt(Net_77),
        .ov(Net_78),
        .un(Net_79),
        .cc(Net_80),
        .line(Net_81),
        .line_n(Net_82),
        .clock(Net_83));
    defparam QuadDec_1.PWMCountMode = 3;
    defparam QuadDec_1.PWMReloadMode = 0;
    defparam QuadDec_1.PWMReloadPresent = 0;
    defparam QuadDec_1.PWMStartMode = 0;
    defparam QuadDec_1.PWMStopMode = 0;
    defparam QuadDec_1.PWMSwitchMode = 0;
    defparam QuadDec_1.QuadIndexMode = 0;
    defparam QuadDec_1.QuadPhiAMode = 3;
    defparam QuadDec_1.QuadPhiBMode = 3;
    defparam QuadDec_1.QuadStopMode = 0;
    defparam QuadDec_1.TCCaptureMode = 0;
    defparam QuadDec_1.TCCountMode = 3;
    defparam QuadDec_1.TCReloadMode = 0;
    defparam QuadDec_1.TCStartMode = 0;
    defparam QuadDec_1.TCStopMode = 0;

	wire [0:0] tmpOE__PWM_Pin_net;
	wire [0:0] tmpFB_0__PWM_Pin_net;
	wire [0:0] tmpIO_0__PWM_Pin_net;
	wire [0:0] tmpINTERRUPT_0__PWM_Pin_net;
	electrical [0:0] tmpSIOVREF__PWM_Pin_net;

	cy_psoc3_pins_v1_10
		#(.id("3dba336a-f6a5-43fb-aed3-de1e0b7bf362"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b0),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1))
		PWM_Pin
		 (.oe(tmpOE__PWM_Pin_net),
		  .y({Net_95}),
		  .fb({tmpFB_0__PWM_Pin_net[0:0]}),
		  .io({tmpIO_0__PWM_Pin_net[0:0]}),
		  .siovref(tmpSIOVREF__PWM_Pin_net),
		  .interrupt({tmpINTERRUPT_0__PWM_Pin_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__PWM_Pin_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__Quad_In_A_net;
	wire [0:0] tmpIO_0__Quad_In_A_net;
	wire [0:0] tmpINTERRUPT_0__Quad_In_A_net;
	electrical [0:0] tmpSIOVREF__Quad_In_A_net;

	cy_psoc3_pins_v1_10
		#(.id("44906eef-7414-4079-8114-eb0c25d01ec7"),
		  .drive_mode(3'b001),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("I"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b0),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b00),
		  .width(1))
		Quad_In_A
		 (.oe(tmpOE__Quad_In_A_net),
		  .y({1'b0}),
		  .fb({Net_75}),
		  .io({tmpIO_0__Quad_In_A_net[0:0]}),
		  .siovref(tmpSIOVREF__Quad_In_A_net),
		  .interrupt({tmpINTERRUPT_0__Quad_In_A_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Quad_In_A_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__Quad_In_B_net;
	wire [0:0] tmpIO_0__Quad_In_B_net;
	wire [0:0] tmpINTERRUPT_0__Quad_In_B_net;
	electrical [0:0] tmpSIOVREF__Quad_In_B_net;

	cy_psoc3_pins_v1_10
		#(.id("1ead8e79-ecaa-4b89-b2f5-5d61bf7dd118"),
		  .drive_mode(3'b001),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("I"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b0),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b00),
		  .width(1))
		Quad_In_B
		 (.oe(tmpOE__Quad_In_B_net),
		  .y({1'b0}),
		  .fb({Net_74}),
		  .io({tmpIO_0__Quad_In_B_net[0:0]}),
		  .siovref(tmpSIOVREF__Quad_In_B_net),
		  .interrupt({tmpINTERRUPT_0__Quad_In_B_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Quad_In_B_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};


	cy_clock_v1_0
		#(.id("8688e62a-f4ae-4303-9303-fadbe75447b7"),
		  .source_clock_id(""),
		  .divisor(0),
		  .period("41666666.6666667"),
		  .is_direct(0),
		  .is_digital(0))
		Quad_Clock
		 (.clock_out(Net_83));



	cy_clock_v1_0
		#(.id("04a67409-b9d6-4480-b743-d9ff90d399ed"),
		  .source_clock_id(""),
		  .divisor(0),
		  .period("1000000000"),
		  .is_direct(0),
		  .is_digital(0))
		PWM_Clock
		 (.clock_out(Net_71));


	wire [1:0] tmpOE__Analog_In_net;
	wire [1:0] tmpFB_1__Analog_In_net;
	wire [1:0] tmpIO_1__Analog_In_net;
	wire [0:0] tmpINTERRUPT_0__Analog_In_net;
	electrical [0:0] tmpSIOVREF__Analog_In_net;

	cy_psoc3_pins_v1_10
		#(.id("0c6412a0-b2ea-4b9d-8feb-24c851a1767d"),
		  .drive_mode(6'b000_000),
		  .ibuf_enabled(2'b0_0),
		  .init_dr_st(2'b1_1),
		  .input_clk_en(0),
		  .input_sync(2'b1_1),
		  .input_sync_mode(2'b0_0),
		  .intr_mode(4'b00_00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(","),
		  .layout_mode("NONCONTIGUOUS"),
		  .oe_conn(2'b0_0),
		  .oe_reset(0),
		  .oe_sync(2'b0_0),
		  .output_clk_en(0),
		  .output_clock_mode(2'b0_0),
		  .output_conn(2'b0_0),
		  .output_mode(2'b0_0),
		  .output_reset(0),
		  .output_sync(2'b0_0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(","),
		  .pin_mode("AA"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(2'b0_0),
		  .sio_ibuf(""),
		  .sio_info(4'b00_00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .slew_rate(2'b0_0),
		  .spanning(1),
		  .use_annotation(2'b0_0),
		  .vtrip(4'b10_10),
		  .width(2))
		Analog_In
		 (.oe(tmpOE__Analog_In_net),
		  .y({2'b0}),
		  .fb({tmpFB_1__Analog_In_net[1:0]}),
		  .analog({Net_437, Net_52}),
		  .io({tmpIO_1__Analog_In_net[1:0]}),
		  .siovref(tmpSIOVREF__Analog_In_net),
		  .interrupt({tmpINTERRUPT_0__Analog_In_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Analog_In_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{2'b11} : {2'b11};

    assign Net_382[3:0] = 4'h3;

	wire [0:0] tmpOE__Step_A_N_net;
	wire [0:0] tmpFB_0__Step_A_N_net;
	wire [0:0] tmpIO_0__Step_A_N_net;
	wire [0:0] tmpINTERRUPT_0__Step_A_N_net;
	electrical [0:0] tmpSIOVREF__Step_A_N_net;

	cy_psoc3_pins_v1_10
		#(.id("625e882a-1dc8-4c28-8198-5438cf5454da"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b0),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1))
		Step_A_N
		 (.oe(tmpOE__Step_A_N_net),
		  .y({Net_379[2]}),
		  .fb({tmpFB_0__Step_A_N_net[0:0]}),
		  .io({tmpIO_0__Step_A_N_net[0:0]}),
		  .siovref(tmpSIOVREF__Step_A_N_net),
		  .interrupt({tmpINTERRUPT_0__Step_A_N_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Step_A_N_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    // -- Mux start --
    if (1)
    begin : mux_1
        reg [3:0] tmp__mux_1_reg;
        always @(Net_382 or Net_382 or Net_379 or Net_379 or Net_377)
        begin
            case (Net_377[1:0])
                2'b00 :  tmp__mux_1_reg = Net_382[3:0];
                2'b01 :  tmp__mux_1_reg = Net_382[3:0];
                2'b10 :  tmp__mux_1_reg = Net_379[3:0];
                2'b11 :  tmp__mux_1_reg = Net_379[3:0];
            endcase
        end
        assign Net_287[3:0] = tmp__mux_1_reg;
    end
    // -- Mux end --

	wire [0:0] tmpOE__Step_A_P_net;
	wire [0:0] tmpFB_0__Step_A_P_net;
	wire [0:0] tmpIO_0__Step_A_P_net;
	wire [0:0] tmpINTERRUPT_0__Step_A_P_net;
	electrical [0:0] tmpSIOVREF__Step_A_P_net;

	cy_psoc3_pins_v1_10
		#(.id("546f4468-f087-4e09-9207-ca9598059d41"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b0),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1))
		Step_A_P
		 (.oe(tmpOE__Step_A_P_net),
		  .y({Net_379[0]}),
		  .fb({tmpFB_0__Step_A_P_net[0:0]}),
		  .io({tmpIO_0__Step_A_P_net[0:0]}),
		  .siovref(tmpSIOVREF__Step_A_P_net),
		  .interrupt({tmpINTERRUPT_0__Step_A_P_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Step_A_P_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};


	cy_clock_v1_0
		#(.id("9d6da4e2-6eba-4f25-a3f2-25c5937aefd3"),
		  .source_clock_id("413DE2EF-D9F2-4233-A808-DFAF137FD877"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(0))
		Clock_1
		 (.clock_out(Net_286));


	wire [0:0] tmpOE__Step_B_N_net;
	wire [0:0] tmpFB_0__Step_B_N_net;
	wire [0:0] tmpIO_0__Step_B_N_net;
	wire [0:0] tmpINTERRUPT_0__Step_B_N_net;
	electrical [0:0] tmpSIOVREF__Step_B_N_net;

	cy_psoc3_pins_v1_10
		#(.id("f5e2411b-d67c-476a-9132-5fe46fd652d2"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b0),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1))
		Step_B_N
		 (.oe(tmpOE__Step_B_N_net),
		  .y({Net_379[3]}),
		  .fb({tmpFB_0__Step_B_N_net[0:0]}),
		  .io({tmpIO_0__Step_B_N_net[0:0]}),
		  .siovref(tmpSIOVREF__Step_B_N_net),
		  .interrupt({tmpINTERRUPT_0__Step_B_N_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Step_B_N_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    CapSense_CSD_P4_v2_0_7 CapSense (
        .sclk2(Net_417));

    CyControlReg_v1_70 Stepper_Control (
        .control_1(Net_377[1]),
        .control_2(Net_378),
        .control_3(Net_426),
        .control_0(Net_377[0]),
        .control_4(Net_427),
        .control_5(Net_428),
        .control_6(Net_429),
        .control_7(Net_430),
        .clock(Net_286),
        .reset(1'b0));
    defparam Stepper_Control.Bit0Mode = 1;
    defparam Stepper_Control.Bit1Mode = 1;
    defparam Stepper_Control.Bit2Mode = 3;
    defparam Stepper_Control.Bit3Mode = 0;
    defparam Stepper_Control.Bit4Mode = 0;
    defparam Stepper_Control.Bit5Mode = 0;
    defparam Stepper_Control.Bit6Mode = 0;
    defparam Stepper_Control.Bit7Mode = 0;
    defparam Stepper_Control.BitValue = 0;
    defparam Stepper_Control.BusDisplay = 0;
    defparam Stepper_Control.ExtrReset = 1;
    defparam Stepper_Control.NumOutputs = 3;

    // -- DFFE Start --
    reg [3:0] cy_dffe_1;
    always @(posedge Net_286)
    begin
        cy_dffe_1 <= Net_378 ? Net_287[3:0] : cy_dffe_1;
    end
    assign Net_379[3:0] = cy_dffe_1;
    // -- DFFE End --

	wire [0:0] tmpOE__Step_B_P_net;
	wire [0:0] tmpFB_0__Step_B_P_net;
	wire [0:0] tmpIO_0__Step_B_P_net;
	wire [0:0] tmpINTERRUPT_0__Step_B_P_net;
	electrical [0:0] tmpSIOVREF__Step_B_P_net;

	cy_psoc3_pins_v1_10
		#(.id("ed67d275-5596-42c2-a103-fbed622b6a71"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b0),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1))
		Step_B_P
		 (.oe(tmpOE__Step_B_P_net),
		  .y({Net_379[1]}),
		  .fb({tmpFB_0__Step_B_P_net[0:0]}),
		  .io({tmpIO_0__Step_B_P_net[0:0]}),
		  .siovref(tmpSIOVREF__Step_B_P_net),
		  .interrupt({tmpINTERRUPT_0__Step_B_P_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Step_B_P_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    Counter_v2_40_8 UpDown (
        .reset(1'b0),
        .tc(Net_733),
        .comp(Net_734),
        .clock(Net_776),
        .interrupt(Net_735),
        .enable(1'b0),
        .capture(1'b0),
        .upCnt(Net_641),
        .downCnt(Net_520),
        .up_ndown(1'b1),
        .count(1'b0));
    defparam UpDown.CaptureMode = 0;
    defparam UpDown.ClockMode = 2;
    defparam UpDown.CompareMode = 1;
    defparam UpDown.CompareStatusEdgeSense = 1;
    defparam UpDown.EnableMode = 0;
    defparam UpDown.ReloadOnCapture = 0;
    defparam UpDown.ReloadOnCompare = 0;
    defparam UpDown.ReloadOnOverUnder = 0;
    defparam UpDown.ReloadOnReset = 0;
    defparam UpDown.Resolution = 32;
    defparam UpDown.RunMode = 0;
    defparam UpDown.UseInterrupt = 1;


	cy_clock_v1_0
		#(.id("ae5f3bef-81ea-43a0-8a62-24e2db771647"),
		  .source_clock_id("413DE2EF-D9F2-4233-A808-DFAF137FD877"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(0))
		Clock_2
		 (.clock_out(Net_776));


    // -- DFFE Start --
    reg  cy_dffe_3;
    always @(posedge Net_776)
    begin
        cy_dffe_3 <= Net_771 ? Net_591 : cy_dffe_3;
    end
    assign Net_547 = cy_dffe_3;
    // -- DFFE End --

    // -- DFFE Start --
    reg  cy_dffe_2;
    always @(posedge Net_776)
    begin
        cy_dffe_2 <= Net_771 ? Net_589 : cy_dffe_2;
    end
    assign Net_543 = cy_dffe_2;
    // -- DFFE End --

    // -- DFF Start --
    reg  cydff_3;
    always @(posedge Net_776)
    begin
        cydff_3 <= Net_543;
    end
    assign Net_554 = cydff_3;
    // -- DFF End --

    // -- DFF Start --
    reg  cydff_4;
    always @(posedge Net_776)
    begin
        cydff_4 <= Net_547;
    end
    assign Net_558 = cydff_4;
    // -- DFF End --


    assign Net_656 = Net_554 ^ Net_543;


    assign Net_639 = Net_558 ^ Net_547;

	wire [0:0] tmpOE__UD_Ref_net;
	wire [0:0] tmpIO_0__UD_Ref_net;
	wire [0:0] tmpINTERRUPT_0__UD_Ref_net;
	electrical [0:0] tmpSIOVREF__UD_Ref_net;

	cy_psoc3_pins_v1_10
		#(.id("619c4d80-1413-4006-96f4-559c222e8a20"),
		  .drive_mode(3'b001),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("I"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b0),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b00),
		  .width(1))
		UD_Ref
		 (.oe(tmpOE__UD_Ref_net),
		  .y({1'b0}),
		  .fb({Net_591}),
		  .io({tmpIO_0__UD_Ref_net[0:0]}),
		  .siovref(tmpSIOVREF__UD_Ref_net),
		  .interrupt({tmpINTERRUPT_0__UD_Ref_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__UD_Ref_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__UD_Signal_net;
	wire [0:0] tmpIO_0__UD_Signal_net;
	wire [0:0] tmpINTERRUPT_0__UD_Signal_net;
	electrical [0:0] tmpSIOVREF__UD_Signal_net;

	cy_psoc3_pins_v1_10
		#(.id("e0af7dae-f26c-49c0-b528-e9f3cf7956f2"),
		  .drive_mode(3'b001),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("I"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b0),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b00),
		  .width(1))
		UD_Signal
		 (.oe(tmpOE__UD_Signal_net),
		  .y({1'b0}),
		  .fb({Net_589}),
		  .io({tmpIO_0__UD_Signal_net[0:0]}),
		  .siovref(tmpSIOVREF__UD_Signal_net),
		  .interrupt({tmpINTERRUPT_0__UD_Signal_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__UD_Signal_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};


    assign Net_641 = Net_638 & Net_656;


    assign Net_520 = Net_639 & Net_638;


    assign Net_638 = ~(Net_639 & Net_656);

    // -- TFF Start --
    reg  cy_tff_1;
    always @(posedge Net_776)
    begin
        cy_tff_1 <= Net_779^Net_771;
    end
    assign Net_771 = cy_tff_1;
    // -- TFF End --

    assign Net_779 = 1'h1;

    OpAmp_P4_v1_0_9 Transimpedance (
        .Vplus(Net_822),
        .Vout(Net_823),
        .Vminus(Net_824));

	wire [0:0] tmpOE__Sum_node_net;
	wire [0:0] tmpFB_0__Sum_node_net;
	wire [0:0] tmpIO_0__Sum_node_net;
	wire [0:0] tmpINTERRUPT_0__Sum_node_net;
	electrical [0:0] tmpSIOVREF__Sum_node_net;

	cy_psoc3_pins_v1_10
		#(.id("ad3eb51c-2973-4f7d-b01b-2b1e95d6780d"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b0),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1))
		Sum_node
		 (.oe(tmpOE__Sum_node_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Sum_node_net[0:0]}),
		  .analog({Net_824}),
		  .io({tmpIO_0__Sum_node_net[0:0]}),
		  .siovref(tmpSIOVREF__Sum_node_net),
		  .interrupt({tmpINTERRUPT_0__Sum_node_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Sum_node_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__Feedback_net;
	wire [0:0] tmpFB_0__Feedback_net;
	wire [0:0] tmpIO_0__Feedback_net;
	wire [0:0] tmpINTERRUPT_0__Feedback_net;
	electrical [0:0] tmpSIOVREF__Feedback_net;

	cy_psoc3_pins_v1_10
		#(.id("087cd340-a769-4808-9cc2-cc219bb325c1"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b0),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1))
		Feedback
		 (.oe(tmpOE__Feedback_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Feedback_net[0:0]}),
		  .analog({Net_823}),
		  .io({tmpIO_0__Feedback_net[0:0]}),
		  .siovref(tmpSIOVREF__Feedback_net),
		  .interrupt({tmpINTERRUPT_0__Feedback_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Feedback_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__Agnd_net;
	wire [0:0] tmpFB_0__Agnd_net;
	wire [0:0] tmpIO_0__Agnd_net;
	wire [0:0] tmpINTERRUPT_0__Agnd_net;
	electrical [0:0] tmpSIOVREF__Agnd_net;

	cy_psoc3_pins_v1_10
		#(.id("40ce1c84-e1ec-4f0f-8f75-7aaa2a5f781f"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b0),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1))
		Agnd
		 (.oe(tmpOE__Agnd_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Agnd_net[0:0]}),
		  .analog({Net_822}),
		  .io({tmpIO_0__Agnd_net[0:0]}),
		  .siovref(tmpSIOVREF__Agnd_net),
		  .interrupt({tmpINTERRUPT_0__Agnd_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Agnd_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__Button_in_net;
	wire [0:0] tmpFB_0__Button_in_net;
	wire [0:0] tmpIO_0__Button_in_net;
	wire [0:0] tmpINTERRUPT_0__Button_in_net;
	electrical [0:0] tmpSIOVREF__Button_in_net;

	cy_psoc3_pins_v1_10
		#(.id("8d318d8b-cf7b-4b6b-b02c-ab1c5c49d0ba"),
		  .drive_mode(3'b010),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b0),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("I"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b00),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Button_in
		 (.oe(tmpOE__Button_in_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Button_in_net[0:0]}),
		  .io({tmpIO_0__Button_in_net[0:0]}),
		  .siovref(tmpSIOVREF__Button_in_net),
		  .interrupt({tmpINTERRUPT_0__Button_in_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Button_in_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};



endmodule

