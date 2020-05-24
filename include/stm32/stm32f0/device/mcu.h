#pragma once

////
//
//      STM32F0 MCUs
//
////

enum mcu_t
    { STM32F030C6Tx
    , STM32F030C8Tx
    , STM32F030CCTx
    , STM32F030F4Px
    , STM32F030K6Tx
    , STM32F030R8Tx
    , STM32F030RCTx
    , STM32F031C4Tx
    , STM32F031C6Tx
    , STM32F031E6Yx
    , STM32F031F4Px
    , STM32F031F6Px
    , STM32F031G4Ux
    , STM32F031G6Ux
    , STM32F031K4Ux
    , STM32F031K6Tx
    , STM32F031K6Ux
    , STM32F038C6Tx
    , STM32F038E6Yx
    , STM32F038F6Px
    , STM32F038G6Ux
    , STM32F038K6Ux
    , STM32F042C4Tx
    , STM32F042C4Ux
    , STM32F042C6Tx
    , STM32F042C6Ux
    , STM32F042F4Px
    , STM32F042F6Px
    , STM32F042G4Ux
    , STM32F042G6Ux
    , STM32F042K4Tx
    , STM32F042K4Ux
    , STM32F042K6Tx
    , STM32F042K6Ux
    , STM32F042T6Yx
    , STM32F048C6Ux
    , STM32F048G6Ux
    , STM32F048T6Yx
    , STM32F051C4Tx
    , STM32F051C4Ux
    , STM32F051C6Tx
    , STM32F051C6Ux
    , STM32F051C8Tx
    , STM32F051C8Ux
    , STM32F051K4Tx
    , STM32F051K4Ux
    , STM32F051K6Tx
    , STM32F051K6Ux
    , STM32F051K8Tx
    , STM32F051K8Ux
    , STM32F051R4Tx
    , STM32F051R6Tx
    , STM32F051R8Hx
    , STM32F051R8Tx
    , STM32F051T8Yx
    , STM32F058C8Ux
    , STM32F058R8Hx
    , STM32F058R8Tx
    , STM32F058T8Yx
    , STM32F070C6Tx
    , STM32F070CBTx
    , STM32F070F6Px
    , STM32F070RBTx
    , STM32F071C8Tx
    , STM32F071C8Ux
    , STM32F071CBTx
    , STM32F071CBUx
    , STM32F071CBYx
    , STM32F071RBTx
    , STM32F071V8Hx
    , STM32F071V8Tx
    , STM32F071VBHx
    , STM32F071VBTx
    , STM32F072C8Tx
    , STM32F072C8Ux
    , STM32F072CBTx
    , STM32F072CBUx
    , STM32F072CBYx
    , STM32F072R8Tx
    , STM32F072RBHx
    , STM32F072RBTx
    , STM32F072V8Hx
    , STM32F072V8Tx
    , STM32F072VBHx
    , STM32F072VBTx
    , STM32F078CBTx
    , STM32F078CBUx
    , STM32F078CBYx
    , STM32F078RBHx
    , STM32F078RBTx
    , STM32F078VBHx
    , STM32F078VBTx
    , STM32F091CBTx
    , STM32F091CBUx
    , STM32F091CCTx
    , STM32F091CCUx
    , STM32F091RBTx
    , STM32F091RCHx
    , STM32F091RCTx
    , STM32F091RCYx
    , STM32F091VBTx
    , STM32F091VCHx
    , STM32F091VCTx
    , STM32F098CCTx
    , STM32F098CCUx
    , STM32F098RCHx
    , STM32F098RCTx
    , STM32F098RCYx
    , STM32F098VCHx
    , STM32F098VCTx
    };

enum mcu_svd_t
    { STM32F0x0
    , STM32F0x1
    , STM32F0x2
    , STM32F0x8
    };

enum gpio_conf_t
    { STM32F031 = 0x1
    , STM32F042 = 0x2
    , STM32F051 = 0x4
    , STM32F052 = 0x8
    , STM32F091 = 0x10
    };

