#pragma once

////
//
//      STM32L0 USB peripherals
//
////

////
//
//      Universal serial bus full-speed device interface
//
////

struct stm32l0x2_usb_fs_t
{
    volatile uint32_t EP0R;   // [read-write] endpoint register
    volatile uint32_t EP1R;   // [read-write] endpoint register
    volatile uint32_t EP2R;   // [read-write] endpoint register
    volatile uint32_t EP3R;   // [read-write] endpoint register
    volatile uint32_t EP4R;   // [read-write] endpoint register
    volatile uint32_t EP5R;   // [read-write] endpoint register
    volatile uint32_t EP6R;   // [read-write] endpoint register
    volatile uint32_t EP7R;   // [read-write] endpoint register
    reserved_t<0x8> _0x40;
    volatile uint32_t CNTR;   // [read-write] control register
    volatile uint32_t ISTR;   // [read-write] interrupt status register
    volatile uint32_t FNR;    // [read-only] frame number register
    volatile uint32_t DADDR;  // [read-write] device address
    volatile uint32_t BTABLE; // [read-write] Buffer table address
    volatile uint32_t LPMCSR; // LPM control and status register
    volatile uint32_t BCDR;   // Battery charging detector

    static constexpr uint32_t EP0R_RESET_VALUE = 0x0;
    static constexpr uint32_t EP0R_CTR_RX = 0x8000;  // CTR_RX
    static constexpr uint32_t EP0R_DTOG_RX = 0x4000; // DTOG_RX
    template<uint32_t X>
    static constexpr uint32_t EP0R_STAT_RX =         // STAT_RX
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t EP0R_SETUP = 0x800;    // SETUP
    template<uint32_t X>
    static constexpr uint32_t EP0R_EPTYPE =          // EPTYPE
        bit_field_t<9, 0x3>::value<X>();
    static constexpr uint32_t EP0R_EP_KIND = 0x100;  // EP_KIND
    static constexpr uint32_t EP0R_CTR_TX = 0x80;    // CTR_TX
    static constexpr uint32_t EP0R_DTOG_TX = 0x40;   // DTOG_TX
    template<uint32_t X>
    static constexpr uint32_t EP0R_STAT_TX =         // STAT_TX
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EP0R_EA =              // EA
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t EP1R_RESET_VALUE = 0x0;
    static constexpr uint32_t EP1R_CTR_RX = 0x8000;  // CTR_RX
    static constexpr uint32_t EP1R_DTOG_RX = 0x4000; // DTOG_RX
    template<uint32_t X>
    static constexpr uint32_t EP1R_STAT_RX =         // STAT_RX
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t EP1R_SETUP = 0x800;    // SETUP
    template<uint32_t X>
    static constexpr uint32_t EP1R_EPTYPE =          // EPTYPE
        bit_field_t<9, 0x3>::value<X>();
    static constexpr uint32_t EP1R_EP_KIND = 0x100;  // EP_KIND
    static constexpr uint32_t EP1R_CTR_TX = 0x80;    // CTR_TX
    static constexpr uint32_t EP1R_DTOG_TX = 0x40;   // DTOG_TX
    template<uint32_t X>
    static constexpr uint32_t EP1R_STAT_TX =         // STAT_TX
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EP1R_EA =              // EA
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t EP2R_RESET_VALUE = 0x0;
    static constexpr uint32_t EP2R_CTR_RX = 0x8000;  // CTR_RX
    static constexpr uint32_t EP2R_DTOG_RX = 0x4000; // DTOG_RX
    template<uint32_t X>
    static constexpr uint32_t EP2R_STAT_RX =         // STAT_RX
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t EP2R_SETUP = 0x800;    // SETUP
    template<uint32_t X>
    static constexpr uint32_t EP2R_EPTYPE =          // EPTYPE
        bit_field_t<9, 0x3>::value<X>();
    static constexpr uint32_t EP2R_EP_KIND = 0x100;  // EP_KIND
    static constexpr uint32_t EP2R_CTR_TX = 0x80;    // CTR_TX
    static constexpr uint32_t EP2R_DTOG_TX = 0x40;   // DTOG_TX
    template<uint32_t X>
    static constexpr uint32_t EP2R_STAT_TX =         // STAT_TX
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EP2R_EA =              // EA
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t EP3R_RESET_VALUE = 0x0;
    static constexpr uint32_t EP3R_CTR_RX = 0x8000;  // CTR_RX
    static constexpr uint32_t EP3R_DTOG_RX = 0x4000; // DTOG_RX
    template<uint32_t X>
    static constexpr uint32_t EP3R_STAT_RX =         // STAT_RX
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t EP3R_SETUP = 0x800;    // SETUP
    template<uint32_t X>
    static constexpr uint32_t EP3R_EPTYPE =          // EPTYPE
        bit_field_t<9, 0x3>::value<X>();
    static constexpr uint32_t EP3R_EP_KIND = 0x100;  // EP_KIND
    static constexpr uint32_t EP3R_CTR_TX = 0x80;    // CTR_TX
    static constexpr uint32_t EP3R_DTOG_TX = 0x40;   // DTOG_TX
    template<uint32_t X>
    static constexpr uint32_t EP3R_STAT_TX =         // STAT_TX
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EP3R_EA =              // EA
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t EP4R_RESET_VALUE = 0x0;
    static constexpr uint32_t EP4R_CTR_RX = 0x8000;  // CTR_RX
    static constexpr uint32_t EP4R_DTOG_RX = 0x4000; // DTOG_RX
    template<uint32_t X>
    static constexpr uint32_t EP4R_STAT_RX =         // STAT_RX
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t EP4R_SETUP = 0x800;    // SETUP
    template<uint32_t X>
    static constexpr uint32_t EP4R_EPTYPE =          // EPTYPE
        bit_field_t<9, 0x3>::value<X>();
    static constexpr uint32_t EP4R_EP_KIND = 0x100;  // EP_KIND
    static constexpr uint32_t EP4R_CTR_TX = 0x80;    // CTR_TX
    static constexpr uint32_t EP4R_DTOG_TX = 0x40;   // DTOG_TX
    template<uint32_t X>
    static constexpr uint32_t EP4R_STAT_TX =         // STAT_TX
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EP4R_EA =              // EA
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t EP5R_RESET_VALUE = 0x0;
    static constexpr uint32_t EP5R_CTR_RX = 0x8000;  // CTR_RX
    static constexpr uint32_t EP5R_DTOG_RX = 0x4000; // DTOG_RX
    template<uint32_t X>
    static constexpr uint32_t EP5R_STAT_RX =         // STAT_RX
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t EP5R_SETUP = 0x800;    // SETUP
    template<uint32_t X>
    static constexpr uint32_t EP5R_EPTYPE =          // EPTYPE
        bit_field_t<9, 0x3>::value<X>();
    static constexpr uint32_t EP5R_EP_KIND = 0x100;  // EP_KIND
    static constexpr uint32_t EP5R_CTR_TX = 0x80;    // CTR_TX
    static constexpr uint32_t EP5R_DTOG_TX = 0x40;   // DTOG_TX
    template<uint32_t X>
    static constexpr uint32_t EP5R_STAT_TX =         // STAT_TX
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EP5R_EA =              // EA
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t EP6R_RESET_VALUE = 0x0;
    static constexpr uint32_t EP6R_CTR_RX = 0x8000;  // CTR_RX
    static constexpr uint32_t EP6R_DTOG_RX = 0x4000; // DTOG_RX
    template<uint32_t X>
    static constexpr uint32_t EP6R_STAT_RX =         // STAT_RX
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t EP6R_SETUP = 0x800;    // SETUP
    template<uint32_t X>
    static constexpr uint32_t EP6R_EPTYPE =          // EPTYPE
        bit_field_t<9, 0x3>::value<X>();
    static constexpr uint32_t EP6R_EP_KIND = 0x100;  // EP_KIND
    static constexpr uint32_t EP6R_CTR_TX = 0x80;    // CTR_TX
    static constexpr uint32_t EP6R_DTOG_TX = 0x40;   // DTOG_TX
    template<uint32_t X>
    static constexpr uint32_t EP6R_STAT_TX =         // STAT_TX
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EP6R_EA =              // EA
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t EP7R_RESET_VALUE = 0x0;
    static constexpr uint32_t EP7R_CTR_RX = 0x8000;  // CTR_RX
    static constexpr uint32_t EP7R_DTOG_RX = 0x4000; // DTOG_RX
    template<uint32_t X>
    static constexpr uint32_t EP7R_STAT_RX =         // STAT_RX
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t EP7R_SETUP = 0x800;    // SETUP
    template<uint32_t X>
    static constexpr uint32_t EP7R_EPTYPE =          // EPTYPE
        bit_field_t<9, 0x3>::value<X>();
    static constexpr uint32_t EP7R_EP_KIND = 0x100;  // EP_KIND
    static constexpr uint32_t EP7R_CTR_TX = 0x80;    // CTR_TX
    static constexpr uint32_t EP7R_DTOG_TX = 0x40;   // DTOG_TX
    template<uint32_t X>
    static constexpr uint32_t EP7R_STAT_TX =         // STAT_TX
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EP7R_EA =              // EA
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t CNTR_RESET_VALUE = 0x0;
    static constexpr uint32_t CNTR_CTRM = 0x8000;    // CTRM
    static constexpr uint32_t CNTR_PMAOVRM = 0x4000; // PMAOVRM
    static constexpr uint32_t CNTR_ERRM = 0x2000;    // ERRM
    static constexpr uint32_t CNTR_WKUPM = 0x1000;   // WKUPM
    static constexpr uint32_t CNTR_SUSPM = 0x800;    // SUSPM
    static constexpr uint32_t CNTR_RESETM = 0x400;   // RESETM
    static constexpr uint32_t CNTR_SOFM = 0x200;     // SOFM
    static constexpr uint32_t CNTR_ESOFM = 0x100;    // ESOFM
    static constexpr uint32_t CNTR_L1REQM = 0x80;    // L1REQM
    static constexpr uint32_t CNTR_L1RESUME = 0x20;  // L1RESUME
    static constexpr uint32_t CNTR_RESUME = 0x10;    // RESUME
    static constexpr uint32_t CNTR_FSUSP = 0x8;      // FSUSP
    static constexpr uint32_t CNTR_LPMODE = 0x4;     // LPMODE
    static constexpr uint32_t CNTR_PDWN = 0x2;       // PDWN
    static constexpr uint32_t CNTR_FRES = 0x1;       // FRES

