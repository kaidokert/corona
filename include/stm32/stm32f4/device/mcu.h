#pragma once

////
//
//      STM32F4 MCUs
//
////

enum mcu_t
    { STM32F401CBUx
    , STM32F401CCFx
    , STM32F401CCUx
    , STM32F401CCYx
    , STM32F401CDUx
    , STM32F401CDYx
    , STM32F401CEUx
    , STM32F401CEYx
    , STM32F401RBTx
    , STM32F401RCTx
    , STM32F401RDTx
    , STM32F401RETx
    , STM32F401VBHx
    , STM32F401VBTx
    , STM32F401VCHx
    , STM32F401VCTx
    , STM32F401VDHx
    , STM32F401VDTx
    , STM32F401VEHx
    , STM32F401VETx
    , STM32F405OEYx
    , STM32F405OGYx
    , STM32F405RGTx
    , STM32F405VGTx
    , STM32F405ZGTx
    , STM32F407IEHx
    , STM32F407IETx
    , STM32F407IGHx
    , STM32F407IGTx
    , STM32F407VETx
    , STM32F407VGTx
    , STM32F407ZETx
    , STM32F407ZGTx
    , STM32F410C8Ux
    , STM32F410CBTx
    , STM32F410CBUx
    , STM32F410R8Tx
    , STM32F410RBIx
    , STM32F410RBTx
    , STM32F410T8Yx
    , STM32F410TBYx
    , STM32F411CCUx
    , STM32F411CCYx
    , STM32F411CEUx
    , STM32F411CEYx
    , STM32F411RCTx
    , STM32F411RETx
    , STM32F411VCTx
    , STM32F411VEHx
    , STM32F411VETx
    , STM32F412CEUx
    , STM32F412CGUx
    , STM32F412RETx
    , STM32F412REYx
    , STM32F412RGTx
    , STM32F412RGYx
    , STM32F412RGYxP
    , STM32F412VEHx
    , STM32F412VETx
    , STM32F412VGHx
    , STM32F412VGTx
    , STM32F412ZEJx
    , STM32F412ZETx
    , STM32F412ZGJx
    , STM32F412ZGTx
    , STM32F413CGUx
    , STM32F413CHUx
    , STM32F413MGYx
    , STM32F413MHYx
    , STM32F413RGTx
    , STM32F413RHTx
    , STM32F413VGHx
    , STM32F413VGTx
    , STM32F413VHHx
    , STM32F413VHTx
    , STM32F413ZGJx
    , STM32F413ZGTx
    , STM32F413ZHJx
    , STM32F413ZHTx
    , STM32F415OGYx
    , STM32F415RGTx
    , STM32F415VGTx
    , STM32F415ZGTx
    , STM32F417IEHx
    , STM32F417IETx
    , STM32F417IGHx
    , STM32F417IGTx
    , STM32F417VETx
    , STM32F417VGTx
    , STM32F417ZETx
    , STM32F417ZGTx
    , STM32F423CHUx
    , STM32F423MHYx
    , STM32F423RHTx
    , STM32F423VHHx
    , STM32F423VHTx
    , STM32F423ZHJx
    , STM32F423ZHTx
    , STM32F427AGHx
    , STM32F427AIHx
    , STM32F427IGHx
    , STM32F427IGTx
    , STM32F427IIHx
    , STM32F427IITx
    , STM32F427VGTx
    , STM32F427VITx
    , STM32F427ZGTx
    , STM32F427ZITx
    , STM32F429AGHx
    , STM32F429AIHx
    , STM32F429BETx
    , STM32F429BGTx
    , STM32F429BITx
    , STM32F429IEHx
    , STM32F429IETx
    , STM32F429IGHx
    , STM32F429IGTx
    , STM32F429IIHx
    , STM32F429IITx
    , STM32F429NEHx
    , STM32F429NGHx
    , STM32F429NIHx
    , STM32F429VETx
    , STM32F429VGTx
    , STM32F429VITx
    , STM32F429ZETx
    , STM32F429ZGTx
    , STM32F429ZGYx
    , STM32F429ZITx
    , STM32F429ZIYx
    , STM32F437AIHx
    , STM32F437IGHx
    , STM32F437IGTx
    , STM32F437IIHx
    , STM32F437IITx
    , STM32F437VGTx
    , STM32F437VITx
    , STM32F437ZGTx
    , STM32F437ZITx
    , STM32F439AIHx
    , STM32F439BGTx
    , STM32F439BITx
    , STM32F439IGHx
    , STM32F439IGTx
    , STM32F439IIHx
    , STM32F439IITx
    , STM32F439NGHx
    , STM32F439NIHx
    , STM32F439VGTx
    , STM32F439VITx
    , STM32F439ZGTx
    , STM32F439ZGYx
    , STM32F439ZITx
    , STM32F439ZIYx
    , STM32F446MCYx
    , STM32F446MEYx
    , STM32F446RCTx
    , STM32F446RETx
    , STM32F446VCTx
    , STM32F446VETx
    , STM32F446ZCHx
    , STM32F446ZCJx
    , STM32F446ZCTx
    , STM32F446ZEHx
    , STM32F446ZEJx
    , STM32F446ZETx
    , STM32F469AEHx
    , STM32F469AGHx
    , STM32F469AGYx
    , STM32F469AIHx
    , STM32F469AIYx
    , STM32F469BETx
    , STM32F469BGTx
    , STM32F469BITx
    , STM32F469IEHx
    , STM32F469IGHx
    , STM32F469IGTx
    , STM32F469IIHx
    , STM32F469IITx
    , STM32F469NEHx
    , STM32F469NGHx
    , STM32F469NIHx
    , STM32F469VETx
    , STM32F469VGTx
    , STM32F469VITx
    , STM32F469ZETx
    , STM32F469ZGTx
    , STM32F469ZITx
    , STM32F479AGHx
    , STM32F479AIHx
    , STM32F479AIYx
    , STM32F479BGTx
    , STM32F479BITx
    , STM32F479IGHx
    , STM32F479IITx
    , STM32F479NGHx
    , STM32F479NIHx
    , STM32F479VGTx
    , STM32F479VITx
    , STM32F479ZGTx
    , STM32F479ZITx
    };

