#pragma once

////
//
//      STM32G0 RTC peripherals
//
///

// RTC: Real-time clock

struct stm32g030_rtc_t
{
    volatile uint32_t TR; // time register
    volatile uint32_t DR; // date register
    volatile uint32_t SSR; // sub second register
    volatile uint32_t ICSR; // initialization and status register
    volatile uint32_t PRER; // prescaler register
    volatile uint32_t WUTR; // wakeup timer register
    volatile uint32_t CR; // control register
    reserved_t<0x2> _0x1c;
    volatile uint32_t WPR; // write protection register
    volatile uint32_t CALR; // calibration register
    volatile uint32_t SHIFTR; // shift control register
    volatile uint32_t TSTR; // time stamp time register
    volatile uint32_t TSDR; // time stamp date register
    volatile uint32_t TSSSR; // timestamp sub second register
    reserved_t<0x1> _0x3c;
    volatile uint32_t ALRMAR; // alarm A register
    volatile uint32_t ALRMASSR; // alarm A sub second register
    volatile uint32_t ALRMBR; // alarm B register
    volatile uint32_t ALRMBSSR; // alarm B sub second register
    volatile uint32_t SR; // status register
    volatile uint32_t MISR; // masked interrupt status register
    reserved_t<0x1> _0x58;
    volatile uint32_t SCR; // status clear register

    static constexpr uint32_t TR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TR_PM = 0x400000; // AM/PM notation
    typedef bit_field_t<20, 0x3> TR_HT; // Hour tens in BCD format
    typedef bit_field_t<16, 0xf> TR_HU; // Hour units in BCD format
    typedef bit_field_t<12, 0x7> TR_MNT; // Minute tens in BCD format
    typedef bit_field_t<8, 0xf> TR_MNU; // Minute units in BCD format
    typedef bit_field_t<4, 0x7> TR_ST; // Second tens in BCD format
    typedef bit_field_t<0, 0xf> TR_SU; // Second units in BCD format

    static constexpr uint32_t DR_RESET_VALUE = 0x2101; // Reset value
    typedef bit_field_t<20, 0xf> DR_YT; // Year tens in BCD format
    typedef bit_field_t<16, 0xf> DR_YU; // Year units in BCD format
    typedef bit_field_t<13, 0x7> DR_WDU; // Week day units
    static constexpr uint32_t DR_MT = 0x1000; // Month tens in BCD format
    typedef bit_field_t<8, 0xf> DR_MU; // Month units in BCD format
    typedef bit_field_t<4, 0x3> DR_DT; // Date tens in BCD format
    typedef bit_field_t<0, 0xf> DR_DU; // Date units in BCD format

    static constexpr uint32_t SSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> SSR_SS; // Sub second value

    static constexpr uint32_t ICSR_RESET_VALUE = 0x7; // Reset value
    static constexpr uint32_t ICSR_ALRAWF = 0x1; // Alarm A write flag
    static constexpr uint32_t ICSR_ALRBWF = 0x2; // Alarm B write flag
    static constexpr uint32_t ICSR_WUTWF = 0x4; // Wakeup timer write flag
    static constexpr uint32_t ICSR_SHPF = 0x8; // Shift operation pending
    static constexpr uint32_t ICSR_INITS = 0x10; // Initialization status flag
    static constexpr uint32_t ICSR_RSF = 0x20; // Registers synchronization flag
    static constexpr uint32_t ICSR_INITF = 0x40; // Initialization flag
    static constexpr uint32_t ICSR_INIT = 0x80; // Initialization mode
    static constexpr uint32_t ICSR_RECALPF = 0x10000; // Recalibration pending Flag

    static constexpr uint32_t PRER_RESET_VALUE = 0x7f00ff; // Reset value
    typedef bit_field_t<16, 0x7f> PRER_PREDIV_A; // Asynchronous prescaler factor
    typedef bit_field_t<0, 0x7fff> PRER_PREDIV_S; // Synchronous prescaler factor

