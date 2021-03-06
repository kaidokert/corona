#pragma once

////
//
//      STM32F1 GPIO peripherals
//
///

// GPIOA: General purpose I/O

struct stm32f100_gpioa_t
{
    volatile uint32_t CRL; // Port configuration register low (GPIOn_CRL)
    volatile uint32_t CRH; // Port configuration register high (GPIOn_CRL)
    volatile uint32_t IDR; // Port input data register (GPIOn_IDR)
    volatile uint32_t ODR; // Port output data register (GPIOn_ODR)
    volatile uint32_t BSRR; // Port bit set/reset register (GPIOn_BSRR)
    volatile uint32_t BRR; // Port bit reset register (GPIOn_BRR)
    volatile uint32_t LCKR; // Port configuration lock register

    static constexpr uint32_t CRL_RESET_VALUE = 0x44444444; // Reset value
    typedef bit_field_t<0, 0x3> CRL_MODE0; // Port n.0 mode bits
    typedef bit_field_t<2, 0x3> CRL_CNF0; // Port n.0 configuration bits
    typedef bit_field_t<4, 0x3> CRL_MODE1; // Port n.1 mode bits
    typedef bit_field_t<6, 0x3> CRL_CNF1; // Port n.1 configuration bits
    typedef bit_field_t<8, 0x3> CRL_MODE2; // Port n.2 mode bits
    typedef bit_field_t<10, 0x3> CRL_CNF2; // Port n.2 configuration bits
    typedef bit_field_t<12, 0x3> CRL_MODE3; // Port n.3 mode bits
    typedef bit_field_t<14, 0x3> CRL_CNF3; // Port n.3 configuration bits
    typedef bit_field_t<16, 0x3> CRL_MODE4; // Port n.4 mode bits
    typedef bit_field_t<18, 0x3> CRL_CNF4; // Port n.4 configuration bits
    typedef bit_field_t<20, 0x3> CRL_MODE5; // Port n.5 mode bits
    typedef bit_field_t<22, 0x3> CRL_CNF5; // Port n.5 configuration bits
    typedef bit_field_t<24, 0x3> CRL_MODE6; // Port n.6 mode bits
    typedef bit_field_t<26, 0x3> CRL_CNF6; // Port n.6 configuration bits
    typedef bit_field_t<28, 0x3> CRL_MODE7; // Port n.7 mode bits
    typedef bit_field_t<30, 0x3> CRL_CNF7; // Port n.7 configuration bits

    static constexpr uint32_t CRH_RESET_VALUE = 0x44444444; // Reset value
    typedef bit_field_t<0, 0x3> CRH_MODE8; // Port n.8 mode bits
    typedef bit_field_t<2, 0x3> CRH_CNF8; // Port n.8 configuration bits
    typedef bit_field_t<4, 0x3> CRH_MODE9; // Port n.9 mode bits
    typedef bit_field_t<6, 0x3> CRH_CNF9; // Port n.9 configuration bits
    typedef bit_field_t<8, 0x3> CRH_MODE10; // Port n.10 mode bits
    typedef bit_field_t<10, 0x3> CRH_CNF10; // Port n.10 configuration bits
    typedef bit_field_t<12, 0x3> CRH_MODE11; // Port n.11 mode bits
    typedef bit_field_t<14, 0x3> CRH_CNF11; // Port n.11 configuration bits
    typedef bit_field_t<16, 0x3> CRH_MODE12; // Port n.12 mode bits
    typedef bit_field_t<18, 0x3> CRH_CNF12; // Port n.12 configuration bits
    typedef bit_field_t<20, 0x3> CRH_MODE13; // Port n.13 mode bits
    typedef bit_field_t<22, 0x3> CRH_CNF13; // Port n.13 configuration bits
    typedef bit_field_t<24, 0x3> CRH_MODE14; // Port n.14 mode bits
    typedef bit_field_t<26, 0x3> CRH_CNF14; // Port n.14 configuration bits
    typedef bit_field_t<28, 0x3> CRH_MODE15; // Port n.15 mode bits
    typedef bit_field_t<30, 0x3> CRH_CNF15; // Port n.15 configuration bits

