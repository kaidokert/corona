#pragma once

////
//
//      STM32G0 MCU family
//
///

enum mcu_t
    { STM32G030C6Tx
    , STM32G030C8Tx
    , STM32G030F6Px
    , STM32G030J6Mx
    , STM32G030K6Tx
    , STM32G030K8Tx
    , STM32G070CBTx
    , STM32G070KBTx
    , STM32G070RBTx
    , STM32G031C4Tx
    , STM32G031C6Tx
    , STM32G031C8Tx
    , STM32G031C4Ux
    , STM32G031C6Ux
    , STM32G031C8Ux
    , STM32G031F4Px
    , STM32G031F6Px
    , STM32G031F8Px
    , STM32G031G4Ux
    , STM32G031G6Ux
    , STM32G031G8Ux
    , STM32G031J4Mx
    , STM32G031J6Mx
    , STM32G031K4Tx
    , STM32G031K6Tx
    , STM32G031K8Tx
    , STM32G031K4Ux
    , STM32G031K6Ux
    , STM32G031K8Ux
    , STM32G031Y8Yx
    , STM32G041C6Tx
    , STM32G041C8Tx
    , STM32G041C6Ux
    , STM32G041C8Ux
    , STM32G041F6Px
    , STM32G041F8Px
    , STM32G041G6Ux
    , STM32G041G8Ux
    , STM32G041J6Mx
    , STM32G041K6Tx
    , STM32G041K8Tx
    , STM32G041K6Ux
    , STM32G041K8Ux
    , STM32G041Y8Yx
    , STM32G071C6Tx
    , STM32G071C8Tx
    , STM32G071CBTx
    , STM32G071C6Ux
    , STM32G071C8Ux
    , STM32G071CBUx
    , STM32G071EBYx
    , STM32G071G6Ux
    , STM32G071G8Ux
    , STM32G071GBUx
    , STM32G071G8UxN
    , STM32G071GBUxN
    , STM32G071K6Tx
    , STM32G071K8Tx
    , STM32G071KBTx
    , STM32G071K6Ux
    , STM32G071K8Ux
    , STM32G071KBUx
    , STM32G071K8TxN
    , STM32G071KBTxN
    , STM32G071K8UxN
    , STM32G071KBUxN
    , STM32G071R6Tx
    , STM32G071R8Tx
    , STM32G071RBTx
    , STM32G071RBIx
    , STM32G081CBTx
    , STM32G081CBUx
    , STM32G081EBYx
    , STM32G081GBUx
    , STM32G081GBUxN
    , STM32G081KBTx
    , STM32G081KBTxN
    , STM32G081KBUx
    , STM32G081KBUxN
    , STM32G081RBIx
    , STM32G081RBTx
    };

enum svd_t
    { STM32G030 = 0x1
    , STM32G031 = 0x2
    , STM32G041 = 0x4
    , STM32G070 = 0x8
    , STM32G071 = 0x10
    , STM32G081 = 0x20
    };

enum gpio_conf_t
    { STM32G03x = 0x1
    , STM32G07x = 0x2
    };

enum dma_resource_t
    { AES_IN
    , AES_OUT
    , DAC_CHANNEL1
    , DAC_CHANNEL2
    , I2C_RX
    , I2C_TX
    , LPUART_RX
    , LPUART_TX
    , SPI_RX
    , SPI_TX
    , TIM_CH1
    , TIM_CH2
    , TIM_CH3
    , TIM_CH4
    , TIM_TRIG
    , TIM_TRIG_COM
    , TIM_UP
    , UCPD_RX
    , UCPD_TX
    , USART_RX
    , USART_TX
    };

enum periph_t
    { ADC1
    , AES
    , COMP
    , CRC
    , DAC1
    , DBG
    , DMA1
    , DMAMUX
    , EXTI
    , FLASH
    , FPU
    , FPU_CPACR
    , GPIOA
    , GPIOB
    , GPIOC
    , GPIOD
    , GPIOF
    , HDMI_CEC
    , I2C1
    , I2C2
    , IWDG
    , LPTIM1
    , LPTIM2
    , LPUART1
    , MPU
    , NVIC
    , NVIC_STIR
    , PWR
    , RCC
    , RNG
    , RTC
    , SCB
    , SCB_ACTRL
    , SPI1
    , SPI2
    , STK
    , SYSCFG
    , SYSCFG_ITLINE
    , TAMP
    , TIM1
    , TIM2
    , TIM3
    , TIM6
    , TIM7
    , TIM14
    , TIM15
    , TIM16
    , TIM17
    , UCPD1
    , UCPD2
    , USART1
    , USART2
    , USART3
    , USART4
    , VREFBUF
    , WWDG
    };

template<svd_t SVD, periph_t PERIPH>
struct peripheral_t
{
    static_assert
        ( always_false_i<SVD>::value
        , "peripheral not available on this MCU!"
        );
};

template<periph_t P, dma_resource_t R>
struct dma_request_t
{
    static_assert
        ( always_false_i<P>::value
        , "DMA resource not available on this peripheral!"
        );
};

template<mcu_t MCU> struct mcu_traits {};

template<> struct mcu_traits<STM32G030C6Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G030;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G030C8Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G030;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G030F6Px>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G030;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G030J6Mx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G030;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G030K6Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G030;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G030K8Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G030;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G070CBTx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G070;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G070KBTx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G070;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G070RBTx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G070;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031C4Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031C6Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031C8Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031C4Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031C6Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031C8Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031F4Px>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031F6Px>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031F8Px>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031G4Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031G6Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031G8Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031J4Mx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031J6Mx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031K4Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031K6Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031K8Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031K4Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031K6Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031K8Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031Y8Yx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G041C6Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G041;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G041C8Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G041;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G041C6Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G041;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G041C8Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G041;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G041F6Px>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G041;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G041F8Px>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G041;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G041G6Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G041;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G041G8Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G041;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G041J6Mx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G041;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G041K6Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G041;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G041K8Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G041;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G041K6Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G041;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G041K8Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G041;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G041Y8Yx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G041;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071C6Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071C8Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071CBTx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071C6Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071C8Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071CBUx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071EBYx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071G6Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071G8Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071GBUx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071G8UxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071GBUxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071K6Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071K8Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071KBTx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071K6Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071K8Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071KBUx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071K8TxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071KBTxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071K8UxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071KBUxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071R6Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071R8Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071RBTx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071RBIx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G081CBTx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G081;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G081CBUx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G081;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G081EBYx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G081;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G081GBUx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G081;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G081GBUxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G081;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G081KBTx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G081;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G081KBTxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G081;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G081KBUx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G081;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G081KBUxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G081;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G081RBIx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G081;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G081RBTx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G081;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

// Set target from command-line -DMCU= option
static constexpr mcu_t target = MCU;

