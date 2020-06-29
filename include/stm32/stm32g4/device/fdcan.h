#pragma once

////
//
//      STM32G4 FDCAN peripherals
//
///

// FDCAN: FDCAN

struct stm32g431xx_fdcan_t
{
    volatile uint32_t CREL; // FDCAN Core Release Register
    volatile uint32_t ENDN; // FDCAN Core Release Register
    reserved_t<0x1> _0x8;
    volatile uint32_t DBTP; // This register is only writable if bits CCCR.CCE and CCCR.INIT are set. The CAN bit time may be programed in the range of 4 to 25 time quanta. The CAN time quantum may be programmed in the range of 1 to 1024 FDCAN clock periods. tq = (DBRP + 1) FDCAN clock period. DTSEG1 is the sum of Prop_Seg and Phase_Seg1. DTSEG2 is Phase_Seg2. Therefore the length of the bit time is (programmed values) [DTSEG1 + DTSEG2 + 3] tq or (functional values) [Sync_Seg + Prop_Seg + Phase_Seg1 + Phase_Seg2] tq. The Information Processing Time (IPT) is zero, meaning the data for the next bit is available at the first clock edge after the sample point.
    volatile uint32_t TEST; // Write access to the Test Register has to be enabled by setting bit CCCR[TEST] to 1 . All Test Register functions are set to their reset values when bit CCCR[TEST] is reset. Loop Back mode and software control of Tx pin FDCANx_TX are hardware test modes. Programming TX differently from 00 may disturb the message transfer on the CAN bus.
    volatile uint32_t RWD; // The RAM Watchdog monitors the READY output of the Message RAM. A Message RAM access starts the Message RAM Watchdog Counter with the value configured by the RWD[WDC] bits. The counter is reloaded with RWD[WDC] bits when the Message RAM signals successful completion by activating its READY output. In case there is no response from the Message RAM until the counter has counted down to 0, the counter stops and interrupt flag IR[WDI] bit is set. The RAM Watchdog Counter is clocked by the fdcan_pclk clock.
    volatile uint32_t CCCR; // For details about setting and resetting of single bits see Software initialization.
    volatile uint32_t NBTP; // FDCAN_NBTP
    volatile uint32_t TSCC; // FDCAN Timestamp Counter Configuration Register
    volatile uint32_t TSCV; // FDCAN Timestamp Counter Value Register
    volatile uint32_t TOCC; // FDCAN Timeout Counter Configuration Register
    volatile uint32_t TOCV; // FDCAN Timeout Counter Value Register
    reserved_t<0x4> _0x30;
    volatile uint32_t ECR; // FDCAN Error Counter Register
    volatile uint32_t PSR; // FDCAN Protocol Status Register
    volatile uint32_t TDCR; // FDCAN Transmitter Delay Compensation Register
    reserved_t<0x1> _0x4c;
    volatile uint32_t IR; // The flags are set when one of the listed conditions is detected (edge-sensitive). The flags remain set until the Host clears them. A flag is cleared by writing a 1 to the corresponding bit position. Writing a 0 has no effect. A hard reset will clear the register. The configuration of IE controls whether an interrupt is generated. The configuration of ILS controls on which interrupt line an interrupt is signaled.
    volatile uint32_t IE; // The settings in the Interrupt Enable register determine which status changes in the Interrupt Register will be signaled on an interrupt line.
    volatile uint32_t ILS; // The Interrupt Line Select register assigns an interrupt generated by a specific interrupt flag from the Interrupt Register to one of the two module interrupt lines. For interrupt generation the respective interrupt line has to be enabled via ILE[EINT0] and ILE[EINT1].
    volatile uint32_t ILE; // Each of the two interrupt lines to the CPU can be enabled/disabled separately by programming bits EINT0 and EINT1.
    reserved_t<0x8> _0x60;
    volatile uint32_t RXGFC; // Global settings for Message ID filtering. The Global Filter Configuration controls the filter path for standard and extended messages as described in Figure706: Standard Message ID filter path and Figure707: Extended Message ID filter path.
    volatile uint32_t XIDAM; // FDCAN Extended ID and Mask Register
    volatile uint32_t HPMS; // This register is updated every time a Message ID filter element configured to generate a priority event match. This can be used to monitor the status of incoming high priority messages and to enable fast access to these messages.
    reserved_t<0x1> _0x8c;
    volatile uint32_t RXF0S; // FDCAN Rx FIFO 0 Status Register
    volatile uint32_t RXF0A; // CAN Rx FIFO 0 Acknowledge Register
    volatile uint32_t RXF1S; // FDCAN Rx FIFO 1 Status Register
    volatile uint32_t RXF1A; // FDCAN Rx FIFO 1 Acknowledge Register
    reserved_t<0x8> _0xa0;
    volatile uint32_t TXBC; // FDCAN Tx Buffer Configuration Register
    volatile uint32_t TXFQS; // The Tx FIFO/Queue status is related to the pending Tx requests listed in register TXBRP. Therefore the effect of Add/Cancellation requests may be delayed due to a running Tx scan (TXBRP not yet updated).
    volatile uint32_t TXBRP; // FDCAN Tx Buffer Request Pending Register
    volatile uint32_t TXBAR; // FDCAN Tx Buffer Add Request Register
    volatile uint32_t TXBCR; // FDCAN Tx Buffer Cancellation Request Register
    volatile uint32_t TXBTO; // FDCAN Tx Buffer Transmission Occurred Register
    volatile uint32_t TXBCF; // FDCAN Tx Buffer Cancellation Finished Register
    volatile uint32_t TXBTIE; // FDCAN Tx Buffer Transmission Interrupt Enable Register
    volatile uint32_t TXBCIE; // FDCAN Tx Buffer Cancellation Finished Interrupt Enable Register
    volatile uint32_t TXEFS; // FDCAN Tx Event FIFO Status Register
    volatile uint32_t TXEFA; // FDCAN Tx Event FIFO Acknowledge Register
    reserved_t<0x5> _0xec;
    volatile uint32_t CKDIV; // FDCAN CFG clock divider register