    static constexpr uint32_t ISTR_RESET_VALUE = 0x0;
    static constexpr uint32_t ISTR_CTR = 0x8000;    // CTR
    static constexpr uint32_t ISTR_PMAOVR = 0x4000; // PMAOVR
    static constexpr uint32_t ISTR_ERR = 0x2000;    // ERR
    static constexpr uint32_t ISTR_WKUP = 0x1000;   // WKUP
    static constexpr uint32_t ISTR_SUSP = 0x800;    // SUSP
    static constexpr uint32_t ISTR_RESET = 0x400;   // RESET
    static constexpr uint32_t ISTR_SOF = 0x200;     // SOF
    static constexpr uint32_t ISTR_ESOF = 0x100;    // ESOF
    static constexpr uint32_t ISTR_L1REQ = 0x80;    // L1REQ
    static constexpr uint32_t ISTR_DIR = 0x10;      // DIR
    template<uint32_t X>
    static constexpr uint32_t ISTR_EP_ID =          // EP_ID
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t FNR_RESET_VALUE = 0x0;
    static constexpr uint32_t FNR_RXDP = 0x8000; // RXDP
    static constexpr uint32_t FNR_RXDM = 0x4000; // RXDM
    static constexpr uint32_t FNR_LCK = 0x2000;  // LCK
    template<uint32_t X>
    static constexpr uint32_t FNR_LSOF =         // LSOF
        bit_field_t<11, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FNR_FN =           // FN
        bit_field_t<0, 0x7ff>::value<X>();

