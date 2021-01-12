#include "../board.h"
#include <textio.h>
#include <timer.h>
#include <dma.h>

using led = output_t<LED>;
using probe = output_t<PROBE>;
using clk2 = output_t<PB4>;
using dio2 = output_t<PB6>;

using dma = dma_t<1>;
using tim = tim_t<TIMER_NO>;
using clk = output_t<PA1>;
using dio = output_t<PA0>;

static constexpr uint8_t dma_ch = 1;
static constexpr uint32_t bit_rate = 10000;

static constexpr uint32_t CF = clk2::MASK;
static constexpr uint32_t CT = clk2::MASK << 16;

static constexpr uint32_t DF = dio2::MASK;
static constexpr uint32_t DT = dio2::MASK << 16;

class seven_segment_t
{
public:
    static uint8_t encode(char c)
    {
        return s_glyphs[(c > 'Z' ? c - 0x20 : c) - ' '];
    }

private:
    static const uint8_t s_glyphs[];
};

const uint8_t seven_segment_t::s_glyphs[] =
    { 0b0000000 // space
    , 0b0000000 // !
    , 0b0000000 // "
    , 0b0000000 // #
    , 0b0000000 // $
    , 0b0000000 // %
    , 0b0000000 // &
    , 0b0000000 // '
    , 0b0000000 // (
    , 0b0000000 // )
    , 0b0000000 // *
    , 0b0000000 // +
    , 0b0000000 // ,
    , 0b1000000 // -
    , 0b0000000 // .
    , 0b0000000 // /
    , 0b0111111 // 0
    , 0b0000110 // 1
    , 0b1011011 // 2
    , 0b1001111 // 3
    , 0b1100110 // 4
    , 0b1101101 // 5
    , 0b1111101 // 6
    , 0b0000111 // 7
    , 0b1111111 // 8
    , 0b1101111 // 9
    , 0b0000000 // :
    , 0b0000000 // ;
    , 0b0000000 // <
    , 0b0000000 // =
    , 0b0000000 // >
    , 0b0000000 // ?
    , 0b0000000 // @
    , 0b1110111 // A
    , 0b1111100 // B
    , 0b1011000 // C
    , 0b1011110 // D
    , 0b1111001 // E
    , 0b1110001 // F
    , 0b0111101 // G
    , 0b1110100 // H
    , 0b0000100 // I
    , 0b0011110 // J
    , 0b1110101 // K
    , 0b0111000 // L
    , 0b0110111 // M
    , 0b1010100 // N
    , 0b1011100 // O
    , 0b1110011 // P
    , 0b1100111 // Q
    , 0b1010000 // R
    , 0b1101100 // S
    , 0b1111000 // T
    , 0b0011100 // U
    , 0b0111110 // V
    , 0b1111110 // W
    , 0b1110110 // X
    , 0b1101110 // Y
    , 0b0011011 // Z
    };

template<pin_t CLK, pin_t DIO>
class tm1637_t
{
public:
    using clk = output_t<CLK>;
    using dio = output_t<DIO>;

    static void write_string(const char *s)
    {
        static constexpr uint8_t pos[] = { 2, 1, 0, 5, 4, 3 };
        uint8_t buf[sizeof(pos)];
        uint8_t i = 0;

        while (i < sizeof(pos) && *s)
            buf[pos[i++]] = seven_segment_t::encode(*s++);
        while (i < sizeof(pos))
            buf[pos[i++]] = seven_segment_t::encode(' ');
        set_segs(buf, sizeof(pos), 0);
    }

    static void enable()
    {
        level |= 0x8;
        control();
    }

    static void disable()
    {
        level &= ~0x8;
        control();
    }

    static void brightness(uint8_t x)
    {
        level &= ~0x7;
        level |= (x & 0x7);
        control();
    }

private:
    static void start()
    {
        *bp++ = DF;
    }

    static void stop()
    {
        *bp++ = DF;
        *bp++ = CT;
        *bp++ = DT;
    }

    static void write_byte(uint8_t x)
    {
        for (uint8_t i = 0; i < 8; ++i)
        {
            *bp++ = CF | ((x & (1 << i)) ? DT : DF);
            *bp++ = CT;
        }

        *bp++ = CF | DT;
        *bp++ = CT;
        *bp++ = DF;         // ack unconditionally
        *bp++ = CF;
    }

    static void set_segs(const uint8_t *s, uint8_t n, uint8_t p)
    {
        while (dma::template busy<dma_ch>());       // waite idle
        bp = buf;                                   // start afresh
        start();                                    //  1
        write_byte(0xc0 | (p & 0x07));              // 20
        for (uint8_t i = 0; i < n && i < 6; ++i)
            write_byte(*s++);                       // 20 * n
        stop();                                     //  3
        dma::template transfer<dma_ch>(buf, bp - buf);
    }

    static void control()
    {
        while (dma::template busy<dma_ch>());       // waite idle
        bp = buf;                                   // start afresh
        start();
        write_byte(0x80 | level);
        stop();
        dma::template transfer<dma_ch>(buf, bp - buf);
    }

    static constexpr uint16_t buf_size = 144;       // N.B. count carefully!
    static uint32_t buf[buf_size];
    static uint32_t *bp;
    static uint8_t level;
};

template<pin_t CLK, pin_t DIO>
uint32_t tm1637_t<CLK, DIO>::buf[tm1637_t<CLK, DIO>::buf_size];

template<pin_t CLK, pin_t DIO>
uint32_t *tm1637_t<CLK, DIO>::bp;

template<pin_t CLK, pin_t DIO>
uint8_t tm1637_t<CLK, DIO>::level = 0xf;    // on / full-brightness

using tm1637 = tm1637_t<PA1, PA0>;

int main()
{
    led::setup();
    probe::setup();
    clk2::setup();
    dio2::setup();

    tim::setup(0, tim::clock() / (bit_rate << 1) - 1);
    tim::enable_update_dma();

    dma::setup();
    dma::template mem_to_periph<dma_ch, uint32_t, linear>(0, 0, clk2::bsrr());
    dma::set_request_id<dma_ch, 65>();

    clk::setup();
    dio::setup();

    tm1637::enable();

    for (uint16_t i = 0;; ++i)
    {
        char str[7];

        sprintf(str, "%6d", i);
        led::toggle();
        probe::toggle();
        clk::set();
        tm1637::write_string(str);
        clk::clear();
        tm1637::brightness(i >> 5);
        sys_tick::delay_ms(20);
    }
}

