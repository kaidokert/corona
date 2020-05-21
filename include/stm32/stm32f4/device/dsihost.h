#pragma once

////
//
//      STM32F4 DSIHOST peripherals
//
////

////
//
//      DSI Host
//
////

struct stm32f469_dsihost_t
{
    volatile uint32_t DSI_VR;      // [read-write] DSI Host Version Register
    volatile uint32_t DSI_CR;      // [read-write] DSI Host Control Register
    volatile uint32_t DSIHSOT_CCR; // [read-write] DSI HOST Clock Control Register
    volatile uint32_t DSI_LVCIDR;  // [read-write] DSI Host LTDC VCID Register
    volatile uint32_t DSI_LCOLCR;  // [read-write] DSI Host LTDC Color Coding Register
    volatile uint32_t DSI_LPCR;    // [read-write] DSI Host LTDC Polarity Configuration Register
    volatile uint32_t DSI_LPMCR;   // [read-write] DSI Host Low-Power Mode Configuration Register
    reserved_t<0x4> _0x2c;
    volatile uint32_t DSI_PCR;     // [read-write] DSI Host Protocol Configuration Register
    volatile uint32_t DSI_GVCIDR;  // [read-write] DSI Host Generic VCID Register
    volatile uint32_t DSI_MCR;     // [read-write] DSI Host Mode Configuration Register
    volatile uint32_t DSI_VMCR;    // [read-write] DSI Host Video mode Configuration Register
    volatile uint32_t DSI_VPCR;    // [read-write] DSI Host Video Packet Configuration Register
    volatile uint32_t DSI_VCCR;    // [read-write] DSI Host Video Chunks Configuration Register
    volatile uint32_t DSI_VNPCR;   // [read-write] DSI Host Video Null Packet Configuration Register
    volatile uint32_t DSI_VHSACR;  // [read-write] DSI Host Video HSA Configuration Register
    volatile uint32_t DSI_VHBPCR;  // [read-write] DSI Host Video HBP Configuration Register
    volatile uint32_t DSI_VLCR;    // [read-write] DSI Host Video Line Configuration Register
    volatile uint32_t DSI_VVSACR;  // [read-write] DSI Host Video VSA Configuration Register
    volatile uint32_t DSI_VVBPCR;  // [read-write] DSI Host Video VBP Configuration Register
    volatile uint32_t DSI_VVFPCR;  // [read-write] DSI Host Video VFP Configuration Register
    volatile uint32_t DSI_VVACR;   // [read-write] DSI Host Video VA Configuration Register
    volatile uint32_t DSI_LCCR;    // [read-write] DSI Host LTDC Command Configuration Register
    volatile uint32_t DSI_CMCR;    // [read-write] DSI Host Command mode Configuration Register
    volatile uint32_t DSI_GHCR;    // [read-write] DSI Host Generic Header Configuration Register
    volatile uint32_t DSI_GPDR;    // [read-write] DSI Host Generic Payload Data Register
    volatile uint32_t DSI_GPSR;    // [read-write] DSI Host Generic Packet Status Register
    volatile uint32_t DSI_TCCR1;   // [read-write] DSI Host Timeout Counter Configuration Register1
    volatile uint32_t DSI_TCCR2;   // [read-write] DSI Host Timeout Counter Configuration Register2
    volatile uint32_t DSI_TCCR3;   // [read-write] DSI Host Timeout Counter Configuration Register3
    volatile uint32_t DSI_TCCR4;   // [read-write] DSI Host Timeout Counter Configuration Register4
    volatile uint32_t DSI_TCCR5;   // [read-write] DSI Host Timeout Counter Configuration Register5
    volatile uint32_t DSI_TCCR6;   // [read-write] DSI Host Timeout Counter Configuration Register6
    reserved_t<0x1> _0x94;
    volatile uint32_t DSI_CLCR;    // [read-write] DSI Host Clock Lane Configuration Register
    volatile uint32_t DSI_CLTCR;   // [read-write] DSI Host Clock Lane Timer Configuration Register
    volatile uint32_t DSI_DLTCR;   // [read-write] DSI Host Data Lane Timer Configuration Register
    volatile uint32_t DSI_PCTLR;   // [read-write] DSI Host PHY Control Register
    volatile uint32_t DSI_PCCONFR; // [read-write] DSI Host PHY Configuration Register
    volatile uint32_t DSI_PUCR;    // [read-write] DSI Host PHY ULPS Control Register
    volatile uint32_t DSI_PTTCR;   // [read-write] DSI Host PHY TX Triggers Configuration Register
    volatile uint32_t DSI_PSR;     // [read-write] DSI Host PHY Status Register
    reserved_t<0x2> _0xbc;
    volatile uint32_t DSI_ISR0;    // [read-only] DSI Host Interrupt & Status Register 0
    volatile uint32_t DSI_ISR1;    // [read-only] DSI Host Interrupt & Status Register 1
    volatile uint32_t DSI_IER0;    // [read-write] DSI Host Interrupt Enable Register 0
    volatile uint32_t DSI_IER1;    // [read-write] DSI Host Interrupt Enable Register 1
    reserved_t<0x3> _0xd8;
    volatile uint32_t DSI_FIR0;    // [read-write] DSI Host Force Interrupt Register 0
    volatile uint32_t DSI_FIR1;    // [read-write] DSI Host Force Interrupt Register 1
    reserved_t<0x8> _0x100;
    volatile uint32_t DSI_VSCR;    // [read-write] DSI Host Video Shadow Control Register
    reserved_t<0x2> _0x10c;
    volatile uint32_t DSI_LCVCIDR; // [read-write] DSI Host LTDC Current VCID Register
    volatile uint32_t DSI_LCCCR;   // [read-write] DSI Host LTDC Current Color Coding Register
    reserved_t<0x1> _0x118;
    volatile uint32_t DSI_LPMCCR;  // [read-write] DSI Host Low-power Mode Current Configuration Register
    reserved_t<0x7> _0x138;
    volatile uint32_t DSI_VMCCR;   // [read-write] DSI Host Video mode Current Configuration Register
    volatile uint32_t DSI_VPCCR;   // [read-write] DSI Host Video Packet Current Configuration Register
    volatile uint32_t DSI_VCCCR;   // [read-write] DSI Host Video Chunks Current Configuration Register
    volatile uint32_t DSI_VNPCCR;  // [read-write] DSI Host Video Null Packet Current Configuration Register
    volatile uint32_t DSI_VHSACCR; // [read-write] DSI Host Video HSA Current Configuration Register
    volatile uint32_t DSI_VHBPCCR; // [read-write] DSI Host Video HBP Current Configuration Register
    volatile uint32_t DSI_VLCCR;   // [read-write] DSI Host Video Line Current Configuration Register
    volatile uint32_t DSI_VVSACCR; // [read-write] DSI Host Video VSA Current Configuration Register
    volatile uint32_t DSI_VVBPCCR; // [read-write] DSI Host Video VBP Current Configuration Register
    volatile uint32_t DSI_VVFPCCR; // [read-write] DSI Host Video VFP Current Configuration Register
    volatile uint32_t DSI_VVACCR;  // [read-write] DSI Host Video VA Current Configuration Register
    reserved_t<0xa7> _0x400;
    volatile uint32_t DSI_WCFGR;   // [read-write] DSI Wrapper Configuration Register
    volatile uint32_t DSI_WCR;     // [read-write] DSI Wrapper Control Register
    volatile uint32_t DSI_WIER;    // [read-write] DSI Wrapper Interrupt Enable Register
    volatile uint32_t DSI_WISR;    // [read-only] DSI Wrapper Interrupt & Status Register
    volatile uint32_t DSI_WIFCR;   // [read-write] DSI Wrapper Interrupt Flag Clear Register
    reserved_t<0x1> _0x418;
    volatile uint32_t DSI_WPCR1;   // [read-write] DSI Wrapper PHY Configuration Register 1
    volatile uint32_t DSI_WPCR2;   // [read-write] DSI Wrapper PHY Configuration Register 2
    volatile uint32_t DSI_WPCR3;   // [read-write] DSI Wrapper PHY Configuration Register 3
    volatile uint32_t DSI_WPCR4;   // [read-write] DSI_WPCR4
    volatile uint32_t DSI_WPCR5;   // [read-write] DSI Wrapper PHY Configuration Register 5
    reserved_t<0x1> _0x430;
    volatile uint32_t DSI_WRPCR;   // [read-write] DSI Wrapper Regulator and PLL Control Register

