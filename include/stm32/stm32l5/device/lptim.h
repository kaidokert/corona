#pragma once

////
//
//      STM32L5 LPTIM peripherals
//
///

// LPTIM1: Low power timer

struct stm32l552_lptim1_t
{
    volatile uint32_t ISR; // Interrupt and Status Register
    volatile uint32_t ICR; // Interrupt Clear Register
    volatile uint32_t IER; // Interrupt Enable Register
    volatile uint32_t CFGR; // Configuration Register
    volatile uint32_t CR; // Control Register
    volatile uint32_t CMP; // Compare Register
    volatile uint32_t ARR; // Autoreload Register
    volatile uint32_t CNT; // Counter Register
    volatile uint32_t OR; // LPTIM option register
    reserved_t<0x1> _0x24;
    volatile uint32_t RCR; // LPTIM repetition register

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_DOWN = 0x40; // Counter direction change up to down
    static constexpr uint32_t ISR_UP = 0x20; // Counter direction change down to up
    static constexpr uint32_t ISR_ARROK = 0x10; // Autoreload register update OK
    static constexpr uint32_t ISR_CMPOK = 0x8; // Compare register update OK
    static constexpr uint32_t ISR_EXTTRIG = 0x4; // External trigger edge event
    static constexpr uint32_t ISR_ARRM = 0x2; // Autoreload match
    static constexpr uint32_t ISR_CMPM = 0x1; // Compare match
    static constexpr uint32_t ISR_UE = 0x80; // LPTIM update event occurred
    static constexpr uint32_t ISR_REPOK = 0x100; // Repetition register update Ok

    static constexpr uint32_t ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ICR_DOWNCF = 0x40; // Direction change to down Clear Flag
    static constexpr uint32_t ICR_UPCF = 0x20; // Direction change to UP Clear Flag
    static constexpr uint32_t ICR_ARROKCF = 0x10; // Autoreload register update OK Clear Flag
    static constexpr uint32_t ICR_CMPOKCF = 0x8; // Compare register update OK Clear Flag
    static constexpr uint32_t ICR_EXTTRIGCF = 0x4; // External trigger valid edge Clear Flag
    static constexpr uint32_t ICR_ARRMCF = 0x2; // Autoreload match Clear Flag
    static constexpr uint32_t ICR_CMPMCF = 0x1; // compare match Clear Flag
    static constexpr uint32_t ICR_UECF = 0x80; // Update event clear flag
    static constexpr uint32_t ICR_REPOKCF = 0x100; // Repetition register update OK clear flag

    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_DOWNIE = 0x40; // Direction change to down Interrupt Enable
    static constexpr uint32_t IER_UPIE = 0x20; // Direction change to UP Interrupt Enable
    static constexpr uint32_t IER_ARROKIE = 0x10; // Autoreload register update OK Interrupt Enable
    static constexpr uint32_t IER_CMPOKIE = 0x8; // Compare register update OK Interrupt Enable
    static constexpr uint32_t IER_EXTTRIGIE = 0x4; // External trigger valid edge Interrupt Enable
    static constexpr uint32_t IER_ARRMIE = 0x2; // Autoreload match Interrupt Enable
    static constexpr uint32_t IER_CMPMIE = 0x1; // Compare match Interrupt Enable
    static constexpr uint32_t IER_UEIE = 0x80; // Update event interrupt enable
    static constexpr uint32_t IER_REPOKIE = 0x100; // REPOKIE

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR_ENC = 0x1000000; // Encoder mode enable
    static constexpr uint32_t CFGR_COUNTMODE = 0x800000; // counter mode enabled
    static constexpr uint32_t CFGR_PRELOAD = 0x400000; // Registers update mode
    static constexpr uint32_t CFGR_WAVPOL = 0x200000; // Waveform shape polarity
    static constexpr uint32_t CFGR_WAVE = 0x100000; // Waveform shape
    static constexpr uint32_t CFGR_TIMOUT = 0x80000; // Timeout enable
    typedef bit_field_t<17, 0x3> CFGR_TRIGEN; // Trigger enable and polarity
    typedef bit_field_t<13, 0x7> CFGR_TRIGSEL; // Trigger selector
    typedef bit_field_t<9, 0x7> CFGR_PRESC; // Clock prescaler
    typedef bit_field_t<6, 0x3> CFGR_TRGFLT; // Configurable digital filter for trigger
    typedef bit_field_t<3, 0x3> CFGR_CKFLT; // Configurable digital filter for external clock
    typedef bit_field_t<1, 0x3> CFGR_CKPOL; // Clock Polarity
    static constexpr uint32_t CFGR_CKSEL = 0x1; // Clock selector

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_CNTSTRT = 0x4; // Timer start in continuous mode
    static constexpr uint32_t CR_SNGSTRT = 0x2; // LPTIM start in single mode
    static constexpr uint32_t CR_ENABLE = 0x1; // LPTIM Enable
    static constexpr uint32_t CR_COUNTRST = 0x10; // Counter reset
    static constexpr uint32_t CR_RSTARE = 0x8; // Reset after read enable

