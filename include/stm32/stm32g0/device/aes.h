#pragma once

////
//
//      STM32G0 AES peripherals
//
///

// AES: Advanced encryption standard hardware accelerator 1

struct stm32g041_aes_t
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
    volatile uint32_t SUSP0R; // AES suspend register 0
    volatile uint32_t SUSP1R; // AES suspend register 1
    volatile uint32_t SUSP2R; // AES suspend register 2
    volatile uint32_t SUSP3R; // AES suspend register 3
    volatile uint32_t SUSP4R; // AES suspend register 4
    volatile uint32_t SUSP5R; // AES suspend register 5
    volatile uint32_t SUSP6R; // AES suspend register 6
    volatile uint32_t SUSP7R; // AES suspend register 7

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<20, 0xf> CR_NPBLB; // Number of padding bytes in last block of payload
    static constexpr uint32_t CR_KEYSIZE = 0x40000; // Key size selection
    static constexpr uint32_t CR_CHMOD2 = 0x10000; // AES chaining mode Bit2
    typedef bit_field_t<13, 0x3> CR_GCMPH; // Used only for GCM, CCM and GMAC algorithms and has no effect when other algorithms are selected
    static constexpr uint32_t CR_DMAOUTEN = 0x1000; // Enable DMA management of data output phase
    static constexpr uint32_t CR_DMAINEN = 0x800; // Enable DMA management of data input phase
    static constexpr uint32_t CR_ERRIE = 0x400; // Error interrupt enable
    static constexpr uint32_t CR_CCFIE = 0x200; // CCF flag interrupt enable
    static constexpr uint32_t CR_ERRC = 0x100; // Error clear
    static constexpr uint32_t CR_CCFC = 0x80; // Computation Complete Flag Clear
    typedef bit_field_t<5, 0x3> CR_CHMOD10; // AES chaining mode Bit1 Bit0
    typedef bit_field_t<3, 0x3> CR_MODE; // AES operating mode
    typedef bit_field_t<1, 0x3> CR_DATATYPE; // Data type selection (for data in and data out to/from the cryptographic block)
    static constexpr uint32_t CR_EN = 0x1; // AES enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_BUSY = 0x8; // Busy flag
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
    typedef bit_field_t<0, 0xffffffff> KEYR4_AES_KEYR4; // AES key register (MSB key [159:128])

    static constexpr uint32_t KEYR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR5_AES_KEYR5; // AES key register (MSB key [191:160])

    static constexpr uint32_t KEYR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR6_AES_KEYR6; // AES key register (MSB key [223:192])

    static constexpr uint32_t KEYR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR7_AES_KEYR7; // AES key register (MSB key [255:224])

    static constexpr uint32_t SUSP0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP0R_AES_SUSP0R; // AES suspend register 0

    static constexpr uint32_t SUSP1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP1R_AES_SUSP1R; // AES suspend register 1

    static constexpr uint32_t SUSP2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP2R_AES_SUSP2R; // AES suspend register 2

    static constexpr uint32_t SUSP3R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP3R_AES_SUSP3R; // AES suspend register 3

    static constexpr uint32_t SUSP4R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP4R_AES_SUSP4R; // AES suspend register 4

    static constexpr uint32_t SUSP5R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP5R_AES_SUSP5R; // AES suspend register 5

    static constexpr uint32_t SUSP6R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP6R_AES_SUSP6R; // AES suspend register 6

    static constexpr uint32_t SUSP7R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP7R_AES_SUSP7R; // AES suspend register 7
};

// AES: Advanced encryption standard hardware accelerator 1