    static constexpr uint32_t DSI_VR_RESET_VALUE = 0x3133302a;

    static constexpr uint32_t DSI_CR_RESET_VALUE = 0x0;
    static constexpr uint32_t DSI_CR_EN = 0x1; // Enable

    static constexpr uint32_t DSIHSOT_CCR_RESET_VALUE = 0x3133302a;
    template<uint32_t X>
    static constexpr uint32_t DSIHSOT_CCR_TOCKDIV =    // TOCKDIV
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DSIHSOT_CCR_TXECKDIV =   // TXECKDIV
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DSI_LVCIDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DSI_LVCIDR_VCID =   // Virtual Channel ID
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t DSI_LCOLCR_RESET_VALUE = 0x0;
    static constexpr uint32_t DSI_LCOLCR_LPE = 0x100; // Loosely Packet Enable
    template<uint32_t X>
    static constexpr uint32_t DSI_LCOLCR_COLC =       // Color Coding
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t DSI_LPCR_RESET_VALUE = 0x0;
    static constexpr uint32_t DSI_LPCR_HSP = 0x4; // HSYNC Polarity
    static constexpr uint32_t DSI_LPCR_VSP = 0x2; // VSYNC Polarity
    static constexpr uint32_t DSI_LPCR_DEP = 0x1; // Data Enable Polarity

    static constexpr uint32_t DSI_LPMCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DSI_LPMCR_LPSIZE =    // Largest Packet Size
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DSI_LPMCR_VLPSIZE =   // VACT Largest Packet Size
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DSI_PCR_RESET_VALUE = 0x0;
    static constexpr uint32_t DSI_PCR_CRCRXE = 0x10; // CRC Reception Enable
    static constexpr uint32_t DSI_PCR_ECCRXE = 0x8;  // ECC Reception Enable
    static constexpr uint32_t DSI_PCR_BTAE = 0x4;    // Bus Turn Around Enable
    static constexpr uint32_t DSI_PCR_ETRXE = 0x2;   // EoTp Reception Enable
    static constexpr uint32_t DSI_PCR_ETTXE = 0x1;   // EoTp Transmission Enable

    static constexpr uint32_t DSI_GVCIDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DSI_GVCIDR_VCID =   // Virtual Channel ID
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t DSI_MCR_RESET_VALUE = 0x1;
    static constexpr uint32_t DSI_MCR_CMDM = 0x1; // Command mode

    static constexpr uint32_t DSI_VMCR_RESET_VALUE = 0x0;
    static constexpr uint32_t DSI_VMCR_PGO = 0x1000000; // Pattern Generator Orientation
    static constexpr uint32_t DSI_VMCR_PGM = 0x100000;  // Pattern Generator Mode
    static constexpr uint32_t DSI_VMCR_PGE = 0x10000;   // Pattern Generator Enable
    static constexpr uint32_t DSI_VMCR_LPCE = 0x8000;   // Low-Power Command Enable
    static constexpr uint32_t DSI_VMCR_FBTAAE = 0x4000; // Frame Bus-Turn-Around Acknowledge Enable
    static constexpr uint32_t DSI_VMCR_LPHFE = 0x2000;  // Low-Power Horizontal Front-Porch Enable
    static constexpr uint32_t DSI_VMCR_LPHBPE = 0x1000; // Low-Power Horizontal Back-Porch Enable
    static constexpr uint32_t DSI_VMCR_LVAE = 0x800;    // Low-Power Vertical Active Enable
    static constexpr uint32_t DSI_VMCR_LPVFPE = 0x400;  // Low-power Vertical Front-porch Enable
    static constexpr uint32_t DSI_VMCR_LPVBPE = 0x200;  // Low-power Vertical Back-Porch Enable
    static constexpr uint32_t DSI_VMCR_LPVSAE = 0x100;  // Low-Power Vertical Sync Active Enable
    template<uint32_t X>
    static constexpr uint32_t DSI_VMCR_VMT =            // Video mode Type
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t DSI_VPCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DSI_VPCR_VPSIZE =   // Video Packet Size
        bit_field_t<0, 0x7fff>::value<X>();