    static constexpr uint32_t WUTR_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> WUTR_WUT; // Wakeup auto-reload value bits

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> CR_WUCKSEL; // WUCKSEL
    static constexpr uint32_t CR_TSEDGE = 0x8; // TSEDGE
    static constexpr uint32_t CR_REFCKON = 0x10; // REFCKON
    static constexpr uint32_t CR_BYPSHAD = 0x20; // BYPSHAD
    static constexpr uint32_t CR_FMT = 0x40; // FMT
    static constexpr uint32_t CR_ALRAE = 0x100; // ALRAE
    static constexpr uint32_t CR_ALRBE = 0x200; // ALRBE
    static constexpr uint32_t CR_WUTE = 0x400; // WUTE
    static constexpr uint32_t CR_TSE = 0x800; // TSE
    static constexpr uint32_t CR_ALRAIE = 0x1000; // ALRAIE
    static constexpr uint32_t CR_ALRBIE = 0x2000; // ALRBIE
    static constexpr uint32_t CR_WUTIE = 0x4000; // WUTIE
    static constexpr uint32_t CR_TSIE = 0x8000; // TSIE
    static constexpr uint32_t CR_ADD1H = 0x10000; // ADD1H
    static constexpr uint32_t CR_SUB1H = 0x20000; // SUB1H
    static constexpr uint32_t CR_BKP = 0x40000; // BKP
    static constexpr uint32_t CR_COSEL = 0x80000; // COSEL
    static constexpr uint32_t CR_POL = 0x100000; // POL
    typedef bit_field_t<21, 0x3> CR_OSEL; // OSEL
    static constexpr uint32_t CR_COE = 0x800000; // COE
    static constexpr uint32_t CR_ITSE = 0x1000000; // ITSE
    static constexpr uint32_t CR_TAMPTS = 0x2000000; // TAMPTS
    static constexpr uint32_t CR_TAMPOE = 0x4000000; // TAMPOE
    static constexpr uint32_t CR_TAMPALRM_PU = 0x20000000; // TAMPALRM_PU
    static constexpr uint32_t CR_TAMPALRM_TYPE = 0x40000000; // TAMPALRM_TYPE
    static constexpr uint32_t CR_OUT2EN = 0x80000000; // OUT2EN


    static constexpr uint32_t WPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> WPR_KEY; // Write protection key

    static constexpr uint32_t CALR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CALR_CALP = 0x8000; // Increase frequency of RTC by 488.5 ppm
    static constexpr uint32_t CALR_CALW8 = 0x4000; // Use an 8-second calibration cycle period
    static constexpr uint32_t CALR_CALW16 = 0x2000; // Use a 16-second calibration cycle period
    typedef bit_field_t<0, 0x1ff> CALR_CALM; // Calibration minus

    static constexpr uint32_t SHIFTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SHIFTR_ADD1S = 0x80000000; // Add one second
    typedef bit_field_t<0, 0x7fff> SHIFTR_SUBFS; // Subtract a fraction of a second

    static constexpr uint32_t TSTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> TSTR_SU; // Second units in BCD format
    typedef bit_field_t<4, 0x7> TSTR_ST; // Second tens in BCD format
    typedef bit_field_t<8, 0xf> TSTR_MNU; // Minute units in BCD format
    typedef bit_field_t<12, 0x7> TSTR_MNT; // Minute tens in BCD format
    typedef bit_field_t<16, 0xf> TSTR_HU; // Hour units in BCD format
    typedef bit_field_t<20, 0x3> TSTR_HT; // Hour tens in BCD format
    static constexpr uint32_t TSTR_PM = 0x400000; // AM/PM notation

    static constexpr uint32_t TSDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<13, 0x7> TSDR_WDU; // Week day units
    static constexpr uint32_t TSDR_MT = 0x1000; // Month tens in BCD format
    typedef bit_field_t<8, 0xf> TSDR_MU; // Month units in BCD format
    typedef bit_field_t<4, 0x3> TSDR_DT; // Date tens in BCD format
    typedef bit_field_t<0, 0xf> TSDR_DU; // Date units in BCD format

