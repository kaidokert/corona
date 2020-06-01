#pragma once

#include <functional>
#include "timer.h"

template<int TIMER_INSTANCE>
struct servo_master_t
{
    using timer = tim_t<TIMER_INSTANCE>;

    static constexpr uint32_t arr = 0xffff;
    static constexpr float f_pwm = 50;
    static constexpr float t_c = arr * f_pwm;

    static void setup()
    {
        const auto f_sys = sys_clock::freq();
        const auto psc = f_sys / (f_pwm * (arr + 1)) - 1;

        timer::setup(psc, arr);
    }

    static void enable_update_interrupt()
    {
        timer::enable_update_interrupt();
    }

    static void clear_update_interrupt_flag()
    {
        timer::clear_update_interrupt_flag();
    }

    template<channel_t CH, gpio_pin_t PIN>
    static auto chan
        ( float x = 0
        , float t_min = 0.6e-3
        , float t_max = 2.4e-3
        )
    {
        using pwm = pwm_t<timer, CH, PIN>;

        float k = t_c * (t_max - t_min) / 2.;
        float a = t_c * t_min + k;

        pwm::setup(a + k * x);

        return [k, a](float x)
            {
                pwm::duty(static_cast<uint16_t>(a + k * x));
            };
    }
};

template<typename MASTER, channel_t CH, gpio_pin_t PIN>
class servo_channel_t
{
public:
    using pwm = pwm_t<typename MASTER::timer, CH, PIN>;

    servo_channel_t
        ( float x = 0
        , float t_min = 0.6e-3
        , float t_max = 2.4e-3
        ) : m_k(MASTER::t_c * (t_max - t_min) / 2.)
          , m_a(MASTER::t_c * t_min + m_k)
    {
        pwm::setup(m_a + m_k * x);
    }

    void set(float x)
    {
        pwm::duty(static_cast<uint16_t>(m_a + m_k * x));
    }

private:
    const float m_k, m_a;
};


