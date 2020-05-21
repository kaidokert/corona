#pragma once

////
//
//      STM32WB Flash peripherals
//
////

////
//
//      Flash
//
////

struct stm32wb30_cm4_flash_t
{
    volatile uint32_t ACR;       // [read-write] Access control register
    reserved_t<0x1> _0x8;
    volatile uint32_t KEYR;      // [write-only] Flash key register
    volatile uint32_t OPTKEYR;   // [write-only] Option byte key register
    volatile uint32_t SR;        // Status register
    volatile uint32_t CR;        // [read-write] Flash control register
    volatile uint32_t ECCR;      // Flash ECC register
    reserved_t<0x1> _0x20;
    volatile uint32_t OPTR;      // [read-write] Flash option register
    volatile uint32_t PCROP1ASR; // [read-write] Flash Bank 1 PCROP Start address zone A register
    volatile uint32_t PCROP1AER; // [read-write] Flash Bank 1 PCROP End address zone A register
    volatile uint32_t WRP1AR;    // [read-write] Flash Bank 1 WRP area A address register
    volatile uint32_t WRP1BR;    // [read-write] Flash Bank 1 WRP area B address register
    volatile uint32_t PCROP1BSR; // [read-write] Flash Bank 1 PCROP Start address area B register
    volatile uint32_t PCROP1BER; // [read-write] Flash Bank 1 PCROP End address area B register
    volatile uint32_t IPCCBR;    // [read-write] IPCC mailbox data buffer address register
    reserved_t<0x7> _0x5c;
    volatile uint32_t C2ACR;     // [read-write] CPU2 cortex M0 access control register
    volatile uint32_t C2SR;      // [read-write] CPU2 cortex M0 status register
    volatile uint32_t C2CR;      // [read-write] CPU2 cortex M0 control register
    reserved_t<0x6> _0x80;
    volatile uint32_t SFR;       // [read-write] Secure flash start address register
    volatile uint32_t SRRVR;     // [read-write] Secure SRAM2 start address and cortex M0 reset vector register

    static constexpr uint32_t ACR_RESET_VALUE = 0x600;
    template<uint32_t X>
    static constexpr uint32_t ACR_LATENCY =        // Latency
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t ACR_PRFTEN = 0x100;  // Prefetch enable
    static constexpr uint32_t ACR_ICEN = 0x200;    // Instruction cache enable
    static constexpr uint32_t ACR_DCEN = 0x400;    // Data cache enable
    static constexpr uint32_t ACR_ICRST = 0x800;   // Instruction cache reset
    static constexpr uint32_t ACR_DCRST = 0x1000;  // Data cache reset
    static constexpr uint32_t ACR_PES = 0x8000;    // CPU1 CortexM4 program erase suspend request
    static constexpr uint32_t ACR_EMPTY = 0x10000; // Flash User area empty

    static constexpr uint32_t KEYR_RESET_VALUE = 0x0;

    static constexpr uint32_t OPTKEYR_RESET_VALUE = 0x0;

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_EOP = 0x1;        // End of operation
    static constexpr uint32_t SR_OPERR = 0x2;      // Operation error
    static constexpr uint32_t SR_PROGERR = 0x8;    // Programming error
    static constexpr uint32_t SR_WRPERR = 0x10;    // Write protected error
    static constexpr uint32_t SR_PGAERR = 0x20;    // Programming alignment error
    static constexpr uint32_t SR_SIZERR = 0x40;    // Size error
    static constexpr uint32_t SR_PGSERR = 0x80;    // Programming sequence error
    static constexpr uint32_t SR_MISERR = 0x100;   // Fast programming data miss error
    static constexpr uint32_t SR_FASTERR = 0x200;  // Fast programming error
    static constexpr uint32_t SR_OPTNV = 0x2000;   // User Option OPTVAL indication
    static constexpr uint32_t SR_RDERR = 0x4000;   // PCROP read error
    static constexpr uint32_t SR_OPTVERR = 0x8000; // Option validity error
    static constexpr uint32_t SR_BSY = 0x10000;    // Busy
    static constexpr uint32_t SR_CFGBSY = 0x40000; // Programming or erase configuration busy
    static constexpr uint32_t SR_PESD = 0x80000;   // Programming or erase operation suspended

    static constexpr uint32_t CR_RESET_VALUE = 0xc0000000;
    static constexpr uint32_t CR_PG = 0x1;               // Programming
    static constexpr uint32_t CR_PER = 0x2;              // Page erase
    static constexpr uint32_t CR_MER = 0x4;              // This bit triggers the mass erase (all user pages) when set
    template<uint32_t X>
    static constexpr uint32_t CR_PNB =                   // Page number selection
        bit_field_t<3, 0xff>::value<X>();
    static constexpr uint32_t CR_STRT = 0x10000;         // Start
    static constexpr uint32_t CR_OPTSTRT = 0x20000;      // Options modification start
    static constexpr uint32_t CR_FSTPG = 0x40000;        // Fast programming
    static constexpr uint32_t CR_EOPIE = 0x1000000;      // End of operation interrupt enable
    static constexpr uint32_t CR_ERRIE = 0x2000000;      // Error interrupt enable
    static constexpr uint32_t CR_RDERRIE = 0x4000000;    // PCROP read error interrupt enable
    static constexpr uint32_t CR_OBL_LAUNCH = 0x8000000; // Force the option byte loading
    static constexpr uint32_t CR_OPTLOCK = 0x40000000;   // Options Lock
    static constexpr uint32_t CR_LOCK = 0x80000000;      // FLASH_CR Lock