    static constexpr uint32_t TSSSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> TSSSR_SS; // Sub second value


    static constexpr uint32_t ALRMAR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ALRMAR_MSK4 = 0x80000000; // Alarm A date mask
    static constexpr uint32_t ALRMAR_WDSEL = 0x40000000; // Week day selection
    typedef bit_field_t<28, 0x3> ALRMAR_DT; // Date tens in BCD format
    typedef bit_field_t<24, 0xf> ALRMAR_DU; // Date units or day in BCD format
    static constexpr uint32_t ALRMAR_MSK3 = 0x800000; // Alarm A hours mask
    static constexpr uint32_t ALRMAR_PM = 0x400000; // AM/PM notation
    typedef bit_field_t<20, 0x3> ALRMAR_HT; // Hour tens in BCD format
    typedef bit_field_t<16, 0xf> ALRMAR_HU; // Hour units in BCD format
    static constexpr uint32_t ALRMAR_MSK2 = 0x8000; // Alarm A minutes mask
    typedef bit_field_t<12, 0x7> ALRMAR_MNT; // Minute tens in BCD format
    typedef bit_field_t<8, 0xf> ALRMAR_MNU; // Minute units in BCD format
    static constexpr uint32_t ALRMAR_MSK1 = 0x80; // Alarm A seconds mask
    typedef bit_field_t<4, 0x7> ALRMAR_ST; // Second tens in BCD format
    typedef bit_field_t<0, 0xf> ALRMAR_SU; // Second units in BCD format

    static constexpr uint32_t ALRMASSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xf> ALRMASSR_MASKSS; // Mask the most-significant bits starting at this bit
    typedef bit_field_t<0, 0x7fff> ALRMASSR_SS; // Sub seconds value

    static constexpr uint32_t ALRMBR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ALRMBR_MSK4 = 0x80000000; // Alarm B date mask
    static constexpr uint32_t ALRMBR_WDSEL = 0x40000000; // Week day selection
    typedef bit_field_t<28, 0x3> ALRMBR_DT; // Date tens in BCD format
    typedef bit_field_t<24, 0xf> ALRMBR_DU; // Date units or day in BCD format
    static constexpr uint32_t ALRMBR_MSK3 = 0x800000; // Alarm B hours mask
    static constexpr uint32_t ALRMBR_PM = 0x400000; // AM/PM notation
    typedef bit_field_t<20, 0x3> ALRMBR_HT; // Hour tens in BCD format
    typedef bit_field_t<16, 0xf> ALRMBR_HU; // Hour units in BCD format
    static constexpr uint32_t ALRMBR_MSK2 = 0x8000; // Alarm B minutes mask
    typedef bit_field_t<12, 0x7> ALRMBR_MNT; // Minute tens in BCD format
    typedef bit_field_t<8, 0xf> ALRMBR_MNU; // Minute units in BCD format
    static constexpr uint32_t ALRMBR_MSK1 = 0x80; // Alarm B seconds mask
    typedef bit_field_t<4, 0x7> ALRMBR_ST; // Second tens in BCD format
    typedef bit_field_t<0, 0xf> ALRMBR_SU; // Second units in BCD format

    static constexpr uint32_t ALRMBSSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xf> ALRMBSSR_MASKSS; // Mask the most-significant bits starting at this bit
    typedef bit_field_t<0, 0x7fff> ALRMBSSR_SS; // Sub seconds value

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_ALRAF = 0x1; // ALRAF
    static constexpr uint32_t SR_ALRBF = 0x2; // ALRBF
    static constexpr uint32_t SR_WUTF = 0x4; // WUTF
    static constexpr uint32_t SR_TSF = 0x8; // TSF
    static constexpr uint32_t SR_TSOVF = 0x10; // TSOVF
    static constexpr uint32_t SR_ITSF = 0x20; // ITSF

