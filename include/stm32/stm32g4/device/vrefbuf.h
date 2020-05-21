#pragma once

////
//
//      STM32G4 VREFBUF peripherals
//
////

////
//
//      Voltage reference buffer
//
////

struct stm32g431xx_vrefbuf_t
{
    volatile uint32_t VREFBUF_CSR; // VREF_BUF Control and Status Register
    volatile uint32_t VREFBUF_CCR; // [read-write] VREF_BUF Calibration Control Register

    static constexpr uint32_t VREFBUF_CSR_RESET_VALUE = 0x2;
    static constexpr uint32_t VREFBUF_CSR_ENVR = 0x1; // Enable Voltage Reference
    static constexpr uint32_t VREFBUF_CSR_HIZ = 0x2;  // High impedence mode for the VREF_BUF
    static constexpr uint32_t VREFBUF_CSR_VRR = 0x8;  // Voltage reference buffer ready
    template<uint32_t X>
    static constexpr uint32_t VREFBUF_CSR_VRS =       // Voltage reference scale
        bit_field_t<4, 0x3>::value<X>();

    static constexpr uint32_t VREFBUF_CCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t VREFBUF_CCR_TRIM =   // Trimming code
        bit_field_t<0, 0x3f>::value<X>();
};


template<>
struct peripheral_t<STM32G431xx, VREFBUF>
{
    typedef stm32g431xx_vrefbuf_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, VREFBUF>
{
    typedef stm32g431xx_vrefbuf_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, VREFBUF>
{
    typedef stm32g431xx_vrefbuf_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, VREFBUF>
{
    typedef stm32g431xx_vrefbuf_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, VREFBUF>
{
    typedef stm32g431xx_vrefbuf_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, VREFBUF>
{
    typedef stm32g431xx_vrefbuf_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, VREFBUF>
{
    typedef stm32g431xx_vrefbuf_t T;
    static T& V;
};

using vrefbuf_t = peripheral_t<mcu_svd, VREFBUF>;

