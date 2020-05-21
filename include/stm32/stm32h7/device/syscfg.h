#pragma once

////
//
//      STM32H7 SYSCFG peripherals
//
////

////
//
//      System configuration controller
//
////

struct stm32h742x_syscfg_t
{
    volatile uint32_t PMCR;    // [read-write] peripheral mode configuration register
    volatile uint32_t EXTICR1; // [read-write] external interrupt configuration register 1
    volatile uint32_t EXTICR2; // [read-write] external interrupt configuration register 2
    volatile uint32_t EXTICR3; // [read-write] external interrupt configuration register 3
    volatile uint32_t EXTICR4; // [read-write] external interrupt configuration register 4
    reserved_t<0x2> _0x20;
    volatile uint32_t CCCSR;   // [read-write] compensation cell control/status register
    volatile uint32_t CCVR;    // [read-only] SYSCFG compensation cell value register
    volatile uint32_t CCCR;    // [read-write] SYSCFG compensation cell code register
    volatile uint32_t PWRCR;   // [read-write] SYSCFG power control register
    reserved_t<0x3d> _0x124;
    volatile uint32_t PKGR;    // [read-only] SYSCFG package register
    reserved_t<0x76> _0x300;
    volatile uint32_t UR0;     // [read-only] SYSCFG user register 0
    reserved_t<0x1> _0x308;
    volatile uint32_t UR2;     // [read-write] SYSCFG user register 2
    volatile uint32_t UR3;     // [read-write] SYSCFG user register 3
    volatile uint32_t UR4;     // [read-only] SYSCFG user register 4
    volatile uint32_t UR5;     // [read-only] SYSCFG user register 5
    volatile uint32_t UR6;     // [read-only] SYSCFG user register 6
    volatile uint32_t UR7;     // [read-only] SYSCFG user register 7
    volatile uint32_t UR8;     // [read-only] SYSCFG user register 8
    volatile uint32_t UR9;     // [read-only] SYSCFG user register 9
    volatile uint32_t UR10;    // [read-only] SYSCFG user register 10
    volatile uint32_t UR11;    // [read-only] SYSCFG user register 11
    volatile uint32_t UR12;    // [read-only] SYSCFG user register 12
    volatile uint32_t UR13;    // [read-only] SYSCFG user register 13
    volatile uint32_t UR14;    // [read-write] SYSCFG user register 14
    volatile uint32_t UR15;    // [read-only] SYSCFG user register 15
    volatile uint32_t UR16;    // [read-only] SYSCFG user register 16
    volatile uint32_t UR17;    // [read-only] SYSCFG user register 17

    static constexpr uint32_t PMCR_RESET_VALUE = 0x0;
    static constexpr uint32_t PMCR_I2C1FMP = 0x1;       // I2C1 Fm+
    static constexpr uint32_t PMCR_I2C2FMP = 0x2;       // I2C2 Fm+
    static constexpr uint32_t PMCR_I2C3FMP = 0x4;       // I2C3 Fm+
    static constexpr uint32_t PMCR_I2C4FMP = 0x8;       // I2C4 Fm+
    static constexpr uint32_t PMCR_PB6FMP = 0x10;       // PB(6) Fm+
    static constexpr uint32_t PMCR_PB7FMP = 0x20;       // PB(7) Fast Mode Plus
    static constexpr uint32_t PMCR_PB8FMP = 0x40;       // PB(8) Fast Mode Plus
    static constexpr uint32_t PMCR_PB9FMP = 0x80;       // PB(9) Fm+
    static constexpr uint32_t PMCR_BOOSTE = 0x100;      // Booster Enable
    static constexpr uint32_t PMCR_BOOSTVDDSEL = 0x200; // Analog switch supply voltage selection
    template<uint32_t X>
    static constexpr uint32_t PMCR_EPIS =               // Ethernet PHY Interface Selection
        bit_field_t<21, 0x7>::value<X>();
    static constexpr uint32_t PMCR_PA0SO = 0x1000000;   // PA0 Switch Open
    static constexpr uint32_t PMCR_PA1SO = 0x2000000;   // PA1 Switch Open
    static constexpr uint32_t PMCR_PC2SO = 0x4000000;   // PC2 Switch Open
    static constexpr uint32_t PMCR_PC3SO = 0x8000000;   // PC3 Switch Open