template<mcu_t MCU> struct mcu_traits {};

template<> struct mcu_traits<STM32F030C6Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x0;
    static constexpr gpio_conf_t gpio_conf = STM32F031;
};

template<> struct mcu_traits<STM32F030C8Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x0;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
};

template<> struct mcu_traits<STM32F030CCTx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x0;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
};

template<> struct mcu_traits<STM32F030F4Px>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x0;
    static constexpr gpio_conf_t gpio_conf = STM32F031;
};

template<> struct mcu_traits<STM32F030K6Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x0;
    static constexpr gpio_conf_t gpio_conf = STM32F031;
};

template<> struct mcu_traits<STM32F030R8Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x0;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
};

template<> struct mcu_traits<STM32F030RCTx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x0;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
};

template<> struct mcu_traits<STM32F070C6Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x0;
    static constexpr gpio_conf_t gpio_conf = STM32F042;
};

template<> struct mcu_traits<STM32F070CBTx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x0;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
};

template<> struct mcu_traits<STM32F070F6Px>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x0;
    static constexpr gpio_conf_t gpio_conf = STM32F042;
};

template<> struct mcu_traits<STM32F070RBTx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x0;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
};

template<> struct mcu_traits<STM32F031C4Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F031;
};

template<> struct mcu_traits<STM32F031C6Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F031;
};

template<> struct mcu_traits<STM32F031E6Yx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F031;
};

template<> struct mcu_traits<STM32F031F4Px>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F031;
};

template<> struct mcu_traits<STM32F031F6Px>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F031;
};

template<> struct mcu_traits<STM32F031G4Ux>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F031;
};

template<> struct mcu_traits<STM32F031G6Ux>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F031;
};

template<> struct mcu_traits<STM32F031K4Ux>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F031;
};

template<> struct mcu_traits<STM32F031K6Ux>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F031;
};

template<> struct mcu_traits<STM32F031K6Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F031;
};

template<> struct mcu_traits<STM32F051C4Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
};

template<> struct mcu_traits<STM32F051C4Ux>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
};

template<> struct mcu_traits<STM32F051C6Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
};

template<> struct mcu_traits<STM32F051C6Ux>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
};

template<> struct mcu_traits<STM32F051C8Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
};

template<> struct mcu_traits<STM32F051C8Ux>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
};

template<> struct mcu_traits<STM32F051K4Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
};

template<> struct mcu_traits<STM32F051K4Ux>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
};

template<> struct mcu_traits<STM32F051K6Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
};

template<> struct mcu_traits<STM32F051K6Ux>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
};

template<> struct mcu_traits<STM32F051K8Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
};

template<> struct mcu_traits<STM32F051K8Ux>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
};

template<> struct mcu_traits<STM32F051R4Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
};

template<> struct mcu_traits<STM32F051R6Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
};

template<> struct mcu_traits<STM32F051R8Hx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
};

template<> struct mcu_traits<STM32F051R8Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
};

template<> struct mcu_traits<STM32F051T8Yx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
};

template<> struct mcu_traits<STM32F071C8Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
};

template<> struct mcu_traits<STM32F071CBTx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
};

template<> struct mcu_traits<STM32F071C8Ux>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
};

template<> struct mcu_traits<STM32F071CBUx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
};

template<> struct mcu_traits<STM32F071CBYx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
};

template<> struct mcu_traits<STM32F071RBTx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
};

template<> struct mcu_traits<STM32F071V8Hx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
};

template<> struct mcu_traits<STM32F071VBHx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
};

template<> struct mcu_traits<STM32F071V8Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
};

template<> struct mcu_traits<STM32F071VBTx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
};

template<> struct mcu_traits<STM32F091CBTx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
};

template<> struct mcu_traits<STM32F091CCTx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
};

template<> struct mcu_traits<STM32F091CBUx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
};

template<> struct mcu_traits<STM32F091CCUx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
};

template<> struct mcu_traits<STM32F091RBTx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
};