    static constexpr uint32_t CREL_RESET_VALUE = 0x11111111; // Reset value
    typedef bit_field_t<0, 0xff> CREL_DAY; // DAY
    typedef bit_field_t<8, 0xff> CREL_MON; // MON
    typedef bit_field_t<16, 0xf> CREL_YEAR; // YEAR
    typedef bit_field_t<20, 0xf> CREL_SUBSTEP; // SUBSTEP
    typedef bit_field_t<24, 0xf> CREL_STEP; // STEP
    typedef bit_field_t<28, 0xf> CREL_REL; // REL

    static constexpr uint32_t ENDN_RESET_VALUE = 0x87654321; // Reset value
    typedef bit_field_t<0, 0xffffffff> ENDN_ETV; // ETV


    static constexpr uint32_t DBTP_RESET_VALUE = 0xa33; // Reset value
    typedef bit_field_t<0, 0xf> DBTP_DSJW; // DSJW
    typedef bit_field_t<4, 0xf> DBTP_DTSEG2; // DTSEG2
    typedef bit_field_t<8, 0x1f> DBTP_DTSEG1; // DTSEG1
    typedef bit_field_t<16, 0x1f> DBTP_DBRP; // DBRP
    static constexpr uint32_t DBTP_TDC = 0x800000; // TDC

    static constexpr uint32_t TEST_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TEST_LBCK = 0x10; // LBCK
    typedef bit_field_t<5, 0x3> TEST_TX; // TX
    static constexpr uint32_t TEST_RX = 0x80; // RX

    static constexpr uint32_t RWD_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RWD_WDC; // WDC
    typedef bit_field_t<8, 0xff> RWD_WDV; // WDV

    static constexpr uint32_t CCCR_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t CCCR_INIT = 0x1; // INIT
    static constexpr uint32_t CCCR_CCE = 0x2; // CCE
    static constexpr uint32_t CCCR_ASM = 0x4; // ASM
    static constexpr uint32_t CCCR_CSA = 0x8; // CSA
    static constexpr uint32_t CCCR_CSR = 0x10; // CSR
    static constexpr uint32_t CCCR_MON = 0x20; // MON
    static constexpr uint32_t CCCR_DAR = 0x40; // DAR
    static constexpr uint32_t CCCR_TEST = 0x80; // TEST
    static constexpr uint32_t CCCR_FDOE = 0x100; // FDOE
    static constexpr uint32_t CCCR_BRSE = 0x200; // BRSE
    static constexpr uint32_t CCCR_PXHD = 0x1000; // PXHD
    static constexpr uint32_t CCCR_EFBI = 0x2000; // EFBI
    static constexpr uint32_t CCCR_TXP = 0x4000; // TXP
    static constexpr uint32_t CCCR_NISO = 0x8000; // NISO