    static constexpr uint32_t EXTICR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EXTICR1_EXTI3 =   // EXTI x configuration (x = 0 to 3)
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR1_EXTI2 =   // EXTI x configuration (x = 0 to 3)
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR1_EXTI1 =   // EXTI x configuration (x = 0 to 3)
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR1_EXTI0 =   // EXTI x configuration (x = 0 to 3)
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t EXTICR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EXTICR2_EXTI7 =   // EXTI x configuration (x = 4 to 7)
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR2_EXTI6 =   // EXTI x configuration (x = 4 to 7)
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR2_EXTI5 =   // EXTI x configuration (x = 4 to 7)
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR2_EXTI4 =   // EXTI x configuration (x = 4 to 7)
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t EXTICR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EXTICR3_EXTI11 =   // EXTI x configuration (x = 8 to 11)
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR3_EXTI10 =   // EXTI10
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR3_EXTI9 =    // EXTI x configuration (x = 8 to 11)
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR3_EXTI8 =    // EXTI x configuration (x = 8 to 11)
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t EXTICR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EXTICR4_EXTI15 =   // EXTI x configuration (x = 12 to 15)
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR4_EXTI14 =   // EXTI x configuration (x = 12 to 15)
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR4_EXTI13 =   // EXTI x configuration (x = 12 to 15)
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR4_EXTI12 =   // EXTI x configuration (x = 12 to 15)
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t CCCSR_RESET_VALUE = 0x0;
    static constexpr uint32_t CCCSR_EN = 0x1;       // enable
    static constexpr uint32_t CCCSR_CS = 0x2;       // Code selection
    static constexpr uint32_t CCCSR_READY = 0x100;  // Compensation cell ready flag
    static constexpr uint32_t CCCSR_HSLV = 0x10000; // High-speed at low-voltage

    static constexpr uint32_t CCVR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCVR_NCV =   // NMOS compensation value
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCVR_PCV =   // PMOS compensation value
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t CCCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCCR_NCC =   // NMOS compensation code
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCCR_PCC =   // PMOS compensation code
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t PWRCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PWRCR_ODEN =   // Overdrive enable
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t PKGR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PKGR_PKG =   // Package
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t UR0_RESET_VALUE = 0x0;
    static constexpr uint32_t UR0_BKS = 0x1; // Bank Swap
    template<uint32_t X>
    static constexpr uint32_t UR0_RDP =      // Readout protection
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t UR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t UR2_BORH =        // BOR_LVL Brownout Reset Threshold Level
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t UR2_BOOT_ADD0 =   // Boot Address 0
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t UR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t UR3_BOOT_ADD1 =   // Boot Address 1
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t UR4_RESET_VALUE = 0x0;
    static constexpr uint32_t UR4_MEPAD_1 = 0x10000; // Mass Erase Protected Area Disabled for bank 1

    static constexpr uint32_t UR5_RESET_VALUE = 0x0;
    static constexpr uint32_t UR5_MESAD_1 = 0x1; // Mass erase secured area disabled for bank 1
    template<uint32_t X>
    static constexpr uint32_t UR5_WRPN_1 =       // Write protection for flash bank 1
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t UR6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t UR6_PA_BEG_1 =   // Protected area start address for bank 1
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t UR6_PA_END_1 =   // Protected area end address for bank 1
        bit_field_t<16, 0xfff>::value<X>();

    static constexpr uint32_t UR7_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t UR7_SA_BEG_1 =   // Secured area start address for bank 1
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t UR7_SA_END_1 =   // Secured area end address for bank 1
        bit_field_t<16, 0xfff>::value<X>();

    static constexpr uint32_t UR8_RESET_VALUE = 0x0;
    static constexpr uint32_t UR8_MEPAD_2 = 0x1;     // Mass erase protected area disabled for bank 2
    static constexpr uint32_t UR8_MESAD_2 = 0x10000; // Mass erase secured area disabled for bank 2

    static constexpr uint32_t UR9_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t UR9_WRPN_2 =     // Write protection for flash bank 2
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t UR9_PA_BEG_2 =   // Protected area start address for bank 2
        bit_field_t<16, 0xfff>::value<X>();

    static constexpr uint32_t UR10_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t UR10_PA_END_2 =   // Protected area end address for bank 2
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t UR10_SA_BEG_2 =   // Secured area start address for bank 2
        bit_field_t<16, 0xfff>::value<X>();

    static constexpr uint32_t UR11_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t UR11_SA_END_2 =        // Secured area end address for bank 2
        bit_field_t<0, 0xfff>::value<X>();
    static constexpr uint32_t UR11_IWDG1M = 0x10000; // Independent Watchdog 1 mode