    static constexpr uint32_t DSI_VCCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DSI_VCCR_NUMC =   // Number of Chunks
        bit_field_t<0, 0x3fff>::value<X>();

    static constexpr uint32_t DSI_VNPCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DSI_VNPCR_NPSIZE =   // Null Packet Size
        bit_field_t<0, 0x3fff>::value<X>();

    static constexpr uint32_t DSI_VHSACR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DSI_VHSACR_HSA =   // Horizontal Synchronism Active duration
        bit_field_t<0, 0x1fff>::value<X>();

    static constexpr uint32_t DSI_VHBPCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DSI_VHBPCR_HBP =   // Horizontal Back-Porch duration
        bit_field_t<0, 0x1fff>::value<X>();

    static constexpr uint32_t DSI_VLCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DSI_VLCR_HLINE =   // Horizontal Line duration
        bit_field_t<0, 0x7fff>::value<X>();

    static constexpr uint32_t DSI_VVSACR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DSI_VVSACR_VSA =   // Vertical Synchronism Active duration
        bit_field_t<0, 0x3ff>::value<X>();

    static constexpr uint32_t DSI_VVBPCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DSI_VVBPCR_VBP =   // Vertical Back-Porch duration
        bit_field_t<0, 0x3ff>::value<X>();

    static constexpr uint32_t DSI_VVFPCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DSI_VVFPCR_VFP =   // Vertical Front-Porch duration
        bit_field_t<0, 0x3ff>::value<X>();

    static constexpr uint32_t DSI_VVACR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DSI_VVACR_VA =   // Vertical Active duration
        bit_field_t<0, 0x3fff>::value<X>();

    static constexpr uint32_t DSI_LCCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DSI_LCCR_CMDSIZE =   // Command Size
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DSI_CMCR_RESET_VALUE = 0x0;
    static constexpr uint32_t DSI_CMCR_MRDPS = 0x1000000; // Maximum Read Packet Size
    static constexpr uint32_t DSI_CMCR_DLWTX = 0x80000;   // DCS Long Write Transmission
    static constexpr uint32_t DSI_CMCR_DSR0TX = 0x40000;  // DCS Short Read Zero parameter Transmission
    static constexpr uint32_t DSI_CMCR_DSW1TX = 0x20000;  // DCS Short Read One parameter Transmission
    static constexpr uint32_t DSI_CMCR_DSW0TX = 0x10000;  // DCS Short Write Zero parameter Transmission
    static constexpr uint32_t DSI_CMCR_GLWTX = 0x4000;    // Generic Long Write Transmission
    static constexpr uint32_t DSI_CMCR_GSR2TX = 0x2000;   // Generic Short Read Two parameters Transmission
    static constexpr uint32_t DSI_CMCR_GSR1TX = 0x1000;   // Generic Short Read One parameters Transmission
    static constexpr uint32_t DSI_CMCR_GSR0TX = 0x800;    // Generic Short Read Zero parameters Transmission
    static constexpr uint32_t DSI_CMCR_GSW2TX = 0x400;    // Generic Short Write Two parameters Transmission
    static constexpr uint32_t DSI_CMCR_GSW1TX = 0x200;    // Generic Short Write One parameters Transmission
    static constexpr uint32_t DSI_CMCR_GSW0TX = 0x100;    // Generic Short Write Zero parameters Transmission
    static constexpr uint32_t DSI_CMCR_ARE = 0x2;         // Acknowledge Request Enable
    static constexpr uint32_t DSI_CMCR_TEARE = 0x1;       // Tearing Effect Acknowledge Request Enable

    static constexpr uint32_t DSI_GHCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DSI_GHCR_WCMSB =   // WordCount MSB
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DSI_GHCR_WCLSB =   // WordCount LSB
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DSI_GHCR_VCID =    // Channel
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DSI_GHCR_DT =      // Type
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t DSI_GPDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DSI_GPDR_DATA4 =   // Payload Byte 4
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DSI_GPDR_DATA3 =   // Payload Byte 3
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DSI_GPDR_DATA2 =   // Payload Byte 2
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DSI_GPDR_DATA1 =   // Payload Byte 1
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DSI_GPSR_RESET_VALUE = 0x0;
    static constexpr uint32_t DSI_GPSR_RCB = 0x40;   // RCB
    static constexpr uint32_t DSI_GPSR_PRDFF = 0x20; // PRDFF
    static constexpr uint32_t DSI_GPSR_PRDFE = 0x10; // PRDFE
    static constexpr uint32_t DSI_GPSR_PWRFF = 0x8;  // PWRFF
    static constexpr uint32_t DSI_GPSR_PWRFE = 0x4;  // PWRFE
    static constexpr uint32_t DSI_GPSR_CMDFF = 0x2;  // Acknowledge Request Enable
    static constexpr uint32_t DSI_GPSR_CMDFE = 0x1;  // Tearing Effect Acknowledge Request Enable