    static constexpr uint32_t NBTP_RESET_VALUE = 0xa33; // Reset value
    typedef bit_field_t<0, 0x7f> NBTP_TSEG2; // TSEG2
    typedef bit_field_t<8, 0xff> NBTP_NTSEG1; // NTSEG1
    typedef bit_field_t<16, 0x1ff> NBTP_NBRP; // NBRP
    typedef bit_field_t<25, 0x7f> NBTP_NSJW; // NSJW

    static constexpr uint32_t TSCC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> TSCC_TSS; // TSS
    typedef bit_field_t<16, 0xf> TSCC_TCP; // TCP

    static constexpr uint32_t TSCV_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> TSCV_TSC; // TSC

    static constexpr uint32_t TOCC_RESET_VALUE = 0xffff0000; // Reset value
    static constexpr uint32_t TOCC_ETOC = 0x1; // ETOC
    typedef bit_field_t<1, 0x3> TOCC_TOS; // TOS
    typedef bit_field_t<16, 0xffff> TOCC_TOP; // TOP

    static constexpr uint32_t TOCV_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> TOCV_TOC; // TOC


    static constexpr uint32_t ECR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> ECR_TEC; // TEC
    typedef bit_field_t<8, 0x7f> ECR_TREC; // TREC
    static constexpr uint32_t ECR_RP = 0x8000; // RP
    typedef bit_field_t<16, 0xff> ECR_CEL; // CEL

    static constexpr uint32_t PSR_RESET_VALUE = 0x707; // Reset value
    typedef bit_field_t<0, 0x7> PSR_LEC; // LEC
    typedef bit_field_t<3, 0x3> PSR_ACT; // ACT
    static constexpr uint32_t PSR_EP = 0x20; // EP
    static constexpr uint32_t PSR_EW = 0x40; // EW
    static constexpr uint32_t PSR_BO = 0x80; // BO
    typedef bit_field_t<8, 0x7> PSR_DLEC; // DLEC
    static constexpr uint32_t PSR_RESI = 0x800; // RESI
    static constexpr uint32_t PSR_RBRS = 0x1000; // RBRS
    static constexpr uint32_t PSR_REDL = 0x2000; // REDL
    static constexpr uint32_t PSR_PXE = 0x4000; // PXE
    typedef bit_field_t<16, 0x7f> PSR_TDCV; // TDCV

    static constexpr uint32_t TDCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> TDCR_TDCF; // TDCF
    typedef bit_field_t<8, 0x7f> TDCR_TDCO; // TDCO


    static constexpr uint32_t IR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IR_RF0N = 0x1; // RF0N
    static constexpr uint32_t IR_RF0W = 0x2; // RF0W
    static constexpr uint32_t IR_RF0F = 0x4; // RF0F
    static constexpr uint32_t IR_RF0L = 0x8; // RF0L
    static constexpr uint32_t IR_RF1N = 0x10; // RF1N
    static constexpr uint32_t IR_RF1W = 0x20; // RF1W
    static constexpr uint32_t IR_RF1F = 0x40; // RF1F
    static constexpr uint32_t IR_RF1L = 0x80; // RF1L
    static constexpr uint32_t IR_HPM = 0x100; // HPM
    static constexpr uint32_t IR_TC = 0x200; // TC
    static constexpr uint32_t IR_TCF = 0x400; // TCF
    static constexpr uint32_t IR_TFE = 0x800; // TFE
    static constexpr uint32_t IR_TEFN = 0x1000; // TEFN
    static constexpr uint32_t IR_TEFW = 0x2000; // TEFW
    static constexpr uint32_t IR_TEFF = 0x4000; // TEFF
    static constexpr uint32_t IR_TEFL = 0x8000; // TEFL
    static constexpr uint32_t IR_TSW = 0x10000; // TSW
    static constexpr uint32_t IR_MRAF = 0x20000; // MRAF
    static constexpr uint32_t IR_TOO = 0x40000; // TOO
    static constexpr uint32_t IR_DRX = 0x80000; // DRX
    static constexpr uint32_t IR_ELO = 0x400000; // ELO
    static constexpr uint32_t IR_EP = 0x800000; // EP
    static constexpr uint32_t IR_EW = 0x1000000; // EW
    static constexpr uint32_t IR_BO = 0x2000000; // BO
    static constexpr uint32_t IR_WDI = 0x4000000; // WDI
    static constexpr uint32_t IR_PEA = 0x8000000; // PEA
    static constexpr uint32_t IR_PED = 0x10000000; // PED
    static constexpr uint32_t IR_ARA = 0x20000000; // ARA