    static constexpr uint32_t UR12_RESET_VALUE = 0x0;
    static constexpr uint32_t UR12_SECURE = 0x10000; // Secure mode

    static constexpr uint32_t UR13_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t UR13_SDRS =             // Secured DTCM RAM Size
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t UR13_D1SBRST = 0x10000; // D1 Standby reset

    static constexpr uint32_t UR14_RESET_VALUE = 0x0;
    static constexpr uint32_t UR14_D1STPRST = 0x1; // D1 Stop Reset

    static constexpr uint32_t UR15_RESET_VALUE = 0x0;
    static constexpr uint32_t UR15_FZIWDGSTB = 0x10000; // Freeze independent watchdog in Standby mode

    static constexpr uint32_t UR16_RESET_VALUE = 0x0;
    static constexpr uint32_t UR16_FZIWDGSTP = 0x1; // Freeze independent watchdog in Stop mode
    static constexpr uint32_t UR16_PKP = 0x10000;   // Private key programmed

    static constexpr uint32_t UR17_RESET_VALUE = 0x0;
    static constexpr uint32_t UR17_IO_HSLV = 0x1; // I/O high speed / low voltage
};


////
//
//      System configuration controller
//
////

struct stm32h745_cm4_syscfg_t
{
    volatile uint32_t PMCR;    // [read-write] peripheral mode configuration register
    volatile uint32_t EXTICR1; // [read-write] external interrupt configuration register 1
    volatile uint32_t EXTICR2; // [read-write] external interrupt configuration register 2
    volatile uint32_t EXTICR3; // [read-write] external interrupt configuration register 3
    volatile uint32_t EXTICR4; // [read-write] external interrupt configuration register 4
    reserved_t<0x2> _0x20;
    volatile uint32_t CCCSR;   // [read-write] compensation cell control/status register
    volatile uint32_t CCVR;    // [read-only] SYSCFG compensation cell value register
    volatile uint32_t CCCR;    // [read-write] SYSCFG compensation cell code register
    reserved_t<0x3e> _0x124;
    volatile uint32_t PKGR;    // [read-only] SYSCFG package register
    reserved_t<0x76> _0x300;
    volatile uint32_t UR0;     // [read-only] SYSCFG user register 0
    reserved_t<0x1> _0x308;
    volatile uint32_t UR2;     // [read-write] SYSCFG user register 2
    volatile uint32_t UR3;     // [read-write] SYSCFG user register 3
    volatile uint32_t UR4;     // [read-only] SYSCFG user register 4
    volatile uint32_t UR5;     // [read-only] SYSCFG user register 5
    volatile uint32_t UR6;     // [read-only] SYSCFG user register 6
    volatile uint32_t UR7;     // [read-only] SYSCFG user register 7
    volatile uint32_t UR8;     // [read-only] SYSCFG user register 8
    volatile uint32_t UR9;     // [read-only] SYSCFG user register 9
    volatile uint32_t UR10;    // [read-only] SYSCFG user register 10
    volatile uint32_t UR11;    // [read-only] SYSCFG user register 11
    volatile uint32_t UR12;    // [read-only] SYSCFG user register 12
    volatile uint32_t UR13;    // [read-only] SYSCFG user register 13
    volatile uint32_t UR14;    // [read-write] SYSCFG user register 14
    volatile uint32_t UR15;    // [read-only] SYSCFG user register 15
    volatile uint32_t UR16;    // [read-only] SYSCFG user register 16
    volatile uint32_t UR17;    // [read-only] SYSCFG user register 17

    static constexpr uint32_t PMCR_RESET_VALUE = 0x0;
    static constexpr uint32_t PMCR_I2C1FMP = 0x1;     // I2C1 Fm+
    static constexpr uint32_t PMCR_I2C2FMP = 0x2;     // I2C2 Fm+
    static constexpr uint32_t PMCR_I2C3FMP = 0x4;     // I2C3 Fm+
    static constexpr uint32_t PMCR_I2C4FMP = 0x8;     // I2C4 Fm+
    static constexpr uint32_t PMCR_PB6FMP = 0x10;     // PB(6) Fm+
    static constexpr uint32_t PMCR_PB7FMP = 0x20;     // PB(7) Fast Mode Plus
    static constexpr uint32_t PMCR_PB8FMP = 0x40;     // PB(8) Fast Mode Plus
    static constexpr uint32_t PMCR_PB9FMP = 0x80;     // PB(9) Fm+
    static constexpr uint32_t PMCR_BOOSTE = 0x100;    // Booster Enable
    template<uint32_t X>
    static constexpr uint32_t PMCR_EPIS =             // Ethernet PHY Interface Selection
        bit_field_t<21, 0x7>::value<X>();
    static constexpr uint32_t PMCR_PA0SO = 0x1000000; // PA0 Switch Open
    static constexpr uint32_t PMCR_PA1SO = 0x2000000; // PA1 Switch Open
    static constexpr uint32_t PMCR_PC2SO = 0x4000000; // PC2 Switch Open
    static constexpr uint32_t PMCR_PC3SO = 0x8000000; // PC3 Switch Open

