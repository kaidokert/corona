#pragma once

////
//
//      STM32L5 DAC peripherals
//
///

// DAC: DAC

struct stm32l552_dac_t
{
    volatile uint32_t DAC_CR; // DAC control register
    volatile uint32_t DAC_SWTRGR; // DAC software trigger register
    volatile uint32_t DAC_DHR12R1; // DAC channel1 12-bit right-aligned data holding register
    volatile uint32_t DAC_DHR12L1; // DAC channel1 12-bit left aligned data holding register
    volatile uint32_t DAC_DHR8R1; // DAC channel1 8-bit right aligned data holding register
    volatile uint32_t DAC_DHR12R2; // DAC channel2 12-bit right aligned data holding register
    volatile uint32_t DAC_DHR12L2; // DAC channel2 12-bit left aligned data holding register
    volatile uint32_t DAC_DHR8R2; // DAC channel2 8-bit right-aligned data holding register
    volatile uint32_t DAC_DHR12RD; // Dual DAC 12-bit right-aligned data holding register
    volatile uint32_t DAC_DHR12LD; // DUAL DAC 12-bit left aligned data holding register
    volatile uint32_t DAC_DHR8RD; // DUAL DAC 8-bit right aligned data holding register
    volatile uint32_t DAC_DOR1; // DAC channel1 data output register
    volatile uint32_t DAC_DOR2; // DAC channel2 data output register
    volatile uint32_t DAC_SR; // DAC status register
    volatile uint32_t DAC_CCR; // DAC calibration control register
    volatile uint32_t DAC_MCR; // DAC mode control register
    volatile uint32_t DAC_SHSR1; // DAC Sample and Hold sample time register 1
    volatile uint32_t DAC_SHSR2; // DAC Sample and Hold sample time register 2
    volatile uint32_t DAC_SHHR; // DAC Sample and Hold hold time register
    volatile uint32_t DAC_SHRR; // DAC Sample and Hold refresh time register

    static constexpr uint32_t DAC_CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DAC_CR_EN1 = 0x1; // DAC channel1 enable This bit is set and cleared by software to enable/disable DAC channel1.
    static constexpr uint32_t DAC_CR_TEN1 = 0x2; // DAC channel1 trigger enable
    static constexpr uint32_t DAC_CR_TSEL10 = 0x4; // TSEL10
    static constexpr uint32_t DAC_CR_TSEL11 = 0x8; // TSEL11
    static constexpr uint32_t DAC_CR_TSEL12 = 0x10; // TSEL12
    static constexpr uint32_t DAC_CR_TSEL13 = 0x20; // TSEL13
    typedef bit_field_t<6, 0x3> DAC_CR_WAVE1; // DAC channel1 noise/triangle wave generation enable These bits are set and cleared by software. Note: Only used if bit TEN1 = 1 (DAC channel1 trigger enabled).
    typedef bit_field_t<8, 0xf> DAC_CR_MAMP1; // DAC channel1 mask/amplitude selector These bits are written by software to select mask in wave generation mode or amplitude in triangle generation mode. = 1011: Unmask bits[11:0] of LFSR/ triangle amplitude equal to 4095
    static constexpr uint32_t DAC_CR_DMAEN1 = 0x1000; // DAC channel1 DMA enable This bit is set and cleared by software.
    static constexpr uint32_t DAC_CR_DMAUDRIE1 = 0x2000; // DAC channel1 DMA Underrun Interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t DAC_CR_CEN1 = 0x4000; // DAC Channel 1 calibration enable This bit is set and cleared by software to enable/disable DAC channel 1 calibration, it can be written only if bit EN1=0 into DAC_CR (the calibration mode can be entered/exit only when the DAC channel is disabled) Otherwise, the write operation is ignored.
    static constexpr uint32_t DAC_CR_HFSEL = 0x8000; // HFSEL
    static constexpr uint32_t DAC_CR_EN2 = 0x10000; // DAC channel2 enable This bit is set and cleared by software to enable/disable DAC channel2.
    static constexpr uint32_t DAC_CR_TEN2 = 0x20000; // DAC channel2 trigger enable
    static constexpr uint32_t DAC_CR_TSEL20 = 0x40000; // TSEL20
    static constexpr uint32_t DAC_CR_TSEL21 = 0x80000; // TSEL21
    static constexpr uint32_t DAC_CR_TSEL22 = 0x100000; // TSEL22
    static constexpr uint32_t DAC_CR_TSEL23 = 0x200000; // TSEL23
    typedef bit_field_t<22, 0x3> DAC_CR_WAVE2; // DAC channel2 noise/triangle wave generation enable These bits are set/reset by software. 1x: Triangle wave generation enabled Note: Only used if bit TEN2 = 1 (DAC channel2 trigger enabled)
    typedef bit_field_t<24, 0xf> DAC_CR_MAMP2; // DAC channel2 mask/amplitude selector These bits are written by software to select mask in wave generation mode or amplitude in triangle generation mode. = 1011: Unmask bits[11:0] of LFSR/ triangle amplitude equal to 4095
    static constexpr uint32_t DAC_CR_DMAEN2 = 0x10000000; // DAC channel2 DMA enable This bit is set and cleared by software.
    static constexpr uint32_t DAC_CR_DMAUDRIE2 = 0x20000000; // DAC channel2 DMA underrun interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t DAC_CR_CEN2 = 0x40000000; // DAC Channel 2 calibration enable This bit is set and cleared by software to enable/disable DAC channel 2 calibration, it can be written only if bit EN2=0 into DAC_CR (the calibration mode can be entered/exit only when the DAC channel is disabled) Otherwise, the write operation is ignored.

