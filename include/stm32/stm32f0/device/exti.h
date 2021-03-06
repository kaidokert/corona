#pragma once

////
//
//      STM32F0 EXTI peripherals
//
///

// EXTI: External interrupt/event controller

struct stm32f0x0_exti_t
{
    volatile uint32_t IMR; // Interrupt mask register (EXTI_IMR)
    volatile uint32_t EMR; // Event mask register (EXTI_EMR)
    volatile uint32_t RTSR; // Rising Trigger selection register (EXTI_RTSR)
    volatile uint32_t FTSR; // Falling Trigger selection register (EXTI_FTSR)
    volatile uint32_t SWIER; // Software interrupt event register (EXTI_SWIER)
    volatile uint32_t PR; // Pending register (EXTI_PR)

    static constexpr uint32_t IMR_RESET_VALUE = 0xf940000; // Reset value
    static constexpr uint32_t IMR_MR0 = 0x1; // Interrupt Mask on line 0
    static constexpr uint32_t IMR_MR1 = 0x2; // Interrupt Mask on line 1
    static constexpr uint32_t IMR_MR2 = 0x4; // Interrupt Mask on line 2
    static constexpr uint32_t IMR_MR3 = 0x8; // Interrupt Mask on line 3
    static constexpr uint32_t IMR_MR4 = 0x10; // Interrupt Mask on line 4
    static constexpr uint32_t IMR_MR5 = 0x20; // Interrupt Mask on line 5
    static constexpr uint32_t IMR_MR6 = 0x40; // Interrupt Mask on line 6
    static constexpr uint32_t IMR_MR7 = 0x80; // Interrupt Mask on line 7
    static constexpr uint32_t IMR_MR8 = 0x100; // Interrupt Mask on line 8
    static constexpr uint32_t IMR_MR9 = 0x200; // Interrupt Mask on line 9
    static constexpr uint32_t IMR_MR10 = 0x400; // Interrupt Mask on line 10
    static constexpr uint32_t IMR_MR11 = 0x800; // Interrupt Mask on line 11
    static constexpr uint32_t IMR_MR12 = 0x1000; // Interrupt Mask on line 12
    static constexpr uint32_t IMR_MR13 = 0x2000; // Interrupt Mask on line 13
    static constexpr uint32_t IMR_MR14 = 0x4000; // Interrupt Mask on line 14
    static constexpr uint32_t IMR_MR15 = 0x8000; // Interrupt Mask on line 15
    static constexpr uint32_t IMR_MR16 = 0x10000; // Interrupt Mask on line 16
    static constexpr uint32_t IMR_MR17 = 0x20000; // Interrupt Mask on line 17
    static constexpr uint32_t IMR_MR18 = 0x40000; // Interrupt Mask on line 18
    static constexpr uint32_t IMR_MR19 = 0x80000; // Interrupt Mask on line 19
    static constexpr uint32_t IMR_MR20 = 0x100000; // Interrupt Mask on line 20
    static constexpr uint32_t IMR_MR21 = 0x200000; // Interrupt Mask on line 21
    static constexpr uint32_t IMR_MR22 = 0x400000; // Interrupt Mask on line 22
    static constexpr uint32_t IMR_MR23 = 0x800000; // Interrupt Mask on line 23
    static constexpr uint32_t IMR_MR24 = 0x1000000; // Interrupt Mask on line 24
    static constexpr uint32_t IMR_MR25 = 0x2000000; // Interrupt Mask on line 25
    static constexpr uint32_t IMR_MR26 = 0x4000000; // Interrupt Mask on line 26
    static constexpr uint32_t IMR_MR27 = 0x8000000; // Interrupt Mask on line 27