    static constexpr uint32_t IDR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IDR_IDR0 = 0x1; // Port input data
    static constexpr uint32_t IDR_IDR1 = 0x2; // Port input data
    static constexpr uint32_t IDR_IDR2 = 0x4; // Port input data
    static constexpr uint32_t IDR_IDR3 = 0x8; // Port input data
    static constexpr uint32_t IDR_IDR4 = 0x10; // Port input data
    static constexpr uint32_t IDR_IDR5 = 0x20; // Port input data
    static constexpr uint32_t IDR_IDR6 = 0x40; // Port input data
    static constexpr uint32_t IDR_IDR7 = 0x80; // Port input data
    static constexpr uint32_t IDR_IDR8 = 0x100; // Port input data
    static constexpr uint32_t IDR_IDR9 = 0x200; // Port input data
    static constexpr uint32_t IDR_IDR10 = 0x400; // Port input data
    static constexpr uint32_t IDR_IDR11 = 0x800; // Port input data
    static constexpr uint32_t IDR_IDR12 = 0x1000; // Port input data
    static constexpr uint32_t IDR_IDR13 = 0x2000; // Port input data
    static constexpr uint32_t IDR_IDR14 = 0x4000; // Port input data
    static constexpr uint32_t IDR_IDR15 = 0x8000; // Port input data

    static constexpr uint32_t ODR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ODR_ODR0 = 0x1; // Port output data
    static constexpr uint32_t ODR_ODR1 = 0x2; // Port output data
    static constexpr uint32_t ODR_ODR2 = 0x4; // Port output data
    static constexpr uint32_t ODR_ODR3 = 0x8; // Port output data
    static constexpr uint32_t ODR_ODR4 = 0x10; // Port output data
    static constexpr uint32_t ODR_ODR5 = 0x20; // Port output data
    static constexpr uint32_t ODR_ODR6 = 0x40; // Port output data
    static constexpr uint32_t ODR_ODR7 = 0x80; // Port output data
    static constexpr uint32_t ODR_ODR8 = 0x100; // Port output data
    static constexpr uint32_t ODR_ODR9 = 0x200; // Port output data
    static constexpr uint32_t ODR_ODR10 = 0x400; // Port output data
    static constexpr uint32_t ODR_ODR11 = 0x800; // Port output data
    static constexpr uint32_t ODR_ODR12 = 0x1000; // Port output data
    static constexpr uint32_t ODR_ODR13 = 0x2000; // Port output data
    static constexpr uint32_t ODR_ODR14 = 0x4000; // Port output data
    static constexpr uint32_t ODR_ODR15 = 0x8000; // Port output data

