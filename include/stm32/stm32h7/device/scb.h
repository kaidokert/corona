#pragma once

////
//
//      STM32H7 SCB peripherals
//
////

////
//
//      System control block
//
////

struct stm32h742x_scb_t
{
    volatile uint32_t CPUID;                // [read-only] CPUID base register
    volatile uint32_t ICSR;                 // [read-write] Interrupt control and state register
    volatile uint32_t VTOR;                 // [read-write] Vector table offset register
    volatile uint32_t AIRCR;                // [read-write] Application interrupt and reset control register
    volatile uint32_t SCR;                  // [read-write] System control register
    volatile uint32_t CCR;                  // [read-write] Configuration and control register
    volatile uint32_t SHPR1;                // [read-write] System handler priority registers
    volatile uint32_t SHPR2;                // [read-write] System handler priority registers
    volatile uint32_t SHPR3;                // [read-write] System handler priority registers
    volatile uint32_t SHCSR;                // [read-write] System handler control and state register
    volatile uint32_t CFSR_UFSR_BFSR_MMFSR; // [read-write] Configurable fault status register
    volatile uint32_t HFSR;                 // [read-write] Hard fault status register
    reserved_t<0x1> _0x34;
    volatile uint32_t MMFAR;                // [read-write] Memory management fault address register
    volatile uint32_t BFAR;                 // [read-write] Bus fault address register

    static constexpr uint32_t CPUID_RESET_VALUE = 0x410fc241;
    template<uint32_t X>
    static constexpr uint32_t CPUID_Revision =      // Revision number
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CPUID_PartNo =        // Part number of the processor
        bit_field_t<4, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CPUID_Constant =      // Reads as 0xF
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CPUID_Variant =       // Variant number
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CPUID_Implementer =   // Implementer code
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t ICSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ICSR_VECTACTIVE =             // Active vector
        bit_field_t<0, 0x1ff>::value<X>();
    static constexpr uint32_t ICSR_RETTOBASE = 0x800;       // Return to base level
    template<uint32_t X>
    static constexpr uint32_t ICSR_VECTPENDING =            // Pending vector
        bit_field_t<12, 0x7f>::value<X>();
    static constexpr uint32_t ICSR_ISRPENDING = 0x400000;   // Interrupt pending flag
    static constexpr uint32_t ICSR_PENDSTCLR = 0x2000000;   // SysTick exception clear-pending bit
    static constexpr uint32_t ICSR_PENDSTSET = 0x4000000;   // SysTick exception set-pending bit
    static constexpr uint32_t ICSR_PENDSVCLR = 0x8000000;   // PendSV clear-pending bit
    static constexpr uint32_t ICSR_PENDSVSET = 0x10000000;  // PendSV set-pending bit
    static constexpr uint32_t ICSR_NMIPENDSET = 0x80000000; // NMI set-pending bit.

    static constexpr uint32_t VTOR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t VTOR_TBLOFF =   // Vector table base offset field
        bit_field_t<9, 0x1fffff>::value<X>();

    static constexpr uint32_t AIRCR_RESET_VALUE = 0x0;
    static constexpr uint32_t AIRCR_VECTRESET = 0x1;     // VECTRESET
    static constexpr uint32_t AIRCR_VECTCLRACTIVE = 0x2; // VECTCLRACTIVE
    static constexpr uint32_t AIRCR_SYSRESETREQ = 0x4;   // SYSRESETREQ
    template<uint32_t X>
    static constexpr uint32_t AIRCR_PRIGROUP =           // PRIGROUP
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t AIRCR_ENDIANESS = 0x8000;  // ENDIANESS
    template<uint32_t X>
    static constexpr uint32_t AIRCR_VECTKEYSTAT =        // Register key
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t SCR_RESET_VALUE = 0x0;
    static constexpr uint32_t SCR_SLEEPONEXIT = 0x2; // SLEEPONEXIT
    static constexpr uint32_t SCR_SLEEPDEEP = 0x4;   // SLEEPDEEP
    static constexpr uint32_t SCR_SEVEONPEND = 0x10; // Send Event on Pending bit