    static constexpr uint32_t EMR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t EMR_MR0 = 0x1; // Event Mask on line 0
    static constexpr uint32_t EMR_MR1 = 0x2; // Event Mask on line 1
    static constexpr uint32_t EMR_MR2 = 0x4; // Event Mask on line 2
    static constexpr uint32_t EMR_MR3 = 0x8; // Event Mask on line 3
    static constexpr uint32_t EMR_MR4 = 0x10; // Event Mask on line 4
    static constexpr uint32_t EMR_MR5 = 0x20; // Event Mask on line 5
    static constexpr uint32_t EMR_MR6 = 0x40; // Event Mask on line 6
    static constexpr uint32_t EMR_MR7 = 0x80; // Event Mask on line 7
    static constexpr uint32_t EMR_MR8 = 0x100; // Event Mask on line 8
    static constexpr uint32_t EMR_MR9 = 0x200; // Event Mask on line 9
    static constexpr uint32_t EMR_MR10 = 0x400; // Event Mask on line 10
    static constexpr uint32_t EMR_MR11 = 0x800; // Event Mask on line 11
    static constexpr uint32_t EMR_MR12 = 0x1000; // Event Mask on line 12
    static constexpr uint32_t EMR_MR13 = 0x2000; // Event Mask on line 13
    static constexpr uint32_t EMR_MR14 = 0x4000; // Event Mask on line 14
    static constexpr uint32_t EMR_MR15 = 0x8000; // Event Mask on line 15
    static constexpr uint32_t EMR_MR16 = 0x10000; // Event Mask on line 16
    static constexpr uint32_t EMR_MR17 = 0x20000; // Event Mask on line 17
    static constexpr uint32_t EMR_MR18 = 0x40000; // Event Mask on line 18
    static constexpr uint32_t EMR_MR19 = 0x80000; // Event Mask on line 19
    static constexpr uint32_t EMR_MR20 = 0x100000; // Event Mask on line 20
    static constexpr uint32_t EMR_MR21 = 0x200000; // Event Mask on line 21
    static constexpr uint32_t EMR_MR22 = 0x400000; // Event Mask on line 22
    static constexpr uint32_t EMR_MR23 = 0x800000; // Event Mask on line 23
    static constexpr uint32_t EMR_MR24 = 0x1000000; // Event Mask on line 24
    static constexpr uint32_t EMR_MR25 = 0x2000000; // Event Mask on line 25
    static constexpr uint32_t EMR_MR26 = 0x4000000; // Event Mask on line 26
    static constexpr uint32_t EMR_MR27 = 0x8000000; // Event Mask on line 27

    static constexpr uint32_t RTSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RTSR_TR0 = 0x1; // Rising trigger event configuration of line 0
    static constexpr uint32_t RTSR_TR1 = 0x2; // Rising trigger event configuration of line 1
    static constexpr uint32_t RTSR_TR2 = 0x4; // Rising trigger event configuration of line 2
    static constexpr uint32_t RTSR_TR3 = 0x8; // Rising trigger event configuration of line 3
    static constexpr uint32_t RTSR_TR4 = 0x10; // Rising trigger event configuration of line 4
    static constexpr uint32_t RTSR_TR5 = 0x20; // Rising trigger event configuration of line 5
    static constexpr uint32_t RTSR_TR6 = 0x40; // Rising trigger event configuration of line 6
    static constexpr uint32_t RTSR_TR7 = 0x80; // Rising trigger event configuration of line 7
    static constexpr uint32_t RTSR_TR8 = 0x100; // Rising trigger event configuration of line 8
    static constexpr uint32_t RTSR_TR9 = 0x200; // Rising trigger event configuration of line 9
    static constexpr uint32_t RTSR_TR10 = 0x400; // Rising trigger event configuration of line 10
    static constexpr uint32_t RTSR_TR11 = 0x800; // Rising trigger event configuration of line 11
    static constexpr uint32_t RTSR_TR12 = 0x1000; // Rising trigger event configuration of line 12
    static constexpr uint32_t RTSR_TR13 = 0x2000; // Rising trigger event configuration of line 13
    static constexpr uint32_t RTSR_TR14 = 0x4000; // Rising trigger event configuration of line 14
    static constexpr uint32_t RTSR_TR15 = 0x8000; // Rising trigger event configuration of line 15
    static constexpr uint32_t RTSR_TR16 = 0x10000; // Rising trigger event configuration of line 16
    static constexpr uint32_t RTSR_TR17 = 0x20000; // Rising trigger event configuration of line 17
    static constexpr uint32_t RTSR_TR19 = 0x80000; // Rising trigger event configuration of line 19

