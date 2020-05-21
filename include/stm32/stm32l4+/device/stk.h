#pragma once

////
//
//      STM32L4+ STK peripherals
//
////

////
//
//      SysTick timer
//
////

struct stm32l4p5_stk_t
{
    volatile uint32_t CTRL;  // [read-write] SysTick control and status register
    volatile uint32_t LOAD;  // [read-write] SysTick reload value register
    volatile uint32_t VAL;   // [read-write] SysTick current value register
    volatile uint32_t CALIB; // [read-write] SysTick calibration value register

    static constexpr uint32_t CTRL_RESET_VALUE = 0x0;
    static constexpr uint32_t CTRL_ENABLE = 0x1;        // Counter enable
    static constexpr uint32_t CTRL_TICKINT = 0x2;       // SysTick exception request enable
    static constexpr uint32_t CTRL_CLKSOURCE = 0x4;     // Clock source selection
    static constexpr uint32_t CTRL_COUNTFLAG = 0x10000; // COUNTFLAG

    static constexpr uint32_t LOAD_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LOAD_RELOAD =   // RELOAD value
        bit_field_t<0, 0xffffff>::value<X>();

    static constexpr uint32_t VAL_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t VAL_CURRENT =   // Current counter value
        bit_field_t<0, 0xffffff>::value<X>();

    static constexpr uint32_t CALIB_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CALIB_TENMS =             // Calibration value
        bit_field_t<0, 0xffffff>::value<X>();
    static constexpr uint32_t CALIB_SKEW = 0x40000000;  // SKEW flag: Indicates whether the TENMS value is exact
    static constexpr uint32_t CALIB_NOREF = 0x80000000; // NOREF flag. Reads as zero
};


template<>
struct peripheral_t<STM32L4P5, STK>
{
    typedef stm32l4p5_stk_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4Q5, STK>
{
    typedef stm32l4p5_stk_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R5, STK>
{
    typedef stm32l4p5_stk_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R7, STK>
{
    typedef stm32l4p5_stk_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R9, STK>
{
    typedef stm32l4p5_stk_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S5, STK>
{
    typedef stm32l4p5_stk_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S7, STK>
{
    typedef stm32l4p5_stk_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S9, STK>
{
    typedef stm32l4p5_stk_t T;
    static T& V;
};

using stk_t = peripheral_t<mcu_svd, STK>;