    static constexpr uint32_t BSRR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BSRR_BS0 = 0x1; // Set bit 0
    static constexpr uint32_t BSRR_BS1 = 0x2; // Set bit 1
    static constexpr uint32_t BSRR_BS2 = 0x4; // Set bit 1
    static constexpr uint32_t BSRR_BS3 = 0x8; // Set bit 3
    static constexpr uint32_t BSRR_BS4 = 0x10; // Set bit 4
    static constexpr uint32_t BSRR_BS5 = 0x20; // Set bit 5
    static constexpr uint32_t BSRR_BS6 = 0x40; // Set bit 6
    static constexpr uint32_t BSRR_BS7 = 0x80; // Set bit 7
    static constexpr uint32_t BSRR_BS8 = 0x100; // Set bit 8
    static constexpr uint32_t BSRR_BS9 = 0x200; // Set bit 9
    static constexpr uint32_t BSRR_BS10 = 0x400; // Set bit 10
    static constexpr uint32_t BSRR_BS11 = 0x800; // Set bit 11
    static constexpr uint32_t BSRR_BS12 = 0x1000; // Set bit 12
    static constexpr uint32_t BSRR_BS13 = 0x2000; // Set bit 13
    static constexpr uint32_t BSRR_BS14 = 0x4000; // Set bit 14
    static constexpr uint32_t BSRR_BS15 = 0x8000; // Set bit 15
    static constexpr uint32_t BSRR_BR0 = 0x10000; // Reset bit 0
    static constexpr uint32_t BSRR_BR1 = 0x20000; // Reset bit 1
    static constexpr uint32_t BSRR_BR2 = 0x40000; // Reset bit 2
    static constexpr uint32_t BSRR_BR3 = 0x80000; // Reset bit 3
    static constexpr uint32_t BSRR_BR4 = 0x100000; // Reset bit 4
    static constexpr uint32_t BSRR_BR5 = 0x200000; // Reset bit 5
    static constexpr uint32_t BSRR_BR6 = 0x400000; // Reset bit 6
    static constexpr uint32_t BSRR_BR7 = 0x800000; // Reset bit 7
    static constexpr uint32_t BSRR_BR8 = 0x1000000; // Reset bit 8
    static constexpr uint32_t BSRR_BR9 = 0x2000000; // Reset bit 9
    static constexpr uint32_t BSRR_BR10 = 0x4000000; // Reset bit 10
    static constexpr uint32_t BSRR_BR11 = 0x8000000; // Reset bit 11
    static constexpr uint32_t BSRR_BR12 = 0x10000000; // Reset bit 12
    static constexpr uint32_t BSRR_BR13 = 0x20000000; // Reset bit 13
    static constexpr uint32_t BSRR_BR14 = 0x40000000; // Reset bit 14
    static constexpr uint32_t BSRR_BR15 = 0x80000000; // Reset bit 15

    static constexpr uint32_t BRR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BRR_BR0 = 0x1; // Reset bit 0
    static constexpr uint32_t BRR_BR1 = 0x2; // Reset bit 1
    static constexpr uint32_t BRR_BR2 = 0x4; // Reset bit 1
    static constexpr uint32_t BRR_BR3 = 0x8; // Reset bit 3
    static constexpr uint32_t BRR_BR4 = 0x10; // Reset bit 4
    static constexpr uint32_t BRR_BR5 = 0x20; // Reset bit 5
    static constexpr uint32_t BRR_BR6 = 0x40; // Reset bit 6
    static constexpr uint32_t BRR_BR7 = 0x80; // Reset bit 7
    static constexpr uint32_t BRR_BR8 = 0x100; // Reset bit 8
    static constexpr uint32_t BRR_BR9 = 0x200; // Reset bit 9
    static constexpr uint32_t BRR_BR10 = 0x400; // Reset bit 10
    static constexpr uint32_t BRR_BR11 = 0x800; // Reset bit 11
    static constexpr uint32_t BRR_BR12 = 0x1000; // Reset bit 12
    static constexpr uint32_t BRR_BR13 = 0x2000; // Reset bit 13
    static constexpr uint32_t BRR_BR14 = 0x4000; // Reset bit 14
    static constexpr uint32_t BRR_BR15 = 0x8000; // Reset bit 15

    static constexpr uint32_t LCKR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t LCKR_LCK0 = 0x1; // Port A Lock bit 0
    static constexpr uint32_t LCKR_LCK1 = 0x2; // Port A Lock bit 1
    static constexpr uint32_t LCKR_LCK2 = 0x4; // Port A Lock bit 2
    static constexpr uint32_t LCKR_LCK3 = 0x8; // Port A Lock bit 3
    static constexpr uint32_t LCKR_LCK4 = 0x10; // Port A Lock bit 4
    static constexpr uint32_t LCKR_LCK5 = 0x20; // Port A Lock bit 5
    static constexpr uint32_t LCKR_LCK6 = 0x40; // Port A Lock bit 6
    static constexpr uint32_t LCKR_LCK7 = 0x80; // Port A Lock bit 7
    static constexpr uint32_t LCKR_LCK8 = 0x100; // Port A Lock bit 8
    static constexpr uint32_t LCKR_LCK9 = 0x200; // Port A Lock bit 9
    static constexpr uint32_t LCKR_LCK10 = 0x400; // Port A Lock bit 10
    static constexpr uint32_t LCKR_LCK11 = 0x800; // Port A Lock bit 11
    static constexpr uint32_t LCKR_LCK12 = 0x1000; // Port A Lock bit 12
    static constexpr uint32_t LCKR_LCK13 = 0x2000; // Port A Lock bit 13
    static constexpr uint32_t LCKR_LCK14 = 0x4000; // Port A Lock bit 14
    static constexpr uint32_t LCKR_LCK15 = 0x8000; // Port A Lock bit 15
    static constexpr uint32_t LCKR_LCKK = 0x10000; // Lock key
};

