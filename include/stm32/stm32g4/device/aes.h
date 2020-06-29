#pragma once

////
//
//      STM32G4 AES peripherals
//
///

// AES: Advanced encryption standard hardware accelerator

struct stm32g431xx_aes_t
{
    volatile uint32_t CR; // control register
    volatile uint32_t SR; // status register
    volatile uint32_t DINR; // data input register
    volatile uint32_t DOUTR; // data output register
    volatile uint32_t KEYR0; // key register 0
    volatile uint32_t KEYR1; // key register 1
    volatile uint32_t KEYR2; // key register 2
    volatile uint32_t KEYR3; // key register 3
    volatile uint32_t IVR0; // initialization vector register 0
    volatile uint32_t IVR1; // initialization vector register 1
    volatile uint32_t IVR2; // initialization vector register 2
    volatile uint32_t IVR3; // initialization vector register 3
    volatile uint32_t KEYR4; // key register 4
    volatile uint32_t KEYR5; // key register 5
    volatile uint32_t KEYR6; // key register 6
    volatile uint32_t KEYR7; // key register 7
    volatile uint32_t SUSP0R; // suspend registers
    volatile uint32_t SUSP1R; // suspend registers
    volatile uint32_t SUSP2R; // suspend registers
    volatile uint32_t SUSP3R; // suspend registers
    volatile uint32_t SUSP4R; // suspend registers
    volatile uint32_t SUSP5R; // suspend registers
    volatile uint32_t SUSP6R; // suspend registers
    volatile uint32_t SUSP7R; // suspend registers

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<20, 0xf> CR_NPBLB; // NPBLB
    static constexpr uint32_t CR_KEYSIZE = 0x40000; // KEYSIZE
    static constexpr uint32_t CR_CHMOD_2 = 0x10000; // CHMOD_2
    typedef bit_field_t<13, 0x3> CR_GCMPH; // GCMPH
    static constexpr uint32_t CR_DMAOUTEN = 0x1000; // Enable DMA management of data output phase
    static constexpr uint32_t CR_DMAINEN = 0x800; // Enable DMA management of data input phase
    static constexpr uint32_t CR_ERRIE = 0x400; // Error interrupt enable
    static constexpr uint32_t CR_CCFIE = 0x200; // CCF flag interrupt enable
    static constexpr uint32_t CR_ERRC = 0x100; // Error clear
    static constexpr uint32_t CR_CCFC = 0x80; // Computation Complete Flag Clear
    typedef bit_field_t<5, 0x3> CR_CHMOD; // AES chaining mode
    typedef bit_field_t<3, 0x3> CR_MODE; // AES operating mode
    typedef bit_field_t<1, 0x3> CR_DATATYPE; // Data type selection (for data in and data out to/from the cryptographic block)
    static constexpr uint32_t CR_EN = 0x1; // AES enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_BUSY = 0x8; // BUSY
    static constexpr uint32_t SR_WRERR = 0x4; // Write error flag
    static constexpr uint32_t SR_RDERR = 0x2; // Read error flag
    static constexpr uint32_t SR_CCF = 0x1; // Computation complete flag

    static constexpr uint32_t DINR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DINR_AES_DINR; // Data Input Register

    static constexpr uint32_t DOUTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DOUTR_AES_DOUTR; // Data output register

    static constexpr uint32_t KEYR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR0_AES_KEYR0; // Data Output Register (LSB key [31:0])

    static constexpr uint32_t KEYR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR1_AES_KEYR1; // AES key register (key [63:32])

    static constexpr uint32_t KEYR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR2_AES_KEYR2; // AES key register (key [95:64])

    static constexpr uint32_t KEYR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR3_AES_KEYR3; // AES key register (MSB key [127:96])

    static constexpr uint32_t IVR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IVR0_AES_IVR0; // initialization vector register (LSB IVR [31:0])

    static constexpr uint32_t IVR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IVR1_AES_IVR1; // Initialization Vector Register (IVR [63:32])

    static constexpr uint32_t IVR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IVR2_AES_IVR2; // Initialization Vector Register (IVR [95:64])

    static constexpr uint32_t IVR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IVR3_AES_IVR3; // Initialization Vector Register (MSB IVR [127:96])

    static constexpr uint32_t KEYR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR4_KEY; // AES key

    static constexpr uint32_t KEYR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR5_KEY; // AES key

    static constexpr uint32_t KEYR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR6_KEY; // AES key

    static constexpr uint32_t KEYR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR7_KEY; // AES key

    static constexpr uint32_t SUSP0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP0R_SUSP; // AES suspend

    static constexpr uint32_t SUSP1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP1R_SUSP; // AES suspend

    static constexpr uint32_t SUSP2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP2R_SUSP; // AES suspend

    static constexpr uint32_t SUSP3R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP3R_SUSP; // AES suspend

    static constexpr uint32_t SUSP4R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP4R_SUSP; // AES suspend

    static constexpr uint32_t SUSP5R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP5R_SUSP; // AES suspend

    static constexpr uint32_t SUSP6R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP6R_SUSP; // AES suspend

    static constexpr uint32_t SUSP7R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP7R_SUSP; // AES suspend
};

template<>
struct peripheral_t<STM32G431xx, AES>
{
    using T = stm32g431xx_aes_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, AES>
{
    using T = stm32g431xx_aes_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, AES>
{
    using T = stm32g431xx_aes_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, AES>
{
    using T = stm32g431xx_aes_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, AES>
{
    using T = stm32g431xx_aes_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, AES>
{
    using T = stm32g431xx_aes_t;
    static T& V;
};

template<>
struct peripheral_t<STM32GBK1CBT6, AES>
{
    using T = stm32g431xx_aes_t;
    static T& V;
};

using aes_t = peripheral_t<svd, AES>;

template<int INST> struct aes_traits {};

template<> struct aes_traits<0>
{
    using aes = aes_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB2ENR |= RCC::T::AHB2ENR_AESEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB2ENR &= ~RCC::T::AHB2ENR_AESEN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.AHB2SMENR |= RCC::T::AHB2SMENR_AESSMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_AESSMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB2RSTR |= RCC::T::AHB2RSTR_AESRST;
    }
};
