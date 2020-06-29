#pragma once

////
//
//      STM32G4 IWDG peripherals
//
///

// IWDG: WinWATCHDOG

struct stm32g431xx_iwdg_t
{
    volatile uint32_t KR; // Key register
    volatile uint32_t PR; // Prescaler register
    volatile uint32_t RLR; // Reload register
    volatile uint32_t SR; // Status register
    volatile uint32_t WINR; // Window register

    static constexpr uint32_t KR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> KR_KEY; // Key value (write only, read 0x0000)

    static constexpr uint32_t PR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> PR_PR; // Prescaler divider

    static constexpr uint32_t RLR_RESET_VALUE = 0xfff; // Reset value
    typedef bit_field_t<0, 0xfff> RLR_RL; // Watchdog counter reload value

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_WVU = 0x4; // Watchdog counter window value update
    static constexpr uint32_t SR_RVU = 0x2; // Watchdog counter reload value update
    static constexpr uint32_t SR_PVU = 0x1; // Watchdog prescaler value update

    static constexpr uint32_t WINR_RESET_VALUE = 0xfff; // Reset value
    typedef bit_field_t<0, 0xfff> WINR_WIN; // Watchdog counter window value
};

template<>
struct peripheral_t<STM32G431xx, IWDG>
{
    using T = stm32g431xx_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, IWDG>
{
    using T = stm32g431xx_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, IWDG>
{
    using T = stm32g431xx_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, IWDG>
{
    using T = stm32g431xx_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, IWDG>
{
    using T = stm32g431xx_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, IWDG>
{
    using T = stm32g431xx_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, IWDG>
{
    using T = stm32g431xx_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32GBK1CBT6, IWDG>
{
    using T = stm32g431xx_iwdg_t;
    static T& V;
};

using iwdg_t = peripheral_t<svd, IWDG>;

template<int INST> struct iwdg_traits {};