    static constexpr uint32_t MISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MISR_ALRAMF = 0x1; // ALRAMF
    static constexpr uint32_t MISR_ALRBMF = 0x2; // ALRBMF
    static constexpr uint32_t MISR_WUTMF = 0x4; // WUTMF
    static constexpr uint32_t MISR_TSMF = 0x8; // TSMF
    static constexpr uint32_t MISR_TSOVMF = 0x10; // TSOVMF
    static constexpr uint32_t MISR_ITSMF = 0x20; // ITSMF


    static constexpr uint32_t SCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SCR_CALRAF = 0x1; // CALRAF
    static constexpr uint32_t SCR_CALRBF = 0x2; // CALRBF
    static constexpr uint32_t SCR_CWUTF = 0x4; // CWUTF
    static constexpr uint32_t SCR_CTSF = 0x8; // CTSF
    static constexpr uint32_t SCR_CTSOVF = 0x10; // CTSOVF
    static constexpr uint32_t SCR_CITSF = 0x20; // CITSF
};

// RTC: Real-time clock

struct stm32g070_rtc_t
{
    volatile uint32_t TR; // time register
    volatile uint32_t DR; // date register
    volatile uint32_t SSR; // sub second register
    volatile uint32_t ICSR; // initialization and status register
    volatile uint32_t PRER; // prescaler register
    volatile uint32_t WUTR; // wakeup timer register
    volatile uint32_t CR; // control register
    reserved_t<0x2> _0x1c;
    volatile uint32_t WPR; // write protection register
    volatile uint32_t CALR; // calibration register
    volatile uint32_t SHIFTR; // shift control register
    volatile uint32_t TSTR; // time stamp time register
    volatile uint32_t TSDR; // time stamp date register
    volatile uint32_t TSSSR; // timestamp sub second register
    reserved_t<0x1> _0x3c;
    volatile uint32_t ALRMAR; // alarm A register
    volatile uint32_t ALRMASSR; // alarm A sub second register
    volatile uint32_t ALRMBR; // alarm B register
    volatile uint32_t ALRMBSSR; // alarm B sub second register
    volatile uint32_t SR; // status register
    volatile uint32_t MISR; // masked interrupt status register
    reserved_t<0x1> _0x58;
    volatile uint32_t SCR; // status clear register
    reserved_t<0xe4> _0x60;
    volatile uint32_t HWCFGR; // hardware configuration register
    volatile uint32_t VERR; // EXTI IP Version register
    volatile uint32_t IPIDR; // EXTI Identification register
    volatile uint32_t SIDR; // EXTI Size ID register

    static constexpr uint32_t TR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TR_PM = 0x400000; // AM/PM notation
    typedef bit_field_t<20, 0x3> TR_HT; // Hour tens in BCD format
    typedef bit_field_t<16, 0xf> TR_HU; // Hour units in BCD format
    typedef bit_field_t<12, 0x7> TR_MNT; // Minute tens in BCD format
    typedef bit_field_t<8, 0xf> TR_MNU; // Minute units in BCD format
    typedef bit_field_t<4, 0x7> TR_ST; // Second tens in BCD format
    typedef bit_field_t<0, 0xf> TR_SU; // Second units in BCD format

    static constexpr uint32_t DR_RESET_VALUE = 0x2101; // Reset value
    typedef bit_field_t<20, 0xf> DR_YT; // Year tens in BCD format
    typedef bit_field_t<16, 0xf> DR_YU; // Year units in BCD format
    typedef bit_field_t<13, 0x7> DR_WDU; // Week day units
    static constexpr uint32_t DR_MT = 0x1000; // Month tens in BCD format
    typedef bit_field_t<8, 0xf> DR_MU; // Month units in BCD format
    typedef bit_field_t<4, 0x3> DR_DT; // Date tens in BCD format
    typedef bit_field_t<0, 0xf> DR_DU; // Date units in BCD format