    static constexpr uint32_t IE_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IE_RF0NE = 0x1; // RF0NE
    static constexpr uint32_t IE_RF0WE = 0x2; // RF0WE
    static constexpr uint32_t IE_RF0FE = 0x4; // RF0FE
    static constexpr uint32_t IE_RF0LE = 0x8; // RF0LE
    static constexpr uint32_t IE_RF1NE = 0x10; // RF1NE
    static constexpr uint32_t IE_RF1WE = 0x20; // RF1WE
    static constexpr uint32_t IE_RF1FE = 0x40; // RF1FE
    static constexpr uint32_t IE_RF1LE = 0x80; // RF1LE
    static constexpr uint32_t IE_HPME = 0x100; // HPME
    static constexpr uint32_t IE_TCE = 0x200; // TCE
    static constexpr uint32_t IE_TCFE = 0x400; // TCFE
    static constexpr uint32_t IE_TFEE = 0x800; // TFEE
    static constexpr uint32_t IE_TEFNE = 0x1000; // TEFNE
    static constexpr uint32_t IE_TEFWE = 0x2000; // TEFWE
    static constexpr uint32_t IE_TEFFE = 0x4000; // TEFFE
    static constexpr uint32_t IE_TEFLE = 0x8000; // TEFLE
    static constexpr uint32_t IE_TSWE = 0x10000; // TSWE
    static constexpr uint32_t IE_MRAFE = 0x20000; // MRAFE
    static constexpr uint32_t IE_TOOE = 0x40000; // TOOE
    static constexpr uint32_t IE_DRX = 0x80000; // DRX
    static constexpr uint32_t IE_BECE = 0x100000; // BECE
    static constexpr uint32_t IE_BEUE = 0x200000; // BEUE
    static constexpr uint32_t IE_ELOE = 0x400000; // ELOE
    static constexpr uint32_t IE_EPE = 0x800000; // EPE
    static constexpr uint32_t IE_EWE = 0x1000000; // EWE
    static constexpr uint32_t IE_BOE = 0x2000000; // BOE
    static constexpr uint32_t IE_WDIE = 0x4000000; // WDIE
    static constexpr uint32_t IE_PEAE = 0x8000000; // PEAE
    static constexpr uint32_t IE_PEDE = 0x10000000; // PEDE
    static constexpr uint32_t IE_ARAE = 0x20000000; // ARAE

    static constexpr uint32_t ILS_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ILS_RF0NL = 0x1; // RF0NL
    static constexpr uint32_t ILS_RF0WL = 0x2; // RF0WL
    static constexpr uint32_t ILS_RF0FL = 0x4; // RF0FL
    static constexpr uint32_t ILS_RF0LL = 0x8; // RF0LL
    static constexpr uint32_t ILS_RF1NL = 0x10; // RF1NL
    static constexpr uint32_t ILS_RF1WL = 0x20; // RF1WL
    static constexpr uint32_t ILS_RF1FL = 0x40; // RF1FL
    static constexpr uint32_t ILS_RF1LL = 0x80; // RF1LL
    static constexpr uint32_t ILS_HPML = 0x100; // HPML
    static constexpr uint32_t ILS_TCL = 0x200; // TCL
    static constexpr uint32_t ILS_TCFL = 0x400; // TCFL
    static constexpr uint32_t ILS_TFEL = 0x800; // TFEL
    static constexpr uint32_t ILS_TEFNL = 0x1000; // TEFNL
    static constexpr uint32_t ILS_TEFWL = 0x2000; // TEFWL
    static constexpr uint32_t ILS_TEFFL = 0x4000; // TEFFL
    static constexpr uint32_t ILS_TEFLL = 0x8000; // TEFLL
    static constexpr uint32_t ILS_TSWL = 0x10000; // TSWL
    static constexpr uint32_t ILS_MRAFL = 0x20000; // MRAFL
    static constexpr uint32_t ILS_TOOL = 0x40000; // TOOL
    static constexpr uint32_t ILS_DRXL = 0x80000; // DRXL
    static constexpr uint32_t ILS_BECL = 0x100000; // BECL
    static constexpr uint32_t ILS_BEUL = 0x200000; // BEUL
    static constexpr uint32_t ILS_ELOL = 0x400000; // ELOL
    static constexpr uint32_t ILS_EPL = 0x800000; // EPL
    static constexpr uint32_t ILS_EWL = 0x1000000; // EWL
    static constexpr uint32_t ILS_BOL = 0x2000000; // BOL
    static constexpr uint32_t ILS_WDIL = 0x4000000; // WDIL
    static constexpr uint32_t ILS_PEAL = 0x8000000; // PEAL
    static constexpr uint32_t ILS_PEDL = 0x10000000; // PEDL
    static constexpr uint32_t ILS_ARAL = 0x20000000; // ARAL