    static constexpr uint32_t ECCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ECCR_ADDR_ECC =           // ECC fail address
        bit_field_t<0, 0x1ffff>::value<X>();
    static constexpr uint32_t ECCR_SYSF_ECC = 0x100000; // System Flash ECC fail
    static constexpr uint32_t ECCR_ECCCIE = 0x1000000;  // ECC correction interrupt enable
    template<uint32_t X>
    static constexpr uint32_t ECCR_CPUID =              // CPU identification
        bit_field_t<26, 0x7>::value<X>();
    static constexpr uint32_t ECCR_ECCC = 0x40000000;   // ECC correction
    static constexpr uint32_t ECCR_ECCD = 0x80000000;   // ECC detection

    static constexpr uint32_t OPTR_RESET_VALUE = 0x10708000;
    template<uint32_t X>
    static constexpr uint32_t OPTR_RDP =                  // Read protection level
        bit_field_t<0, 0xff>::value<X>();
    static constexpr uint32_t OPTR_ESE = 0x100;           // Security enabled
    template<uint32_t X>
    static constexpr uint32_t OPTR_BOR_LEV =              // BOR reset Level
        bit_field_t<9, 0x7>::value<X>();
    static constexpr uint32_t OPTR_nRST_STOP = 0x1000;    // nRST_STOP
    static constexpr uint32_t OPTR_nRST_STDBY = 0x2000;   // nRST_STDBY
    static constexpr uint32_t OPTR_nRST_SHDW = 0x4000;    // nRST_SHDW
    static constexpr uint32_t OPTR_IDWG_SW = 0x10000;     // Independent watchdog selection
    static constexpr uint32_t OPTR_IWDG_STOP = 0x20000;   // Independent watchdog counter freeze in Stop mode
    static constexpr uint32_t OPTR_IWDG_STDBY = 0x40000;  // Independent watchdog counter freeze in Standby mode
    static constexpr uint32_t OPTR_WWDG_SW = 0x80000;     // Window watchdog selection
    static constexpr uint32_t OPTR_nBOOT1 = 0x800000;     // Boot configuration
    static constexpr uint32_t OPTR_SRAM2_PE = 0x1000000;  // SRAM2 parity check enable
    static constexpr uint32_t OPTR_SRAM2_RST = 0x2000000; // SRAM2 Erase when system reset
    static constexpr uint32_t OPTR_nSWBOOT0 = 0x4000000;  // Software Boot0
    static constexpr uint32_t OPTR_nBOOT0 = 0x8000000;    // nBoot0 option bit
    template<uint32_t X>
    static constexpr uint32_t OPTR_AGC_TRIM =             // Radio Automatic Gain Control Trimming
        bit_field_t<29, 0x7>::value<X>();

    static constexpr uint32_t PCROP1ASR_RESET_VALUE = 0xfffffe00;
    template<uint32_t X>
    static constexpr uint32_t PCROP1ASR_PCROP1A_STRT =   // Bank 1 PCROPQ area start offset
        bit_field_t<0, 0x1ff>::value<X>();

    static constexpr uint32_t PCROP1AER_RESET_VALUE = 0x7ffffe00;
    template<uint32_t X>
    static constexpr uint32_t PCROP1AER_PCROP1A_END =           // Bank 1 PCROP area end offset
        bit_field_t<0, 0x1ff>::value<X>();
    static constexpr uint32_t PCROP1AER_PCROP_RDP = 0x80000000; // PCROP area preserved when RDP level decreased

    static constexpr uint32_t WRP1AR_RESET_VALUE = 0xff00ff00;
    template<uint32_t X>
    static constexpr uint32_t WRP1AR_WRP1A_STRT =   // Bank 1 WRP first area A start offset
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WRP1AR_WRP1A_END =    // Bank 1 WRP first area A end offset
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t WRP1BR_RESET_VALUE = 0xff00ff00;
    template<uint32_t X>
    static constexpr uint32_t WRP1BR_WRP1B_STRT =   // Bank 1 WRP second area B end offset
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WRP1BR_WRP1B_END =    // Bank 1 WRP second area B start offset
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t PCROP1BSR_RESET_VALUE = 0xfffffe00;
    template<uint32_t X>
    static constexpr uint32_t PCROP1BSR_PCROP1B_STRT =   // Bank 1 PCROP area B start offset
        bit_field_t<0, 0x1ff>::value<X>();