    static constexpr uint32_t DADDR_RESET_VALUE = 0x0;
    static constexpr uint32_t DADDR_EF = 0x80; // EF
    template<uint32_t X>
    static constexpr uint32_t DADDR_ADD =      // ADD
        bit_field_t<0, 0x7f>::value<X>();

    static constexpr uint32_t BTABLE_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t BTABLE_BTABLE =   // BTABLE
        bit_field_t<3, 0x1fff>::value<X>();

    static constexpr uint32_t LPMCSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LPMCSR_BESL =         // BESL
        bit_field_t<4, 0xf>::value<X>();
    static constexpr uint32_t LPMCSR_REMWAKE = 0x8; // REMWAKE
    static constexpr uint32_t LPMCSR_LPMACK = 0x2;  // LPMACK
    static constexpr uint32_t LPMCSR_LPMEN = 0x1;   // LPMEN

    static constexpr uint32_t BCDR_RESET_VALUE = 0x0;
    static constexpr uint32_t BCDR_DPPU = 0x8000; // DPPU
    static constexpr uint32_t BCDR_PS2DET = 0x80; // PS2DET
    static constexpr uint32_t BCDR_SDET = 0x40;   // SDET
    static constexpr uint32_t BCDR_PDET = 0x20;   // PDET
    static constexpr uint32_t BCDR_DCDET = 0x10;  // DCDET
    static constexpr uint32_t BCDR_SDEN = 0x8;    // SDEN
    static constexpr uint32_t BCDR_PDEN = 0x4;    // PDEN
    static constexpr uint32_t BCDR_DCDEN = 0x2;   // DCDEN
    static constexpr uint32_t BCDR_BCDEN = 0x1;   // BCDEN
};