    static constexpr uint32_t FTSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FTSR_TR0 = 0x1; // Falling trigger event configuration of line 0
    static constexpr uint32_t FTSR_TR1 = 0x2; // Falling trigger event configuration of line 1
    static constexpr uint32_t FTSR_TR2 = 0x4; // Falling trigger event configuration of line 2
    static constexpr uint32_t FTSR_TR3 = 0x8; // Falling trigger event configuration of line 3
    static constexpr uint32_t FTSR_TR4 = 0x10; // Falling trigger event configuration of line 4
    static constexpr uint32_t FTSR_TR5 = 0x20; // Falling trigger event configuration of line 5
    static constexpr uint32_t FTSR_TR6 = 0x40; // Falling trigger event configuration of line 6
    static constexpr uint32_t FTSR_TR7 = 0x80; // Falling trigger event configuration of line 7
    static constexpr uint32_t FTSR_TR8 = 0x100; // Falling trigger event configuration of line 8
    static constexpr uint32_t FTSR_TR9 = 0x200; // Falling trigger event configuration of line 9
    static constexpr uint32_t FTSR_TR10 = 0x400; // Falling trigger event configuration of line 10
    static constexpr uint32_t FTSR_TR11 = 0x800; // Falling trigger event configuration of line 11
    static constexpr uint32_t FTSR_TR12 = 0x1000; // Falling trigger event configuration of line 12
    static constexpr uint32_t FTSR_TR13 = 0x2000; // Falling trigger event configuration of line 13
    static constexpr uint32_t FTSR_TR14 = 0x4000; // Falling trigger event configuration of line 14
    static constexpr uint32_t FTSR_TR15 = 0x8000; // Falling trigger event configuration of line 15
    static constexpr uint32_t FTSR_TR16 = 0x10000; // Falling trigger event configuration of line 16
    static constexpr uint32_t FTSR_TR17 = 0x20000; // Falling trigger event configuration of line 17
    static constexpr uint32_t FTSR_TR19 = 0x80000; // Falling trigger event configuration of line 19

    static constexpr uint32_t SWIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SWIER_SWIER0 = 0x1; // Software Interrupt on line 0
    static constexpr uint32_t SWIER_SWIER1 = 0x2; // Software Interrupt on line 1
    static constexpr uint32_t SWIER_SWIER2 = 0x4; // Software Interrupt on line 2
    static constexpr uint32_t SWIER_SWIER3 = 0x8; // Software Interrupt on line 3
    static constexpr uint32_t SWIER_SWIER4 = 0x10; // Software Interrupt on line 4
    static constexpr uint32_t SWIER_SWIER5 = 0x20; // Software Interrupt on line 5
    static constexpr uint32_t SWIER_SWIER6 = 0x40; // Software Interrupt on line 6
    static constexpr uint32_t SWIER_SWIER7 = 0x80; // Software Interrupt on line 7
    static constexpr uint32_t SWIER_SWIER8 = 0x100; // Software Interrupt on line 8
    static constexpr uint32_t SWIER_SWIER9 = 0x200; // Software Interrupt on line 9
    static constexpr uint32_t SWIER_SWIER10 = 0x400; // Software Interrupt on line 10
    static constexpr uint32_t SWIER_SWIER11 = 0x800; // Software Interrupt on line 11
    static constexpr uint32_t SWIER_SWIER12 = 0x1000; // Software Interrupt on line 12
    static constexpr uint32_t SWIER_SWIER13 = 0x2000; // Software Interrupt on line 13
    static constexpr uint32_t SWIER_SWIER14 = 0x4000; // Software Interrupt on line 14
    static constexpr uint32_t SWIER_SWIER15 = 0x8000; // Software Interrupt on line 15
    static constexpr uint32_t SWIER_SWIER16 = 0x10000; // Software Interrupt on line 16
    static constexpr uint32_t SWIER_SWIER17 = 0x20000; // Software Interrupt on line 17
    static constexpr uint32_t SWIER_SWIER19 = 0x80000; // Software Interrupt on line 19