enum mcu_svd_t
    { STM32F401
    , STM32F405
    , STM32F407
    , STM32F410
    , STM32F411
    , STM32F412
    , STM32F413
    , STM32F427
    , STM32F429
    , STM32F446
    , STM32F469
    };

enum gpio_conf_t
    { STM32F401 = 0x1
    , STM32F410 = 0x2
    , STM32F411 = 0x4
    , STM32F412 = 0x8
    , STM32F413 = 0x10
    , STM32F417 = 0x20
    , STM32F427 = 0x40
    , STM32F446 = 0x80
    , STM32F469 = 0x100
    };

template<mcu_t MCU> struct mcu_traits {};

template<> struct mcu_traits<STM32F401CBUx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401;
};

template<> struct mcu_traits<STM32F401CCUx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401;
};

template<> struct mcu_traits<STM32F401CCYx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401;
};

template<> struct mcu_traits<STM32F401CDUx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401;
};

template<> struct mcu_traits<STM32F401CEUx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401;
};

template<> struct mcu_traits<STM32F401CDYx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401;
};

template<> struct mcu_traits<STM32F401CEYx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401;
};

template<> struct mcu_traits<STM32F401CCFx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401;
};

template<> struct mcu_traits<STM32F401RBTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401;
};

template<> struct mcu_traits<STM32F401RCTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401;
};

template<> struct mcu_traits<STM32F401RDTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401;
};

template<> struct mcu_traits<STM32F401RETx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401;
};

template<> struct mcu_traits<STM32F401VBHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401;
};

template<> struct mcu_traits<STM32F401VCHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401;
};

template<> struct mcu_traits<STM32F401VBTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401;
};

template<> struct mcu_traits<STM32F401VCTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401;
};

template<> struct mcu_traits<STM32F401VDHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401;
};

template<> struct mcu_traits<STM32F401VEHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401;
};

template<> struct mcu_traits<STM32F401VDTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401;
};

template<> struct mcu_traits<STM32F401VETx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401;
};

template<> struct mcu_traits<STM32F405OEYx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F405;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
};

template<> struct mcu_traits<STM32F405OGYx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F405;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
};

template<> struct mcu_traits<STM32F405RGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F405;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
};