////
//
//      Universal serial bus full-speed device interface
//
////

struct stm32l0x2_usb_sram_t
{
    volatile uint32_t EP0R;   // [read-write] endpoint 0 register
    volatile uint32_t EP1R;   // [read-write] endpoint 1 register
    volatile uint32_t EP2R;   // [read-write] endpoint 2 register
    volatile uint32_t EP3R;   // [read-write] endpoint 3 register
    volatile uint32_t EP4R;   // [read-write] endpoint 4 register
    volatile uint32_t EP5R;   // [read-write] endpoint 5 register
    volatile uint32_t EP6R;   // [read-write] endpoint 6 register
    volatile uint32_t EP7R;   // [read-write] endpoint 7 register
    reserved_t<0x8> _0x40;
    volatile uint32_t CNTR;   // [read-write] control register
    volatile uint32_t ISTR;   // interrupt status register
    volatile uint32_t FNR;    // [read-only] frame number register
    volatile uint32_t DADDR;  // [read-write] device address
    volatile uint32_t BTABLE; // [read-write] Buffer table address
    volatile uint32_t LPMCSR; // LPM control and status register
    volatile uint32_t BCDR;   // Battery charging detector

    static constexpr uint32_t EP0R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EP0R_EA =              // Endpoint address
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EP0R_STAT_TX =         // Status bits, for transmission transfers
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t EP0R_DTOG_TX = 0x40;   // Data Toggle, for transmission transfers
    static constexpr uint32_t EP0R_CTR_TX = 0x80;    // Correct Transfer for transmission
    static constexpr uint32_t EP0R_EP_KIND = 0x100;  // Endpoint kind
    template<uint32_t X>
    static constexpr uint32_t EP0R_EP_TYPE =         // Endpoint type
        bit_field_t<9, 0x3>::value<X>();
    static constexpr uint32_t EP0R_SETUP = 0x800;    // Setup transaction completed
    template<uint32_t X>
    static constexpr uint32_t EP0R_STAT_RX =         // Status bits, for reception transfers
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t EP0R_DTOG_RX = 0x4000; // Data Toggle, for reception transfers
    static constexpr uint32_t EP0R_CTR_RX = 0x8000;  // Correct transfer for reception