    static constexpr uint32_t SSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> SSR_SS; // Sub second value

    static constexpr uint32_t ICSR_RESET_VALUE = 0x7; // Reset value
    static constexpr uint32_t ICSR_ALRAWF = 0x1; // Alarm A write flag
    static constexpr uint32_t ICSR_ALRBWF = 0x2; // Alarm B write flag
    static constexpr uint32_t ICSR_WUTWF = 0x4; // Wakeup timer write flag
    static constexpr uint32_t ICSR_SHPF = 0x8; // Shift operation pending
    static constexpr uint32_t ICSR_INITS = 0x10; // Initialization status flag
    static constexpr uint32_t ICSR_RSF = 0x20; // Registers synchronization flag
    static constexpr uint32_t ICSR_INITF = 0x40; // Initialization flag
    static constexpr uint32_t ICSR_INIT = 0x80; // Initialization mode
    static constexpr uint32_t ICSR_RECALPF = 0x10000; // Recalibration pending Flag

    static constexpr uint32_t PRER_RESET_VALUE = 0x7f00ff; // Reset value
    typedef bit_field_t<16, 0x7f> PRER_PREDIV_A; // Asynchronous prescaler factor
    typedef bit_field_t<0, 0x7fff> PRER_PREDIV_S; // Synchronous prescaler factor

    static constexpr uint32_t WUTR_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> WUTR_WUT; // Wakeup auto-reload value bits

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> CR_WUCKSEL; // WUCKSEL
    static constexpr uint32_t CR_TSEDGE = 0x8; // TSEDGE
    static constexpr uint32_t CR_REFCKON = 0x10; // REFCKON
    static constexpr uint32_t CR_BYPSHAD = 0x20; // BYPSHAD
    static constexpr uint32_t CR_FMT = 0x40; // FMT
    static constexpr uint32_t CR_ALRAE = 0x100; // ALRAE
    static constexpr uint32_t CR_ALRBE = 0x200; // ALRBE
    static constexpr uint32_t CR_WUTE = 0x400; // WUTE
    static constexpr uint32_t CR_TSE = 0x800; // TSE
    static constexpr uint32_t CR_ALRAIE = 0x1000; // ALRAIE
    static constexpr uint32_t CR_ALRBIE = 0x2000; // ALRBIE
    static constexpr uint32_t CR_WUTIE = 0x4000; // WUTIE
    static constexpr uint32_t CR_TSIE = 0x8000; // TSIE
    static constexpr uint32_t CR_ADD1H = 0x10000; // ADD1H
    static constexpr uint32_t CR_SUB1H = 0x20000; // SUB1H
    static constexpr uint32_t CR_BKP = 0x40000; // BKP
    static constexpr uint32_t CR_COSEL = 0x80000; // COSEL
    static constexpr uint32_t CR_POL = 0x100000; // POL
    typedef bit_field_t<21, 0x3> CR_OSEL; // OSEL
    static constexpr uint32_t CR_COE = 0x800000; // COE
    static constexpr uint32_t CR_ITSE = 0x1000000; // ITSE
    static constexpr uint32_t CR_TAMPTS = 0x2000000; // TAMPTS
    static constexpr uint32_t CR_TAMPOE = 0x4000000; // TAMPOE
    static constexpr uint32_t CR_TAMPALRM_PU = 0x20000000; // TAMPALRM_PU
    static constexpr uint32_t CR_TAMPALRM_TYPE = 0x40000000; // TAMPALRM_TYPE
    static constexpr uint32_t CR_OUT2EN = 0x80000000; // OUT2EN


    static constexpr uint32_t WPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> WPR_KEY; // Write protection key

    static constexpr uint32_t CALR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CALR_CALP = 0x8000; // Increase frequency of RTC by 488.5 ppm
    static constexpr uint32_t CALR_CALW8 = 0x4000; // Use an 8-second calibration cycle period
    static constexpr uint32_t CALR_CALW16 = 0x2000; // Use a 16-second calibration cycle period
    typedef bit_field_t<0, 0x1ff> CALR_CALM; // Calibration minus