    static constexpr uint32_t PR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PR_PR0 = 0x1; // Pending bit 0
    static constexpr uint32_t PR_PR1 = 0x2; // Pending bit 1
    static constexpr uint32_t PR_PR2 = 0x4; // Pending bit 2
    static constexpr uint32_t PR_PR3 = 0x8; // Pending bit 3
    static constexpr uint32_t PR_PR4 = 0x10; // Pending bit 4
    static constexpr uint32_t PR_PR5 = 0x20; // Pending bit 5
    static constexpr uint32_t PR_PR6 = 0x40; // Pending bit 6
    static constexpr uint32_t PR_PR7 = 0x80; // Pending bit 7
    static constexpr uint32_t PR_PR8 = 0x100; // Pending bit 8
    static constexpr uint32_t PR_PR9 = 0x200; // Pending bit 9
    static constexpr uint32_t PR_PR10 = 0x400; // Pending bit 10
    static constexpr uint32_t PR_PR11 = 0x800; // Pending bit 11
    static constexpr uint32_t PR_PR12 = 0x1000; // Pending bit 12
    static constexpr uint32_t PR_PR13 = 0x2000; // Pending bit 13
    static constexpr uint32_t PR_PR14 = 0x4000; // Pending bit 14
    static constexpr uint32_t PR_PR15 = 0x8000; // Pending bit 15
    static constexpr uint32_t PR_PR16 = 0x10000; // Pending bit 16
    static constexpr uint32_t PR_PR17 = 0x20000; // Pending bit 17
    static constexpr uint32_t PR_PR19 = 0x80000; // Pending bit 19
};

// EXTI: External interrupt/event controller

struct stm32f0x2_exti_t
{
    volatile uint32_t IMR; // Interrupt mask register (EXTI_IMR)
    volatile uint32_t EMR; // Event mask register (EXTI_EMR)
    volatile uint32_t RTSR; // Rising Trigger selection register (EXTI_RTSR)
    volatile uint32_t FTSR; // Falling Trigger selection register (EXTI_FTSR)
    volatile uint32_t SWIER; // Software interrupt event register (EXTI_SWIER)
    volatile uint32_t PR; // Pending register (EXTI_PR)

    static constexpr uint32_t IMR_RESET_VALUE = 0xf940000; // Reset value
    static constexpr uint32_t IMR_MR0 = 0x1; // Interrupt Mask on line 0
    static constexpr uint32_t IMR_MR1 = 0x2; // Interrupt Mask on line 1
    static constexpr uint32_t IMR_MR2 = 0x4; // Interrupt Mask on line 2
    static constexpr uint32_t IMR_MR3 = 0x8; // Interrupt Mask on line 3
    static constexpr uint32_t IMR_MR4 = 0x10; // Interrupt Mask on line 4
    static constexpr uint32_t IMR_MR5 = 0x20; // Interrupt Mask on line 5
    static constexpr uint32_t IMR_MR6 = 0x40; // Interrupt Mask on line 6
    static constexpr uint32_t IMR_MR7 = 0x80; // Interrupt Mask on line 7
    static constexpr uint32_t IMR_MR8 = 0x100; // Interrupt Mask on line 8
    static constexpr uint32_t IMR_MR9 = 0x200; // Interrupt Mask on line 9
    static constexpr uint32_t IMR_MR10 = 0x400; // Interrupt Mask on line 10
    static constexpr uint32_t IMR_MR11 = 0x800; // Interrupt Mask on line 11
    static constexpr uint32_t IMR_MR12 = 0x1000; // Interrupt Mask on line 12
    static constexpr uint32_t IMR_MR13 = 0x2000; // Interrupt Mask on line 13
    static constexpr uint32_t IMR_MR14 = 0x4000; // Interrupt Mask on line 14
    static constexpr uint32_t IMR_MR15 = 0x8000; // Interrupt Mask on line 15
    static constexpr uint32_t IMR_MR16 = 0x10000; // Interrupt Mask on line 16
    static constexpr uint32_t IMR_MR17 = 0x20000; // Interrupt Mask on line 17
    static constexpr uint32_t IMR_MR18 = 0x40000; // Interrupt Mask on line 18
    static constexpr uint32_t IMR_MR19 = 0x80000; // Interrupt Mask on line 19
    static constexpr uint32_t IMR_MR20 = 0x100000; // Interrupt Mask on line 20
    static constexpr uint32_t IMR_MR21 = 0x200000; // Interrupt Mask on line 21
    static constexpr uint32_t IMR_MR22 = 0x400000; // Interrupt Mask on line 22
    static constexpr uint32_t IMR_MR23 = 0x800000; // Interrupt Mask on line 23
    static constexpr uint32_t IMR_MR24 = 0x1000000; // Interrupt Mask on line 24
    static constexpr uint32_t IMR_MR25 = 0x2000000; // Interrupt Mask on line 25
    static constexpr uint32_t IMR_MR26 = 0x4000000; // Interrupt Mask on line 26
    static constexpr uint32_t IMR_MR27 = 0x8000000; // Interrupt Mask on line 27

