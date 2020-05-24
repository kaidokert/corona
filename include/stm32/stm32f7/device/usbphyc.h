#pragma once

////
//
//      STM32F7 USBPHYC peripherals
//
////

////
//
//      USBPHYC register interface
//
////

struct stm32f730_usbphyc_t
{
    volatile uint32_t PLL1; // [read-write] USBPHYC PLL1 control register
    reserved_t<0x2> _0xc;
    volatile uint32_t TUNE; // [read-write] USBPHYC tuning control register
    reserved_t<0x2> _0x18;
    volatile uint32_t LDO;  // USBPHYC LDO control and status register

    static constexpr uint32_t PLL1_RESET_VALUE = 0x0;
    static constexpr uint32_t PLL1_PLL1EN = 0x1; // Enable the PLL1 inside PHY
    template<uint32_t X>
    static constexpr uint32_t PLL1_PLL1SEL =     // : Controls the PHY PLL1 input clock frequency selection
        bit_field_t<1, 0x7>::value<X>();

    static constexpr uint32_t TUNE_RESET_VALUE = 0x4;
    static constexpr uint32_t TUNE_INCURREN = 0x1;           // Controls the current boosting function
    static constexpr uint32_t TUNE_INCURRINT = 0x2;          // Controls PHY current boosting
    static constexpr uint32_t TUNE_LFSCAPEN = 0x4;           // : Enables the Low Full Speed feedback capacitor
    static constexpr uint32_t TUNE_HSDRVSLEW = 0x8;          // Controls the HS driver slew rate
    static constexpr uint32_t TUNE_HSDRVDCCUR = 0x10;        // Decreases the HS driver DC level
    static constexpr uint32_t TUNE_HSDRVDCLEV = 0x20;        // Increases the HS Driver DC level. Not applicable during the HS Test J and Test K data transfer
    static constexpr uint32_t TUNE_HSDRVCURINCR = 0x40;      // Enable the HS driver current increase feature
    static constexpr uint32_t TUNE_FSDRVRFADJ = 0x80;        // Tuning pin to adjust the full speed rise/fall time
    static constexpr uint32_t TUNE_HSDRVRFRED = 0x100;       // High Speed rise-fall reduction enable
    template<uint32_t X>
    static constexpr uint32_t TUNE_HSDRVCHKITRM =            // HS Driver current trimming pins for choke compensation
        bit_field_t<9, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TUNE_HSDRVCHKZTRM =            // Controls the PHY bus HS driver impedance tuning for choke compensation
        bit_field_t<13, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TUNE_SQLCHCTL =                // Adjust the squelch DC threshold value
        bit_field_t<15, 0x3>::value<X>();
    static constexpr uint32_t TUNE_HDRXGNEQEN = 0x20000;     // Enables the HS Rx Gain Equalizer
    static constexpr uint32_t TUNE_STAGSEL = 0x40000;        // HS Tx staggering enable
    static constexpr uint32_t TUNE_HSFALLPREEM = 0x80000;    // HS Fall time control of single ended signals during pre-emphasis
    template<uint32_t X>
    static constexpr uint32_t TUNE_HSRXOFF =                 // : HS Receiver Offset adjustment
        bit_field_t<20, 0x3>::value<X>();
    static constexpr uint32_t TUNE_SHTCCTCTLPROT = 0x400000; // Enables the short circuit protection circuitry in LS/FS driver
    static constexpr uint32_t TUNE_SQLBYP = 0x800000;        // This pin is used to bypass the squelch inter-locking circuitry

    static constexpr uint32_t LDO_RESET_VALUE = 0x1;
    static constexpr uint32_t LDO_LDO_USED = 0x1;    // Indicates the presence of the LDO in the chip
    static constexpr uint32_t LDO_LDO_STATUS = 0x2;  // Monitors the status of the PHY's LDO
    static constexpr uint32_t LDO_LDO_DISABLE = 0x4; // Controls disable of the High Speed PHY's LDO
};


template<>
struct peripheral_t<STM32F730, USBPHYC>
{
    typedef stm32f730_usbphyc_t T;
    static T& V;
};

using usbphyc_t = peripheral_t<mcu_svd, USBPHYC>;