    static constexpr uint32_t SHIFTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SHIFTR_ADD1S = 0x80000000; // Add one second
    typedef bit_field_t<0, 0x7fff> SHIFTR_SUBFS; // Subtract a fraction of a second

    static constexpr uint32_t TSTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> TSTR_SU; // Second units in BCD format
    typedef bit_field_t<4, 0x7> TSTR_ST; // Second tens in BCD format
    typedef bit_field_t<8, 0xf> TSTR_MNU; // Minute units in BCD format
    typedef bit_field_t<12, 0x7> TSTR_MNT; // Minute tens in BCD format
    typedef bit_field_t<16, 0xf> TSTR_HU; // Hour units in BCD format
    typedef bit_field_t<20, 0x3> TSTR_HT; // Hour tens in BCD format
    static constexpr uint32_t TSTR_PM = 0x400000; // AM/PM notation

    static constexpr uint32_t TSDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<13, 0x7> TSDR_WDU; // Week day units
    static constexpr uint32_t TSDR_MT = 0x1000; // Month tens in BCD format
    typedef bit_field_t<8, 0xf> TSDR_MU; // Month units in BCD format
    typedef bit_field_t<4, 0x3> TSDR_DT; // Date tens in BCD format
    typedef bit_field_t<0, 0xf> TSDR_DU; // Date units in BCD format

    static constexpr uint32_t TSSSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> TSSSR_SS; // Sub second value


    static constexpr uint32_t ALRMAR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ALRMAR_MSK4 = 0x80000000; // Alarm A date mask
    static constexpr uint32_t ALRMAR_WDSEL = 0x40000000; // Week day selection
    typedef bit_field_t<28, 0x3> ALRMAR_DT; // Date tens in BCD format
    typedef bit_field_t<24, 0xf> ALRMAR_DU; // Date units or day in BCD format
    static constexpr uint32_t ALRMAR_MSK3 = 0x800000; // Alarm A hours mask
    static constexpr uint32_t ALRMAR_PM = 0x400000; // AM/PM notation
    typedef bit_field_t<20, 0x3> ALRMAR_HT; // Hour tens in BCD format
    typedef bit_field_t<16, 0xf> ALRMAR_HU; // Hour units in BCD format
    static constexpr uint32_t ALRMAR_MSK2 = 0x8000; // Alarm A minutes mask
    typedef bit_field_t<12, 0x7> ALRMAR_MNT; // Minute tens in BCD format
    typedef bit_field_t<8, 0xf> ALRMAR_MNU; // Minute units in BCD format
    static constexpr uint32_t ALRMAR_MSK1 = 0x80; // Alarm A seconds mask
    typedef bit_field_t<4, 0x7> ALRMAR_ST; // Second tens in BCD format
    typedef bit_field_t<0, 0xf> ALRMAR_SU; // Second units in BCD format

    static constexpr uint32_t ALRMASSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xf> ALRMASSR_MASKSS; // Mask the most-significant bits starting at this bit
    typedef bit_field_t<0, 0x7fff> ALRMASSR_SS; // Sub seconds value

    static constexpr uint32_t ALRMBR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ALRMBR_MSK4 = 0x80000000; // Alarm B date mask
    static constexpr uint32_t ALRMBR_WDSEL = 0x40000000; // Week day selection
    typedef bit_field_t<28, 0x3> ALRMBR_DT; // Date tens in BCD format
    typedef bit_field_t<24, 0xf> ALRMBR_DU; // Date units or day in BCD format
    static constexpr uint32_t ALRMBR_MSK3 = 0x800000; // Alarm B hours mask
    static constexpr uint32_t ALRMBR_PM = 0x400000; // AM/PM notation
    typedef bit_field_t<20, 0x3> ALRMBR_HT; // Hour tens in BCD format
    typedef bit_field_t<16, 0xf> ALRMBR_HU; // Hour units in BCD format
    static constexpr uint32_t ALRMBR_MSK2 = 0x8000; // Alarm B minutes mask
    typedef bit_field_t<12, 0x7> ALRMBR_MNT; // Minute tens in BCD format
    typedef bit_field_t<8, 0xf> ALRMBR_MNU; // Minute units in BCD format
    static constexpr uint32_t ALRMBR_MSK1 = 0x80; // Alarm B seconds mask
    typedef bit_field_t<4, 0x7> ALRMBR_ST; // Second tens in BCD format
    typedef bit_field_t<0, 0xf> ALRMBR_SU; // Second units in BCD format