    static constexpr uint32_t EMR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t EMR_MR0 = 0x1; // Event Mask on line 0
    static constexpr uint32_t EMR_MR1 = 0x2; // Event Mask on line 1
    static constexpr uint32_t EMR_MR2 = 0x4; // Event Mask on line 2
    static constexpr uint32_t EMR_MR3 = 0x8; // Event Mask on line 3
    static constexpr uint32_t EMR_MR4 = 0x10; // Event Mask on line 4
    static constexpr uint32_t EMR_MR5 = 0x20; // Event Mask on line 5
    static constexpr uint32_t EMR_MR6 = 0x40; // Event Mask on line 6
    static constexpr uint32_t EMR_MR7 = 0x80; // Event Mask on line 7
    static constexpr uint32_t EMR_MR8 = 0x100; // Event Mask on line 8
    static constexpr uint32_t EMR_MR9 = 0x200; // Event Mask on line 9
    static constexpr uint32_t EMR_MR10 = 0x400; // Event Mask on line 10
    static constexpr uint32_t EMR_MR11 = 0x800; // Event Mask on line 11
    static constexpr uint32_t EMR_MR12 = 0x1000; // Event Mask on line 12
    static constexpr uint32_t EMR_MR13 = 0x2000; // Event Mask on line 13
    static constexpr uint32_t EMR_MR14 = 0x4000; // Event Mask on line 14
    static constexpr uint32_t EMR_MR15 = 0x8000; // Event Mask on line 15
    static constexpr uint32_t EMR_MR16 = 0x10000; // Event Mask on line 16
    static constexpr uint32_t EMR_MR17 = 0x20000; // Event Mask on line 17
    static constexpr uint32_t EMR_MR18 = 0x40000; // Event Mask on line 18
    static constexpr uint32_t EMR_MR19 = 0x80000; // Event Mask on line 19
    static constexpr uint32_t EMR_MR20 = 0x100000; // Event Mask on line 20
    static constexpr uint32_t EMR_MR21 = 0x200000; // Event Mask on line 21
    static constexpr uint32_t EMR_MR22 = 0x400000; // Event Mask on line 22
    static constexpr uint32_t EMR_MR23 = 0x800000; // Event Mask on line 23
    static constexpr uint32_t EMR_MR24 = 0x1000000; // Event Mask on line 24
    static constexpr uint32_t EMR_MR25 = 0x2000000; // Event Mask on line 25
    static constexpr uint32_t EMR_MR26 = 0x4000000; // Event Mask on line 26
    static constexpr uint32_t EMR_MR27 = 0x8000000; // Event Mask on line 27