    static constexpr uint32_t ILE_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ILE_EINT0 = 0x1; // EINT0
    static constexpr uint32_t ILE_EINT1 = 0x2; // EINT1


    static constexpr uint32_t RXGFC_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RXGFC_RRFE = 0x1; // RRFE
    static constexpr uint32_t RXGFC_RRFS = 0x2; // RRFS
    typedef bit_field_t<2, 0x3> RXGFC_ANFE; // ANFE
    typedef bit_field_t<4, 0x3> RXGFC_ANFS; // ANFS

    static constexpr uint32_t XIDAM_RESET_VALUE = 0x1fffffff; // Reset value
    typedef bit_field_t<0, 0x1fffffff> XIDAM_EIDM; // EIDM

    static constexpr uint32_t HPMS_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> HPMS_BIDX; // BIDX
    typedef bit_field_t<6, 0x3> HPMS_MSI; // MSI
    typedef bit_field_t<8, 0x7f> HPMS_FIDX; // FIDX
    static constexpr uint32_t HPMS_FLST = 0x8000; // FLST


    static constexpr uint32_t RXF0S_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> RXF0S_F0FL; // F0FL
    typedef bit_field_t<8, 0x3f> RXF0S_F0GI; // F0GI
    typedef bit_field_t<16, 0x3f> RXF0S_F0PI; // F0PI
    static constexpr uint32_t RXF0S_F0F = 0x1000000; // F0F
    static constexpr uint32_t RXF0S_RF0L = 0x2000000; // RF0L

    static constexpr uint32_t RXF0A_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> RXF0A_F0AI; // F0AI

    static constexpr uint32_t RXF1S_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> RXF1S_F1FL; // F1FL
    typedef bit_field_t<8, 0x3f> RXF1S_F1GI; // F1GI
    typedef bit_field_t<16, 0x3f> RXF1S_F1PI; // F1PI
    static constexpr uint32_t RXF1S_F1F = 0x1000000; // F1F
    static constexpr uint32_t RXF1S_RF1L = 0x2000000; // RF1L
    typedef bit_field_t<30, 0x3> RXF1S_DMS; // DMS

    static constexpr uint32_t RXF1A_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> RXF1A_F1AI; // F1AI


    static constexpr uint32_t TXBC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<2, 0x3fff> TXBC_TBSA; // TBSA
    typedef bit_field_t<16, 0x3f> TXBC_NDTB; // NDTB
    typedef bit_field_t<24, 0x3f> TXBC_TFQS; // TFQS
    static constexpr uint32_t TXBC_TFQM = 0x40000000; // TFQM

    static constexpr uint32_t TXFQS_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> TXFQS_TFFL; // TFFL
    typedef bit_field_t<8, 0x1f> TXFQS_TFGI; // TFGI
    typedef bit_field_t<16, 0x1f> TXFQS_TFQPI; // TFQPI
    static constexpr uint32_t TXFQS_TFQF = 0x200000; // TFQF

    static constexpr uint32_t TXBRP_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TXBRP_TRP; // TRP

    static constexpr uint32_t TXBAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TXBAR_AR; // AR

    static constexpr uint32_t TXBCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TXBCR_CR; // CR

    static constexpr uint32_t TXBTO_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TXBTO_TO; // TO