template<> struct mcu_traits<STM32F405VGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F405;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
};

template<> struct mcu_traits<STM32F405ZGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F405;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
};

template<> struct mcu_traits<STM32F415OGYx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F405;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
};

template<> struct mcu_traits<STM32F415RGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F405;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
};

template<> struct mcu_traits<STM32F415VGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F405;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
};

template<> struct mcu_traits<STM32F415ZGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F405;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
};

template<> struct mcu_traits<STM32F407IEHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F407;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
};

template<> struct mcu_traits<STM32F407IGHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F407;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
};

template<> struct mcu_traits<STM32F407IETx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F407;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
};

template<> struct mcu_traits<STM32F407IGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F407;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
};

template<> struct mcu_traits<STM32F407VETx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F407;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
};

template<> struct mcu_traits<STM32F407VGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F407;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
};

template<> struct mcu_traits<STM32F407ZETx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F407;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
};

template<> struct mcu_traits<STM32F407ZGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F407;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
};

template<> struct mcu_traits<STM32F417IEHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F407;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
};

template<> struct mcu_traits<STM32F417IGHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F407;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
};

template<> struct mcu_traits<STM32F417IETx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F407;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
};

template<> struct mcu_traits<STM32F417IGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F407;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
};

template<> struct mcu_traits<STM32F417VETx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F407;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
};

template<> struct mcu_traits<STM32F417VGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F407;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
};

template<> struct mcu_traits<STM32F417ZETx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F407;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
};

template<> struct mcu_traits<STM32F417ZGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F407;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
};

template<> struct mcu_traits<STM32F410CBTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F410;
    static constexpr gpio_conf_t gpio_conf = STM32F410;
};

template<> struct mcu_traits<STM32F410C8Ux>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F410;
    static constexpr gpio_conf_t gpio_conf = STM32F410;
};

template<> struct mcu_traits<STM32F410CBUx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F410;
    static constexpr gpio_conf_t gpio_conf = STM32F410;
};

template<> struct mcu_traits<STM32F410RBIx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F410;
    static constexpr gpio_conf_t gpio_conf = STM32F410;
};

template<> struct mcu_traits<STM32F410R8Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F410;
    static constexpr gpio_conf_t gpio_conf = STM32F410;
};

template<> struct mcu_traits<STM32F410RBTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F410;
    static constexpr gpio_conf_t gpio_conf = STM32F410;
};

template<> struct mcu_traits<STM32F410T8Yx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F410;
    static constexpr gpio_conf_t gpio_conf = STM32F410;
};

template<> struct mcu_traits<STM32F410TBYx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F410;
    static constexpr gpio_conf_t gpio_conf = STM32F410;
};

template<> struct mcu_traits<STM32F411CCUx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F411;
    static constexpr gpio_conf_t gpio_conf = STM32F411;
};

template<> struct mcu_traits<STM32F411CEUx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F411;
    static constexpr gpio_conf_t gpio_conf = STM32F411;
};

template<> struct mcu_traits<STM32F411CCYx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F411;
    static constexpr gpio_conf_t gpio_conf = STM32F411;
};

template<> struct mcu_traits<STM32F411CEYx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F411;
    static constexpr gpio_conf_t gpio_conf = STM32F411;
};

template<> struct mcu_traits<STM32F411RCTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F411;
    static constexpr gpio_conf_t gpio_conf = STM32F411;
};

template<> struct mcu_traits<STM32F411RETx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F411;
    static constexpr gpio_conf_t gpio_conf = STM32F411;
};

template<> struct mcu_traits<STM32F411VEHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F411;
    static constexpr gpio_conf_t gpio_conf = STM32F411;
};

template<> struct mcu_traits<STM32F411VCTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F411;
    static constexpr gpio_conf_t gpio_conf = STM32F411;
};

template<> struct mcu_traits<STM32F411VETx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F411;
    static constexpr gpio_conf_t gpio_conf = STM32F411;
};

template<> struct mcu_traits<STM32F412CEUx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F412;
    static constexpr gpio_conf_t gpio_conf = STM32F412;
};

template<> struct mcu_traits<STM32F412CGUx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F412;
    static constexpr gpio_conf_t gpio_conf = STM32F412;
};