    static constexpr uint32_t DSI_TCCR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DSI_TCCR1_HSTX_TOCNT =   // High-Speed Transmission Timeout Counter
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DSI_TCCR1_LPRX_TOCNT =   // Low-power Reception Timeout Counter
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DSI_TCCR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DSI_TCCR2_HSRD_TOCNT =   // High-Speed Read Timeout Counter
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DSI_TCCR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DSI_TCCR3_LPRD_TOCNT =   // Low-Power Read Timeout Counter
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DSI_TCCR4_RESET_VALUE = 0x0;
    static constexpr uint32_t DSI_TCCR4_PM = 0x1000000; // Presp Mode
    template<uint32_t X>
    static constexpr uint32_t DSI_TCCR4_HSWR_TOCNT =    // High-Speed Write Timeout Counter
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DSI_TCCR5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DSI_TCCR5_LSWR_TOCNT =   // Low-Power Write Timeout Counter
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DSI_TCCR6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DSI_TCCR6_BTA_TOCNT =   // Bus-Turn-Around Timeout Counter
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DSI_CLCR_RESET_VALUE = 0x0;
    static constexpr uint32_t DSI_CLCR_ACR = 0x2;  // Automatic Clock lane Control
    static constexpr uint32_t DSI_CLCR_DPCC = 0x1; // D-PHY Clock Control

    static constexpr uint32_t DSI_CLTCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DSI_CLTCR_HS2LP_TIME =   // High-Speed to Low-Power Time
        bit_field_t<16, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DSI_CLTCR_LP2HS_TIME =   // Low-Power to High-Speed Time
        bit_field_t<0, 0x3ff>::value<X>();

    static constexpr uint32_t DSI_DLTCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DSI_DLTCR_HS2LP_TIME =   // High-Speed To Low-Power Time
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DSI_DLTCR_LP2HS_TIME =   // Low-Power To High-Speed Time
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DSI_DLTCR_MRD_TIME =     // Maximum Read Time
        bit_field_t<0, 0x7fff>::value<X>();

    static constexpr uint32_t DSI_PCTLR_RESET_VALUE = 0x0;
    static constexpr uint32_t DSI_PCTLR_CKE = 0x4; // Clock Enable
    static constexpr uint32_t DSI_PCTLR_DEN = 0x2; // Digital Enable

    static constexpr uint32_t DSI_PCCONFR_RESET_VALUE = 0x3133302a;
    template<uint32_t X>
    static constexpr uint32_t DSI_PCCONFR_SW_TIME =   // SW_TIME
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DSI_PCCONFR_NL =        // NL
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t DSI_PUCR_RESET_VALUE = 0x0;
    static constexpr uint32_t DSI_PUCR_UEDL = 0x8; // ULPS Exit on Data Lane
    static constexpr uint32_t DSI_PUCR_URDL = 0x4; // ULPS Request on Data Lane
    static constexpr uint32_t DSI_PUCR_UECL = 0x2; // ULPS Exit on Clock Lane
    static constexpr uint32_t DSI_PUCR_URCL = 0x1; // ULPS Request on Clock Lane

    static constexpr uint32_t DSI_PTTCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DSI_PTTCR_TX_TRIG =   // Transmission Trigger
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t DSI_PSR_RESET_VALUE = 0x1528;
    static constexpr uint32_t DSI_PSR_UAN1 = 0x100; // ULPS Active Not lane 1
    static constexpr uint32_t DSI_PSR_PSS1 = 0x80;  // PHY Stop State lane 1
    static constexpr uint32_t DSI_PSR_RUE0 = 0x40;  // RX ULPS Escape lane 0
    static constexpr uint32_t DSI_PSR_UAN0 = 0x20;  // ULPS Active Not lane 1
    static constexpr uint32_t DSI_PSR_PSS0 = 0x10;  // PHY Stop State lane 0
    static constexpr uint32_t DSI_PSR_UANC = 0x8;   // ULPS Active Not Clock lane
    static constexpr uint32_t DSI_PSR_PSSC = 0x4;   // PHY Stop State Clock lane
    static constexpr uint32_t DSI_PSR_PD = 0x2;     // PHY Direction

    static constexpr uint32_t DSI_ISR0_RESET_VALUE = 0x0;
    static constexpr uint32_t DSI_ISR0_PE4 = 0x100000; // PHY Error 4
    static constexpr uint32_t DSI_ISR0_PE3 = 0x80000;  // PHY Error 3
    static constexpr uint32_t DSI_ISR0_PE2 = 0x40000;  // PHY Error 2
    static constexpr uint32_t DSI_ISR0_PE1 = 0x20000;  // PHY Error 1
    static constexpr uint32_t DSI_ISR0_PE0 = 0x10000;  // PHY Error 0
    static constexpr uint32_t DSI_ISR0_AE15 = 0x8000;  // Acknowledge Error 15
    static constexpr uint32_t DSI_ISR0_AE14 = 0x4000;  // Acknowledge Error 14
    static constexpr uint32_t DSI_ISR0_AE13 = 0x2000;  // Acknowledge Error 13
    static constexpr uint32_t DSI_ISR0_AE12 = 0x1000;  // Acknowledge Error 12
    static constexpr uint32_t DSI_ISR0_AE11 = 0x800;   // Acknowledge Error 11
    static constexpr uint32_t DSI_ISR0_AE10 = 0x400;   // Acknowledge Error 10
    static constexpr uint32_t DSI_ISR0_AE9 = 0x200;    // Acknowledge Error 9
    static constexpr uint32_t DSI_ISR0_AE8 = 0x100;    // Acknowledge Error 8
    static constexpr uint32_t DSI_ISR0_AE7 = 0x80;     // Acknowledge Error 7
    static constexpr uint32_t DSI_ISR0_AE6 = 0x40;     // Acknowledge Error 6
    static constexpr uint32_t DSI_ISR0_AE5 = 0x20;     // Acknowledge Error 5
    static constexpr uint32_t DSI_ISR0_AE4 = 0x10;     // Acknowledge Error 4
    static constexpr uint32_t DSI_ISR0_AE3 = 0x8;      // Acknowledge Error 3
    static constexpr uint32_t DSI_ISR0_AE2 = 0x4;      // Acknowledge Error 2
    static constexpr uint32_t DSI_ISR0_AE1 = 0x2;      // Acknowledge Error 1
    static constexpr uint32_t DSI_ISR0_AE0 = 0x1;      // Acknowledge Error 0