    static constexpr uint32_t EP1R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EP1R_EA =              // Endpoint address
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EP1R_STAT_TX =         // Status bits, for transmission transfers
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t EP1R_DTOG_TX = 0x40;   // Data Toggle, for transmission transfers
    static constexpr uint32_t EP1R_CTR_TX = 0x80;    // Correct Transfer for transmission
    static constexpr uint32_t EP1R_EP_KIND = 0x100;  // Endpoint kind
    template<uint32_t X>
    static constexpr uint32_t EP1R_EP_TYPE =         // Endpoint type
        bit_field_t<9, 0x3>::value<X>();
    static constexpr uint32_t EP1R_SETUP = 0x800;    // Setup transaction completed
    template<uint32_t X>
    static constexpr uint32_t EP1R_STAT_RX =         // Status bits, for reception transfers
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t EP1R_DTOG_RX = 0x4000; // Data Toggle, for reception transfers
    static constexpr uint32_t EP1R_CTR_RX = 0x8000;  // Correct transfer for reception

    static constexpr uint32_t EP2R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EP2R_EA =              // Endpoint address
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EP2R_STAT_TX =         // Status bits, for transmission transfers
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t EP2R_DTOG_TX = 0x40;   // Data Toggle, for transmission transfers
    static constexpr uint32_t EP2R_CTR_TX = 0x80;    // Correct Transfer for transmission
    static constexpr uint32_t EP2R_EP_KIND = 0x100;  // Endpoint kind
    template<uint32_t X>
    static constexpr uint32_t EP2R_EP_TYPE =         // Endpoint type
        bit_field_t<9, 0x3>::value<X>();
    static constexpr uint32_t EP2R_SETUP = 0x800;    // Setup transaction completed
    template<uint32_t X>
    static constexpr uint32_t EP2R_STAT_RX =         // Status bits, for reception transfers
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t EP2R_DTOG_RX = 0x4000; // Data Toggle, for reception transfers
    static constexpr uint32_t EP2R_CTR_RX = 0x8000;  // Correct transfer for reception

    static constexpr uint32_t EP3R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EP3R_EA =              // Endpoint address
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EP3R_STAT_TX =         // Status bits, for transmission transfers
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t EP3R_DTOG_TX = 0x40;   // Data Toggle, for transmission transfers
    static constexpr uint32_t EP3R_CTR_TX = 0x80;    // Correct Transfer for transmission
    static constexpr uint32_t EP3R_EP_KIND = 0x100;  // Endpoint kind
    template<uint32_t X>
    static constexpr uint32_t EP3R_EP_TYPE =         // Endpoint type
        bit_field_t<9, 0x3>::value<X>();
    static constexpr uint32_t EP3R_SETUP = 0x800;    // Setup transaction completed
    template<uint32_t X>
    static constexpr uint32_t EP3R_STAT_RX =         // Status bits, for reception transfers
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t EP3R_DTOG_RX = 0x4000; // Data Toggle, for reception transfers
    static constexpr uint32_t EP3R_CTR_RX = 0x8000;  // Correct transfer for reception

    static constexpr uint32_t EP4R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EP4R_EA =              // Endpoint address
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EP4R_STAT_TX =         // Status bits, for transmission transfers
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t EP4R_DTOG_TX = 0x40;   // Data Toggle, for transmission transfers
    static constexpr uint32_t EP4R_CTR_TX = 0x80;    // Correct Transfer for transmission
    static constexpr uint32_t EP4R_EP_KIND = 0x100;  // Endpoint kind
    template<uint32_t X>
    static constexpr uint32_t EP4R_EP_TYPE =         // Endpoint type
        bit_field_t<9, 0x3>::value<X>();
    static constexpr uint32_t EP4R_SETUP = 0x800;    // Setup transaction completed
    template<uint32_t X>
    static constexpr uint32_t EP4R_STAT_RX =         // Status bits, for reception transfers
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t EP4R_DTOG_RX = 0x4000; // Data Toggle, for reception transfers
    static constexpr uint32_t EP4R_CTR_RX = 0x8000;  // Correct transfer for reception