    static constexpr uint32_t PCROP1BER_RESET_VALUE = 0xfffffe00;
    template<uint32_t X>
    static constexpr uint32_t PCROP1BER_PCROP1B_END =   // Bank 1 PCROP area end area B offset
        bit_field_t<0, 0x1ff>::value<X>();

    static constexpr uint32_t IPCCBR_RESET_VALUE = 0xffffc000;
    template<uint32_t X>
    static constexpr uint32_t IPCCBR_IPCCDBA =   // PCC mailbox data buffer base address
        bit_field_t<0, 0x3fff>::value<X>();

    static constexpr uint32_t C2ACR_RESET_VALUE = 0x600;
    static constexpr uint32_t C2ACR_PRFTEN = 0x100; // CPU2 cortex M0 prefetch enable
    static constexpr uint32_t C2ACR_ICEN = 0x200;   // CPU2 cortex M0 instruction cache enable
    static constexpr uint32_t C2ACR_ICRST = 0x800;  // CPU2 cortex M0 instruction cache reset
    static constexpr uint32_t C2ACR_PES = 0x8000;   // CPU2 cortex M0 program erase suspend request

    static constexpr uint32_t C2SR_RESET_VALUE = 0x0;
    static constexpr uint32_t C2SR_EOP = 0x1;        // End of operation
    static constexpr uint32_t C2SR_OPERR = 0x2;      // Operation error
    static constexpr uint32_t C2SR_PROGERR = 0x8;    // Programming error
    static constexpr uint32_t C2SR_WRPERR = 0x10;    // write protection error
    static constexpr uint32_t C2SR_PGAERR = 0x20;    // Programming alignment error
    static constexpr uint32_t C2SR_SIZERR = 0x40;    // Size error
    static constexpr uint32_t C2SR_PGSERR = 0x80;    // Programming sequence error
    static constexpr uint32_t C2SR_MISSERR = 0x100;  // Fast programming data miss error
    static constexpr uint32_t C2SR_FASTERR = 0x200;  // Fast programming error
    static constexpr uint32_t C2SR_RDERR = 0x4000;   // PCROP read error
    static constexpr uint32_t C2SR_BSY = 0x10000;    // Busy
    static constexpr uint32_t C2SR_CFGBSY = 0x40000; // Programming or erase configuration busy
    static constexpr uint32_t C2SR_PESD = 0x80000;   // Programming or erase operation suspended

    static constexpr uint32_t C2CR_RESET_VALUE = 0x0;
    static constexpr uint32_t C2CR_PG = 0x1;            // Programming
    static constexpr uint32_t C2CR_PER = 0x2;           // Page erase
    static constexpr uint32_t C2CR_MER = 0x4;           // Masse erase
    template<uint32_t X>
    static constexpr uint32_t C2CR_PNB =                // Page Number selection
        bit_field_t<3, 0xff>::value<X>();
    static constexpr uint32_t C2CR_STRT = 0x10000;      // Start
    static constexpr uint32_t C2CR_FSTPG = 0x40000;     // Fast programming
    static constexpr uint32_t C2CR_EOPIE = 0x1000000;   // End of operation interrupt enable
    static constexpr uint32_t C2CR_ERRIE = 0x2000000;   // Error interrupt enable
    static constexpr uint32_t C2CR_RDERRIE = 0x4000000; // PCROP read error interrupt enable

    static constexpr uint32_t SFR_RESET_VALUE = 0xffffee00;
    template<uint32_t X>
    static constexpr uint32_t SFR_SFSA =        // Secure flash start address
        bit_field_t<0, 0xff>::value<X>();
    static constexpr uint32_t SFR_DDS = 0x1000; // Disable Cortex M0 debug access
    static constexpr uint32_t SFR_FSD = 0x100;  // Flash security disable

    static constexpr uint32_t SRRVR_RESET_VALUE = 0x1000000;
    template<uint32_t X>
    static constexpr uint32_t SRRVR_SBRV =              // cortex M0 access control register
        bit_field_t<0, 0x3ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SRRVR_SBRSA =             // Secure backup SRAM2a start address
        bit_field_t<18, 0x1f>::value<X>();
    static constexpr uint32_t SRRVR_BRSD = 0x800000;    // backup SRAM2a security disable
    template<uint32_t X>
    static constexpr uint32_t SRRVR_SNBRSA =            // Secure non backup SRAM2a start address
        bit_field_t<25, 0x1f>::value<X>();
    static constexpr uint32_t SRRVR_C2OPT = 0x80000000; // CPU2 cortex M0 boot reset vector memory selection
    static constexpr uint32_t SRRVR_NBRSD = 0x40000000; // non-backup SRAM2b security disable
};


template<>
struct peripheral_t<STM32WB30_CM4, Flash>
{
    typedef stm32wb30_cm4_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32WB35_CM4, Flash>
{
    typedef stm32wb30_cm4_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32WB50_CM4, Flash>
{
    typedef stm32wb30_cm4_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32WB55_CM4, Flash>
{
    typedef stm32wb30_cm4_flash_t T;
    static T& V;
};

using flash_t = peripheral_t<mcu_svd, Flash>;