    static constexpr uint32_t DSI_ISR1_RESET_VALUE = 0x0;
    static constexpr uint32_t DSI_ISR1_GPRXE = 0x1000; // Generic Payload Receive Error
    static constexpr uint32_t DSI_ISR1_GPRDE = 0x800;  // Generic Payload Read Error
    static constexpr uint32_t DSI_ISR1_GPTXE = 0x400;  // Generic Payload Transmit Error
    static constexpr uint32_t DSI_ISR1_GPWRE = 0x200;  // Generic Payload Write Error
    static constexpr uint32_t DSI_ISR1_GCWRE = 0x100;  // Generic Command Write Error
    static constexpr uint32_t DSI_ISR1_LPWRE = 0x80;   // LTDC Payload Write Error
    static constexpr uint32_t DSI_ISR1_EOTPE = 0x40;   // EoTp Error
    static constexpr uint32_t DSI_ISR1_PSE = 0x20;     // Packet Size Error
    static constexpr uint32_t DSI_ISR1_CRCE = 0x10;    // CRC Error
    static constexpr uint32_t DSI_ISR1_ECCME = 0x8;    // ECC Multi-bit Error
    static constexpr uint32_t DSI_ISR1_ECCSE = 0x4;    // ECC Single-bit Error
    static constexpr uint32_t DSI_ISR1_TOLPRX = 0x2;   // Timeout Low-Power Reception
    static constexpr uint32_t DSI_ISR1_TOHSTX = 0x1;   // Timeout High-Speed Transmission

    static constexpr uint32_t DSI_IER0_RESET_VALUE = 0x0;
    static constexpr uint32_t DSI_IER0_PE4IE = 0x100000; // PHY Error 4 Interrupt Enable
    static constexpr uint32_t DSI_IER0_PE3IE = 0x80000;  // PHY Error 3 Interrupt Enable
    static constexpr uint32_t DSI_IER0_PE2IE = 0x40000;  // PHY Error 2 Interrupt Enable
    static constexpr uint32_t DSI_IER0_PE1IE = 0x20000;  // PHY Error 1 Interrupt Enable
    static constexpr uint32_t DSI_IER0_PE0IE = 0x10000;  // PHY Error 0 Interrupt Enable
    static constexpr uint32_t DSI_IER0_AE15IE = 0x8000;  // Acknowledge Error 15 Interrupt Enable
    static constexpr uint32_t DSI_IER0_AE14IE = 0x4000;  // Acknowledge Error 14 Interrupt Enable
    static constexpr uint32_t DSI_IER0_AE13IE = 0x2000;  // Acknowledge Error 13 Interrupt Enable
    static constexpr uint32_t DSI_IER0_AE12IE = 0x1000;  // Acknowledge Error 12 Interrupt Enable
    static constexpr uint32_t DSI_IER0_AE11IE = 0x800;   // Acknowledge Error 11 Interrupt Enable
    static constexpr uint32_t DSI_IER0_AE10IE = 0x400;   // Acknowledge Error 10 Interrupt Enable
    static constexpr uint32_t DSI_IER0_AE9IE = 0x200;    // Acknowledge Error 9 Interrupt Enable
    static constexpr uint32_t DSI_IER0_AE8IE = 0x100;    // Acknowledge Error 8 Interrupt Enable
    static constexpr uint32_t DSI_IER0_AE7IE = 0x80;     // Acknowledge Error 7 Interrupt Enable
    static constexpr uint32_t DSI_IER0_AE6IE = 0x40;     // Acknowledge Error 6 Interrupt Enable
    static constexpr uint32_t DSI_IER0_AE5IE = 0x20;     // Acknowledge Error 5 Interrupt Enable
    static constexpr uint32_t DSI_IER0_AE4IE = 0x10;     // Acknowledge Error 4 Interrupt Enable
    static constexpr uint32_t DSI_IER0_AE3IE = 0x8;      // Acknowledge Error 3 Interrupt Enable
    static constexpr uint32_t DSI_IER0_AE2IE = 0x4;      // Acknowledge Error 2 Interrupt Enable
    static constexpr uint32_t DSI_IER0_AE1IE = 0x2;      // Acknowledge Error 1 Interrupt Enable
    static constexpr uint32_t DSI_IER0_AE0IE = 0x1;      // Acknowledge Error 0 Interrupt Enable

    static constexpr uint32_t DSI_IER1_RESET_VALUE = 0x0;
    static constexpr uint32_t DSI_IER1_GPRXEIE = 0x1000; // Generic Payload Receive Error Interrupt Enable
    static constexpr uint32_t DSI_IER1_GPRDEIE = 0x800;  // Generic Payload Read Error Interrupt Enable
    static constexpr uint32_t DSI_IER1_GPTXEIE = 0x400;  // Generic Payload Transmit Error Interrupt Enable
    static constexpr uint32_t DSI_IER1_GPWREIE = 0x200;  // Generic Payload Write Error Interrupt Enable
    static constexpr uint32_t DSI_IER1_GCWREIE = 0x100;  // Generic Command Write Error Interrupt Enable
    static constexpr uint32_t DSI_IER1_LPWREIE = 0x80;   // LTDC Payload Write Error Interrupt Enable
    static constexpr uint32_t DSI_IER1_EOTPEIE = 0x40;   // EoTp Error Interrupt Enable
    static constexpr uint32_t DSI_IER1_PSEIE = 0x20;     // Packet Size Error Interrupt Enable
    static constexpr uint32_t DSI_IER1_CRCEIE = 0x10;    // CRC Error Interrupt Enable
    static constexpr uint32_t DSI_IER1_ECCMEIE = 0x8;    // ECC Multi-bit Error Interrupt Enable
    static constexpr uint32_t DSI_IER1_ECCSEIE = 0x4;    // ECC Single-bit Error Interrupt Enable
    static constexpr uint32_t DSI_IER1_TOLPRXIE = 0x2;   // Timeout Low-Power Reception Interrupt Enable
    static constexpr uint32_t DSI_IER1_TOHSTXIE = 0x1;   // Timeout High-Speed Transmission Interrupt Enable