    static constexpr uint32_t ALRMBSSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xf> ALRMBSSR_MASKSS; // Mask the most-significant bits starting at this bit
    typedef bit_field_t<0, 0x7fff> ALRMBSSR_SS; // Sub seconds value

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_ALRAF = 0x1; // ALRAF
    static constexpr uint32_t SR_ALRBF = 0x2; // ALRBF
    static constexpr uint32_t SR_WUTF = 0x4; // WUTF
    static constexpr uint32_t SR_TSF = 0x8; // TSF
    static constexpr uint32_t SR_TSOVF = 0x10; // TSOVF
    static constexpr uint32_t SR_ITSF = 0x20; // ITSF

    static constexpr uint32_t MISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MISR_ALRAMF = 0x1; // ALRAMF
    static constexpr uint32_t MISR_ALRBMF = 0x2; // ALRBMF
    static constexpr uint32_t MISR_WUTMF = 0x4; // WUTMF
    static constexpr uint32_t MISR_TSMF = 0x8; // TSMF
    static constexpr uint32_t MISR_TSOVMF = 0x10; // TSOVMF
    static constexpr uint32_t MISR_ITSMF = 0x20; // ITSMF


    static constexpr uint32_t SCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SCR_CALRAF = 0x1; // CALRAF
    static constexpr uint32_t SCR_CALRBF = 0x2; // CALRBF
    static constexpr uint32_t SCR_CWUTF = 0x4; // CWUTF
    static constexpr uint32_t SCR_CTSF = 0x8; // CTSF
    static constexpr uint32_t SCR_CTSOVF = 0x10; // CTSOVF
    static constexpr uint32_t SCR_CITSF = 0x20; // CITSF


    static constexpr uint32_t HWCFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> HWCFGR_ALARMB; // ALARMB
    typedef bit_field_t<4, 0xf> HWCFGR_WAKEUP; // WAKEUP
    typedef bit_field_t<8, 0xf> HWCFGR_SMOOTH_CALIB; // SMOOTH_CALIB
    typedef bit_field_t<12, 0xf> HWCFGR_TIMESTAMP; // TIMESTAMP
    typedef bit_field_t<16, 0xff> HWCFGR_OPTIONREG_OUT; // OPTIONREG_OUT
    typedef bit_field_t<24, 0xf> HWCFGR_TRUST_ZONE; // TRUST_ZONE

    static constexpr uint32_t VERR_RESET_VALUE = 0x10; // Reset value
    typedef bit_field_t<0, 0xf> VERR_MINREV; // Minor Revision number
    typedef bit_field_t<4, 0xf> VERR_MAJREV; // Major Revision number

    static constexpr uint32_t IPIDR_RESET_VALUE = 0x120033; // Reset value
    typedef bit_field_t<0, 0xffffffff> IPIDR_IPID; // IP Identification

    static constexpr uint32_t SIDR_RESET_VALUE = 0xa3c5dd01; // Reset value
    typedef bit_field_t<0, 0xffffffff> SIDR_SID; // Size Identification
};

template<>
struct peripheral_t<STM32G030, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32g030_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32g030_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32g030_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32g070_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32g070_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32g070_rtc_t;
    static T& V;
};

using rtc_t = peripheral_t<svd, RTC>;