struct stm32g081_aes_t
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
    volatile uint32_t SUSP0R; // AES suspend register 0
    volatile uint32_t SUSP1R; // AES suspend register 1
    volatile uint32_t SUSP2R; // AES suspend register 2
    volatile uint32_t SUSP3R; // AES suspend register 3
    volatile uint32_t SUSP4R; // AES suspend register 4
    volatile uint32_t SUSP5R; // AES suspend register 5
    volatile uint32_t SUSP6R; // AES suspend register 6
    volatile uint32_t SUSP7R; // AES suspend register 7
    reserved_t<0xe4> _0x60;
    volatile uint32_t HWCFR; // AES hardware configuration register
    volatile uint32_t VERR; // AES version register
    volatile uint32_t IPIDR; // AES identification register
    volatile uint32_t SIDR; // AES size ID register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<20, 0xf> CR_NPBLB; // Number of padding bytes in last block of payload
    static constexpr uint32_t CR_KEYSIZE = 0x40000; // Key size selection
    static constexpr uint32_t CR_CHMOD2 = 0x10000; // AES chaining mode Bit2
    typedef bit_field_t<13, 0x3> CR_GCMPH; // Used only for GCM, CCM and GMAC algorithms and has no effect when other algorithms are selected
    static constexpr uint32_t CR_DMAOUTEN = 0x1000; // Enable DMA management of data output phase
    static constexpr uint32_t CR_DMAINEN = 0x800; // Enable DMA management of data input phase
    static constexpr uint32_t CR_ERRIE = 0x400; // Error interrupt enable
    static constexpr uint32_t CR_CCFIE = 0x200; // CCF flag interrupt enable
    static constexpr uint32_t CR_ERRC = 0x100; // Error clear
    static constexpr uint32_t CR_CCFC = 0x80; // Computation Complete Flag Clear
    typedef bit_field_t<5, 0x3> CR_CHMOD10; // AES chaining mode Bit1 Bit0
    typedef bit_field_t<3, 0x3> CR_MODE; // AES operating mode
    typedef bit_field_t<1, 0x3> CR_DATATYPE; // Data type selection (for data in and data out to/from the cryptographic block)
    static constexpr uint32_t CR_EN = 0x1; // AES enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_BUSY = 0x8; // Busy flag
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
    typedef bit_field_t<0, 0xffffffff> KEYR4_AES_KEYR4; // AES key register (MSB key [159:128])

    static constexpr uint32_t KEYR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR5_AES_KEYR5; // AES key register (MSB key [191:160])

    static constexpr uint32_t KEYR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR6_AES_KEYR6; // AES key register (MSB key [223:192])

    static constexpr uint32_t KEYR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR7_AES_KEYR7; // AES key register (MSB key [255:224])

    static constexpr uint32_t SUSP0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP0R_AES_SUSP0R; // AES suspend register 0

    static constexpr uint32_t SUSP1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP1R_AES_SUSP1R; // AES suspend register 1

    static constexpr uint32_t SUSP2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP2R_AES_SUSP2R; // AES suspend register 2

    static constexpr uint32_t SUSP3R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP3R_AES_SUSP3R; // AES suspend register 3

    static constexpr uint32_t SUSP4R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP4R_AES_SUSP4R; // AES suspend register 4

    static constexpr uint32_t SUSP5R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP5R_AES_SUSP5R; // AES suspend register 5

    static constexpr uint32_t SUSP6R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP6R_AES_SUSP6R; // AES suspend register 6

    static constexpr uint32_t SUSP7R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP7R_AES_SUSP7R; // AES suspend register 7


    static constexpr uint32_t HWCFR_RESET_VALUE = 0x2; // Reset value
    typedef bit_field_t<12, 0xf> HWCFR_CFG4; // HW Generic 4
    typedef bit_field_t<8, 0xf> HWCFR_CFG3; // HW Generic 3
    typedef bit_field_t<4, 0xf> HWCFR_CFG2; // HW Generic 2
    typedef bit_field_t<0, 0xf> HWCFR_CFG1; // HW Generic 1

    static constexpr uint32_t VERR_RESET_VALUE = 0x10; // Reset value
    typedef bit_field_t<4, 0xf> VERR_MAJREV; // Major revision
    typedef bit_field_t<0, 0xf> VERR_MINREV; // Minor revision

    static constexpr uint32_t IPIDR_RESET_VALUE = 0x170023; // Reset value
    typedef bit_field_t<0, 0xffffffff> IPIDR_ID; // Identification code

    static constexpr uint32_t SIDR_RESET_VALUE = 0x170023; // Reset value
    typedef bit_field_t<0, 0xffffffff> SIDR_ID; // Size Identification code
};

template<>
struct peripheral_t<STM32G041, AES>
{
    static constexpr periph_t P = AES;
    using T = stm32g041_aes_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, AES>
{
    static constexpr periph_t P = AES;
    using T = stm32g081_aes_t;
    static T& V;
};

using aes_t = peripheral_t<svd, AES>;

template<int INST> struct aes_traits {};

template<> struct aes_traits<0>
{
    using aes = aes_t;
    static constexpr clock_source_t CLOCK = AHB_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHBENR |= RCC::T::AHBENR_AESEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHBENR &= ~RCC::T::AHBENR_AESEN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.AHBSMENR |= RCC::T::AHBSMENR_AESSMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.AHBSMENR &= ~RCC::T::AHBSMENR_AESSMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHBRSTR |= RCC::T::AHBRSTR_AESRST;
    }
};
