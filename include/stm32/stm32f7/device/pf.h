#pragma once

////
//
//      STM32F7 PF peripherals
//
////

////
//
//      Processor features
//
////

struct stm32f722_pf_t
{
    volatile uint32_t CLIDR;  // [read-only] Cache Level ID register
    volatile uint32_t CTR;    // [read-only] Cache Type register
    volatile uint32_t CCSIDR; // [read-only] Cache Size ID register

    static constexpr uint32_t CLIDR_RESET_VALUE = 0x9000003;
    template<uint32_t X>
    static constexpr uint32_t CLIDR_CL1 =     // CL1
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CLIDR_CL2 =     // CL2
        bit_field_t<3, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CLIDR_CL3 =     // CL3
        bit_field_t<6, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CLIDR_CL4 =     // CL4
        bit_field_t<9, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CLIDR_CL5 =     // CL5
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CLIDR_CL6 =     // CL6
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CLIDR_CL7 =     // CL7
        bit_field_t<18, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CLIDR_LoUIS =   // LoUIS
        bit_field_t<21, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CLIDR_LoC =     // LoC
        bit_field_t<24, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CLIDR_LoU =     // LoU
        bit_field_t<27, 0x7>::value<X>();

    static constexpr uint32_t CTR_RESET_VALUE = 0x8303c003;
    template<uint32_t X>
    static constexpr uint32_t CTR__IminLine =   // IminLine
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CTR_DMinLine =    // DMinLine
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CTR_ERG =         // ERG
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CTR_CWG =         // CWG
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CTR_Format =      // Format
        bit_field_t<29, 0x7>::value<X>();

    static constexpr uint32_t CCSIDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCSIDR_LineSize =        // LineSize
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCSIDR_Associativity =   // Associativity
        bit_field_t<3, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCSIDR_NumSets =         // NumSets
        bit_field_t<13, 0x7fff>::value<X>();
    static constexpr uint32_t CCSIDR_WA = 0x10000000;  // WA
    static constexpr uint32_t CCSIDR_RA = 0x20000000;  // RA
    static constexpr uint32_t CCSIDR_WB = 0x40000000;  // WB
    static constexpr uint32_t CCSIDR_WT = 0x80000000;  // WT
};


template<>
struct peripheral_t<STM32F722, PF>
{
    typedef stm32f722_pf_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, PF>
{
    typedef stm32f722_pf_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, PF>
{
    typedef stm32f722_pf_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, PF>
{
    typedef stm32f722_pf_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, PF>
{
    typedef stm32f722_pf_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, PF>
{
    typedef stm32f722_pf_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, PF>
{
    typedef stm32f722_pf_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, PF>
{
    typedef stm32f722_pf_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, PF>
{
    typedef stm32f722_pf_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, PF>
{
    typedef stm32f722_pf_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, PF>
{
    typedef stm32f722_pf_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, PF>
{
    typedef stm32f722_pf_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, PF>
{
    typedef stm32f722_pf_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, PF>
{
    typedef stm32f722_pf_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, PF>
{
    typedef stm32f722_pf_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, PF>
{
    typedef stm32f722_pf_t T;
    static T& V;
};

using pf_t = peripheral_t<mcu_svd, PF>;

