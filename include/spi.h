#pragma once

#include <device/spi.h>

enum spi_mode_t
    { mode_0    // CPOL=0, CPHA=0
    , mode_1    // CPOL=0, CPHA=1
    , mode_2    // CPOL=1, CPHA=0
    , mode_3    // CPOL=1, CPHA=1
    };

enum spi_order_t { msb_first, lsb_first };

enum spi_clock_divider_t
    { fpclk_2
    , fpclk_4
    , fpclk_8
    , fpclk_16
    , fpclk_32
    , fpclk_64
    , fpclk_128
    , fpclk_256
    };

template<typename _, spi_mode_t>
struct spi_mode_traits {};

template<typename _>
struct spi_mode_traits<_, mode_0>
{
    static constexpr uint32_t value = 0;
};

template<typename _>
struct spi_mode_traits<_, mode_1>
{
    static constexpr uint32_t value = _::CR1_CPHA;
};

template<typename _>
struct spi_mode_traits<_, mode_2>
{
    static constexpr uint32_t value = _::CR1_CPOL;
};

template<typename _>
struct spi_mode_traits<_, mode_3>
{
    static constexpr uint32_t value = _::CR1_CPHA | _::CR1_CPOL;
};

template<typename _, spi_order_t>
struct spi_order_traits {};

template<typename _>
struct spi_order_traits<_, msb_first>
{
    static constexpr uint32_t value = 0;
};

template<typename _>
struct spi_order_traits<_, lsb_first>
{
    static constexpr uint32_t value = _::CR1_LSBFIRST;
};

template<int INST, pin_t SCK, pin_t MOSI, pin_t MISO = NO_PIN>
struct spi_t
{
public:
    template
        < spi_mode_t            mode    = mode_0
        , spi_order_t           order   = msb_first
        , spi_clock_divider_t   divider = fpclk_256
        , output_speed_t        speed   = low_speed
        >
    static inline void setup()
    {
        typename spi::T& SPI = spi::V;

        alternate_t<SCK, traits::SCK>::template setup<push_pull, speed>();
        alternate_t<MOSI, traits::MOSI>::template setup<push_pull, speed>();
        alternate_t<MISO, traits::MISO>::template setup<floating>();

        spi_traits<INST>::template enable<rcc_t>(); // enable clock

        SPI.CR1 = _::CR1_RESET_VALUE                // reset register
                | _::CR1_MSTR                       // master mode
                | _::CR1_BR::W(divider)             // clock divider
                | spi_mode_traits<_, mode>::value   // polarity & phase
                | spi_order_traits<_, order>::value // bit-order
                ;
        SPI.CR2 = _::CR2_RESET_VALUE                // reset register
                | _::CR2_SSOE                       // enable ss output
                | _::CR2_FRXTH                      // reception threshold
                ;
        SPI.CR1 |= _::CR1_SPE;                      // enable spi
    }

    __attribute__((always_inline))
    static inline void write8(uint8_t x)
    {
        while (!(spi::V.SR & _::SR_TXE));        // wait until tx buffer is empty
        *reinterpret_cast<volatile uint8_t*>(&spi::V.DR) = x;
    }

    __attribute__((always_inline))
    static inline void write16(uint16_t x)
    {
        while (!(spi::V.SR & _::SR_TXE));        // wait until tx buffer is empty
        spi::V.DR = x;
    }

    __attribute__((always_inline))
    static inline bool busy()
    {
        return spi::V.SR & _::SR_BSY;
    }

    __attribute__((always_inline))
    static inline void wait_idle()
    {
        while ((spi::V.SR & (_::SR_BSY | _::SR_TXE)) != _::SR_TXE);
    }

    __attribute__((always_inline))
    static inline uint32_t read()
    {
        while (!(spi::V.SR & _::SR_RXNE));  // wait until rx buffer is not empty
        return spi::V.DR;
    }

    __attribute__((always_inline))
    static inline void w8(uint8_t x)
    {
        write8(x);      // send data
        read();         // discard frame
    }

    __attribute__((always_inline))
    static inline uint32_t r8()
    {
        write8(0);      // run clock
        return read();  // received data
    }

    __attribute__((always_inline))
    static inline uint32_t w8r8(uint8_t x)
    {
        w8(x);
        return r8();
    }

    /*
    enum interrupt_t
        { err_interrupt = _::CR2_ERRIE
        , rx_interrupt = _::CR2_RXNEIE
        , tx_interrupt = _::CR2_TXEIE
        };

    static inline void interrupt_enable(uint32_t flags)
    {
        static const uint32_t mask = err_interrupt | rx_interrupt | tx_interrupt;

        spi::V.CR2 &= ~mask;
        spi::V.CR2 |= flags & mask;
    }
    */

private:
    using traits = spi_traits<INST>;
    using spi = typename traits::spi;
    using _ = typename spi::T;
};