    static constexpr uint32_t CMP_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CMP_CMP; // Compare value

    static constexpr uint32_t ARR_RESET_VALUE = 0x1; // Reset value
    typedef bit_field_t<0, 0xffff> ARR_ARR; // Auto reload value

    static constexpr uint32_t CNT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNT_CNT; // Counter value

    static constexpr uint32_t OR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OR_OR_0 = 0x1; // Option register bit 0
    static constexpr uint32_t OR_OR_1 = 0x2; // Option register bit 1


    static constexpr uint32_t RCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RCR_REP; // Repetition register value
};

template<>
struct peripheral_t<STM32L552, LPTIM1>
{
    using T = stm32l552_lptim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L552, LPTIM2>
{
    using T = stm32l552_lptim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L552, LPTIM3>
{
    using T = stm32l552_lptim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L552, SEC_LPTIM1>
{
    using T = stm32l552_lptim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L552, SEC_LPTIM2>
{
    using T = stm32l552_lptim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L552, SEC_LPTIM3>
{
    using T = stm32l552_lptim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, LPTIM1>
{
    using T = stm32l552_lptim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, LPTIM2>
{
    using T = stm32l552_lptim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, LPTIM3>
{
    using T = stm32l552_lptim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, SEC_LPTIM1>
{
    using T = stm32l552_lptim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, SEC_LPTIM2>
{
    using T = stm32l552_lptim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, SEC_LPTIM3>
{
    using T = stm32l552_lptim1_t;
    static T& V;
};

using lptim1_t = peripheral_t<svd, LPTIM1>;
using lptim2_t = peripheral_t<svd, LPTIM2>;
using lptim3_t = peripheral_t<svd, LPTIM3>;
using sec_lptim1_t = peripheral_t<svd, SEC_LPTIM1>;
using sec_lptim2_t = peripheral_t<svd, SEC_LPTIM2>;
using sec_lptim3_t = peripheral_t<svd, SEC_LPTIM3>;

template<int INST> struct lptim_traits {};

template<> struct lptim_traits<1>
{
    using lptim = lptim1_t;
    static constexpr signal_t ETR = LPTIM1_ETR;
    static constexpr signal_t IN1 = LPTIM1_IN1;
    static constexpr signal_t IN2 = LPTIM1_IN2;
    static constexpr signal_t OUT = LPTIM1_OUT;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR1 |= RCC::T::APB1ENR1_LPTIM1EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR1 &= ~RCC::T::APB1ENR1_LPTIM1EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR1 |= RCC::T::APB1SMENR1_LPTIM1SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_LPTIM1SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR1 |= RCC::T::APB1RSTR1_LPTIM1RST;
    }
};

template<> struct lptim_traits<2>
{
    using lptim = lptim2_t;
    static constexpr signal_t ETR = LPTIM2_ETR;
    static constexpr signal_t IN1 = LPTIM2_IN1;
    static constexpr signal_t OUT = LPTIM2_OUT;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR2 |= RCC::T::APB1ENR2_LPTIM2EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR2 &= ~RCC::T::APB1ENR2_LPTIM2EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR2 |= RCC::T::APB1SMENR2_LPTIM2SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_LPTIM2SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR2 |= RCC::T::APB1RSTR2_LPTIM2RST;
    }
};

template<> struct lptim_traits<3>
{
    using lptim = lptim3_t;
    static constexpr signal_t ETR = LPTIM3_ETR;
    static constexpr signal_t IN1 = LPTIM3_IN1;
    static constexpr signal_t OUT = LPTIM3_OUT;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR2 |= RCC::T::APB1ENR2_LPTIM3EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR2 &= ~RCC::T::APB1ENR2_LPTIM3EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR2 |= RCC::T::APB1SMENR2_LPTIM3SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_LPTIM3SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR2 |= RCC::T::APB1RSTR2_LPTIM3RST;
    }
};