    static constexpr uint32_t RTSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RTSR_TR0 = 0x1; // Rising trigger event configuration of line 0
    static constexpr uint32_t RTSR_TR1 = 0x2; // Rising trigger event configuration of line 1
    static constexpr uint32_t RTSR_TR2 = 0x4; // Rising trigger event configuration of line 2
    static constexpr uint32_t RTSR_TR3 = 0x8; // Rising trigger event configuration of line 3
    static constexpr uint32_t RTSR_TR4 = 0x10; // Rising trigger event configuration of line 4
    static constexpr uint32_t RTSR_TR5 = 0x20; // Rising trigger event configuration of line 5
    static constexpr uint32_t RTSR_TR6 = 0x40; // Rising trigger event configuration of line 6
    static constexpr uint32_t RTSR_TR7 = 0x80; // Rising trigger event configuration of line 7
    static constexpr uint32_t RTSR_TR8 = 0x100; // Rising trigger event configuration of line 8
    static constexpr uint32_t RTSR_TR9 = 0x200; // Rising trigger event configuration of line 9
    static constexpr uint32_t RTSR_TR10 = 0x400; // Rising trigger event configuration of line 10
    static constexpr uint32_t RTSR_TR11 = 0x800; // Rising trigger event configuration of line 11
    static constexpr uint32_t RTSR_TR12 = 0x1000; // Rising trigger event configuration of line 12
    static constexpr uint32_t RTSR_TR13 = 0x2000; // Rising trigger event configuration of line 13
    static constexpr uint32_t RTSR_TR14 = 0x4000; // Rising trigger event configuration of line 14
    static constexpr uint32_t RTSR_TR15 = 0x8000; // Rising trigger event configuration of line 15
    static constexpr uint32_t RTSR_TR16 = 0x10000; // Rising trigger event configuration of line 16
    static constexpr uint32_t RTSR_TR17 = 0x20000; // Rising trigger event configuration of line 17
    static constexpr uint32_t RTSR_TR19 = 0x80000; // Rising trigger event configuration of line 19

    static constexpr uint32_t FTSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FTSR_TR0 = 0x1; // Falling trigger event configuration of line 0
    static constexpr uint32_t FTSR_TR1 = 0x2; // Falling trigger event configuration of line 1
    static constexpr uint32_t FTSR_TR2 = 0x4; // Falling trigger event configuration of line 2
    static constexpr uint32_t FTSR_TR3 = 0x8; // Falling trigger event configuration of line 3
    static constexpr uint32_t FTSR_TR4 = 0x10; // Falling trigger event configuration of line 4
    static constexpr uint32_t FTSR_TR5 = 0x20; // Falling trigger event configuration of line 5
    static constexpr uint32_t FTSR_TR6 = 0x40; // Falling trigger event configuration of line 6
    static constexpr uint32_t FTSR_TR7 = 0x80; // Falling trigger event configuration of line 7
    static constexpr uint32_t FTSR_TR8 = 0x100; // Falling trigger event configuration of line 8
    static constexpr uint32_t FTSR_TR9 = 0x200; // Falling trigger event configuration of line 9
    static constexpr uint32_t FTSR_TR10 = 0x400; // Falling trigger event configuration of line 10
    static constexpr uint32_t FTSR_TR11 = 0x800; // Falling trigger event configuration of line 11
    static constexpr uint32_t FTSR_TR12 = 0x1000; // Falling trigger event configuration of line 12
    static constexpr uint32_t FTSR_TR13 = 0x2000; // Falling trigger event configuration of line 13
    static constexpr uint32_t FTSR_TR14 = 0x4000; // Falling trigger event configuration of line 14
    static constexpr uint32_t FTSR_TR15 = 0x8000; // Falling trigger event configuration of line 15
    static constexpr uint32_t FTSR_TR16 = 0x10000; // Falling trigger event configuration of line 16
    static constexpr uint32_t FTSR_TR17 = 0x20000; // Falling trigger event configuration of line 17
    static constexpr uint32_t FTSR_TR19 = 0x80000; // Falling trigger event configuration of line 19

