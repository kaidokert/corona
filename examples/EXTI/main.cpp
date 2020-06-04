#include <board.h>

using led = board::led1;
using btn = input_t<PC13>;

template<> void handler<interrupt::EXTI15_10>()
{
    if (btn::interrupt_pending())
        btn::clear_interrupt();
    led::toggle();
}

int main()
{
    led::setup();
    btn::setup<board::btn_type>();
    btn::enable_interrupt<rising_edge>();
    interrupt::set<interrupt::EXTI15_10>();
    for (;;) ;
}