    static constexpr uint32_t CCR_RESET_VALUE = 0x0;
    static constexpr uint32_t CCR_NONBASETHRDENA = 0x1; // Configures how the processor enters Thread mode
    static constexpr uint32_t CCR_USERSETMPEND = 0x2;   // USERSETMPEND
    static constexpr uint32_t CCR_UNALIGN__TRP = 0x8;   // UNALIGN_ TRP
    static constexpr uint32_t CCR_DIV_0_TRP = 0x10;     // DIV_0_TRP
    static constexpr uint32_t CCR_BFHFNMIGN = 0x100;    // BFHFNMIGN
    static constexpr uint32_t CCR_STKALIGN = 0x200;     // STKALIGN
    static constexpr uint32_t CCR_DC = 0x10000;         // DC
    static constexpr uint32_t CCR_IC = 0x20000;         // IC
    static constexpr uint32_t CCR_BP = 0x40000;         // BP

    static constexpr uint32_t SHPR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SHPR1_PRI_4 =   // Priority of system handler 4
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SHPR1_PRI_5 =   // Priority of system handler 5
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SHPR1_PRI_6 =   // Priority of system handler 6
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t SHPR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SHPR2_PRI_11 =   // Priority of system handler 11
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t SHPR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SHPR3_PRI_14 =   // Priority of system handler 14
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SHPR3_PRI_15 =   // Priority of system handler 15
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t SHCSR_RESET_VALUE = 0x0;
    static constexpr uint32_t SHCSR_MEMFAULTACT = 0x1;       // Memory management fault exception active bit
    static constexpr uint32_t SHCSR_BUSFAULTACT = 0x2;       // Bus fault exception active bit
    static constexpr uint32_t SHCSR_USGFAULTACT = 0x8;       // Usage fault exception active bit
    static constexpr uint32_t SHCSR_SVCALLACT = 0x80;        // SVC call active bit
    static constexpr uint32_t SHCSR_MONITORACT = 0x100;      // Debug monitor active bit
    static constexpr uint32_t SHCSR_PENDSVACT = 0x400;       // PendSV exception active bit
    static constexpr uint32_t SHCSR_SYSTICKACT = 0x800;      // SysTick exception active bit
    static constexpr uint32_t SHCSR_USGFAULTPENDED = 0x1000; // Usage fault exception pending bit
    static constexpr uint32_t SHCSR_MEMFAULTPENDED = 0x2000; // Memory management fault exception pending bit
    static constexpr uint32_t SHCSR_BUSFAULTPENDED = 0x4000; // Bus fault exception pending bit
    static constexpr uint32_t SHCSR_SVCALLPENDED = 0x8000;   // SVC call pending bit
    static constexpr uint32_t SHCSR_MEMFAULTENA = 0x10000;   // Memory management fault enable bit
    static constexpr uint32_t SHCSR_BUSFAULTENA = 0x20000;   // Bus fault enable bit
    static constexpr uint32_t SHCSR_USGFAULTENA = 0x40000;   // Usage fault enable bit

    static constexpr uint32_t CFSR_UFSR_BFSR_MMFSR_RESET_VALUE = 0x0;
    static constexpr uint32_t CFSR_UFSR_BFSR_MMFSR_IACCVIOL = 0x1;        // IACCVIOL
    static constexpr uint32_t CFSR_UFSR_BFSR_MMFSR_DACCVIOL = 0x2;        // DACCVIOL
    static constexpr uint32_t CFSR_UFSR_BFSR_MMFSR_MUNSTKERR = 0x8;       // MUNSTKERR
    static constexpr uint32_t CFSR_UFSR_BFSR_MMFSR_MSTKERR = 0x10;        // MSTKERR
    static constexpr uint32_t CFSR_UFSR_BFSR_MMFSR_MLSPERR = 0x20;        // MLSPERR
    static constexpr uint32_t CFSR_UFSR_BFSR_MMFSR_MMARVALID = 0x80;      // MMARVALID
    static constexpr uint32_t CFSR_UFSR_BFSR_MMFSR_IBUSERR = 0x100;       // Instruction bus error
    static constexpr uint32_t CFSR_UFSR_BFSR_MMFSR_PRECISERR = 0x200;     // Precise data bus error
    static constexpr uint32_t CFSR_UFSR_BFSR_MMFSR_IMPRECISERR = 0x400;   // Imprecise data bus error
    static constexpr uint32_t CFSR_UFSR_BFSR_MMFSR_UNSTKERR = 0x800;      // Bus fault on unstacking for a return from exception
    static constexpr uint32_t CFSR_UFSR_BFSR_MMFSR_STKERR = 0x1000;       // Bus fault on stacking for exception entry
    static constexpr uint32_t CFSR_UFSR_BFSR_MMFSR_LSPERR = 0x2000;       // Bus fault on floating-point lazy state preservation
    static constexpr uint32_t CFSR_UFSR_BFSR_MMFSR_BFARVALID = 0x8000;    // Bus Fault Address Register (BFAR) valid flag
    static constexpr uint32_t CFSR_UFSR_BFSR_MMFSR_UNDEFINSTR = 0x10000;  // Undefined instruction usage fault
    static constexpr uint32_t CFSR_UFSR_BFSR_MMFSR_INVSTATE = 0x20000;    // Invalid state usage fault
    static constexpr uint32_t CFSR_UFSR_BFSR_MMFSR_INVPC = 0x40000;       // Invalid PC load usage fault
    static constexpr uint32_t CFSR_UFSR_BFSR_MMFSR_NOCP = 0x80000;        // No coprocessor usage fault.
    static constexpr uint32_t CFSR_UFSR_BFSR_MMFSR_UNALIGNED = 0x1000000; // Unaligned access usage fault
    static constexpr uint32_t CFSR_UFSR_BFSR_MMFSR_DIVBYZERO = 0x2000000; // Divide by zero usage fault