    static constexpr uint32_t DSI_FIR0_RESET_VALUE = 0x0;
    static constexpr uint32_t DSI_FIR0_FPE4 = 0x100000; // Force PHY Error 4
    static constexpr uint32_t DSI_FIR0_FPE3 = 0x80000;  // Force PHY Error 3
    static constexpr uint32_t DSI_FIR0_FPE2 = 0x40000;  // Force PHY Error 2
    static constexpr uint32_t DSI_FIR0_FPE1 = 0x20000;  // Force PHY Error 1
    static constexpr uint32_t DSI_FIR0_FPE0 = 0x10000;  // Force PHY Error 0
    static constexpr uint32_t DSI_FIR0_FAE15 = 0x8000;  // Force Acknowledge Error 15
    static constexpr uint32_t DSI_FIR0_FAE14 = 0x4000;  // Force Acknowledge Error 14
    static constexpr uint32_t DSI_FIR0_FAE13 = 0x2000;  // Force Acknowledge Error 13
    static constexpr uint32_t DSI_FIR0_FAE12 = 0x1000;  // Force Acknowledge Error 12
    static constexpr uint32_t DSI_FIR0_FAE11 = 0x800;   // Force Acknowledge Error 11
    static constexpr uint32_t DSI_FIR0_FAE10 = 0x400;   // Force Acknowledge Error 10
    static constexpr uint32_t DSI_FIR0_FAE9 = 0x200;    // Force Acknowledge Error 9
    static constexpr uint32_t DSI_FIR0_FAE8 = 0x100;    // Force Acknowledge Error 8
    static constexpr uint32_t DSI_FIR0_FAE7 = 0x80;     // Force Acknowledge Error 7
    static constexpr uint32_t DSI_FIR0_FAE6 = 0x40;     // Force Acknowledge Error 6
    static constexpr uint32_t DSI_FIR0_FAE5 = 0x20;     // Force Acknowledge Error 5
    static constexpr uint32_t DSI_FIR0_FAE4 = 0x10;     // Force Acknowledge Error 4
    static constexpr uint32_t DSI_FIR0_FAE3 = 0x8;      // Force Acknowledge Error 3
    static constexpr uint32_t DSI_FIR0_FAE2 = 0x4;      // Force Acknowledge Error 2
    static constexpr uint32_t DSI_FIR0_FAE1 = 0x2;      // Force Acknowledge Error 1
    static constexpr uint32_t DSI_FIR0_FAE0 = 0x1;      // Force Acknowledge Error 0

    static constexpr uint32_t DSI_FIR1_RESET_VALUE = 0x0;
    static constexpr uint32_t DSI_FIR1_FGPRXE = 0x1000; // Force Generic Payload Receive Error
    static constexpr uint32_t DSI_FIR1_FGPRDE = 0x800;  // Force Generic Payload Read Error
    static constexpr uint32_t DSI_FIR1_FGPTXE = 0x400;  // Force Generic Payload Transmit Error
    static constexpr uint32_t DSI_FIR1_FGPWRE = 0x200;  // Force Generic Payload Write Error
    static constexpr uint32_t DSI_FIR1_FGCWRE = 0x100;  // Force Generic Command Write Error
    static constexpr uint32_t DSI_FIR1_FLPWRE = 0x80;   // Force LTDC Payload Write Error
    static constexpr uint32_t DSI_FIR1_FEOTPE = 0x40;   // Force EoTp Error
    static constexpr uint32_t DSI_FIR1_FPSE = 0x20;     // Force Packet Size Error
    static constexpr uint32_t DSI_FIR1_FCRCE = 0x10;    // Force CRC Error
    static constexpr uint32_t DSI_FIR1_FECCME = 0x8;    // Force ECC Multi-bit Error
    static constexpr uint32_t DSI_FIR1_FECCSE = 0x4;    // Force ECC Single-bit Error
    static constexpr uint32_t DSI_FIR1_FTOLPRX = 0x2;   // Force Timeout Low-Power Reception
    static constexpr uint32_t DSI_FIR1_FTOHSTX = 0x1;   // Force Timeout High-Speed Transmission

    static constexpr uint32_t DSI_VSCR_RESET_VALUE = 0x0;
    static constexpr uint32_t DSI_VSCR_UR = 0x100; // Update Register
    static constexpr uint32_t DSI_VSCR_EN = 0x1;   // Enable

    static constexpr uint32_t DSI_LCVCIDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DSI_LCVCIDR_VCID =   // Virtual Channel ID
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t DSI_LCCCR_RESET_VALUE = 0x0;
    static constexpr uint32_t DSI_LCCCR_LPE = 0x100; // Loosely Packed Enable
    template<uint32_t X>
    static constexpr uint32_t DSI_LCCCR_COLC =       // Color Coding
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t DSI_LPMCCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DSI_LPMCCR_LPSIZE =    // Largest Packet Size
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DSI_LPMCCR_VLPSIZE =   // VACT Largest Packet Size
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DSI_VMCCR_RESET_VALUE = 0x0;
    static constexpr uint32_t DSI_VMCCR_LPCE = 0x8000;   // Low-Power Command Enable
    static constexpr uint32_t DSI_VMCCR_FBTAAE = 0x4000; // Frame BTA Acknowledge Enable
    static constexpr uint32_t DSI_VMCCR_LPHFE = 0x2000;  // Low-Power Horizontal Front-Porch Enable
    static constexpr uint32_t DSI_VMCCR_LPHBPE = 0x1000; // Low-power Horizontal Back-Porch Enable
    static constexpr uint32_t DSI_VMCCR_LVAE = 0x800;    // Low-Power Vertical Active Enable
    static constexpr uint32_t DSI_VMCCR_LPVFPE = 0x400;  // Low-power Vertical Front-Porch Enable
    static constexpr uint32_t DSI_VMCCR_LPVBPE = 0x200;  // Low-power Vertical Back-Porch Enable
    static constexpr uint32_t DSI_VMCCR_LPVSAE = 0x100;  // Low-Power Vertical Sync time Enable
    template<uint32_t X>
    static constexpr uint32_t DSI_VMCCR_VMT =            // Video mode Type
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t DSI_VPCCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DSI_VPCCR_VPSIZE =   // Video Packet Size
        bit_field_t<0, 0x7fff>::value<X>();