    static constexpr uint32_t DAC_SWTRGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DAC_SWTRGR_SWTRIG1 = 0x1; // DAC channel1 software trigger This bit is set by software to trigger the DAC in software trigger mode. Note: This bit is cleared by hardware (one APB1 clock cycle later) once the DAC_DHR1 register value has been loaded into the DAC_DOR1 register.
    static constexpr uint32_t DAC_SWTRGR_SWTRIG2 = 0x2; // DAC channel2 software trigger This bit is set by software to trigger the DAC in software trigger mode. Note: This bit is cleared by hardware (one APB1 clock cycle later) once the DAC_DHR2 register value has been loaded into the DAC_DOR2 register.

    static constexpr uint32_t DAC_DHR12R1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> DAC_DHR12R1_DACC1DHR; // DAC channel1 12-bit right-aligned data These bits are written by software which specifies 12-bit data for DAC channel1.

    static constexpr uint32_t DAC_DHR12L1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfff> DAC_DHR12L1_DACC1DHR; // DAC channel1 12-bit left-aligned data These bits are written by software which specifies 12-bit data for DAC channel1.

    static constexpr uint32_t DAC_DHR8R1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DAC_DHR8R1_DACC1DHR; // DAC channel1 8-bit right-aligned data These bits are written by software which specifies 8-bit data for DAC channel1.

    static constexpr uint32_t DAC_DHR12R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> DAC_DHR12R2_DACC2DHR; // DAC channel2 12-bit right-aligned data These bits are written by software which specifies 12-bit data for DAC channel2.

    static constexpr uint32_t DAC_DHR12L2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfff> DAC_DHR12L2_DACC2DHR; // DAC channel2 12-bit left-aligned data These bits are written by software which specify 12-bit data for DAC channel2.

    static constexpr uint32_t DAC_DHR8R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DAC_DHR8R2_DACC2DHR; // DAC channel2 8-bit right-aligned data These bits are written by software which specifies 8-bit data for DAC channel2.

    static constexpr uint32_t DAC_DHR12RD_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> DAC_DHR12RD_DACC1DHR; // DAC channel1 12-bit right-aligned data These bits are written by software which specifies 12-bit data for DAC channel1.
    typedef bit_field_t<16, 0xfff> DAC_DHR12RD_DACC2DHR; // DAC channel2 12-bit right-aligned data These bits are written by software which specifies 12-bit data for DAC channel2.

    static constexpr uint32_t DAC_DHR12LD_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfff> DAC_DHR12LD_DACC1DHR; // DAC channel1 12-bit left-aligned data These bits are written by software which specifies 12-bit data for DAC channel1.
    typedef bit_field_t<20, 0xfff> DAC_DHR12LD_DACC2DHR; // DAC channel2 12-bit left-aligned data These bits are written by software which specifies 12-bit data for DAC channel2.

    static constexpr uint32_t DAC_DHR8RD_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DAC_DHR8RD_DACC1DHR; // DAC channel1 8-bit right-aligned data These bits are written by software which specifies 8-bit data for DAC channel1.
    typedef bit_field_t<8, 0xff> DAC_DHR8RD_DACC2DHR; // DAC channel2 8-bit right-aligned data These bits are written by software which specifies 8-bit data for DAC channel2.

    static constexpr uint32_t DAC_DOR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> DAC_DOR1_DACC1DOR; // DAC channel1 data output These bits are read-only, they contain data output for DAC channel1.

    static constexpr uint32_t DAC_DOR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> DAC_DOR2_DACC2DOR; // DAC channel2 data output These bits are read-only, they contain data output for DAC channel2.