    static constexpr uint32_t HFSR_RESET_VALUE = 0x0;
    static constexpr uint32_t HFSR_VECTTBL = 0x2;         // Vector table hard fault
    static constexpr uint32_t HFSR_FORCED = 0x40000000;   // Forced hard fault
    static constexpr uint32_t HFSR_DEBUG_VT = 0x80000000; // Reserved for Debug use

    static constexpr uint32_t MMFAR_RESET_VALUE = 0x0;

    static constexpr uint32_t BFAR_RESET_VALUE = 0x0;
};


////
//
//      System control block ACTLR
//
////

struct stm32h742x_scb_actrl_t
{
    volatile uint32_t ACTRL; // [read-write] Auxiliary control register

    static constexpr uint32_t ACTRL_RESET_VALUE = 0x0;
    static constexpr uint32_t ACTRL_DISFOLD = 0x4;           // DISFOLD
    static constexpr uint32_t ACTRL_FPEXCODIS = 0x400;       // FPEXCODIS
    static constexpr uint32_t ACTRL_DISRAMODE = 0x800;       // DISRAMODE
    static constexpr uint32_t ACTRL_DISITMATBFLUSH = 0x1000; // DISITMATBFLUSH
};


template<>
struct peripheral_t<STM32H742x, SCB_ACTRL>
{
    typedef stm32h742x_scb_actrl_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, SCB_ACTRL>
{
    typedef stm32h742x_scb_actrl_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, SCB_ACTRL>
{
    typedef stm32h742x_scb_actrl_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, SCB_ACTRL>
{
    typedef stm32h742x_scb_actrl_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, SCB_ACTRL>
{
    typedef stm32h742x_scb_actrl_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, SCB_ACTRL>
{
    typedef stm32h742x_scb_actrl_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, SCB_ACTRL>
{
    typedef stm32h742x_scb_actrl_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, SCB_ACTRL>
{
    typedef stm32h742x_scb_actrl_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, SCB_ACTRL>
{
    typedef stm32h742x_scb_actrl_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, SCB_ACTRL>
{
    typedef stm32h742x_scb_actrl_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, SCB_ACTRL>
{
    typedef stm32h742x_scb_actrl_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, SCB_ACTRL>
{
    typedef stm32h742x_scb_actrl_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, SCB_ACTRL>
{
    typedef stm32h742x_scb_actrl_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, SCB_ACTRL>
{
    typedef stm32h742x_scb_actrl_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, SCB_ACTRL>
{
    typedef stm32h742x_scb_actrl_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, SCB>
{
    typedef stm32h742x_scb_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, SCB>
{
    typedef stm32h742x_scb_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, SCB>
{
    typedef stm32h742x_scb_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, SCB>
{
    typedef stm32h742x_scb_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, SCB>
{
    typedef stm32h742x_scb_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, SCB>
{
    typedef stm32h742x_scb_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, SCB>
{
    typedef stm32h742x_scb_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, SCB>
{
    typedef stm32h742x_scb_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, SCB>
{
    typedef stm32h742x_scb_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, SCB>
{
    typedef stm32h742x_scb_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, SCB>
{
    typedef stm32h742x_scb_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, SCB>
{
    typedef stm32h742x_scb_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, SCB>
{
    typedef stm32h742x_scb_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, SCB>
{
    typedef stm32h742x_scb_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, SCB>
{
    typedef stm32h742x_scb_t T;
    static T& V;
};

using scb_t = peripheral_t<mcu_svd, SCB>;
using scb_actrl_t = peripheral_t<mcu_svd, SCB_ACTRL>;