template<> struct mcu_traits<STM32F091RCTx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
};

template<> struct mcu_traits<STM32F091RCHx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
};

template<> struct mcu_traits<STM32F091RCYx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
};

template<> struct mcu_traits<STM32F091VBTx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
};

template<> struct mcu_traits<STM32F091VCTx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
};

template<> struct mcu_traits<STM32F091VCHx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
};

template<> struct mcu_traits<STM32F042C4Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F042;
};

template<> struct mcu_traits<STM32F042C6Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F042;
};

template<> struct mcu_traits<STM32F042C4Ux>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F042;
};

template<> struct mcu_traits<STM32F042C6Ux>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F042;
};

template<> struct mcu_traits<STM32F042F4Px>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F042;
};

template<> struct mcu_traits<STM32F042F6Px>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F042;
};

template<> struct mcu_traits<STM32F042G4Ux>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F042;
};

template<> struct mcu_traits<STM32F042G6Ux>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F042;
};

template<> struct mcu_traits<STM32F042K4Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F042;
};

template<> struct mcu_traits<STM32F042K6Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F042;
};

template<> struct mcu_traits<STM32F042K4Ux>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F042;
};

template<> struct mcu_traits<STM32F042K6Ux>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F042;
};

template<> struct mcu_traits<STM32F042T6Yx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F042;
};

template<> struct mcu_traits<STM32F072C8Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
};

template<> struct mcu_traits<STM32F072CBTx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
};

template<> struct mcu_traits<STM32F072C8Ux>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
};

template<> struct mcu_traits<STM32F072CBUx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
};

template<> struct mcu_traits<STM32F072CBYx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
};

template<> struct mcu_traits<STM32F072R8Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
};

template<> struct mcu_traits<STM32F072RBTx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
};

template<> struct mcu_traits<STM32F072RBHx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
};

template<> struct mcu_traits<STM32F072V8Hx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
};

template<> struct mcu_traits<STM32F072VBHx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
};

template<> struct mcu_traits<STM32F072V8Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
};

template<> struct mcu_traits<STM32F072VBTx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
};

template<> struct mcu_traits<STM32F038C6Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F031;
};

template<> struct mcu_traits<STM32F038E6Yx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F031;
};

template<> struct mcu_traits<STM32F038F6Px>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F031;
};

template<> struct mcu_traits<STM32F038G6Ux>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F031;
};

template<> struct mcu_traits<STM32F038K6Ux>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F031;
};

template<> struct mcu_traits<STM32F048C6Ux>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F042;
};

template<> struct mcu_traits<STM32F048G6Ux>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F042;
};

template<> struct mcu_traits<STM32F048T6Yx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F042;
};

template<> struct mcu_traits<STM32F058C8Ux>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
};

template<> struct mcu_traits<STM32F058R8Hx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
};

template<> struct mcu_traits<STM32F058R8Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
};

template<> struct mcu_traits<STM32F058T8Yx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
};

template<> struct mcu_traits<STM32F078CBTx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
};

template<> struct mcu_traits<STM32F078CBUx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
};

template<> struct mcu_traits<STM32F078CBYx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
};

template<> struct mcu_traits<STM32F078RBHx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
};

template<> struct mcu_traits<STM32F078RBTx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
};

template<> struct mcu_traits<STM32F078VBHx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
};

template<> struct mcu_traits<STM32F078VBTx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
};

template<> struct mcu_traits<STM32F098CCTx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
};

template<> struct mcu_traits<STM32F098CCUx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
};

template<> struct mcu_traits<STM32F098RCHx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
};

template<> struct mcu_traits<STM32F098RCTx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
};

template<> struct mcu_traits<STM32F098RCYx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
};

template<> struct mcu_traits<STM32F098VCHx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
};

template<> struct mcu_traits<STM32F098VCTx>
{
    static constexpr mcu_family_t mcu_family = STM32F0;
    static constexpr mcu_svd_t mcu_svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
};

static constexpr mcu_t target = MCU;