    static constexpr uint32_t EXTICR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EXTICR1_EXTI3 =   // EXTI x configuration (x = 0 to 3)
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR1_EXTI2 =   // EXTI x configuration (x = 0 to 3)
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR1_EXTI1 =   // EXTI x configuration (x = 0 to 3)
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR1_EXTI0 =   // EXTI x configuration (x = 0 to 3)
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t EXTICR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EXTICR2_EXTI7 =   // EXTI x configuration (x = 4 to 7)
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR2_EXTI6 =   // EXTI x configuration (x = 4 to 7)
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR2_EXTI5 =   // EXTI x configuration (x = 4 to 7)
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR2_EXTI4 =   // EXTI x configuration (x = 4 to 7)
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t EXTICR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EXTICR3_EXTI11 =   // EXTI x configuration (x = 8 to 11)
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR3_EXTI10 =   // EXTI10
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR3_EXTI9 =    // EXTI x configuration (x = 8 to 11)
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR3_EXTI8 =    // EXTI x configuration (x = 8 to 11)
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t EXTICR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EXTICR4_EXTI15 =   // EXTI x configuration (x = 12 to 15)
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR4_EXTI14 =   // EXTI x configuration (x = 12 to 15)
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR4_EXTI13 =   // EXTI x configuration (x = 12 to 15)
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR4_EXTI12 =   // EXTI x configuration (x = 12 to 15)
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t CCCSR_RESET_VALUE = 0x0;
    static constexpr uint32_t CCCSR_EN = 0x1;       // enable
    static constexpr uint32_t CCCSR_CS = 0x2;       // Code selection
    static constexpr uint32_t CCCSR_READY = 0x100;  // Compensation cell ready flag
    static constexpr uint32_t CCCSR_HSLV = 0x10000; // High-speed at low-voltage

    static constexpr uint32_t CCVR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCVR_NCV =   // NMOS compensation value
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCVR_PCV =   // PMOS compensation value
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t CCCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCCR_NCC =   // NMOS compensation code
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCCR_PCC =   // PMOS compensation code
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t PKGR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PKGR_PKG =   // Package
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t UR0_RESET_VALUE = 0x0;
    static constexpr uint32_t UR0_BKS = 0x1; // Bank Swap
    template<uint32_t X>
    static constexpr uint32_t UR0_RDP =      // Readout protection
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t UR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t UR2_BORH =        // BOR_LVL Brownout Reset Threshold Level
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t UR2_BOOT_ADD0 =   // Boot Address 0
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t UR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t UR3_BOOT_ADD1 =   // Boot Address 1
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t UR4_RESET_VALUE = 0x0;
    static constexpr uint32_t UR4_MEPAD_1 = 0x10000; // Mass Erase Protected Area Disabled for bank 1

    static constexpr uint32_t UR5_RESET_VALUE = 0x0;
    static constexpr uint32_t UR5_MESAD_1 = 0x1; // Mass erase secured area disabled for bank 1
    template<uint32_t X>
    static constexpr uint32_t UR5_WRPN_1 =       // Write protection for flash bank 1
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t UR6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t UR6_PA_BEG_1 =   // Protected area start address for bank 1
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t UR6_PA_END_1 =   // Protected area end address for bank 1
        bit_field_t<16, 0xfff>::value<X>();

    static constexpr uint32_t UR7_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t UR7_SA_BEG_1 =   // Secured area start address for bank 1
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t UR7_SA_END_1 =   // Secured area end address for bank 1
        bit_field_t<16, 0xfff>::value<X>();