template<>
struct peripheral_t<STM32F100, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32f100_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F100, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32f100_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F100, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32f100_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F100, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32f100_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F100, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32f100_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F100, GPIOF>
{
    static constexpr periph_t P = GPIOF;
    using T = stm32f100_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F100, GPIOG>
{
    static constexpr periph_t P = GPIOG;
    using T = stm32f100_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F101, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32f100_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F101, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32f100_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F101, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32f100_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F101, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32f100_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F101, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32f100_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F101, GPIOF>
{
    static constexpr periph_t P = GPIOF;
    using T = stm32f100_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F101, GPIOG>
{
    static constexpr periph_t P = GPIOG;
    using T = stm32f100_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F102, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32f100_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F102, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32f100_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F102, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32f100_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F102, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32f100_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F102, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32f100_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F102, GPIOF>
{
    static constexpr periph_t P = GPIOF;
    using T = stm32f100_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F102, GPIOG>
{
    static constexpr periph_t P = GPIOG;
    using T = stm32f100_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F103, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32f100_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F103, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32f100_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F103, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32f100_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F103, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32f100_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F103, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32f100_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F103, GPIOF>
{
    static constexpr periph_t P = GPIOF;
    using T = stm32f100_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F103, GPIOG>
{
    static constexpr periph_t P = GPIOG;
    using T = stm32f100_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F107, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32f100_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F107, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32f100_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F107, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32f100_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F107, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32f100_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F107, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32f100_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F107, GPIOF>
{
    static constexpr periph_t P = GPIOF;
    using T = stm32f100_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F107, GPIOG>
{
    static constexpr periph_t P = GPIOG;
    using T = stm32f100_gpioa_t;
    static T& V;
};

using gpioa_t = peripheral_t<svd, GPIOA>;
using gpiob_t = peripheral_t<svd, GPIOB>;
using gpioc_t = peripheral_t<svd, GPIOC>;
using gpiod_t = peripheral_t<svd, GPIOD>;
using gpioe_t = peripheral_t<svd, GPIOE>;
using gpiof_t = peripheral_t<svd, GPIOF>;
using gpiog_t = peripheral_t<svd, GPIOG>;

template<int INST> struct gpio_traits {};

template<> struct gpio_traits<0>
{
    using gpio = gpioa_t;
    static constexpr clock_source_t CLOCK = APB2_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_IOPAEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_IOPAEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_IOPARST;
    }
};

template<> struct gpio_traits<1>
{
    using gpio = gpiob_t;
    static constexpr clock_source_t CLOCK = APB2_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_IOPBEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_IOPBEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_IOPBRST;
    }
};

template<> struct gpio_traits<2>
{
    using gpio = gpioc_t;
    static constexpr clock_source_t CLOCK = APB2_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_IOPCEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_IOPCEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_IOPCRST;
    }
};

template<> struct gpio_traits<3>
{
    using gpio = gpiod_t;
    static constexpr clock_source_t CLOCK = APB2_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_IOPDEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_IOPDEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_IOPDRST;
    }
};

template<> struct gpio_traits<4>
{
    using gpio = gpioe_t;
    static constexpr clock_source_t CLOCK = APB2_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_IOPEEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_IOPEEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_IOPERST;
    }
};

template<> struct gpio_traits<5>
{
    using gpio = gpiof_t;
    static constexpr clock_source_t CLOCK = APB2_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_IOPFEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_IOPFEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_IOPFRST;
    }
};

template<> struct gpio_traits<6>
{
    using gpio = gpiog_t;
    static constexpr clock_source_t CLOCK = APB2_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_IOPGEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_IOPGEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_IOPGRST;
    }
};