    static constexpr uint32_t EP5R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EP5R_EA =              // Endpoint address
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EP5R_STAT_TX =         // Status bits, for transmission transfers
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t EP5R_DTOG_TX = 0x40;   // Data Toggle, for transmission transfers
    static constexpr uint32_t EP5R_CTR_TX = 0x80;    // Correct Transfer for transmission
    static constexpr uint32_t EP5R_EP_KIND = 0x100;  // Endpoint kind
    template<uint32_t X>
    static constexpr uint32_t EP5R_EP_TYPE =         // Endpoint type
        bit_field_t<9, 0x3>::value<X>();
    static constexpr uint32_t EP5R_SETUP = 0x800;    // Setup transaction completed
    template<uint32_t X>
    static constexpr uint32_t EP5R_STAT_RX =         // Status bits, for reception transfers
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t EP5R_DTOG_RX = 0x4000; // Data Toggle, for reception transfers
    static constexpr uint32_t EP5R_CTR_RX = 0x8000;  // Correct transfer for reception

    static constexpr uint32_t EP6R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EP6R_EA =              // Endpoint address
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EP6R_STAT_TX =         // Status bits, for transmission transfers
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t EP6R_DTOG_TX = 0x40;   // Data Toggle, for transmission transfers
    static constexpr uint32_t EP6R_CTR_TX = 0x80;    // Correct Transfer for transmission
    static constexpr uint32_t EP6R_EP_KIND = 0x100;  // Endpoint kind
    template<uint32_t X>
    static constexpr uint32_t EP6R_EP_TYPE =         // Endpoint type
        bit_field_t<9, 0x3>::value<X>();
    static constexpr uint32_t EP6R_SETUP = 0x800;    // Setup transaction completed
    template<uint32_t X>
    static constexpr uint32_t EP6R_STAT_RX =         // Status bits, for reception transfers
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t EP6R_DTOG_RX = 0x4000; // Data Toggle, for reception transfers
    static constexpr uint32_t EP6R_CTR_RX = 0x8000;  // Correct transfer for reception

    static constexpr uint32_t EP7R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EP7R_EA =              // Endpoint address
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EP7R_STAT_TX =         // Status bits, for transmission transfers
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t EP7R_DTOG_TX = 0x40;   // Data Toggle, for transmission transfers
    static constexpr uint32_t EP7R_CTR_TX = 0x80;    // Correct Transfer for transmission
    static constexpr uint32_t EP7R_EP_KIND = 0x100;  // Endpoint kind
    template<uint32_t X>
    static constexpr uint32_t EP7R_EP_TYPE =         // Endpoint type
        bit_field_t<9, 0x3>::value<X>();
    static constexpr uint32_t EP7R_SETUP = 0x800;    // Setup transaction completed
    template<uint32_t X>
    static constexpr uint32_t EP7R_STAT_RX =         // Status bits, for reception transfers
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t EP7R_DTOG_RX = 0x4000; // Data Toggle, for reception transfers
    static constexpr uint32_t EP7R_CTR_RX = 0x8000;  // Correct transfer for reception

    static constexpr uint32_t CNTR_RESET_VALUE = 0x3;
    static constexpr uint32_t CNTR_FRES = 0x1;       // Force USB Reset
    static constexpr uint32_t CNTR_PDWN = 0x2;       // Power down
    static constexpr uint32_t CNTR_LPMODE = 0x4;     // Low-power mode
    static constexpr uint32_t CNTR_FSUSP = 0x8;      // Force suspend
    static constexpr uint32_t CNTR_RESUME = 0x10;    // Resume request
    static constexpr uint32_t CNTR_L1RESUME = 0x20;  // LPM L1 Resume request
    static constexpr uint32_t CNTR_L1REQM = 0x80;    // LPM L1 state request interrupt mask
    static constexpr uint32_t CNTR_ESOFM = 0x100;    // Expected start of frame interrupt mask
    static constexpr uint32_t CNTR_SOFM = 0x200;     // Start of frame interrupt mask
    static constexpr uint32_t CNTR_RESETM = 0x400;   // USB reset interrupt mask
    static constexpr uint32_t CNTR_SUSPM = 0x800;    // Suspend mode interrupt mask
    static constexpr uint32_t CNTR_WKUPM = 0x1000;   // Wakeup interrupt mask
    static constexpr uint32_t CNTR_ERRM = 0x2000;    // Error interrupt mask
    static constexpr uint32_t CNTR_PMAOVRM = 0x4000; // Packet memory area over / underrun interrupt mask
    static constexpr uint32_t CNTR_CTRM = 0x8000;    // Correct transfer interrupt mask