template<> struct mcu_traits<STM32F412RETx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F412;
    static constexpr gpio_conf_t gpio_conf = STM32F412;
};

template<> struct mcu_traits<STM32F412RGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F412;
    static constexpr gpio_conf_t gpio_conf = STM32F412;
};

template<> struct mcu_traits<STM32F412REYx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F412;
    static constexpr gpio_conf_t gpio_conf = STM32F412;
};

template<> struct mcu_traits<STM32F412RGYx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F412;
    static constexpr gpio_conf_t gpio_conf = STM32F412;
};

template<> struct mcu_traits<STM32F412RGYxP>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F412;
    static constexpr gpio_conf_t gpio_conf = STM32F412;
};

template<> struct mcu_traits<STM32F412VEHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F412;
    static constexpr gpio_conf_t gpio_conf = STM32F412;
};

template<> struct mcu_traits<STM32F412VGHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F412;
    static constexpr gpio_conf_t gpio_conf = STM32F412;
};

template<> struct mcu_traits<STM32F412VETx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F412;
    static constexpr gpio_conf_t gpio_conf = STM32F412;
};

template<> struct mcu_traits<STM32F412VGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F412;
    static constexpr gpio_conf_t gpio_conf = STM32F412;
};

template<> struct mcu_traits<STM32F412ZEJx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F412;
    static constexpr gpio_conf_t gpio_conf = STM32F412;
};

template<> struct mcu_traits<STM32F412ZGJx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F412;
    static constexpr gpio_conf_t gpio_conf = STM32F412;
};

template<> struct mcu_traits<STM32F412ZETx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F412;
    static constexpr gpio_conf_t gpio_conf = STM32F412;
};

template<> struct mcu_traits<STM32F412ZGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F412;
    static constexpr gpio_conf_t gpio_conf = STM32F412;
};

template<> struct mcu_traits<STM32F413CGUx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413;
};

template<> struct mcu_traits<STM32F413CHUx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413;
};

template<> struct mcu_traits<STM32F413MGYx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413;
};

template<> struct mcu_traits<STM32F413MHYx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413;
};

template<> struct mcu_traits<STM32F413RGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413;
};

template<> struct mcu_traits<STM32F413RHTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413;
};

template<> struct mcu_traits<STM32F413VGHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413;
};

template<> struct mcu_traits<STM32F413VHHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413;
};

template<> struct mcu_traits<STM32F413VGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413;
};

template<> struct mcu_traits<STM32F413VHTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413;
};

template<> struct mcu_traits<STM32F413ZGJx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413;
};

template<> struct mcu_traits<STM32F413ZHJx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413;
};

template<> struct mcu_traits<STM32F413ZGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413;
};

template<> struct mcu_traits<STM32F413ZHTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413;
};

template<> struct mcu_traits<STM32F423CHUx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413;
};

template<> struct mcu_traits<STM32F423MHYx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413;
};

template<> struct mcu_traits<STM32F423RHTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413;
};

template<> struct mcu_traits<STM32F423VHHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413;
};

template<> struct mcu_traits<STM32F423VHTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413;
};

template<> struct mcu_traits<STM32F423ZHJx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413;
};

template<> struct mcu_traits<STM32F423ZHTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413;
};

template<> struct mcu_traits<STM32F427AGHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F427;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F427AIHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F427;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F427IGHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F427;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F427IIHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F427;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F427IGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F427;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F427IITx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F427;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F427VGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F427;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F427VITx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F427;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F427ZGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F427;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F427ZITx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F427;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F437AIHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F427;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F437IGHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F427;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F437IIHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F427;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F437IGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F427;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F437IITx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F427;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F437VGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F427;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F437VITx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F427;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F437ZGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F427;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F437ZITx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F427;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F429AGHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F429AIHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F429BETx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F429BGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F429BITx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F429IETx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F429IGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F429IEHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F429IGHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F429IIHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F429IITx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F429NEHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F429NGHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F429NIHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F429VETx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F429VGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F429VITx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F429ZETx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F429ZGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F429ZGYx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F429ZITx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F429ZIYx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F439AIHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F439BGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F439BITx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F439IGHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F439IIHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F439IGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F439IITx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F439NGHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F439NIHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F439VGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F439VITx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F439ZGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F439ZITx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F439ZGYx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F439ZIYx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427;
};