    static constexpr uint32_t UR8_RESET_VALUE = 0x0;
    static constexpr uint32_t UR8_MEPAD_2 = 0x1;     // Mass erase protected area disabled for bank 2
    static constexpr uint32_t UR8_MESAD_2 = 0x10000; // Mass erase secured area disabled for bank 2

    static constexpr uint32_t UR9_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t UR9_WRPN_2 =     // Write protection for flash bank 2
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t UR9_PA_BEG_2 =   // Protected area start address for bank 2
        bit_field_t<16, 0xfff>::value<X>();

    static constexpr uint32_t UR10_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t UR10_PA_END_2 =   // Protected area end address for bank 2
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t UR10_SA_BEG_2 =   // Secured area start address for bank 2
        bit_field_t<16, 0xfff>::value<X>();

    static constexpr uint32_t UR11_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t UR11_SA_END_2 =        // Secured area end address for bank 2
        bit_field_t<0, 0xfff>::value<X>();
    static constexpr uint32_t UR11_IWDG1M = 0x10000; // Independent Watchdog 1 mode

    static constexpr uint32_t UR12_RESET_VALUE = 0x0;
    static constexpr uint32_t UR12_SECURE = 0x10000; // Secure mode

    static constexpr uint32_t UR13_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t UR13_SDRS =             // Secured DTCM RAM Size
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t UR13_D1SBRST = 0x10000; // D1 Standby reset

    static constexpr uint32_t UR14_RESET_VALUE = 0x0;
    static constexpr uint32_t UR14_D1STPRST = 0x1; // D1 Stop Reset

    static constexpr uint32_t UR15_RESET_VALUE = 0x0;
    static constexpr uint32_t UR15_FZIWDGSTB = 0x10000; // Freeze independent watchdog in Standby mode

    static constexpr uint32_t UR16_RESET_VALUE = 0x0;
    static constexpr uint32_t UR16_FZIWDGSTP = 0x1; // Freeze independent watchdog in Stop mode
    static constexpr uint32_t UR16_PKP = 0x10000;   // Private key programmed

    static constexpr uint32_t UR17_RESET_VALUE = 0x0;
    static constexpr uint32_t UR17_IO_HSLV = 0x1; // I/O high speed / low voltage
};


////
//
//      System configuration controller
//
////

struct stm32h7a3x_syscfg_t
{
    volatile uint32_t PMCR;               // [read-write] peripheral mode configuration register
    volatile uint32_t EXTICR1;            // [read-write] external interrupt configuration register 1
    volatile uint32_t EXTICR2;            // [read-write] external interrupt configuration register 2
    volatile uint32_t EXTICR3;            // [read-write] external interrupt configuration register 3
    volatile uint32_t EXTICR4;            // [read-write] external interrupt configuration register 4
    reserved_t<0x2> _0x20;
    volatile uint32_t CCCSR;              // [read-write] compensation cell control/status register
    volatile uint32_t CCVR;               // [read-only] SYSCFG compensation cell value register
    volatile uint32_t CCCR;               // [read-write] SYSCFG compensation cell code register
    reserved_t<0x3b> _0x118;
    volatile uint32_t SYSCFG_BRK_LOCKUPR; // [read-write] SYSCFG timer break lockup register

    static constexpr uint32_t PMCR_RESET_VALUE = 0x0;
    static constexpr uint32_t PMCR_I2C1FMP = 0x1;     // I2C1 Fm+
    static constexpr uint32_t PMCR_I2C2FMP = 0x2;     // I2C2 Fm+
    static constexpr uint32_t PMCR_I2C3FMP = 0x4;     // I2C3 Fm+
    static constexpr uint32_t PMCR_I2C4FMP = 0x8;     // I2C4 Fm+
    static constexpr uint32_t PMCR_PB6FMP = 0x10;     // PB(6) Fm+
    static constexpr uint32_t PMCR_PB7FMP = 0x20;     // PB(7) Fast Mode Plus
    static constexpr uint32_t PMCR_PB8FMP = 0x40;     // PB(8) Fast Mode Plus
    static constexpr uint32_t PMCR_PB9FMP = 0x80;     // PB(9) Fm+
    static constexpr uint32_t PMCR_BOOSTE = 0x100;    // Booster Enable
    template<uint32_t X>
    static constexpr uint32_t PMCR_EPIS =             // Ethernet PHY Interface Selection
        bit_field_t<21, 0x7>::value<X>();
    static constexpr uint32_t PMCR_PA0SO = 0x1000000; // PA0 Switch Open
    static constexpr uint32_t PMCR_PA1SO = 0x2000000; // PA1 Switch Open
    static constexpr uint32_t PMCR_PC2SO = 0x4000000; // PC2 Switch Open
    static constexpr uint32_t PMCR_PC3SO = 0x8000000; // PC3 Switch Open