    static constexpr uint32_t DSI_VCCCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DSI_VCCCR_NUMC =   // Number of Chunks
        bit_field_t<0, 0x3fff>::value<X>();

    static constexpr uint32_t DSI_VNPCCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DSI_VNPCCR_NPSIZE =   // Null Packet Size
        bit_field_t<0, 0x3fff>::value<X>();

    static constexpr uint32_t DSI_VHSACCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DSI_VHSACCR_HSA =   // Horizontal Synchronism Active duration
        bit_field_t<0, 0x1fff>::value<X>();

    static constexpr uint32_t DSI_VHBPCCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DSI_VHBPCCR_HBP =   // Horizontal Back-Porch duration
        bit_field_t<0, 0x1fff>::value<X>();

    static constexpr uint32_t DSI_VLCCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DSI_VLCCR_HLINE =   // Horizontal Line duration
        bit_field_t<0, 0x7fff>::value<X>();

    static constexpr uint32_t DSI_VVSACCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DSI_VVSACCR_VSA =   // Vertical Synchronism Active duration
        bit_field_t<0, 0x3ff>::value<X>();

    static constexpr uint32_t DSI_VVBPCCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DSI_VVBPCCR_VBP =   // Vertical Back-Porch duration
        bit_field_t<0, 0x3ff>::value<X>();

    static constexpr uint32_t DSI_VVFPCCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DSI_VVFPCCR_VFP =   // Vertical Front-Porch duration
        bit_field_t<0, 0x3ff>::value<X>();

    static constexpr uint32_t DSI_VVACCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DSI_VVACCR_VA =   // Vertical Active duration
        bit_field_t<0, 0x3fff>::value<X>();

    static constexpr uint32_t DSI_WCFGR_RESET_VALUE = 0x0;
    static constexpr uint32_t DSI_WCFGR_VSPOL = 0x80; // VSync Polarity
    static constexpr uint32_t DSI_WCFGR_AR = 0x40;    // Automatic Refresh
    static constexpr uint32_t DSI_WCFGR_TEPOL = 0x20; // TE Polarity
    static constexpr uint32_t DSI_WCFGR_TESRC = 0x10; // TE Source
    template<uint32_t X>
    static constexpr uint32_t DSI_WCFGR_COLMUX =      // Color Multiplexing
        bit_field_t<1, 0x7>::value<X>();
    static constexpr uint32_t DSI_WCFGR_DSIM = 0x1;   // DSI Mode

    static constexpr uint32_t DSI_WCR_RESET_VALUE = 0x0;
    static constexpr uint32_t DSI_WCR_DSIEN = 0x8;  // DSI Enable
    static constexpr uint32_t DSI_WCR_LTDCEN = 0x4; // LTDC Enable
    static constexpr uint32_t DSI_WCR_SHTDN = 0x2;  // Shutdown
    static constexpr uint32_t DSI_WCR_COLM = 0x1;   // Color Mode

    static constexpr uint32_t DSI_WIER_RESET_VALUE = 0x0;
    static constexpr uint32_t DSI_WIER_RRIE = 0x2000;  // Regulator Ready Interrupt Enable
    static constexpr uint32_t DSI_WIER_PLLUIE = 0x400; // PLL Unlock Interrupt Enable
    static constexpr uint32_t DSI_WIER_PLLLIE = 0x200; // PLL Lock Interrupt Enable
    static constexpr uint32_t DSI_WIER_ERIE = 0x2;     // End of Refresh Interrupt Enable
    static constexpr uint32_t DSI_WIER_TEIE = 0x1;     // Tearing Effect Interrupt Enable

    static constexpr uint32_t DSI_WISR_RESET_VALUE = 0x0;
    static constexpr uint32_t DSI_WISR_RRIF = 0x2000;  // Regulator Ready Interrupt Flag
    static constexpr uint32_t DSI_WISR_RRS = 0x1000;   // Regulator Ready Status
    static constexpr uint32_t DSI_WISR_PLLUIF = 0x400; // PLL Unlock Interrupt Flag
    static constexpr uint32_t DSI_WISR_PLLLIF = 0x200; // PLL Lock Interrupt Flag
    static constexpr uint32_t DSI_WISR_PLLLS = 0x100;  // PLL Lock Status
    static constexpr uint32_t DSI_WISR_BUSY = 0x4;     // Busy Flag
    static constexpr uint32_t DSI_WISR_ERIF = 0x2;     // End of Refresh Interrupt Flag
    static constexpr uint32_t DSI_WISR_TEIF = 0x1;     // Tearing Effect Interrupt Flag

    static constexpr uint32_t DSI_WIFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t DSI_WIFCR_CRRIF = 0x2000;  // Clear Regulator Ready Interrupt Flag
    static constexpr uint32_t DSI_WIFCR_CPLLUIF = 0x400; // Clear PLL Unlock Interrupt Flag
    static constexpr uint32_t DSI_WIFCR_CPLLLIF = 0x200; // Clear PLL Lock Interrupt Flag
    static constexpr uint32_t DSI_WIFCR_CERIF = 0x2;     // Clear End of Refresh Interrupt Flag
    static constexpr uint32_t DSI_WIFCR_CTEIF = 0x1;     // Clear Tearing Effect Interrupt Flag