    static constexpr uint32_t TXBCF_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TXBCF_CF; // CF

    static constexpr uint32_t TXBTIE_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TXBTIE_TIE; // TIE

    static constexpr uint32_t TXBCIE_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TXBCIE_CFIE; // CFIE

    static constexpr uint32_t TXEFS_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> TXEFS_EFFL; // EFFL
    typedef bit_field_t<8, 0x1f> TXEFS_EFGI; // EFGI
    typedef bit_field_t<16, 0x1f> TXEFS_EFPI; // EFPI
    static constexpr uint32_t TXEFS_EFF = 0x1000000; // EFF
    static constexpr uint32_t TXEFS_TEFL = 0x2000000; // TEFL

    static constexpr uint32_t TXEFA_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> TXEFA_EFAI; // EFAI


    static constexpr uint32_t CKDIV_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> CKDIV_PDIV; // input clock divider. the APB clock could be divided prior to be used by the CAN sub
};

template<>
struct peripheral_t<STM32G431xx, FDCAN>
{
    using T = stm32g431xx_fdcan_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G431xx, FDCAN1>
{
    using T = stm32g431xx_fdcan_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, FDCAN>
{
    using T = stm32g431xx_fdcan_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, FDCAN1>
{
    using T = stm32g431xx_fdcan_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, FDCAN>
{
    using T = stm32g431xx_fdcan_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, FDCAN1>
{
    using T = stm32g431xx_fdcan_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, FDCAN2>
{
    using T = stm32g431xx_fdcan_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, FDCAN>
{
    using T = stm32g431xx_fdcan_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, FDCAN1>
{
    using T = stm32g431xx_fdcan_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, FDCAN2>
{
    using T = stm32g431xx_fdcan_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, FDCAN3>
{
    using T = stm32g431xx_fdcan_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, FDCAN>
{
    using T = stm32g431xx_fdcan_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, FDCAN1>
{
    using T = stm32g431xx_fdcan_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, FDCAN2>
{
    using T = stm32g431xx_fdcan_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, FDCAN3>
{
    using T = stm32g431xx_fdcan_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, FDCAN>
{
    using T = stm32g431xx_fdcan_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, FDCAN1>
{
    using T = stm32g431xx_fdcan_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, FDCAN2>
{
    using T = stm32g431xx_fdcan_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, FDCAN3>
{
    using T = stm32g431xx_fdcan_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, FDCAN>
{
    using T = stm32g431xx_fdcan_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, FDCAN1>
{
    using T = stm32g431xx_fdcan_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, FDCAN2>
{
    using T = stm32g431xx_fdcan_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, FDCAN3>
{
    using T = stm32g431xx_fdcan_t;
    static T& V;
};

template<>
struct peripheral_t<STM32GBK1CBT6, FDCAN>
{
    using T = stm32g431xx_fdcan_t;
    static T& V;
};

template<>
struct peripheral_t<STM32GBK1CBT6, FDCAN1>
{
    using T = stm32g431xx_fdcan_t;
    static T& V;
};

using fdcan_t = peripheral_t<svd, FDCAN>;
using fdcan1_t = peripheral_t<svd, FDCAN1>;
using fdcan2_t = peripheral_t<svd, FDCAN2>;
using fdcan3_t = peripheral_t<svd, FDCAN3>;

template<int INST> struct fdcan_traits {};

template<> struct fdcan_traits<0>
{
    using fdcan = fdcan_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR1 |= RCC::T::APB1ENR1_FDCANEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR1 &= ~RCC::T::APB1ENR1_FDCANEN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR1 |= RCC::T::APB1SMENR1_FDCANSMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_FDCANSMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR1 |= RCC::T::APB1RSTR1_FDCANRST;
    }
};

template<> struct fdcan_traits<1>
{
    using fdcan = fdcan1_t;
    static constexpr signal_t RX = FDCAN1_RX;
    static constexpr signal_t TX = FDCAN1_TX;
};

template<> struct fdcan_traits<2>
{
    using fdcan = fdcan2_t;
    static constexpr signal_t RX = FDCAN2_RX;
    static constexpr signal_t TX = FDCAN2_TX;
};

template<> struct fdcan_traits<3>
{
    using fdcan = fdcan3_t;
    static constexpr signal_t RX = FDCAN3_RX;
    static constexpr signal_t TX = FDCAN3_TX;
};