    static constexpr uint32_t EXTICR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EXTICR1_EXTI3 =   // EXTI x configuration (x = 0 to 3)
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR1_EXTI2 =   // EXTI x configuration (x = 0 to 3)
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR1_EXTI1 =   // EXTI x configuration (x = 0 to 3)
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR1_EXTI0 =   // EXTI x configuration (x = 0 to 3)
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t EXTICR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EXTICR2_EXTI7 =   // EXTI x configuration (x = 4 to 7)
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR2_EXTI6 =   // EXTI x configuration (x = 4 to 7)
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR2_EXTI5 =   // EXTI x configuration (x = 4 to 7)
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR2_EXTI4 =   // EXTI x configuration (x = 4 to 7)
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t EXTICR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EXTICR3_EXTI11 =   // EXTI x configuration (x = 8 to 11)
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR3_EXTI10 =   // EXTI10
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR3_EXTI9 =    // EXTI x configuration (x = 8 to 11)
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR3_EXTI8 =    // EXTI x configuration (x = 8 to 11)
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t EXTICR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EXTICR4_EXTI15 =   // EXTI x configuration (x = 12 to 15)
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR4_EXTI14 =   // EXTI x configuration (x = 12 to 15)
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR4_EXTI13 =   // EXTI x configuration (x = 12 to 15)
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR4_EXTI12 =   // EXTI x configuration (x = 12 to 15)
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t CCCSR_RESET_VALUE = 0x0;
    static constexpr uint32_t CCCSR_EN = 0x1;       // enable
    static constexpr uint32_t CCCSR_CS = 0x2;       // Code selection
    static constexpr uint32_t CCCSR_READY = 0x100;  // Compensation cell ready flag
    static constexpr uint32_t CCCSR_HSLV = 0x10000; // High-speed at low-voltage

    static constexpr uint32_t CCVR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCVR_NCV =   // NMOS compensation value
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCVR_PCV =   // PMOS compensation value
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t CCCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCCR_NCC =   // NMOS compensation code
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCCR_PCC =   // PMOS compensation code
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t SYSCFG_BRK_LOCKUPR_RESET_VALUE = 0x0;
    static constexpr uint32_t SYSCFG_BRK_LOCKUPR_PVDL = 0x4;     // PVD lock enable bit.
    static constexpr uint32_t SYSCFG_BRK_LOCKUPR_FLASHL = 0x8;   // Flash double ECC error lock bit
    static constexpr uint32_t SYSCFG_BRK_LOCKUPR_CM7L = 0x40;    // Cortex-M7 LOCKUP (HardFault) output enable bit
    static constexpr uint32_t SYSCFG_BRK_LOCKUPR_DTCML = 0x2000; // D1TCM or D0TCM double ECC error signal lock
    static constexpr uint32_t SYSCFG_BRK_LOCKUPR_ITCML = 0x4000; // ITCM double ECC error signal lock
};


template<>
struct peripheral_t<STM32H742x, SYSCFG>
{
    typedef stm32h742x_syscfg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, SYSCFG>
{
    typedef stm32h742x_syscfg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, SYSCFG>
{
    typedef stm32h742x_syscfg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, SYSCFG>
{
    typedef stm32h745_cm4_syscfg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, SYSCFG>
{
    typedef stm32h745_cm4_syscfg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, SYSCFG>
{
    typedef stm32h745_cm4_syscfg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, SYSCFG>
{
    typedef stm32h745_cm4_syscfg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, SYSCFG>
{
    typedef stm32h745_cm4_syscfg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, SYSCFG>
{
    typedef stm32h745_cm4_syscfg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, SYSCFG>
{
    typedef stm32h745_cm4_syscfg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, SYSCFG>
{
    typedef stm32h745_cm4_syscfg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, SYSCFG>
{
    typedef stm32h745_cm4_syscfg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, SYSCFG>
{
    typedef stm32h7a3x_syscfg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, SYSCFG>
{
    typedef stm32h7a3x_syscfg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, SYSCFG>
{
    typedef stm32h7a3x_syscfg_t T;
    static T& V;
};

using syscfg_t = peripheral_t<mcu_svd, SYSCFG>;