template<> struct mcu_traits<STM32F446MCYx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F446;
    static constexpr gpio_conf_t gpio_conf = STM32F446;
};

template<> struct mcu_traits<STM32F446MEYx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F446;
    static constexpr gpio_conf_t gpio_conf = STM32F446;
};

template<> struct mcu_traits<STM32F446RCTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F446;
    static constexpr gpio_conf_t gpio_conf = STM32F446;
};

template<> struct mcu_traits<STM32F446RETx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F446;
    static constexpr gpio_conf_t gpio_conf = STM32F446;
};

template<> struct mcu_traits<STM32F446VCTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F446;
    static constexpr gpio_conf_t gpio_conf = STM32F446;
};

template<> struct mcu_traits<STM32F446VETx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F446;
    static constexpr gpio_conf_t gpio_conf = STM32F446;
};

template<> struct mcu_traits<STM32F446ZCHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F446;
    static constexpr gpio_conf_t gpio_conf = STM32F446;
};

template<> struct mcu_traits<STM32F446ZEHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F446;
    static constexpr gpio_conf_t gpio_conf = STM32F446;
};

template<> struct mcu_traits<STM32F446ZCJx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F446;
    static constexpr gpio_conf_t gpio_conf = STM32F446;
};

template<> struct mcu_traits<STM32F446ZEJx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F446;
    static constexpr gpio_conf_t gpio_conf = STM32F446;
};

template<> struct mcu_traits<STM32F446ZCTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F446;
    static constexpr gpio_conf_t gpio_conf = STM32F446;
};

template<> struct mcu_traits<STM32F446ZETx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F446;
    static constexpr gpio_conf_t gpio_conf = STM32F446;
};

template<> struct mcu_traits<STM32F469AEHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469;
};

template<> struct mcu_traits<STM32F469AGHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469;
};

template<> struct mcu_traits<STM32F469AIHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469;
};

template<> struct mcu_traits<STM32F469AGYx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469;
};

template<> struct mcu_traits<STM32F469AIYx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469;
};

template<> struct mcu_traits<STM32F469BETx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469;
};

template<> struct mcu_traits<STM32F469BGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469;
};

template<> struct mcu_traits<STM32F469BITx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469;
};

template<> struct mcu_traits<STM32F469IGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469;
};

template<> struct mcu_traits<STM32F469IEHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469;
};

template<> struct mcu_traits<STM32F469IGHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469;
};

template<> struct mcu_traits<STM32F469IIHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469;
};

template<> struct mcu_traits<STM32F469IITx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469;
};

template<> struct mcu_traits<STM32F469NEHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469;
};

template<> struct mcu_traits<STM32F469NGHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469;
};

template<> struct mcu_traits<STM32F469NIHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469;
};

template<> struct mcu_traits<STM32F469VETx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469;
};

template<> struct mcu_traits<STM32F469VGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469;
};

template<> struct mcu_traits<STM32F469VITx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469;
};

template<> struct mcu_traits<STM32F469ZETx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469;
};

template<> struct mcu_traits<STM32F469ZGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469;
};

template<> struct mcu_traits<STM32F469ZITx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469;
};

template<> struct mcu_traits<STM32F479AGHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469;
};

template<> struct mcu_traits<STM32F479AIHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469;
};

template<> struct mcu_traits<STM32F479AIYx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469;
};

template<> struct mcu_traits<STM32F479BGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469;
};

template<> struct mcu_traits<STM32F479BITx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469;
};

template<> struct mcu_traits<STM32F479IGHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469;
};

template<> struct mcu_traits<STM32F479IITx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469;
};

template<> struct mcu_traits<STM32F479NGHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469;
};

template<> struct mcu_traits<STM32F479NIHx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469;
};

template<> struct mcu_traits<STM32F479VGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469;
};

template<> struct mcu_traits<STM32F479VITx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469;
};

template<> struct mcu_traits<STM32F479ZGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469;
};

template<> struct mcu_traits<STM32F479ZITx>
{
    static constexpr mcu_family_t mcu_family = STM32F4;
    static constexpr mcu_svd_t mcu_svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469;
};

static constexpr mcu_t target = MCU;