    static constexpr uint32_t DSI_WPCR1_RESET_VALUE = 0x0;
    static constexpr uint32_t DSI_WPCR1_TCLKPOSTEN = 0x8000000; // custom time for tCLK-POST Enable
    static constexpr uint32_t DSI_WPCR1_TLPXCEN = 0x4000000;    // custom time for tLPX for Clock lane Enable
    static constexpr uint32_t DSI_WPCR1_THSEXITEN = 0x2000000;  // custom time for tHS-EXIT Enable
    static constexpr uint32_t DSI_WPCR1_TLPXDEN = 0x1000000;    // custom time for tLPX for Data lanes Enable
    static constexpr uint32_t DSI_WPCR1_THSZEROEN = 0x800000;   // custom time for tHS-ZERO Enable
    static constexpr uint32_t DSI_WPCR1_THSTRAILEN = 0x400000;  // custom time for tHS-TRAIL Enable
    static constexpr uint32_t DSI_WPCR1_THSPREPEN = 0x200000;   // custom time for tHS-PREPARE Enable
    static constexpr uint32_t DSI_WPCR1_TCLKZEROEN = 0x100000;  // custom time for tCLK-ZERO Enable
    static constexpr uint32_t DSI_WPCR1_TCLKPREPEN = 0x80000;   // custom time for tCLK-PREPARE Enable
    static constexpr uint32_t DSI_WPCR1_PDEN = 0x40000;         // Pull-Down Enable
    static constexpr uint32_t DSI_WPCR1_TDDL = 0x10000;         // Turn Disable Data Lanes
    static constexpr uint32_t DSI_WPCR1_CDOFFDL = 0x4000;       // Contention Detection OFF on Data Lanes
    static constexpr uint32_t DSI_WPCR1_FTXSMDL = 0x2000;       // Force in TX Stop Mode the Data Lanes
    static constexpr uint32_t DSI_WPCR1_FTXSMCL = 0x1000;       // Force in TX Stop Mode the Clock Lane
    static constexpr uint32_t DSI_WPCR1_HSIDL1 = 0x800;         // Invert the High-Speed data signal on Data Lane 1
    static constexpr uint32_t DSI_WPCR1_HSIDL0 = 0x400;         // Invert the Hight-Speed data signal on Data Lane 0
    static constexpr uint32_t DSI_WPCR1_HSICL = 0x200;          // Invert Hight-Speed data signal on Clock Lane
    static constexpr uint32_t DSI_WPCR1_SWDL1 = 0x100;          // Swap Data Lane 1 pins
    static constexpr uint32_t DSI_WPCR1_SWDL0 = 0x80;           // Swap Data Lane 0 pins
    static constexpr uint32_t DSI_WPCR1_SWCL = 0x40;            // Swap Clock Lane pins
    template<uint32_t X>
    static constexpr uint32_t DSI_WPCR1_UIX4 =                  // Unit Interval multiplied by 4
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t DSI_WPCR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DSI_WPCR2_LPRXFT =             // Low-Power RX low-pass Filtering Tuning
        bit_field_t<25, 0x3>::value<X>();
    static constexpr uint32_t DSI_WPCR2_FLPRXLPM = 0x400000; // Forces LP Receiver in Low-Power Mode
    template<uint32_t X>
    static constexpr uint32_t DSI_WPCR2_HSTXSRCDL =          // High-Speed Transmission Slew Rate Control on Data Lanes
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DSI_WPCR2_HSTXSRCCL =          // High-Speed Transmission Slew Rate Control on Clock Lane
        bit_field_t<16, 0x3>::value<X>();
    static constexpr uint32_t DSI_WPCR2_SDCC = 0x1000;       // SDD Control
    template<uint32_t X>
    static constexpr uint32_t DSI_WPCR2_LPSRDL =             // Low-Power transmission Slew Rate Compensation on Data Lanes
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DSI_WPCR2_LPSRCL =             // Low-Power transmission Slew Rate Compensation on Clock Lane
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DSI_WPCR2_HSTXDLL =            // High-Speed Transmission Delay on Data Lanes
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DSI_WPCR2_HSTXDCL =            // High-Speed Transmission Delay on Clock Lane
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t DSI_WPCR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DSI_WPCR3_THSTRAIL =   // tHSTRAIL
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DSI_WPCR3_THSPREP =    // tHS-PREPARE
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DSI_WPCR3_TCLKZEO =    // tCLK-ZERO
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DSI_WPCR3_TCLKPREP =   // tCLK-PREPARE
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DSI_WPCR4_RESET_VALUE = 0x3133302a;
    template<uint32_t X>
    static constexpr uint32_t DSI_WPCR4_TLPXC =     // tLPXC for Clock lane
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DSI_WPCR4_THSEXIT =   // tHSEXIT
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DSI_WPCR4_TLPXD =     // tLPX for Data lanes
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DSI_WPCR4_THSZERO =   // tHS-ZERO
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DSI_WPCR5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DSI_WPCR5_THSZERO =   // tCLK-POST
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DSI_WRPCR_RESET_VALUE = 0x0;
    static constexpr uint32_t DSI_WRPCR_REGEN = 0x1000000; // Regulator Enable
    template<uint32_t X>
    static constexpr uint32_t DSI_WRPCR_ODF =              // PLL Output Division Factor
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DSI_WRPCR_IDF =              // PLL Input Division Factor
        bit_field_t<11, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DSI_WRPCR_NDIV =             // PLL Loop Division Factor
        bit_field_t<2, 0x7f>::value<X>();
    static constexpr uint32_t DSI_WRPCR_PLLEN = 0x1;       // PLL Enable
};


template<>
struct peripheral_t<STM32F469, DSIHOST>
{
    typedef stm32f469_dsihost_t T;
    static T& V;
};

using dsihost_t = peripheral_t<mcu_svd, DSIHOST>;