    static constexpr uint32_t DAC_SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DAC_SR_DMAUDR1 = 0x2000; // DAC channel1 DMA underrun flag This bit is set by hardware and cleared by software (by writing it to 1).
    static constexpr uint32_t DAC_SR_CAL_FLAG1 = 0x4000; // DAC Channel 1 calibration offset status This bit is set and cleared by hardware
    static constexpr uint32_t DAC_SR_BWST1 = 0x8000; // DAC Channel 1 busy writing sample time flag This bit is systematically set just after Sample &amp; Hold mode enable and is set each time the software writes the register DAC_SHSR1, It is cleared by hardware when the write operation of DAC_SHSR1 is complete. (It takes about 3LSI periods of synchronization).
    static constexpr uint32_t DAC_SR_DMAUDR2 = 0x20000000; // DAC channel2 DMA underrun flag This bit is set by hardware and cleared by software (by writing it to 1).
    static constexpr uint32_t DAC_SR_CAL_FLAG2 = 0x40000000; // DAC Channel 2 calibration offset status This bit is set and cleared by hardware
    static constexpr uint32_t DAC_SR_BWST2 = 0x80000000; // DAC Channel 2 busy writing sample time flag This bit is systematically set just after Sample &amp; Hold mode enable and is set each time the software writes the register DAC_SHSR2, It is cleared by hardware when the write operation of DAC_SHSR2 is complete. (It takes about 3 LSI periods of synchronization).

    static constexpr uint32_t DAC_CCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> DAC_CCR_OTRIM1; // DAC Channel 1 offset trimming value
    typedef bit_field_t<16, 0x1f> DAC_CCR_OTRIM2; // DAC Channel 2 offset trimming value

    static constexpr uint32_t DAC_MCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> DAC_MCR_MODE1; // DAC Channel 1 mode These bits can be written only when the DAC is disabled and not in the calibration mode (when bit EN1=0 and bit CEN1 =0 in the DAC_CR register). If EN1=1 or CEN1 =1 the write operation is ignored. They can be set and cleared by software to select the DAC Channel 1 mode: DAC Channel 1 in normal Mode DAC Channel 1 in sample &amp;amp; hold mode
    typedef bit_field_t<16, 0x7> DAC_MCR_MODE2; // DAC Channel 2 mode These bits can be written only when the DAC is disabled and not in the calibration mode (when bit EN2=0 and bit CEN2 =0 in the DAC_CR register). If EN2=1 or CEN2 =1 the write operation is ignored. They can be set and cleared by software to select the DAC Channel 2 mode: DAC Channel 2 in normal Mode DAC Channel 2 in sample &amp;amp; hold mode

    static constexpr uint32_t DAC_SHSR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ff> DAC_SHSR1_TSAMPLE1; // DAC Channel 1 sample Time (only valid in sample &amp;amp; hold mode) These bits can be written when the DAC channel1 is disabled or also during normal operation. in the latter case, the write can be done only when BWSTx of DAC_SR register is low, If BWSTx=1, the write operation is ignored.

    static constexpr uint32_t DAC_SHSR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ff> DAC_SHSR2_TSAMPLE2; // DAC Channel 2 sample Time (only valid in sample &amp;amp; hold mode) These bits can be written when the DAC channel2 is disabled or also during normal operation. in the latter case, the write can be done only when BWSTx of DAC_SR register is low, if BWSTx=1, the write operation is ignored.

    static constexpr uint32_t DAC_SHHR_RESET_VALUE = 0x10001; // Reset value
    typedef bit_field_t<0, 0x3ff> DAC_SHHR_THOLD1; // DAC Channel 1 hold Time (only valid in sample &amp;amp; hold mode) Hold time= (THOLD[9:0]) x T LSI
    typedef bit_field_t<16, 0x3ff> DAC_SHHR_THOLD2; // DAC Channel 2 hold time (only valid in sample &amp;amp; hold mode). Hold time= (THOLD[9:0]) x T LSI

    static constexpr uint32_t DAC_SHRR_RESET_VALUE = 0x10001; // Reset value
    typedef bit_field_t<0, 0xff> DAC_SHRR_TREFRESH1; // DAC Channel 1 refresh Time (only valid in sample &amp;amp; hold mode) Refresh time= (TREFRESH[7:0]) x T LSI
    typedef bit_field_t<16, 0xff> DAC_SHRR_TREFRESH2; // DAC Channel 2 refresh Time (only valid in sample &amp;amp; hold mode) Refresh time= (TREFRESH[7:0]) x T LSI
};

template<>
struct peripheral_t<STM32L552, DAC1>
{
    static constexpr periph_t P = DAC1;
    using T = stm32l552_dac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L552, SEC_DAC>
{
    static constexpr periph_t P = SEC_DAC;
    using T = stm32l552_dac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, DAC1>
{
    static constexpr periph_t P = DAC1;
    using T = stm32l552_dac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, SEC_DAC>
{
    static constexpr periph_t P = SEC_DAC;
    using T = stm32l552_dac_t;
    static T& V;
};

using dac1_t = peripheral_t<svd, DAC1>;
using sec_dac_t = peripheral_t<svd, SEC_DAC>;

template<int INST> struct dac_traits {};

template<> struct dac_traits<1>
{
    using dac = dac1_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR1 |= RCC::T::APB1ENR1_DAC1EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR1 &= ~RCC::T::APB1ENR1_DAC1EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR1 |= RCC::T::APB1SMENR1_DAC1SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_DAC1SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR1 |= RCC::T::APB1RSTR1_DAC1RST;
    }
};