    static constexpr uint32_t SWIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SWIER_SWIER0 = 0x1; // Software Interrupt on line 0
    static constexpr uint32_t SWIER_SWIER1 = 0x2; // Software Interrupt on line 1
    static constexpr uint32_t SWIER_SWIER2 = 0x4; // Software Interrupt on line 2
    static constexpr uint32_t SWIER_SWIER3 = 0x8; // Software Interrupt on line 3
    static constexpr uint32_t SWIER_SWIER4 = 0x10; // Software Interrupt on line 4
    static constexpr uint32_t SWIER_SWIER5 = 0x20; // Software Interrupt on line 5
    static constexpr uint32_t SWIER_SWIER6 = 0x40; // Software Interrupt on line 6
    static constexpr uint32_t SWIER_SWIER7 = 0x80; // Software Interrupt on line 7
    static constexpr uint32_t SWIER_SWIER8 = 0x100; // Software Interrupt on line 8
    static constexpr uint32_t SWIER_SWIER9 = 0x200; // Software Interrupt on line 9
    static constexpr uint32_t SWIER_SWIER10 = 0x400; // Software Interrupt on line 10
    static constexpr uint32_t SWIER_SWIER11 = 0x800; // Software Interrupt on line 11
    static constexpr uint32_t SWIER_SWIER12 = 0x1000; // Software Interrupt on line 12
    static constexpr uint32_t SWIER_SWIER13 = 0x2000; // Software Interrupt on line 13
    static constexpr uint32_t SWIER_SWIER14 = 0x4000; // Software Interrupt on line 14
    static constexpr uint32_t SWIER_SWIER15 = 0x8000; // Software Interrupt on line 15
    static constexpr uint32_t SWIER_SWIER16 = 0x10000; // Software Interrupt on line 16
    static constexpr uint32_t SWIER_SWIER17 = 0x20000; // Software Interrupt on line 17
    static constexpr uint32_t SWIER_SWIER19 = 0x80000; // Software Interrupt on line 19

    static constexpr uint32_t PR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PR_PIF31 = 0x80000000; // Pending interrupt flag on line 31
    static constexpr uint32_t PR_PIF22 = 0x400000; // Pending interrupt flag on line 22
    static constexpr uint32_t PR_PIF21 = 0x200000; // Pending interrupt flag on line 21
    static constexpr uint32_t PR_PIF20 = 0x100000; // Pending interrupt flag on line 20
    static constexpr uint32_t PR_PIF19 = 0x80000; // Pending interrupt flag on line 19
    static constexpr uint32_t PR_PIF17 = 0x20000; // Pending interrupt flag on line 17
    static constexpr uint32_t PR_PIF16 = 0x10000; // Pending interrupt flag on line 16
    static constexpr uint32_t PR_PIF15 = 0x8000; // Pending interrupt flag on line 15
    static constexpr uint32_t PR_PIF14 = 0x4000; // Pending interrupt flag on line 14
    static constexpr uint32_t PR_PIF13 = 0x2000; // Pending interrupt flag on line 13
    static constexpr uint32_t PR_PIF12 = 0x1000; // Pending interrupt flag on line 12
    static constexpr uint32_t PR_PIF11 = 0x800; // Pending interrupt flag on line 11
    static constexpr uint32_t PR_PIF10 = 0x400; // Pending interrupt flag on line 10
    static constexpr uint32_t PR_PIF9 = 0x200; // Pending interrupt flag on line 9
    static constexpr uint32_t PR_PIF8 = 0x100; // Pending interrupt flag on line 8
    static constexpr uint32_t PR_PIF7 = 0x80; // Pending interrupt flag on line 7
    static constexpr uint32_t PR_PIF6 = 0x40; // Pending interrupt flag on line 6
    static constexpr uint32_t PR_PIF5 = 0x20; // Pending interrupt flag on line 5
    static constexpr uint32_t PR_PIF4 = 0x10; // Pending interrupt flag on line 4
    static constexpr uint32_t PR_PIF3 = 0x8; // Pending interrupt flag on line 3
    static constexpr uint32_t PR_PIF2 = 0x4; // Pending interrupt flag on line 2
    static constexpr uint32_t PR_PIF1 = 0x2; // Pending interrupt flag on line 1
    static constexpr uint32_t PR_PIF0 = 0x1; // Pending interrupt flag on line 0
};

template<>
struct peripheral_t<STM32F0x0, EXTI>
{
    static constexpr periph_t P = EXTI;
    using T = stm32f0x0_exti_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x1, EXTI>
{
    static constexpr periph_t P = EXTI;
    using T = stm32f0x0_exti_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x8, EXTI>
{
    static constexpr periph_t P = EXTI;
    using T = stm32f0x0_exti_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x2, EXTI>
{
    static constexpr periph_t P = EXTI;
    using T = stm32f0x2_exti_t;
    static T& V;
};

using exti_t = peripheral_t<svd, EXTI>;