    static constexpr uint32_t ISTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ISTR_EP_ID =          // Endpoint Identifier
        bit_field_t<0, 0xf>::value<X>();
    static constexpr uint32_t ISTR_DIR = 0x10;      // Direction of transaction
    static constexpr uint32_t ISTR_L1REQ = 0x80;    // LPM L1 state request
    static constexpr uint32_t ISTR_ESOF = 0x100;    // Expected start frame
    static constexpr uint32_t ISTR_SOF = 0x200;     // start of frame
    static constexpr uint32_t ISTR_RESET = 0x400;   // reset request
    static constexpr uint32_t ISTR_SUSP = 0x800;    // Suspend mode request
    static constexpr uint32_t ISTR_WKUP = 0x1000;   // Wakeup
    static constexpr uint32_t ISTR_ERR = 0x2000;    // Error
    static constexpr uint32_t ISTR_PMAOVR = 0x4000; // Packet memory area over / underrun
    static constexpr uint32_t ISTR_CTR = 0x8000;    // Correct transfer

    static constexpr uint32_t FNR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FNR_FN =           // Frame number
        bit_field_t<0, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FNR_LSOF =         // Lost SOF
        bit_field_t<11, 0x3>::value<X>();
    static constexpr uint32_t FNR_LCK = 0x2000;  // Locked
    static constexpr uint32_t FNR_RXDM = 0x4000; // Receive data - line status
    static constexpr uint32_t FNR_RXDP = 0x8000; // Receive data + line status

    static constexpr uint32_t DADDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DADDR_ADD =      // Device address
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t DADDR_EF = 0x80; // Enable function

    static constexpr uint32_t BTABLE_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t BTABLE_BTABLE =   // Buffer table
        bit_field_t<3, 0x1fff>::value<X>();

    static constexpr uint32_t LPMCSR_RESET_VALUE = 0x0;
    static constexpr uint32_t LPMCSR_LPMEN = 0x1;   // LPM support enable
    static constexpr uint32_t LPMCSR_LPMACK = 0x2;  // LPM Token acknowledge enable
    static constexpr uint32_t LPMCSR_REMWAKE = 0x8; // bRemoteWake value
    template<uint32_t X>
    static constexpr uint32_t LPMCSR_BESL =         // BESL value
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t BCDR_RESET_VALUE = 0x0;
    static constexpr uint32_t BCDR_BCDEN = 0x1;   // Battery charging detector
    static constexpr uint32_t BCDR_DCDEN = 0x2;   // Data contact detection
    static constexpr uint32_t BCDR_PDEN = 0x4;    // Primary detection
    static constexpr uint32_t BCDR_SDEN = 0x8;    // Secondary detection
    static constexpr uint32_t BCDR_DCDET = 0x10;  // Data contact detection
    static constexpr uint32_t BCDR_PDET = 0x20;   // Primary detection
    static constexpr uint32_t BCDR_SDET = 0x40;   // Secondary detection
    static constexpr uint32_t BCDR_PS2DET = 0x80; // DM pull-up detection status
    static constexpr uint32_t BCDR_DPPU = 0x8000; // DP pull-up control
};


template<>
struct peripheral_t<STM32L0x2, USB_FS>
{
    typedef stm32l0x2_usb_fs_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x3, USB_FS>
{
    typedef stm32l0x2_usb_fs_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x2, USB_SRAM>
{
    typedef stm32l0x2_usb_sram_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x3, USB_SRAM>
{
    typedef stm32l0x2_usb_sram_t T;
    static T& V;
};

using usb_fs_t = peripheral_t<mcu_svd, USB_FS>;
using usb_sram_t = peripheral_t<mcu_svd, USB_SRAM>;

