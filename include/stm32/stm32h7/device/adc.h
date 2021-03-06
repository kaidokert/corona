#pragma once

////
//
//      STM32H7 ADC peripherals
//
///

// ADC1: Analog to Digital Converter

struct stm32h7a3x_adc1_t
{
    volatile uint32_t ISR; // ADC interrupt and status register
    volatile uint32_t IER; // ADC interrupt enable register
    volatile uint32_t CR; // ADC control register
    volatile uint32_t CFGR; // ADC configuration register 1
    volatile uint32_t CFGR2; // ADC configuration register 2
    volatile uint32_t SMPR1; // ADC sampling time register 1
    volatile uint32_t SMPR2; // ADC sampling time register 2
    volatile uint32_t PCSEL; // ADC pre channel selection register
    volatile uint32_t LTR1; // ADC analog watchdog 1 threshold register
    volatile uint32_t LHTR1; // ADC analog watchdog 2 threshold register
    reserved_t<0x2> _0x28;
    volatile uint32_t SQR1; // ADC group regular sequencer ranks register 1
    volatile uint32_t SQR2; // ADC group regular sequencer ranks register 2
    volatile uint32_t SQR3; // ADC group regular sequencer ranks register 3
    volatile uint32_t SQR4; // ADC group regular sequencer ranks register 4
    volatile uint32_t DR; // ADC group regular conversion data register
    reserved_t<0x2> _0x44;
    volatile uint32_t JSQR; // ADC group injected sequencer register
    reserved_t<0x4> _0x50;
    volatile uint32_t OFR1; // ADC offset number 1 register
    volatile uint32_t OFR2; // ADC offset number 2 register
    volatile uint32_t OFR3; // ADC offset number 3 register
    volatile uint32_t OFR4; // ADC offset number 4 register
    reserved_t<0x4> _0x70;
    volatile uint32_t JDR1; // ADC group injected sequencer rank 1 register
    volatile uint32_t JDR2; // ADC group injected sequencer rank 2 register
    volatile uint32_t JDR3; // ADC group injected sequencer rank 3 register
    volatile uint32_t JDR4; // ADC group injected sequencer rank 4 register
    reserved_t<0x4> _0x90;
    volatile uint32_t AWD2CR; // ADC analog watchdog 2 configuration register
    volatile uint32_t AWD3CR; // ADC analog watchdog 3 configuration register
    reserved_t<0x2> _0xa8;
    volatile uint32_t LTR2; // ADC watchdog lower threshold register 2
    volatile uint32_t HTR2; // ADC watchdog higher threshold register 2
    volatile uint32_t LTR3; // ADC watchdog lower threshold register 3
    volatile uint32_t HTR3; // ADC watchdog higher threshold register 3
    volatile uint32_t DIFSEL; // ADC channel differential or single-ended mode selection register
    volatile uint32_t CALFACT; // ADC calibration factors register
    volatile uint32_t CALFACT2; // ADC Calibration Factor register 2

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_JQOVF = 0x400; // ADC group injected contexts queue overflow flag
    static constexpr uint32_t ISR_AWD3 = 0x200; // ADC analog watchdog 3 flag
    static constexpr uint32_t ISR_AWD2 = 0x100; // ADC analog watchdog 2 flag
    static constexpr uint32_t ISR_AWD1 = 0x80; // ADC analog watchdog 1 flag
    static constexpr uint32_t ISR_JEOS = 0x40; // ADC group injected end of sequence conversions flag
    static constexpr uint32_t ISR_JEOC = 0x20; // ADC group injected end of unitary conversion flag
    static constexpr uint32_t ISR_OVR = 0x10; // ADC group regular overrun flag
    static constexpr uint32_t ISR_EOS = 0x8; // ADC group regular end of sequence conversions flag
    static constexpr uint32_t ISR_EOC = 0x4; // ADC group regular end of unitary conversion flag
    static constexpr uint32_t ISR_EOSMP = 0x2; // ADC group regular end of sampling flag
    static constexpr uint32_t ISR_ADRDY = 0x1; // ADC ready flag

    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_JQOVFIE = 0x400; // ADC group injected contexts queue overflow interrupt
    static constexpr uint32_t IER_AWD3IE = 0x200; // ADC analog watchdog 3 interrupt
    static constexpr uint32_t IER_AWD2IE = 0x100; // ADC analog watchdog 2 interrupt
    static constexpr uint32_t IER_AWD1IE = 0x80; // ADC analog watchdog 1 interrupt
    static constexpr uint32_t IER_JEOSIE = 0x40; // ADC group injected end of sequence conversions interrupt
    static constexpr uint32_t IER_JEOCIE = 0x20; // ADC group injected end of unitary conversion interrupt
    static constexpr uint32_t IER_OVRIE = 0x10; // ADC group regular overrun interrupt
    static constexpr uint32_t IER_EOSIE = 0x8; // ADC group regular end of sequence conversions interrupt
    static constexpr uint32_t IER_EOCIE = 0x4; // ADC group regular end of unitary conversion interrupt
    static constexpr uint32_t IER_EOSMPIE = 0x2; // ADC group regular end of sampling interrupt
    static constexpr uint32_t IER_ADRDYIE = 0x1; // ADC ready interrupt

    static constexpr uint32_t CR_RESET_VALUE = 0x20000000; // Reset value
    static constexpr uint32_t CR_ADCAL = 0x80000000; // ADC calibration
    static constexpr uint32_t CR_ADCALDIF = 0x40000000; // ADC differential mode for calibration
    static constexpr uint32_t CR_DEEPPWD = 0x20000000; // ADC deep power down enable
    static constexpr uint32_t CR_ADVREGEN = 0x10000000; // ADC voltage regulator enable
    static constexpr uint32_t CR_LINCALRDYW6 = 0x8000000; // Linearity calibration ready Word 6
    static constexpr uint32_t CR_LINCALRDYW5 = 0x4000000; // Linearity calibration ready Word 5
    static constexpr uint32_t CR_LINCALRDYW4 = 0x2000000; // Linearity calibration ready Word 4
    static constexpr uint32_t CR_LINCALRDYW3 = 0x1000000; // Linearity calibration ready Word 3
    static constexpr uint32_t CR_LINCALRDYW2 = 0x800000; // Linearity calibration ready Word 2
    static constexpr uint32_t CR_LINCALRDYW1 = 0x400000; // Linearity calibration ready Word 1
    static constexpr uint32_t CR_ADCALLIN = 0x10000; // Linearity calibration
    static constexpr uint32_t CR_BOOST = 0x100; // Boost mode control
    static constexpr uint32_t CR_JADSTP = 0x20; // ADC group injected conversion stop
    static constexpr uint32_t CR_ADSTP = 0x10; // ADC group regular conversion stop
    static constexpr uint32_t CR_JADSTART = 0x8; // ADC group injected conversion start
    static constexpr uint32_t CR_ADSTART = 0x4; // ADC group regular conversion start
    static constexpr uint32_t CR_ADDIS = 0x2; // ADC disable
    static constexpr uint32_t CR_ADEN = 0x1; // ADC enable

    static constexpr uint32_t CFGR_RESET_VALUE = 0x80000000; // Reset value
    static constexpr uint32_t CFGR_JQDIS = 0x80000000; // ADC group injected contexts queue disable
    typedef bit_field_t<26, 0x1f> CFGR_AWDCH1CH; // ADC analog watchdog 1 monitored channel selection
    static constexpr uint32_t CFGR_JAUTO = 0x2000000; // ADC group injected automatic trigger mode
    static constexpr uint32_t CFGR_JAWD1EN = 0x1000000; // ADC analog watchdog 1 enable on scope ADC group injected
    static constexpr uint32_t CFGR_AWD1EN = 0x800000; // ADC analog watchdog 1 enable on scope ADC group regular
    static constexpr uint32_t CFGR_AWD1SGL = 0x400000; // ADC analog watchdog 1 monitoring a single channel or all channels
    static constexpr uint32_t CFGR_JQM = 0x200000; // ADC group injected contexts queue mode
    static constexpr uint32_t CFGR_JDISCEN = 0x100000; // ADC group injected sequencer discontinuous mode
    typedef bit_field_t<17, 0x7> CFGR_DISCNUM; // ADC group regular sequencer discontinuous number of ranks
    static constexpr uint32_t CFGR_DISCEN = 0x10000; // ADC group regular sequencer discontinuous mode
    static constexpr uint32_t CFGR_AUTDLY = 0x4000; // ADC low power auto wait
    static constexpr uint32_t CFGR_CONT = 0x2000; // ADC group regular continuous conversion mode
    static constexpr uint32_t CFGR_OVRMOD = 0x1000; // ADC group regular overrun configuration
    typedef bit_field_t<10, 0x3> CFGR_EXTEN; // ADC group regular external trigger polarity
    typedef bit_field_t<5, 0x1f> CFGR_EXTSEL; // ADC group regular external trigger source
    typedef bit_field_t<2, 0x3> CFGR_RES; // ADC data resolution
    typedef bit_field_t<0, 0x3> CFGR_DMNGT; // ADC DMA transfer enable

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR2_ROVSE = 0x1; // ADC oversampler enable on scope ADC group regular
    static constexpr uint32_t CFGR2_JOVSE = 0x2; // ADC oversampler enable on scope ADC group injected
    typedef bit_field_t<5, 0xf> CFGR2_OVSS; // ADC oversampling shift
    static constexpr uint32_t CFGR2_TROVS = 0x200; // ADC oversampling discontinuous mode (triggered mode) for ADC group regular
    static constexpr uint32_t CFGR2_ROVSM = 0x400; // Regular Oversampling mode
    static constexpr uint32_t CFGR2_RSHIFT1 = 0x800; // Right-shift data after Offset 1 correction
    static constexpr uint32_t CFGR2_RSHIFT2 = 0x1000; // Right-shift data after Offset 2 correction
    static constexpr uint32_t CFGR2_RSHIFT3 = 0x2000; // Right-shift data after Offset 3 correction
    static constexpr uint32_t CFGR2_RSHIFT4 = 0x4000; // Right-shift data after Offset 4 correction
    typedef bit_field_t<16, 0x3ff> CFGR2_OSR; // Oversampling ratio
    typedef bit_field_t<28, 0xf> CFGR2_LSHIFT; // Left shift factor

    static constexpr uint32_t SMPR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<27, 0x7> SMPR1_SMP9; // ADC channel 9 sampling time selection
    typedef bit_field_t<24, 0x7> SMPR1_SMP8; // ADC channel 8 sampling time selection
    typedef bit_field_t<21, 0x7> SMPR1_SMP7; // ADC channel 7 sampling time selection
    typedef bit_field_t<18, 0x7> SMPR1_SMP6; // ADC channel 6 sampling time selection
    typedef bit_field_t<15, 0x7> SMPR1_SMP5; // ADC channel 5 sampling time selection
    typedef bit_field_t<12, 0x7> SMPR1_SMP4; // ADC channel 4 sampling time selection
    typedef bit_field_t<9, 0x7> SMPR1_SMP3; // ADC channel 3 sampling time selection
    typedef bit_field_t<6, 0x7> SMPR1_SMP2; // ADC channel 2 sampling time selection
    typedef bit_field_t<3, 0x7> SMPR1_SMP1; // ADC channel 1 sampling time selection

    static constexpr uint32_t SMPR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<27, 0x7> SMPR2_SMP19; // ADC channel 18 sampling time selection
    typedef bit_field_t<24, 0x7> SMPR2_SMP18; // ADC channel 18 sampling time selection
    typedef bit_field_t<21, 0x7> SMPR2_SMP17; // ADC channel 17 sampling time selection
    typedef bit_field_t<18, 0x7> SMPR2_SMP16; // ADC channel 16 sampling time selection
    typedef bit_field_t<15, 0x7> SMPR2_SMP15; // ADC channel 15 sampling time selection
    typedef bit_field_t<12, 0x7> SMPR2_SMP14; // ADC channel 14 sampling time selection
    typedef bit_field_t<9, 0x7> SMPR2_SMP13; // ADC channel 13 sampling time selection
    typedef bit_field_t<6, 0x7> SMPR2_SMP12; // ADC channel 12 sampling time selection
    typedef bit_field_t<3, 0x7> SMPR2_SMP11; // ADC channel 11 sampling time selection
    typedef bit_field_t<0, 0x7> SMPR2_SMP10; // ADC channel 10 sampling time selection

    static constexpr uint32_t PCSEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> PCSEL_PCSEL; // Channel x (VINP[i]) pre selection

    static constexpr uint32_t LTR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LTR1_LTR1; // ADC analog watchdog 1 threshold low

    static constexpr uint32_t LHTR1_RESET_VALUE = 0x3ffffff; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LHTR1_LHTR1; // ADC analog watchdog 2 threshold low


    static constexpr uint32_t SQR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> SQR1_SQ4; // ADC group regular sequencer rank 4
    typedef bit_field_t<18, 0x1f> SQR1_SQ3; // ADC group regular sequencer rank 3
    typedef bit_field_t<12, 0x1f> SQR1_SQ2; // ADC group regular sequencer rank 2
    typedef bit_field_t<6, 0x1f> SQR1_SQ1; // ADC group regular sequencer rank 1
    typedef bit_field_t<0, 0xf> SQR1_L3; // L3

    static constexpr uint32_t SQR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> SQR2_SQ9; // ADC group regular sequencer rank 9
    typedef bit_field_t<18, 0x1f> SQR2_SQ8; // ADC group regular sequencer rank 8
    typedef bit_field_t<12, 0x1f> SQR2_SQ7; // ADC group regular sequencer rank 7
    typedef bit_field_t<6, 0x1f> SQR2_SQ6; // ADC group regular sequencer rank 6
    typedef bit_field_t<0, 0x1f> SQR2_SQ5; // ADC group regular sequencer rank 5

    static constexpr uint32_t SQR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> SQR3_SQ14; // ADC group regular sequencer rank 14
    typedef bit_field_t<18, 0x1f> SQR3_SQ13; // ADC group regular sequencer rank 13
    typedef bit_field_t<12, 0x1f> SQR3_SQ12; // ADC group regular sequencer rank 12
    typedef bit_field_t<6, 0x1f> SQR3_SQ11; // ADC group regular sequencer rank 11
    typedef bit_field_t<0, 0x1f> SQR3_SQ10; // ADC group regular sequencer rank 10

    static constexpr uint32_t SQR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<6, 0x1f> SQR4_SQ16; // ADC group regular sequencer rank 16
    typedef bit_field_t<0, 0x1f> SQR4_SQ15; // ADC group regular sequencer rank 15

    static constexpr uint32_t DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR_RDATA; // ADC group regular conversion data


    static constexpr uint32_t JSQR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<27, 0x1f> JSQR_JSQ4; // ADC group injected sequencer rank 4
    typedef bit_field_t<21, 0x1f> JSQR_JSQ3; // ADC group injected sequencer rank 3
    typedef bit_field_t<15, 0x1f> JSQR_JSQ2; // ADC group injected sequencer rank 2
    typedef bit_field_t<9, 0x1f> JSQR_JSQ1; // ADC group injected sequencer rank 1
    typedef bit_field_t<7, 0x3> JSQR_JEXTEN; // ADC group injected external trigger polarity
    typedef bit_field_t<2, 0x1f> JSQR_JEXTSEL; // ADC group injected external trigger source
    typedef bit_field_t<0, 0x3> JSQR_JL; // ADC group injected sequencer scan length


    static constexpr uint32_t OFR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR1_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR1_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR1_OFFSET1; // ADC offset number 1 offset level

    static constexpr uint32_t OFR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR2_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR2_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR2_OFFSET1; // ADC offset number 1 offset level

    static constexpr uint32_t OFR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR3_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR3_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR3_OFFSET1; // ADC offset number 1 offset level

    static constexpr uint32_t OFR4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR4_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR4_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR4_OFFSET1; // ADC offset number 1 offset level


    static constexpr uint32_t JDR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR1_JDATA1; // ADC group injected sequencer rank 1 conversion data

    static constexpr uint32_t JDR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR2_JDATA2; // ADC group injected sequencer rank 2 conversion data

    static constexpr uint32_t JDR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR3_JDATA3; // ADC group injected sequencer rank 3 conversion data

    static constexpr uint32_t JDR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR4_JDATA4; // ADC group injected sequencer rank 4 conversion data


    static constexpr uint32_t AWD2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> AWD2CR_AWD2CH; // ADC analog watchdog 2 monitored channel selection

    static constexpr uint32_t AWD3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<1, 0xfffff> AWD3CR_AWD3CH; // ADC analog watchdog 3 monitored channel selection


    static constexpr uint32_t LTR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LTR2_LTR2; // Analog watchdog 2 lower threshold

    static constexpr uint32_t HTR2_RESET_VALUE = 0x3ffffff; // Reset value
    typedef bit_field_t<0, 0x3ffffff> HTR2_HTR2; // Analog watchdog 2 higher threshold

    static constexpr uint32_t LTR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LTR3_LTR3; // Analog watchdog 3 lower threshold

    static constexpr uint32_t HTR3_RESET_VALUE = 0x3ffffff; // Reset value
    typedef bit_field_t<0, 0x3ffffff> HTR3_HTR3; // Analog watchdog 3 higher threshold

    static constexpr uint32_t DIFSEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> DIFSEL_DIFSEL; // ADC channel differential or single-ended mode for channel

    static constexpr uint32_t CALFACT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0x7ff> CALFACT_CALFACT_D; // ADC calibration factor in differential mode
    typedef bit_field_t<0, 0x7ff> CALFACT_CALFACT_S; // ADC calibration factor in single-ended mode

    static constexpr uint32_t CALFACT2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fffffff> CALFACT2_LINCALFACT; // Linearity Calibration Factor
};

// ADC2: Analog to Digital Converter

struct stm32h7a3x_adc2_t
{
    volatile uint32_t ISR; // ADC interrupt and status register
    volatile uint32_t IER; // ADC interrupt enable register
    volatile uint32_t CR; // ADC control register
    volatile uint32_t CFGR; // ADC configuration register 1
    volatile uint32_t CFGR2; // ADC configuration register 2
    volatile uint32_t SMPR1; // ADC sampling time register 1
    volatile uint32_t SMPR2; // ADC sampling time register 2
    volatile uint32_t PCSEL; // ADC pre channel selection register
    volatile uint32_t LTR1; // ADC analog watchdog 1 threshold register
    volatile uint32_t LHTR1; // ADC analog watchdog 2 threshold register
    reserved_t<0x2> _0x28;
    volatile uint32_t SQR1; // ADC group regular sequencer ranks register 1
    volatile uint32_t SQR2; // ADC group regular sequencer ranks register 2
    volatile uint32_t SQR3; // ADC group regular sequencer ranks register 3
    volatile uint32_t SQR4; // ADC group regular sequencer ranks register 4
    volatile uint32_t DR; // ADC group regular conversion data register
    reserved_t<0x2> _0x44;
    volatile uint32_t JSQR; // ADC group injected sequencer register
    reserved_t<0x4> _0x50;
    volatile uint32_t OFR1; // ADC offset number 1 register
    volatile uint32_t OFR2; // ADC offset number 2 register
    volatile uint32_t OFR3; // ADC offset number 3 register
    volatile uint32_t OFR4; // ADC offset number 4 register
    reserved_t<0x4> _0x70;
    volatile uint32_t JDR1; // ADC group injected sequencer rank 1 register
    volatile uint32_t JDR2; // ADC group injected sequencer rank 2 register
    volatile uint32_t JDR3; // ADC group injected sequencer rank 3 register
    volatile uint32_t JDR4; // ADC group injected sequencer rank 4 register
    reserved_t<0x4> _0x90;
    volatile uint32_t AWD2CR; // ADC analog watchdog 2 configuration register
    volatile uint32_t AWD3CR; // ADC analog watchdog 3 configuration register
    reserved_t<0x2> _0xa8;
    volatile uint32_t LTR2; // ADC watchdog lower threshold register 2
    volatile uint32_t HTR2; // ADC watchdog higher threshold register 2
    volatile uint32_t LTR3; // ADC watchdog lower threshold register 3
    volatile uint32_t HTR3; // ADC watchdog higher threshold register 3
    volatile uint32_t DIFSEL; // ADC channel differential or single-ended mode selection register
    volatile uint32_t CALFACT; // ADC calibration factors register
    volatile uint32_t CALFACT2; // ADC Calibration Factor register 2

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_JQOVF = 0x400; // ADC group injected contexts queue overflow flag
    static constexpr uint32_t ISR_AWD3 = 0x200; // ADC analog watchdog 3 flag
    static constexpr uint32_t ISR_AWD2 = 0x100; // ADC analog watchdog 2 flag
    static constexpr uint32_t ISR_AWD1 = 0x80; // ADC analog watchdog 1 flag
    static constexpr uint32_t ISR_JEOS = 0x40; // ADC group injected end of sequence conversions flag
    static constexpr uint32_t ISR_JEOC = 0x20; // ADC group injected end of unitary conversion flag
    static constexpr uint32_t ISR_OVR = 0x10; // ADC group regular overrun flag
    static constexpr uint32_t ISR_EOS = 0x8; // ADC group regular end of sequence conversions flag
    static constexpr uint32_t ISR_EOC = 0x4; // ADC group regular end of unitary conversion flag
    static constexpr uint32_t ISR_EOSMP = 0x2; // ADC group regular end of sampling flag
    static constexpr uint32_t ISR_ADRDY = 0x1; // ADC ready flag

    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_JQOVFIE = 0x400; // ADC group injected contexts queue overflow interrupt
    static constexpr uint32_t IER_AWD3IE = 0x200; // ADC analog watchdog 3 interrupt
    static constexpr uint32_t IER_AWD2IE = 0x100; // ADC analog watchdog 2 interrupt
    static constexpr uint32_t IER_AWD1IE = 0x80; // ADC analog watchdog 1 interrupt
    static constexpr uint32_t IER_JEOSIE = 0x40; // ADC group injected end of sequence conversions interrupt
    static constexpr uint32_t IER_JEOCIE = 0x20; // ADC group injected end of unitary conversion interrupt
    static constexpr uint32_t IER_OVRIE = 0x10; // ADC group regular overrun interrupt
    static constexpr uint32_t IER_EOSIE = 0x8; // ADC group regular end of sequence conversions interrupt
    static constexpr uint32_t IER_EOCIE = 0x4; // ADC group regular end of unitary conversion interrupt
    static constexpr uint32_t IER_EOSMPIE = 0x2; // ADC group regular end of sampling interrupt
    static constexpr uint32_t IER_ADRDYIE = 0x1; // ADC ready interrupt

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_ADCAL = 0x80000000; // ADC calibration
    static constexpr uint32_t CR_ADCALDIF = 0x40000000; // ADC differential mode for calibration
    static constexpr uint32_t CR_DEEPPWD = 0x20000000; // ADC deep power down enable
    static constexpr uint32_t CR_ADVREGEN = 0x10000000; // ADC voltage regulator enable
    static constexpr uint32_t CR_LINCALRDYW6 = 0x8000000; // Linearity calibration ready Word 6
    static constexpr uint32_t CR_LINCALRDYW5 = 0x4000000; // Linearity calibration ready Word 5
    static constexpr uint32_t CR_LINCALRDYW4 = 0x2000000; // Linearity calibration ready Word 4
    static constexpr uint32_t CR_LINCALRDYW3 = 0x1000000; // Linearity calibration ready Word 3
    static constexpr uint32_t CR_LINCALRDYW2 = 0x800000; // Linearity calibration ready Word 2
    static constexpr uint32_t CR_LINCALRDYW1 = 0x400000; // Linearity calibration ready Word 1
    static constexpr uint32_t CR_ADCALLIN = 0x10000; // Linearity calibration
    static constexpr uint32_t CR_BOOST = 0x100; // Boost mode control
    static constexpr uint32_t CR_JADSTP = 0x20; // ADC group injected conversion stop
    static constexpr uint32_t CR_ADSTP = 0x10; // ADC group regular conversion stop
    static constexpr uint32_t CR_JADSTART = 0x8; // ADC group injected conversion start
    static constexpr uint32_t CR_ADSTART = 0x4; // ADC group regular conversion start
    static constexpr uint32_t CR_ADDIS = 0x2; // ADC disable
    static constexpr uint32_t CR_ADEN = 0x1; // ADC enable

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR_JQDIS = 0x80000000; // ADC group injected contexts queue disable
    typedef bit_field_t<26, 0x1f> CFGR_AWDCH1CH; // ADC analog watchdog 1 monitored channel selection
    static constexpr uint32_t CFGR_JAUTO = 0x2000000; // ADC group injected automatic trigger mode
    static constexpr uint32_t CFGR_JAWD1EN = 0x1000000; // ADC analog watchdog 1 enable on scope ADC group injected
    static constexpr uint32_t CFGR_AWD1EN = 0x800000; // ADC analog watchdog 1 enable on scope ADC group regular
    static constexpr uint32_t CFGR_AWD1SGL = 0x400000; // ADC analog watchdog 1 monitoring a single channel or all channels
    static constexpr uint32_t CFGR_JQM = 0x200000; // ADC group injected contexts queue mode
    static constexpr uint32_t CFGR_JDISCEN = 0x100000; // ADC group injected sequencer discontinuous mode
    typedef bit_field_t<17, 0x7> CFGR_DISCNUM; // ADC group regular sequencer discontinuous number of ranks
    static constexpr uint32_t CFGR_DISCEN = 0x10000; // ADC group regular sequencer discontinuous mode
    static constexpr uint32_t CFGR_AUTDLY = 0x4000; // ADC low power auto wait
    static constexpr uint32_t CFGR_CONT = 0x2000; // ADC group regular continuous conversion mode
    static constexpr uint32_t CFGR_OVRMOD = 0x1000; // ADC group regular overrun configuration
    typedef bit_field_t<10, 0x3> CFGR_EXTEN; // ADC group regular external trigger polarity
    typedef bit_field_t<5, 0x1f> CFGR_EXTSEL; // ADC group regular external trigger source
    typedef bit_field_t<2, 0x3> CFGR_RES; // ADC data resolution
    typedef bit_field_t<0, 0x3> CFGR_DMNGT; // ADC DMA transfer enable

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR2_ROVSE = 0x1; // ADC oversampler enable on scope ADC group regular
    static constexpr uint32_t CFGR2_JOVSE = 0x2; // ADC oversampler enable on scope ADC group injected
    typedef bit_field_t<5, 0xf> CFGR2_OVSS; // ADC oversampling shift
    static constexpr uint32_t CFGR2_TROVS = 0x200; // ADC oversampling discontinuous mode (triggered mode) for ADC group regular
    static constexpr uint32_t CFGR2_ROVSM = 0x400; // Regular Oversampling mode
    static constexpr uint32_t CFGR2_RSHIFT1 = 0x800; // Right-shift data after Offset 1 correction
    static constexpr uint32_t CFGR2_RSHIFT2 = 0x1000; // Right-shift data after Offset 2 correction
    static constexpr uint32_t CFGR2_RSHIFT3 = 0x2000; // Right-shift data after Offset 3 correction
    static constexpr uint32_t CFGR2_RSHIFT4 = 0x4000; // Right-shift data after Offset 4 correction
    typedef bit_field_t<16, 0x3ff> CFGR2_OSR; // Oversampling ratio
    typedef bit_field_t<28, 0xf> CFGR2_LSHIFT; // Left shift factor

    static constexpr uint32_t SMPR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<27, 0x7> SMPR1_SMP9; // ADC channel 9 sampling time selection
    typedef bit_field_t<24, 0x7> SMPR1_SMP8; // ADC channel 8 sampling time selection
    typedef bit_field_t<21, 0x7> SMPR1_SMP7; // ADC channel 7 sampling time selection
    typedef bit_field_t<18, 0x7> SMPR1_SMP6; // ADC channel 6 sampling time selection
    typedef bit_field_t<15, 0x7> SMPR1_SMP5; // ADC channel 5 sampling time selection
    typedef bit_field_t<12, 0x7> SMPR1_SMP4; // ADC channel 4 sampling time selection
    typedef bit_field_t<9, 0x7> SMPR1_SMP3; // ADC channel 3 sampling time selection
    typedef bit_field_t<6, 0x7> SMPR1_SMP2; // ADC channel 2 sampling time selection
    typedef bit_field_t<3, 0x7> SMPR1_SMP1; // ADC channel 1 sampling time selection

    static constexpr uint32_t SMPR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<27, 0x7> SMPR2_SMP19; // ADC channel 18 sampling time selection
    typedef bit_field_t<24, 0x7> SMPR2_SMP18; // ADC channel 18 sampling time selection
    typedef bit_field_t<21, 0x7> SMPR2_SMP17; // ADC channel 17 sampling time selection
    typedef bit_field_t<18, 0x7> SMPR2_SMP16; // ADC channel 16 sampling time selection
    typedef bit_field_t<15, 0x7> SMPR2_SMP15; // ADC channel 15 sampling time selection
    typedef bit_field_t<12, 0x7> SMPR2_SMP14; // ADC channel 14 sampling time selection
    typedef bit_field_t<9, 0x7> SMPR2_SMP13; // ADC channel 13 sampling time selection
    typedef bit_field_t<6, 0x7> SMPR2_SMP12; // ADC channel 12 sampling time selection
    typedef bit_field_t<3, 0x7> SMPR2_SMP11; // ADC channel 11 sampling time selection
    typedef bit_field_t<0, 0x7> SMPR2_SMP10; // ADC channel 10 sampling time selection

    static constexpr uint32_t PCSEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> PCSEL_PCSEL; // Channel x (VINP[i]) pre selection

    static constexpr uint32_t LTR1_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LTR1_LTR1; // ADC analog watchdog 1 threshold low

    static constexpr uint32_t LHTR1_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LHTR1_LHTR1; // ADC analog watchdog 2 threshold low


    static constexpr uint32_t SQR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> SQR1_SQ4; // ADC group regular sequencer rank 4
    typedef bit_field_t<18, 0x1f> SQR1_SQ3; // ADC group regular sequencer rank 3
    typedef bit_field_t<12, 0x1f> SQR1_SQ2; // ADC group regular sequencer rank 2
    typedef bit_field_t<6, 0x1f> SQR1_SQ1; // ADC group regular sequencer rank 1
    typedef bit_field_t<0, 0xf> SQR1_L3; // L3

    static constexpr uint32_t SQR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> SQR2_SQ9; // ADC group regular sequencer rank 9
    typedef bit_field_t<18, 0x1f> SQR2_SQ8; // ADC group regular sequencer rank 8
    typedef bit_field_t<12, 0x1f> SQR2_SQ7; // ADC group regular sequencer rank 7
    typedef bit_field_t<6, 0x1f> SQR2_SQ6; // ADC group regular sequencer rank 6
    typedef bit_field_t<0, 0x1f> SQR2_SQ5; // ADC group regular sequencer rank 5

    static constexpr uint32_t SQR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> SQR3_SQ14; // ADC group regular sequencer rank 14
    typedef bit_field_t<18, 0x1f> SQR3_SQ13; // ADC group regular sequencer rank 13
    typedef bit_field_t<12, 0x1f> SQR3_SQ12; // ADC group regular sequencer rank 12
    typedef bit_field_t<6, 0x1f> SQR3_SQ11; // ADC group regular sequencer rank 11
    typedef bit_field_t<0, 0x1f> SQR3_SQ10; // ADC group regular sequencer rank 10

    static constexpr uint32_t SQR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<6, 0x1f> SQR4_SQ16; // ADC group regular sequencer rank 16
    typedef bit_field_t<0, 0x1f> SQR4_SQ15; // ADC group regular sequencer rank 15

    static constexpr uint32_t DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR_RDATA; // ADC group regular conversion data


    static constexpr uint32_t JSQR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<27, 0x1f> JSQR_JSQ4; // ADC group injected sequencer rank 4
    typedef bit_field_t<21, 0x1f> JSQR_JSQ3; // ADC group injected sequencer rank 3
    typedef bit_field_t<15, 0x1f> JSQR_JSQ2; // ADC group injected sequencer rank 2
    typedef bit_field_t<9, 0x1f> JSQR_JSQ1; // ADC group injected sequencer rank 1
    typedef bit_field_t<7, 0x3> JSQR_JEXTEN; // ADC group injected external trigger polarity
    typedef bit_field_t<2, 0x1f> JSQR_JEXTSEL; // ADC group injected external trigger source
    typedef bit_field_t<0, 0x3> JSQR_JL; // ADC group injected sequencer scan length


    static constexpr uint32_t OFR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR1_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR1_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR1_OFFSET1; // ADC offset number 1 offset level

    static constexpr uint32_t OFR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR2_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR2_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR2_OFFSET1; // ADC offset number 1 offset level

    static constexpr uint32_t OFR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR3_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR3_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR3_OFFSET1; // ADC offset number 1 offset level

    static constexpr uint32_t OFR4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR4_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR4_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR4_OFFSET1; // ADC offset number 1 offset level


    static constexpr uint32_t JDR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR1_JDATA1; // ADC group injected sequencer rank 1 conversion data

    static constexpr uint32_t JDR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR2_JDATA2; // ADC group injected sequencer rank 2 conversion data

    static constexpr uint32_t JDR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR3_JDATA3; // ADC group injected sequencer rank 3 conversion data

    static constexpr uint32_t JDR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR4_JDATA4; // ADC group injected sequencer rank 4 conversion data


    static constexpr uint32_t AWD2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> AWD2CR_AWD2CH; // ADC analog watchdog 2 monitored channel selection

    static constexpr uint32_t AWD3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<1, 0xfffff> AWD3CR_AWD3CH; // ADC analog watchdog 3 monitored channel selection


    static constexpr uint32_t LTR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LTR2_LTR2; // Analog watchdog 2 lower threshold

    static constexpr uint32_t HTR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> HTR2_HTR2; // Analog watchdog 2 higher threshold

    static constexpr uint32_t LTR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LTR3_LTR3; // Analog watchdog 3 lower threshold

    static constexpr uint32_t HTR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> HTR3_HTR3; // Analog watchdog 3 higher threshold

    static constexpr uint32_t DIFSEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> DIFSEL_DIFSEL; // ADC channel differential or single-ended mode for channel

    static constexpr uint32_t CALFACT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0x7ff> CALFACT_CALFACT_D; // ADC calibration factor in differential mode
    typedef bit_field_t<0, 0x7ff> CALFACT_CALFACT_S; // ADC calibration factor in single-ended mode

    static constexpr uint32_t CALFACT2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fffffff> CALFACT2_LINCALFACT; // Linearity Calibration Factor
};

// ADC3: Analog to Digital Converter

struct stm32h723_adc3_t
{
    volatile uint32_t ISR; // ADC interrupt and status register
    volatile uint32_t IER; // ADC interrupt enable register
    volatile uint32_t CR; // ADC control register
    volatile uint32_t CFGR; // ADC configuration register 1
    volatile uint32_t CFGR2; // ADC configuration register 2
    volatile uint32_t SMPR1; // ADC sampling time register 1
    volatile uint32_t SMPR2; // ADC sampling time register 2
    volatile uint32_t PCSEL; // ADC pre channel selection register
    volatile uint32_t LTR1; // ADC analog watchdog 1 threshold register
    volatile uint32_t LHTR1; // ADC analog watchdog 2 threshold register
    reserved_t<0x2> _0x28;
    volatile uint32_t SQR1; // ADC group regular sequencer ranks register 1
    volatile uint32_t SQR2; // ADC group regular sequencer ranks register 2
    volatile uint32_t SQR3; // ADC group regular sequencer ranks register 3
    volatile uint32_t SQR4; // ADC group regular sequencer ranks register 4
    volatile uint32_t DR; // ADC group regular conversion data register
    reserved_t<0x2> _0x44;
    volatile uint32_t JSQR; // ADC group injected sequencer register
    reserved_t<0x4> _0x50;
    volatile uint32_t OFR1; // ADC offset number 1 register
    volatile uint32_t OFR2; // ADC offset number 2 register
    volatile uint32_t OFR3; // ADC offset number 3 register
    volatile uint32_t OFR4; // ADC offset number 4 register
    reserved_t<0x4> _0x70;
    volatile uint32_t JDR1; // ADC group injected sequencer rank 1 register
    volatile uint32_t JDR2; // ADC group injected sequencer rank 2 register
    volatile uint32_t JDR3; // ADC group injected sequencer rank 3 register
    volatile uint32_t JDR4; // ADC group injected sequencer rank 4 register
    reserved_t<0x4> _0x90;
    volatile uint32_t AWD2CR; // ADC analog watchdog 2 configuration register
    volatile uint32_t AWD3CR; // ADC analog watchdog 3 configuration register
    reserved_t<0x2> _0xa8;
    volatile uint32_t LTR2; // ADC watchdog lower threshold register 2
    volatile uint32_t HTR2; // ADC watchdog higher threshold register 2
    volatile uint32_t LTR3; // ADC watchdog lower threshold register 3
    volatile uint32_t HTR3; // ADC watchdog higher threshold register 3
    volatile uint32_t DIFSEL; // ADC channel differential or single-ended mode selection register
    volatile uint32_t CALFACT; // ADC calibration factors register
    volatile uint32_t CALFACT2; // ADC Calibration Factor register 2

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_JQOVF = 0x400; // ADC group injected contexts queue overflow flag
    static constexpr uint32_t ISR_AWD3 = 0x200; // ADC analog watchdog 3 flag
    static constexpr uint32_t ISR_AWD2 = 0x100; // ADC analog watchdog 2 flag
    static constexpr uint32_t ISR_AWD1 = 0x80; // ADC analog watchdog 1 flag
    static constexpr uint32_t ISR_JEOS = 0x40; // ADC group injected end of sequence conversions flag
    static constexpr uint32_t ISR_JEOC = 0x20; // ADC group injected end of unitary conversion flag
    static constexpr uint32_t ISR_OVR = 0x10; // ADC group regular overrun flag
    static constexpr uint32_t ISR_EOS = 0x8; // ADC group regular end of sequence conversions flag
    static constexpr uint32_t ISR_EOC = 0x4; // ADC group regular end of unitary conversion flag
    static constexpr uint32_t ISR_EOSMP = 0x2; // ADC group regular end of sampling flag
    static constexpr uint32_t ISR_ADRDY = 0x1; // ADC ready flag

    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_JQOVFIE = 0x400; // ADC group injected contexts queue overflow interrupt
    static constexpr uint32_t IER_AWD3IE = 0x200; // ADC analog watchdog 3 interrupt
    static constexpr uint32_t IER_AWD2IE = 0x100; // ADC analog watchdog 2 interrupt
    static constexpr uint32_t IER_AWD1IE = 0x80; // ADC analog watchdog 1 interrupt
    static constexpr uint32_t IER_JEOSIE = 0x40; // ADC group injected end of sequence conversions interrupt
    static constexpr uint32_t IER_JEOCIE = 0x20; // ADC group injected end of unitary conversion interrupt
    static constexpr uint32_t IER_OVRIE = 0x10; // ADC group regular overrun interrupt
    static constexpr uint32_t IER_EOSIE = 0x8; // ADC group regular end of sequence conversions interrupt
    static constexpr uint32_t IER_EOCIE = 0x4; // ADC group regular end of unitary conversion interrupt
    static constexpr uint32_t IER_EOSMPIE = 0x2; // ADC group regular end of sampling interrupt
    static constexpr uint32_t IER_ADRDYIE = 0x1; // ADC ready interrupt

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_ADCAL = 0x80000000; // ADC calibration
    static constexpr uint32_t CR_ADCALDIF = 0x40000000; // ADC differential mode for calibration
    static constexpr uint32_t CR_DEEPPWD = 0x20000000; // ADC deep power down enable
    static constexpr uint32_t CR_ADVREGEN = 0x10000000; // ADC voltage regulator enable
    static constexpr uint32_t CR_LINCALRDYW6 = 0x8000000; // Linearity calibration ready Word 6
    static constexpr uint32_t CR_LINCALRDYW5 = 0x4000000; // Linearity calibration ready Word 5
    static constexpr uint32_t CR_LINCALRDYW4 = 0x2000000; // Linearity calibration ready Word 4
    static constexpr uint32_t CR_LINCALRDYW3 = 0x1000000; // Linearity calibration ready Word 3
    static constexpr uint32_t CR_LINCALRDYW2 = 0x800000; // Linearity calibration ready Word 2
    static constexpr uint32_t CR_LINCALRDYW1 = 0x400000; // Linearity calibration ready Word 1
    static constexpr uint32_t CR_ADCALLIN = 0x10000; // Linearity calibration
    typedef bit_field_t<8, 0x3> CR_BOOST; // Boost mode control
    static constexpr uint32_t CR_JADSTP = 0x20; // ADC group injected conversion stop
    static constexpr uint32_t CR_ADSTP = 0x10; // ADC group regular conversion stop
    static constexpr uint32_t CR_JADSTART = 0x8; // ADC group injected conversion start
    static constexpr uint32_t CR_ADSTART = 0x4; // ADC group regular conversion start
    static constexpr uint32_t CR_ADDIS = 0x2; // ADC disable
    static constexpr uint32_t CR_ADEN = 0x1; // ADC enable

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR_JQDIS = 0x80000000; // ADC group injected contexts queue disable
    typedef bit_field_t<26, 0x1f> CFGR_AWDCH1CH; // ADC analog watchdog 1 monitored channel selection
    static constexpr uint32_t CFGR_JAUTO = 0x2000000; // ADC group injected automatic trigger mode
    static constexpr uint32_t CFGR_JAWD1EN = 0x1000000; // ADC analog watchdog 1 enable on scope ADC group injected
    static constexpr uint32_t CFGR_AWD1EN = 0x800000; // ADC analog watchdog 1 enable on scope ADC group regular
    static constexpr uint32_t CFGR_AWD1SGL = 0x400000; // ADC analog watchdog 1 monitoring a single channel or all channels
    static constexpr uint32_t CFGR_JQM = 0x200000; // ADC group injected contexts queue mode
    static constexpr uint32_t CFGR_JDISCEN = 0x100000; // ADC group injected sequencer discontinuous mode
    typedef bit_field_t<17, 0x7> CFGR_DISCNUM; // ADC group regular sequencer discontinuous number of ranks
    static constexpr uint32_t CFGR_DISCEN = 0x10000; // ADC group regular sequencer discontinuous mode
    static constexpr uint32_t CFGR_AUTDLY = 0x4000; // ADC low power auto wait
    static constexpr uint32_t CFGR_CONT = 0x2000; // ADC group regular continuous conversion mode
    static constexpr uint32_t CFGR_OVRMOD = 0x1000; // ADC group regular overrun configuration
    typedef bit_field_t<10, 0x3> CFGR_EXTEN; // ADC group regular external trigger polarity
    typedef bit_field_t<5, 0x1f> CFGR_EXTSEL; // ADC group regular external trigger source
    typedef bit_field_t<2, 0x7> CFGR_RES; // ADC data resolution
    typedef bit_field_t<0, 0x3> CFGR_DMNGT; // ADC DMA transfer enable

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR2_ROVSE = 0x1; // ADC oversampler enable on scope ADC group regular
    static constexpr uint32_t CFGR2_JOVSE = 0x2; // ADC oversampler enable on scope ADC group injected
    typedef bit_field_t<5, 0xf> CFGR2_OVSS; // ADC oversampling shift
    static constexpr uint32_t CFGR2_TROVS = 0x200; // ADC oversampling discontinuous mode (triggered mode) for ADC group regular
    static constexpr uint32_t CFGR2_ROVSM = 0x400; // Regular Oversampling mode
    static constexpr uint32_t CFGR2_RSHIFT1 = 0x800; // Right-shift data after Offset 1 correction
    static constexpr uint32_t CFGR2_RSHIFT2 = 0x1000; // Right-shift data after Offset 2 correction
    static constexpr uint32_t CFGR2_RSHIFT3 = 0x2000; // Right-shift data after Offset 3 correction
    static constexpr uint32_t CFGR2_RSHIFT4 = 0x4000; // Right-shift data after Offset 4 correction
    typedef bit_field_t<16, 0x3ff> CFGR2_OSR; // Oversampling ratio
    typedef bit_field_t<28, 0xf> CFGR2_LSHIFT; // Left shift factor

    static constexpr uint32_t SMPR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<27, 0x7> SMPR1_SMP9; // ADC channel 9 sampling time selection
    typedef bit_field_t<24, 0x7> SMPR1_SMP8; // ADC channel 8 sampling time selection
    typedef bit_field_t<21, 0x7> SMPR1_SMP7; // ADC channel 7 sampling time selection
    typedef bit_field_t<18, 0x7> SMPR1_SMP6; // ADC channel 6 sampling time selection
    typedef bit_field_t<15, 0x7> SMPR1_SMP5; // ADC channel 5 sampling time selection
    typedef bit_field_t<12, 0x7> SMPR1_SMP4; // ADC channel 4 sampling time selection
    typedef bit_field_t<9, 0x7> SMPR1_SMP3; // ADC channel 3 sampling time selection
    typedef bit_field_t<6, 0x7> SMPR1_SMP2; // ADC channel 2 sampling time selection
    typedef bit_field_t<3, 0x7> SMPR1_SMP1; // ADC channel 1 sampling time selection

    static constexpr uint32_t SMPR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<27, 0x7> SMPR2_SMP19; // ADC channel 18 sampling time selection
    typedef bit_field_t<24, 0x7> SMPR2_SMP18; // ADC channel 18 sampling time selection
    typedef bit_field_t<21, 0x7> SMPR2_SMP17; // ADC channel 17 sampling time selection
    typedef bit_field_t<18, 0x7> SMPR2_SMP16; // ADC channel 16 sampling time selection
    typedef bit_field_t<15, 0x7> SMPR2_SMP15; // ADC channel 15 sampling time selection
    typedef bit_field_t<12, 0x7> SMPR2_SMP14; // ADC channel 14 sampling time selection
    typedef bit_field_t<9, 0x7> SMPR2_SMP13; // ADC channel 13 sampling time selection
    typedef bit_field_t<6, 0x7> SMPR2_SMP12; // ADC channel 12 sampling time selection
    typedef bit_field_t<3, 0x7> SMPR2_SMP11; // ADC channel 11 sampling time selection
    typedef bit_field_t<0, 0x7> SMPR2_SMP10; // ADC channel 10 sampling time selection

    static constexpr uint32_t PCSEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> PCSEL_PCSEL; // Channel x (VINP[i]) pre selection

    static constexpr uint32_t LTR1_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LTR1_LTR1; // ADC analog watchdog 1 threshold low

    static constexpr uint32_t LHTR1_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LHTR1_LHTR1; // ADC analog watchdog 2 threshold low


    static constexpr uint32_t SQR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> SQR1_SQ4; // ADC group regular sequencer rank 4
    typedef bit_field_t<18, 0x1f> SQR1_SQ3; // ADC group regular sequencer rank 3
    typedef bit_field_t<12, 0x1f> SQR1_SQ2; // ADC group regular sequencer rank 2
    typedef bit_field_t<6, 0x1f> SQR1_SQ1; // ADC group regular sequencer rank 1
    typedef bit_field_t<0, 0xf> SQR1_L3; // L3

    static constexpr uint32_t SQR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> SQR2_SQ9; // ADC group regular sequencer rank 9
    typedef bit_field_t<18, 0x1f> SQR2_SQ8; // ADC group regular sequencer rank 8
    typedef bit_field_t<12, 0x1f> SQR2_SQ7; // ADC group regular sequencer rank 7
    typedef bit_field_t<6, 0x1f> SQR2_SQ6; // ADC group regular sequencer rank 6
    typedef bit_field_t<0, 0x1f> SQR2_SQ5; // ADC group regular sequencer rank 5

    static constexpr uint32_t SQR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> SQR3_SQ14; // ADC group regular sequencer rank 14
    typedef bit_field_t<18, 0x1f> SQR3_SQ13; // ADC group regular sequencer rank 13
    typedef bit_field_t<12, 0x1f> SQR3_SQ12; // ADC group regular sequencer rank 12
    typedef bit_field_t<6, 0x1f> SQR3_SQ11; // ADC group regular sequencer rank 11
    typedef bit_field_t<0, 0x1f> SQR3_SQ10; // ADC group regular sequencer rank 10

    static constexpr uint32_t SQR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<6, 0x1f> SQR4_SQ16; // ADC group regular sequencer rank 16
    typedef bit_field_t<0, 0x1f> SQR4_SQ15; // ADC group regular sequencer rank 15

    static constexpr uint32_t DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR_RDATA; // ADC group regular conversion data


    static constexpr uint32_t JSQR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<27, 0x1f> JSQR_JSQ4; // ADC group injected sequencer rank 4
    typedef bit_field_t<21, 0x1f> JSQR_JSQ3; // ADC group injected sequencer rank 3
    typedef bit_field_t<15, 0x1f> JSQR_JSQ2; // ADC group injected sequencer rank 2
    typedef bit_field_t<9, 0x1f> JSQR_JSQ1; // ADC group injected sequencer rank 1
    typedef bit_field_t<7, 0x3> JSQR_JEXTEN; // ADC group injected external trigger polarity
    typedef bit_field_t<2, 0x1f> JSQR_JEXTSEL; // ADC group injected external trigger source
    typedef bit_field_t<0, 0x3> JSQR_JL; // ADC group injected sequencer scan length


    static constexpr uint32_t OFR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR1_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR1_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR1_OFFSET1; // ADC offset number 1 offset level

    static constexpr uint32_t OFR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR2_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR2_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR2_OFFSET1; // ADC offset number 1 offset level

    static constexpr uint32_t OFR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR3_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR3_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR3_OFFSET1; // ADC offset number 1 offset level

    static constexpr uint32_t OFR4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR4_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR4_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR4_OFFSET1; // ADC offset number 1 offset level


    static constexpr uint32_t JDR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR1_JDATA1; // ADC group injected sequencer rank 1 conversion data

    static constexpr uint32_t JDR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR2_JDATA2; // ADC group injected sequencer rank 2 conversion data

    static constexpr uint32_t JDR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR3_JDATA3; // ADC group injected sequencer rank 3 conversion data

    static constexpr uint32_t JDR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR4_JDATA4; // ADC group injected sequencer rank 4 conversion data


    static constexpr uint32_t AWD2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> AWD2CR_AWD2CH; // ADC analog watchdog 2 monitored channel selection

    static constexpr uint32_t AWD3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<1, 0xfffff> AWD3CR_AWD3CH; // ADC analog watchdog 3 monitored channel selection


    static constexpr uint32_t LTR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LTR2_LTR2; // Analog watchdog 2 lower threshold

    static constexpr uint32_t HTR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> HTR2_HTR2; // Analog watchdog 2 higher threshold

    static constexpr uint32_t LTR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LTR3_LTR3; // Analog watchdog 3 lower threshold

    static constexpr uint32_t HTR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> HTR3_HTR3; // Analog watchdog 3 higher threshold

    static constexpr uint32_t DIFSEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> DIFSEL_DIFSEL; // ADC channel differential or single-ended mode for channel

    static constexpr uint32_t CALFACT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0x7ff> CALFACT_CALFACT_D; // ADC calibration factor in differential mode
    typedef bit_field_t<0, 0x7ff> CALFACT_CALFACT_S; // ADC calibration factor in single-ended mode

    static constexpr uint32_t CALFACT2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fffffff> CALFACT2_LINCALFACT; // Linearity Calibration Factor
};

// ADC3: Analog to Digital Converter

struct stm32h742x_adc3_t
{
    volatile uint32_t ISR; // ADC interrupt and status register
    volatile uint32_t IER; // ADC interrupt enable register
    volatile uint32_t CR; // ADC control register
    volatile uint32_t CFGR; // ADC configuration register 1
    volatile uint32_t CFGR2; // ADC configuration register 2
    volatile uint32_t SMPR1; // ADC sampling time register 1
    volatile uint32_t SMPR2; // ADC sampling time register 2
    volatile uint32_t PCSEL; // ADC pre channel selection register
    volatile uint32_t LTR1; // ADC analog watchdog 1 threshold register
    volatile uint32_t LHTR1; // ADC analog watchdog 2 threshold register
    reserved_t<0x2> _0x28;
    volatile uint32_t SQR1; // ADC group regular sequencer ranks register 1
    volatile uint32_t SQR2; // ADC group regular sequencer ranks register 2
    volatile uint32_t SQR3; // ADC group regular sequencer ranks register 3
    volatile uint32_t SQR4; // ADC group regular sequencer ranks register 4
    volatile uint32_t DR; // ADC group regular conversion data register
    reserved_t<0x2> _0x44;
    volatile uint32_t JSQR; // ADC group injected sequencer register
    reserved_t<0x4> _0x50;
    volatile uint32_t OFR1; // ADC offset number 1 register
    volatile uint32_t OFR2; // ADC offset number 2 register
    volatile uint32_t OFR3; // ADC offset number 3 register
    volatile uint32_t OFR4; // ADC offset number 4 register
    reserved_t<0x4> _0x70;
    volatile uint32_t JDR1; // ADC group injected sequencer rank 1 register
    volatile uint32_t JDR2; // ADC group injected sequencer rank 2 register
    volatile uint32_t JDR3; // ADC group injected sequencer rank 3 register
    volatile uint32_t JDR4; // ADC group injected sequencer rank 4 register
    reserved_t<0x4> _0x90;
    volatile uint32_t AWD2CR; // ADC analog watchdog 2 configuration register
    volatile uint32_t AWD3CR; // ADC analog watchdog 3 configuration register
    reserved_t<0x2> _0xa8;
    volatile uint32_t LTR2; // ADC watchdog lower threshold register 2
    volatile uint32_t HTR2; // ADC watchdog higher threshold register 2
    volatile uint32_t LTR3; // ADC watchdog lower threshold register 3
    volatile uint32_t HTR3; // ADC watchdog higher threshold register 3
    volatile uint32_t DIFSEL; // ADC channel differential or single-ended mode selection register
    volatile uint32_t CALFACT; // ADC calibration factors register
    volatile uint32_t CALFACT2; // ADC Calibration Factor register 2

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_JQOVF = 0x400; // ADC group injected contexts queue overflow flag
    static constexpr uint32_t ISR_AWD3 = 0x200; // ADC analog watchdog 3 flag
    static constexpr uint32_t ISR_AWD2 = 0x100; // ADC analog watchdog 2 flag
    static constexpr uint32_t ISR_AWD1 = 0x80; // ADC analog watchdog 1 flag
    static constexpr uint32_t ISR_JEOS = 0x40; // ADC group injected end of sequence conversions flag
    static constexpr uint32_t ISR_JEOC = 0x20; // ADC group injected end of unitary conversion flag
    static constexpr uint32_t ISR_OVR = 0x10; // ADC group regular overrun flag
    static constexpr uint32_t ISR_EOS = 0x8; // ADC group regular end of sequence conversions flag
    static constexpr uint32_t ISR_EOC = 0x4; // ADC group regular end of unitary conversion flag
    static constexpr uint32_t ISR_EOSMP = 0x2; // ADC group regular end of sampling flag
    static constexpr uint32_t ISR_ADRDY = 0x1; // ADC ready flag

    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_JQOVFIE = 0x400; // ADC group injected contexts queue overflow interrupt
    static constexpr uint32_t IER_AWD3IE = 0x200; // ADC analog watchdog 3 interrupt
    static constexpr uint32_t IER_AWD2IE = 0x100; // ADC analog watchdog 2 interrupt
    static constexpr uint32_t IER_AWD1IE = 0x80; // ADC analog watchdog 1 interrupt
    static constexpr uint32_t IER_JEOSIE = 0x40; // ADC group injected end of sequence conversions interrupt
    static constexpr uint32_t IER_JEOCIE = 0x20; // ADC group injected end of unitary conversion interrupt
    static constexpr uint32_t IER_OVRIE = 0x10; // ADC group regular overrun interrupt
    static constexpr uint32_t IER_EOSIE = 0x8; // ADC group regular end of sequence conversions interrupt
    static constexpr uint32_t IER_EOCIE = 0x4; // ADC group regular end of unitary conversion interrupt
    static constexpr uint32_t IER_EOSMPIE = 0x2; // ADC group regular end of sampling interrupt
    static constexpr uint32_t IER_ADRDYIE = 0x1; // ADC ready interrupt

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_ADCAL = 0x80000000; // ADC calibration
    static constexpr uint32_t CR_ADCALDIF = 0x40000000; // ADC differential mode for calibration
    static constexpr uint32_t CR_DEEPPWD = 0x20000000; // ADC deep power down enable
    static constexpr uint32_t CR_ADVREGEN = 0x10000000; // ADC voltage regulator enable
    static constexpr uint32_t CR_LINCALRDYW6 = 0x8000000; // Linearity calibration ready Word 6
    static constexpr uint32_t CR_LINCALRDYW5 = 0x4000000; // Linearity calibration ready Word 5
    static constexpr uint32_t CR_LINCALRDYW4 = 0x2000000; // Linearity calibration ready Word 4
    static constexpr uint32_t CR_LINCALRDYW3 = 0x1000000; // Linearity calibration ready Word 3
    static constexpr uint32_t CR_LINCALRDYW2 = 0x800000; // Linearity calibration ready Word 2
    static constexpr uint32_t CR_LINCALRDYW1 = 0x400000; // Linearity calibration ready Word 1
    static constexpr uint32_t CR_ADCALLIN = 0x10000; // Linearity calibration
    static constexpr uint32_t CR_BOOST = 0x100; // Boost mode control
    static constexpr uint32_t CR_JADSTP = 0x20; // ADC group injected conversion stop
    static constexpr uint32_t CR_ADSTP = 0x10; // ADC group regular conversion stop
    static constexpr uint32_t CR_JADSTART = 0x8; // ADC group injected conversion start
    static constexpr uint32_t CR_ADSTART = 0x4; // ADC group regular conversion start
    static constexpr uint32_t CR_ADDIS = 0x2; // ADC disable
    static constexpr uint32_t CR_ADEN = 0x1; // ADC enable

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR_JQDIS = 0x80000000; // ADC group injected contexts queue disable
    typedef bit_field_t<26, 0x1f> CFGR_AWDCH1CH; // ADC analog watchdog 1 monitored channel selection
    static constexpr uint32_t CFGR_JAUTO = 0x2000000; // ADC group injected automatic trigger mode
    static constexpr uint32_t CFGR_JAWD1EN = 0x1000000; // ADC analog watchdog 1 enable on scope ADC group injected
    static constexpr uint32_t CFGR_AWD1EN = 0x800000; // ADC analog watchdog 1 enable on scope ADC group regular
    static constexpr uint32_t CFGR_AWD1SGL = 0x400000; // ADC analog watchdog 1 monitoring a single channel or all channels
    static constexpr uint32_t CFGR_JQM = 0x200000; // ADC group injected contexts queue mode
    static constexpr uint32_t CFGR_JDISCEN = 0x100000; // ADC group injected sequencer discontinuous mode
    typedef bit_field_t<17, 0x7> CFGR_DISCNUM; // ADC group regular sequencer discontinuous number of ranks
    static constexpr uint32_t CFGR_DISCEN = 0x10000; // ADC group regular sequencer discontinuous mode
    static constexpr uint32_t CFGR_AUTDLY = 0x4000; // ADC low power auto wait
    static constexpr uint32_t CFGR_CONT = 0x2000; // ADC group regular continuous conversion mode
    static constexpr uint32_t CFGR_OVRMOD = 0x1000; // ADC group regular overrun configuration
    typedef bit_field_t<10, 0x3> CFGR_EXTEN; // ADC group regular external trigger polarity
    typedef bit_field_t<5, 0x1f> CFGR_EXTSEL; // ADC group regular external trigger source
    typedef bit_field_t<2, 0x7> CFGR_RES; // ADC data resolution
    typedef bit_field_t<0, 0x3> CFGR_DMNGT; // ADC DMA transfer enable

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR2_ROVSE = 0x1; // ADC oversampler enable on scope ADC group regular
    static constexpr uint32_t CFGR2_JOVSE = 0x2; // ADC oversampler enable on scope ADC group injected
    typedef bit_field_t<5, 0xf> CFGR2_OVSS; // ADC oversampling shift
    static constexpr uint32_t CFGR2_TROVS = 0x200; // ADC oversampling discontinuous mode (triggered mode) for ADC group regular
    static constexpr uint32_t CFGR2_ROVSM = 0x400; // Regular Oversampling mode
    static constexpr uint32_t CFGR2_RSHIFT1 = 0x800; // Right-shift data after Offset 1 correction
    static constexpr uint32_t CFGR2_RSHIFT2 = 0x1000; // Right-shift data after Offset 2 correction
    static constexpr uint32_t CFGR2_RSHIFT3 = 0x2000; // Right-shift data after Offset 3 correction
    static constexpr uint32_t CFGR2_RSHIFT4 = 0x4000; // Right-shift data after Offset 4 correction
    typedef bit_field_t<16, 0x3ff> CFGR2_OSR; // Oversampling ratio
    typedef bit_field_t<28, 0xf> CFGR2_LSHIFT; // Left shift factor

    static constexpr uint32_t SMPR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<27, 0x7> SMPR1_SMP9; // ADC channel 9 sampling time selection
    typedef bit_field_t<24, 0x7> SMPR1_SMP8; // ADC channel 8 sampling time selection
    typedef bit_field_t<21, 0x7> SMPR1_SMP7; // ADC channel 7 sampling time selection
    typedef bit_field_t<18, 0x7> SMPR1_SMP6; // ADC channel 6 sampling time selection
    typedef bit_field_t<15, 0x7> SMPR1_SMP5; // ADC channel 5 sampling time selection
    typedef bit_field_t<12, 0x7> SMPR1_SMP4; // ADC channel 4 sampling time selection
    typedef bit_field_t<9, 0x7> SMPR1_SMP3; // ADC channel 3 sampling time selection
    typedef bit_field_t<6, 0x7> SMPR1_SMP2; // ADC channel 2 sampling time selection
    typedef bit_field_t<3, 0x7> SMPR1_SMP1; // ADC channel 1 sampling time selection

    static constexpr uint32_t SMPR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<27, 0x7> SMPR2_SMP19; // ADC channel 18 sampling time selection
    typedef bit_field_t<24, 0x7> SMPR2_SMP18; // ADC channel 18 sampling time selection
    typedef bit_field_t<21, 0x7> SMPR2_SMP17; // ADC channel 17 sampling time selection
    typedef bit_field_t<18, 0x7> SMPR2_SMP16; // ADC channel 16 sampling time selection
    typedef bit_field_t<15, 0x7> SMPR2_SMP15; // ADC channel 15 sampling time selection
    typedef bit_field_t<12, 0x7> SMPR2_SMP14; // ADC channel 14 sampling time selection
    typedef bit_field_t<9, 0x7> SMPR2_SMP13; // ADC channel 13 sampling time selection
    typedef bit_field_t<6, 0x7> SMPR2_SMP12; // ADC channel 12 sampling time selection
    typedef bit_field_t<3, 0x7> SMPR2_SMP11; // ADC channel 11 sampling time selection
    typedef bit_field_t<0, 0x7> SMPR2_SMP10; // ADC channel 10 sampling time selection

    static constexpr uint32_t PCSEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> PCSEL_PCSEL; // Channel x (VINP[i]) pre selection

    static constexpr uint32_t LTR1_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LTR1_LTR1; // ADC analog watchdog 1 threshold low

    static constexpr uint32_t LHTR1_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LHTR1_LHTR1; // ADC analog watchdog 2 threshold low


    static constexpr uint32_t SQR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> SQR1_SQ4; // ADC group regular sequencer rank 4
    typedef bit_field_t<18, 0x1f> SQR1_SQ3; // ADC group regular sequencer rank 3
    typedef bit_field_t<12, 0x1f> SQR1_SQ2; // ADC group regular sequencer rank 2
    typedef bit_field_t<6, 0x1f> SQR1_SQ1; // ADC group regular sequencer rank 1
    typedef bit_field_t<0, 0xf> SQR1_L3; // L3

    static constexpr uint32_t SQR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> SQR2_SQ9; // ADC group regular sequencer rank 9
    typedef bit_field_t<18, 0x1f> SQR2_SQ8; // ADC group regular sequencer rank 8
    typedef bit_field_t<12, 0x1f> SQR2_SQ7; // ADC group regular sequencer rank 7
    typedef bit_field_t<6, 0x1f> SQR2_SQ6; // ADC group regular sequencer rank 6
    typedef bit_field_t<0, 0x1f> SQR2_SQ5; // ADC group regular sequencer rank 5

    static constexpr uint32_t SQR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> SQR3_SQ14; // ADC group regular sequencer rank 14
    typedef bit_field_t<18, 0x1f> SQR3_SQ13; // ADC group regular sequencer rank 13
    typedef bit_field_t<12, 0x1f> SQR3_SQ12; // ADC group regular sequencer rank 12
    typedef bit_field_t<6, 0x1f> SQR3_SQ11; // ADC group regular sequencer rank 11
    typedef bit_field_t<0, 0x1f> SQR3_SQ10; // ADC group regular sequencer rank 10

    static constexpr uint32_t SQR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<6, 0x1f> SQR4_SQ16; // ADC group regular sequencer rank 16
    typedef bit_field_t<0, 0x1f> SQR4_SQ15; // ADC group regular sequencer rank 15

    static constexpr uint32_t DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR_RDATA; // ADC group regular conversion data


    static constexpr uint32_t JSQR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<27, 0x1f> JSQR_JSQ4; // ADC group injected sequencer rank 4
    typedef bit_field_t<21, 0x1f> JSQR_JSQ3; // ADC group injected sequencer rank 3
    typedef bit_field_t<15, 0x1f> JSQR_JSQ2; // ADC group injected sequencer rank 2
    typedef bit_field_t<9, 0x1f> JSQR_JSQ1; // ADC group injected sequencer rank 1
    typedef bit_field_t<7, 0x3> JSQR_JEXTEN; // ADC group injected external trigger polarity
    typedef bit_field_t<2, 0x1f> JSQR_JEXTSEL; // ADC group injected external trigger source
    typedef bit_field_t<0, 0x3> JSQR_JL; // ADC group injected sequencer scan length


    static constexpr uint32_t OFR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR1_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR1_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR1_OFFSET1; // ADC offset number 1 offset level

    static constexpr uint32_t OFR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR2_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR2_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR2_OFFSET1; // ADC offset number 1 offset level

    static constexpr uint32_t OFR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR3_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR3_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR3_OFFSET1; // ADC offset number 1 offset level

    static constexpr uint32_t OFR4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR4_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR4_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR4_OFFSET1; // ADC offset number 1 offset level


    static constexpr uint32_t JDR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR1_JDATA1; // ADC group injected sequencer rank 1 conversion data

    static constexpr uint32_t JDR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR2_JDATA2; // ADC group injected sequencer rank 2 conversion data

    static constexpr uint32_t JDR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR3_JDATA3; // ADC group injected sequencer rank 3 conversion data

    static constexpr uint32_t JDR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR4_JDATA4; // ADC group injected sequencer rank 4 conversion data


    static constexpr uint32_t AWD2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> AWD2CR_AWD2CH; // ADC analog watchdog 2 monitored channel selection

    static constexpr uint32_t AWD3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<1, 0xfffff> AWD3CR_AWD3CH; // ADC analog watchdog 3 monitored channel selection


    static constexpr uint32_t LTR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LTR2_LTR2; // Analog watchdog 2 lower threshold

    static constexpr uint32_t HTR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> HTR2_HTR2; // Analog watchdog 2 higher threshold

    static constexpr uint32_t LTR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LTR3_LTR3; // Analog watchdog 3 lower threshold

    static constexpr uint32_t HTR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> HTR3_HTR3; // Analog watchdog 3 higher threshold

    static constexpr uint32_t DIFSEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> DIFSEL_DIFSEL; // ADC channel differential or single-ended mode for channel

    static constexpr uint32_t CALFACT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0x7ff> CALFACT_CALFACT_D; // ADC calibration factor in differential mode
    typedef bit_field_t<0, 0x7ff> CALFACT_CALFACT_S; // ADC calibration factor in single-ended mode

    static constexpr uint32_t CALFACT2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fffffff> CALFACT2_LINCALFACT; // Linearity Calibration Factor
};

// ADC3: Analog to Digital Converter

struct stm32h750x_adc3_t
{
    volatile uint32_t ISR; // ADC interrupt and status register
    volatile uint32_t IER; // ADC interrupt enable register
    volatile uint32_t CR; // ADC control register
    volatile uint32_t CFGR; // ADC configuration register 1
    volatile uint32_t CFGR2; // ADC configuration register 2
    volatile uint32_t SMPR1; // ADC sampling time register 1
    volatile uint32_t SMPR2; // ADC sampling time register 2
    volatile uint32_t PCSEL; // ADC pre channel selection register
    volatile uint32_t LTR1; // ADC analog watchdog 1 threshold register
    volatile uint32_t LHTR1; // ADC analog watchdog 2 threshold register
    reserved_t<0x2> _0x28;
    volatile uint32_t SQR1; // ADC group regular sequencer ranks register 1
    volatile uint32_t SQR2; // ADC group regular sequencer ranks register 2
    volatile uint32_t SQR3; // ADC group regular sequencer ranks register 3
    volatile uint32_t SQR4; // ADC group regular sequencer ranks register 4
    volatile uint32_t DR; // ADC group regular conversion data register
    reserved_t<0x2> _0x44;
    volatile uint32_t JSQR; // ADC group injected sequencer register
    reserved_t<0x4> _0x50;
    volatile uint32_t OFR1; // ADC offset number 1 register
    volatile uint32_t OFR2; // ADC offset number 2 register
    volatile uint32_t OFR3; // ADC offset number 3 register
    volatile uint32_t OFR4; // ADC offset number 4 register
    reserved_t<0x4> _0x70;
    volatile uint32_t JDR1; // ADC group injected sequencer rank 1 register
    volatile uint32_t JDR2; // ADC group injected sequencer rank 2 register
    volatile uint32_t JDR3; // ADC group injected sequencer rank 3 register
    volatile uint32_t JDR4; // ADC group injected sequencer rank 4 register
    reserved_t<0x4> _0x90;
    volatile uint32_t AWD2CR; // ADC analog watchdog 2 configuration register
    volatile uint32_t AWD3CR; // ADC analog watchdog 3 configuration register
    reserved_t<0x2> _0xa8;
    volatile uint32_t LTR2; // ADC watchdog lower threshold register 2
    volatile uint32_t HTR2; // ADC watchdog higher threshold register 2
    volatile uint32_t LTR3; // ADC watchdog lower threshold register 3
    volatile uint32_t HTR3; // ADC watchdog higher threshold register 3
    volatile uint32_t DIFSEL; // ADC channel differential or single-ended mode selection register
    volatile uint32_t CALFACT; // ADC calibration factors register
    volatile uint32_t CALFACT2; // ADC Calibration Factor register 2

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_JQOVF = 0x400; // ADC group injected contexts queue overflow flag
    static constexpr uint32_t ISR_AWD3 = 0x200; // ADC analog watchdog 3 flag
    static constexpr uint32_t ISR_AWD2 = 0x100; // ADC analog watchdog 2 flag
    static constexpr uint32_t ISR_AWD1 = 0x80; // ADC analog watchdog 1 flag
    static constexpr uint32_t ISR_JEOS = 0x40; // ADC group injected end of sequence conversions flag
    static constexpr uint32_t ISR_JEOC = 0x20; // ADC group injected end of unitary conversion flag
    static constexpr uint32_t ISR_OVR = 0x10; // ADC group regular overrun flag
    static constexpr uint32_t ISR_EOS = 0x8; // ADC group regular end of sequence conversions flag
    static constexpr uint32_t ISR_EOC = 0x4; // ADC group regular end of unitary conversion flag
    static constexpr uint32_t ISR_EOSMP = 0x2; // ADC group regular end of sampling flag
    static constexpr uint32_t ISR_ADRDY = 0x1; // ADC ready flag

    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_JQOVFIE = 0x400; // ADC group injected contexts queue overflow interrupt
    static constexpr uint32_t IER_AWD3IE = 0x200; // ADC analog watchdog 3 interrupt
    static constexpr uint32_t IER_AWD2IE = 0x100; // ADC analog watchdog 2 interrupt
    static constexpr uint32_t IER_AWD1IE = 0x80; // ADC analog watchdog 1 interrupt
    static constexpr uint32_t IER_JEOSIE = 0x40; // ADC group injected end of sequence conversions interrupt
    static constexpr uint32_t IER_JEOCIE = 0x20; // ADC group injected end of unitary conversion interrupt
    static constexpr uint32_t IER_OVRIE = 0x10; // ADC group regular overrun interrupt
    static constexpr uint32_t IER_EOSIE = 0x8; // ADC group regular end of sequence conversions interrupt
    static constexpr uint32_t IER_EOCIE = 0x4; // ADC group regular end of unitary conversion interrupt
    static constexpr uint32_t IER_EOSMPIE = 0x2; // ADC group regular end of sampling interrupt
    static constexpr uint32_t IER_ADRDYIE = 0x1; // ADC ready interrupt

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_ADCAL = 0x80000000; // ADC calibration
    static constexpr uint32_t CR_ADCALDIF = 0x40000000; // ADC differential mode for calibration
    static constexpr uint32_t CR_ADCALLIN = 0x10000; // Linearity calibration
    static constexpr uint32_t CR_ADDIS = 0x2; // ADC disable
    static constexpr uint32_t CR_ADEN = 0x1; // ADC enable
    static constexpr uint32_t CR_ADSTART = 0x4; // ADC group regular conversion start
    static constexpr uint32_t CR_ADSTP = 0x10; // ADC group regular conversion stop
    static constexpr uint32_t CR_ADVREGEN = 0x10000000; // ADC voltage regulator enable
    static constexpr uint32_t CR_BOOST = 0x100; // Boost mode control
    typedef bit_field_t<16, 0x3> CR_CKMODE; // ADC clock mode
    static constexpr uint32_t CR_DEEPPWD = 0x20000000; // ADC deep power down enable
    static constexpr uint32_t CR_JADSTART = 0x8; // ADC group injected conversion start
    static constexpr uint32_t CR_JADSTP = 0x20; // ADC group injected conversion stop
    static constexpr uint32_t CR_LINCALRDYW1 = 0x400000; // Linearity calibration ready Word 1
    static constexpr uint32_t CR_LINCALRDYW2 = 0x800000; // Linearity calibration ready Word 2
    static constexpr uint32_t CR_LINCALRDYW3 = 0x1000000; // Linearity calibration ready Word 3
    static constexpr uint32_t CR_LINCALRDYW4 = 0x2000000; // Linearity calibration ready Word 4
    static constexpr uint32_t CR_LINCALRDYW5 = 0x4000000; // Linearity calibration ready Word 5
    static constexpr uint32_t CR_LINCALRDYW6 = 0x8000000; // Linearity calibration ready Word 6
    typedef bit_field_t<18, 0xf> CR_PRESC; // ADC prescaler
    static constexpr uint32_t CR_VBATEN = 0x1000000; // VBAT enable
    static constexpr uint32_t CR_VREFEN = 0x400000; // VREFINT enable
    static constexpr uint32_t CR_VSENSEEN = 0x800000; // Temperature sensor enable

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR_JQDIS = 0x80000000; // ADC group injected contexts queue disable
    typedef bit_field_t<26, 0x1f> CFGR_AWDCH1CH; // ADC analog watchdog 1 monitored channel selection
    static constexpr uint32_t CFGR_JAUTO = 0x2000000; // ADC group injected automatic trigger mode
    static constexpr uint32_t CFGR_JAWD1EN = 0x1000000; // ADC analog watchdog 1 enable on scope ADC group injected
    static constexpr uint32_t CFGR_AWD1EN = 0x800000; // ADC analog watchdog 1 enable on scope ADC group regular
    static constexpr uint32_t CFGR_AWD1SGL = 0x400000; // ADC analog watchdog 1 monitoring a single channel or all channels
    static constexpr uint32_t CFGR_JQM = 0x200000; // ADC group injected contexts queue mode
    static constexpr uint32_t CFGR_JDISCEN = 0x100000; // ADC group injected sequencer discontinuous mode
    typedef bit_field_t<17, 0x7> CFGR_DISCNUM; // ADC group regular sequencer discontinuous number of ranks
    static constexpr uint32_t CFGR_DISCEN = 0x10000; // ADC group regular sequencer discontinuous mode
    static constexpr uint32_t CFGR_AUTDLY = 0x4000; // ADC low power auto wait
    static constexpr uint32_t CFGR_CONT = 0x2000; // ADC group regular continuous conversion mode
    static constexpr uint32_t CFGR_OVRMOD = 0x1000; // ADC group regular overrun configuration
    typedef bit_field_t<10, 0x3> CFGR_EXTEN; // ADC group regular external trigger polarity
    typedef bit_field_t<5, 0x1f> CFGR_EXTSEL; // ADC group regular external trigger source
    typedef bit_field_t<2, 0x3> CFGR_RES; // ADC data resolution
    typedef bit_field_t<0, 0x3> CFGR_DMNGT; // ADC DMA transfer enable

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR2_ROVSE = 0x1; // ADC oversampler enable on scope ADC group regular
    static constexpr uint32_t CFGR2_JOVSE = 0x2; // ADC oversampler enable on scope ADC group injected
    typedef bit_field_t<5, 0xf> CFGR2_OVSS; // ADC oversampling shift
    static constexpr uint32_t CFGR2_TROVS = 0x200; // ADC oversampling discontinuous mode (triggered mode) for ADC group regular
    static constexpr uint32_t CFGR2_ROVSM = 0x400; // Regular Oversampling mode
    static constexpr uint32_t CFGR2_RSHIFT1 = 0x800; // Right-shift data after Offset 1 correction
    static constexpr uint32_t CFGR2_RSHIFT2 = 0x1000; // Right-shift data after Offset 2 correction
    static constexpr uint32_t CFGR2_RSHIFT3 = 0x2000; // Right-shift data after Offset 3 correction
    static constexpr uint32_t CFGR2_RSHIFT4 = 0x4000; // Right-shift data after Offset 4 correction
    typedef bit_field_t<16, 0x3ff> CFGR2_OSR; // Oversampling ratio
    typedef bit_field_t<28, 0xf> CFGR2_LSHIFT; // Left shift factor

    static constexpr uint32_t SMPR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<27, 0x7> SMPR1_SMP9; // ADC channel 9 sampling time selection
    typedef bit_field_t<24, 0x7> SMPR1_SMP8; // ADC channel 8 sampling time selection
    typedef bit_field_t<21, 0x7> SMPR1_SMP7; // ADC channel 7 sampling time selection
    typedef bit_field_t<18, 0x7> SMPR1_SMP6; // ADC channel 6 sampling time selection
    typedef bit_field_t<15, 0x7> SMPR1_SMP5; // ADC channel 5 sampling time selection
    typedef bit_field_t<12, 0x7> SMPR1_SMP4; // ADC channel 4 sampling time selection
    typedef bit_field_t<9, 0x7> SMPR1_SMP3; // ADC channel 3 sampling time selection
    typedef bit_field_t<6, 0x7> SMPR1_SMP2; // ADC channel 2 sampling time selection
    typedef bit_field_t<3, 0x7> SMPR1_SMP1; // ADC channel 1 sampling time selection

    static constexpr uint32_t SMPR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<27, 0x7> SMPR2_SMP19; // ADC channel 18 sampling time selection
    typedef bit_field_t<24, 0x7> SMPR2_SMP18; // ADC channel 18 sampling time selection
    typedef bit_field_t<21, 0x7> SMPR2_SMP17; // ADC channel 17 sampling time selection
    typedef bit_field_t<18, 0x7> SMPR2_SMP16; // ADC channel 16 sampling time selection
    typedef bit_field_t<15, 0x7> SMPR2_SMP15; // ADC channel 15 sampling time selection
    typedef bit_field_t<12, 0x7> SMPR2_SMP14; // ADC channel 14 sampling time selection
    typedef bit_field_t<9, 0x7> SMPR2_SMP13; // ADC channel 13 sampling time selection
    typedef bit_field_t<6, 0x7> SMPR2_SMP12; // ADC channel 12 sampling time selection
    typedef bit_field_t<3, 0x7> SMPR2_SMP11; // ADC channel 11 sampling time selection
    typedef bit_field_t<0, 0x7> SMPR2_SMP10; // ADC channel 10 sampling time selection

    static constexpr uint32_t PCSEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> PCSEL_PCSEL; // Channel x (VINP[i]) pre selection

    static constexpr uint32_t LTR1_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LTR1_LTR1; // ADC analog watchdog 1 threshold low

    static constexpr uint32_t LHTR1_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LHTR1_LHTR1; // ADC analog watchdog 2 threshold low


    static constexpr uint32_t SQR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> SQR1_SQ4; // ADC group regular sequencer rank 4
    typedef bit_field_t<18, 0x1f> SQR1_SQ3; // ADC group regular sequencer rank 3
    typedef bit_field_t<12, 0x1f> SQR1_SQ2; // ADC group regular sequencer rank 2
    typedef bit_field_t<6, 0x1f> SQR1_SQ1; // ADC group regular sequencer rank 1
    typedef bit_field_t<0, 0xf> SQR1_L3; // L3

    static constexpr uint32_t SQR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> SQR2_SQ9; // ADC group regular sequencer rank 9
    typedef bit_field_t<18, 0x1f> SQR2_SQ8; // ADC group regular sequencer rank 8
    typedef bit_field_t<12, 0x1f> SQR2_SQ7; // ADC group regular sequencer rank 7
    typedef bit_field_t<6, 0x1f> SQR2_SQ6; // ADC group regular sequencer rank 6
    typedef bit_field_t<0, 0x1f> SQR2_SQ5; // ADC group regular sequencer rank 5

    static constexpr uint32_t SQR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> SQR3_SQ14; // ADC group regular sequencer rank 14
    typedef bit_field_t<18, 0x1f> SQR3_SQ13; // ADC group regular sequencer rank 13
    typedef bit_field_t<12, 0x1f> SQR3_SQ12; // ADC group regular sequencer rank 12
    typedef bit_field_t<6, 0x1f> SQR3_SQ11; // ADC group regular sequencer rank 11
    typedef bit_field_t<0, 0x1f> SQR3_SQ10; // ADC group regular sequencer rank 10

    static constexpr uint32_t SQR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<6, 0x1f> SQR4_SQ16; // ADC group regular sequencer rank 16
    typedef bit_field_t<0, 0x1f> SQR4_SQ15; // ADC group regular sequencer rank 15

    static constexpr uint32_t DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR_RDATA; // ADC group regular conversion data


    static constexpr uint32_t JSQR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<27, 0x1f> JSQR_JSQ4; // ADC group injected sequencer rank 4
    typedef bit_field_t<21, 0x1f> JSQR_JSQ3; // ADC group injected sequencer rank 3
    typedef bit_field_t<15, 0x1f> JSQR_JSQ2; // ADC group injected sequencer rank 2
    typedef bit_field_t<9, 0x1f> JSQR_JSQ1; // ADC group injected sequencer rank 1
    typedef bit_field_t<7, 0x3> JSQR_JEXTEN; // ADC group injected external trigger polarity
    typedef bit_field_t<2, 0x1f> JSQR_JEXTSEL; // ADC group injected external trigger source
    typedef bit_field_t<0, 0x3> JSQR_JL; // ADC group injected sequencer scan length


    static constexpr uint32_t OFR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR1_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR1_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR1_OFFSET1; // ADC offset number 1 offset level

    static constexpr uint32_t OFR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR2_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR2_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR2_OFFSET1; // ADC offset number 1 offset level

    static constexpr uint32_t OFR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR3_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR3_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR3_OFFSET1; // ADC offset number 1 offset level

    static constexpr uint32_t OFR4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR4_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR4_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR4_OFFSET1; // ADC offset number 1 offset level


    static constexpr uint32_t JDR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR1_JDATA1; // ADC group injected sequencer rank 1 conversion data

    static constexpr uint32_t JDR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR2_JDATA2; // ADC group injected sequencer rank 2 conversion data

    static constexpr uint32_t JDR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR3_JDATA3; // ADC group injected sequencer rank 3 conversion data

    static constexpr uint32_t JDR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR4_JDATA4; // ADC group injected sequencer rank 4 conversion data


    static constexpr uint32_t AWD2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> AWD2CR_AWD2CH; // ADC analog watchdog 2 monitored channel selection

    static constexpr uint32_t AWD3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<1, 0xfffff> AWD3CR_AWD3CH; // ADC analog watchdog 3 monitored channel selection


    static constexpr uint32_t LTR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LTR2_LTR2; // Analog watchdog 2 lower threshold

    static constexpr uint32_t HTR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> HTR2_HTR2; // Analog watchdog 2 higher threshold

    static constexpr uint32_t LTR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LTR3_LTR3; // Analog watchdog 3 lower threshold

    static constexpr uint32_t HTR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> HTR3_HTR3; // Analog watchdog 3 higher threshold

    static constexpr uint32_t DIFSEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> DIFSEL_DIFSEL; // ADC channel differential or single-ended mode for channel

    static constexpr uint32_t CALFACT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0x7ff> CALFACT_CALFACT_D; // ADC calibration factor in differential mode
    typedef bit_field_t<0, 0x7ff> CALFACT_CALFACT_S; // ADC calibration factor in single-ended mode

    static constexpr uint32_t CALFACT2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fffffff> CALFACT2_LINCALFACT; // Linearity Calibration Factor
};

// ADC3_COMMON: Analog-to-Digital Converter

struct stm32h723_adc3_common_t
{
    volatile uint32_t CSR; // ADC Common status register
    reserved_t<0x1> _0x4;
    volatile uint32_t CCR; // ADC common control register
    volatile uint32_t CDR; // ADC common regular data register for dual and triple modes
    volatile uint32_t CDR2; // ADC x common regular data register for 32-bit dual mode

    static constexpr uint32_t CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CSR_ADRDY_MST = 0x1; // Master ADC ready
    static constexpr uint32_t CSR_EOSMP_MST = 0x2; // End of Sampling phase flag of the master ADC
    static constexpr uint32_t CSR_EOC_MST = 0x4; // End of regular conversion of the master ADC
    static constexpr uint32_t CSR_EOS_MST = 0x8; // End of regular sequence flag of the master ADC
    static constexpr uint32_t CSR_OVR_MST = 0x10; // Overrun flag of the master ADC
    static constexpr uint32_t CSR_JEOC_MST = 0x20; // End of injected conversion flag of the master ADC
    static constexpr uint32_t CSR_JEOS_MST = 0x40; // End of injected sequence flag of the master ADC
    static constexpr uint32_t CSR_AWD1_MST = 0x80; // Analog watchdog 1 flag of the master ADC
    static constexpr uint32_t CSR_AWD2_MST = 0x100; // Analog watchdog 2 flag of the master ADC
    static constexpr uint32_t CSR_AWD3_MST = 0x200; // Analog watchdog 3 flag of the master ADC
    static constexpr uint32_t CSR_JQOVF_MST = 0x400; // Injected Context Queue Overflow flag of the master ADC
    static constexpr uint32_t CSR_ADRDY_SLV = 0x10000; // Slave ADC ready
    static constexpr uint32_t CSR_EOSMP_SLV = 0x20000; // End of Sampling phase flag of the slave ADC
    static constexpr uint32_t CSR_EOC_SLV = 0x40000; // End of regular conversion of the slave ADC
    static constexpr uint32_t CSR_EOS_SLV = 0x80000; // End of regular sequence flag of the slave ADC
    static constexpr uint32_t CSR_OVR_SLV = 0x100000; // Overrun flag of the slave ADC
    static constexpr uint32_t CSR_JEOC_SLV = 0x200000; // End of injected conversion flag of the slave ADC
    static constexpr uint32_t CSR_JEOS_SLV = 0x400000; // End of injected sequence flag of the slave ADC
    static constexpr uint32_t CSR_AWD1_SLV = 0x800000; // Analog watchdog 1 flag of the slave ADC
    static constexpr uint32_t CSR_AWD2_SLV = 0x1000000; // Analog watchdog 2 flag of the slave ADC
    static constexpr uint32_t CSR_AWD3_SLV = 0x2000000; // Analog watchdog 3 flag of the slave ADC
    static constexpr uint32_t CSR_JQOVF_SLV = 0x4000000; // Injected Context Queue Overflow flag of the slave ADC


    static constexpr uint32_t CCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> CCR_DUAL; // Dual ADC mode selection
    typedef bit_field_t<8, 0xf> CCR_DELAY; // Delay between 2 sampling phases
    typedef bit_field_t<14, 0x3> CCR_DAMDF; // Dual ADC Mode Data Format
    typedef bit_field_t<16, 0x3> CCR_CKMODE; // ADC clock mode
    typedef bit_field_t<18, 0xf> CCR_PRESC; // ADC prescaler
    static constexpr uint32_t CCR_VREFEN = 0x400000; // VREFINT enable
    static constexpr uint32_t CCR_VSENSEEN = 0x800000; // Temperature sensor enable
    static constexpr uint32_t CCR_VBATEN = 0x1000000; // VBAT enable

    static constexpr uint32_t CDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CDR_RDATA_SLV; // Regular data of the slave ADC
    typedef bit_field_t<0, 0xffff> CDR_RDATA_MST; // Regular data of the master ADC

    static constexpr uint32_t CDR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CDR2_RDATA_ALT; // Regular data of the master/slave alternated ADCs
};

// ADC3_COMMON: Analog-to-Digital Converter

struct stm32h750x_adc3_common_t
{
    volatile uint32_t CSR; // ADC Common status register
    reserved_t<0x1> _0x4;
    volatile uint32_t CCR; // ADC common control register
    volatile uint32_t CDR; // ADC common regular data register for dual and triple modes

    static constexpr uint32_t CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CSR_ADRDY_MST = 0x1; // Master ADC ready
    static constexpr uint32_t CSR_EOSMP_MST = 0x2; // End of Sampling phase flag of the master ADC
    static constexpr uint32_t CSR_EOC_MST = 0x4; // End of regular conversion of the master ADC
    static constexpr uint32_t CSR_EOS_MST = 0x8; // End of regular sequence flag of the master ADC
    static constexpr uint32_t CSR_OVR_MST = 0x10; // Overrun flag of the master ADC
    static constexpr uint32_t CSR_JEOC_MST = 0x20; // End of injected conversion flag of the master ADC
    static constexpr uint32_t CSR_JEOS_MST = 0x40; // End of injected sequence flag of the master ADC
    static constexpr uint32_t CSR_AWD1_MST = 0x80; // Analog watchdog 1 flag of the master ADC
    static constexpr uint32_t CSR_AWD2_MST = 0x100; // Analog watchdog 2 flag of the master ADC
    static constexpr uint32_t CSR_AWD3_MST = 0x200; // Analog watchdog 3 flag of the master ADC
    static constexpr uint32_t CSR_JQOVF_MST = 0x400; // Injected Context Queue Overflow flag of the master ADC
    static constexpr uint32_t CSR_ADRDY_SLV = 0x10000; // Slave ADC ready
    static constexpr uint32_t CSR_EOSMP_SLV = 0x20000; // End of Sampling phase flag of the slave ADC
    static constexpr uint32_t CSR_EOC_SLV = 0x40000; // End of regular conversion of the slave ADC
    static constexpr uint32_t CSR_EOS_SLV = 0x80000; // End of regular sequence flag of the slave ADC
    static constexpr uint32_t CSR_OVR_SLV = 0x100000; // Overrun flag of the slave ADC
    static constexpr uint32_t CSR_JEOC_SLV = 0x200000; // End of injected conversion flag of the slave ADC
    static constexpr uint32_t CSR_JEOS_SLV = 0x400000; // End of injected sequence flag of the slave ADC
    static constexpr uint32_t CSR_AWD1_SLV = 0x800000; // Analog watchdog 1 flag of the slave ADC
    static constexpr uint32_t CSR_AWD2_SLV = 0x1000000; // Analog watchdog 2 flag of the slave ADC
    static constexpr uint32_t CSR_AWD3_SLV = 0x2000000; // Analog watchdog 3 flag of the slave ADC
    static constexpr uint32_t CSR_JQOVF_SLV = 0x4000000; // Injected Context Queue Overflow flag of the slave ADC


    static constexpr uint32_t CCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> CCR_DUAL; // Dual ADC mode selection
    typedef bit_field_t<8, 0xf> CCR_DELAY; // Delay between 2 sampling phases
    typedef bit_field_t<14, 0x3> CCR_DAMDF; // Dual ADC Mode Data Format
    typedef bit_field_t<16, 0x3> CCR_CKMODE; // ADC clock mode
    typedef bit_field_t<18, 0xf> CCR_PRESC; // ADC prescaler
    static constexpr uint32_t CCR_VREFEN = 0x400000; // VREFINT enable
    static constexpr uint32_t CCR_VSENSEEN = 0x800000; // Temperature sensor enable
    static constexpr uint32_t CCR_VBATEN = 0x1000000; // VBAT enable

    static constexpr uint32_t CDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CDR_RDATA_SLV; // Regular data of the slave ADC
    typedef bit_field_t<0, 0xffff> CDR_RDATA_MST; // Regular data of the master ADC
};

template<>
struct peripheral_t<STM32H7A3x, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32h7a3x_adc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32h7a3x_adc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32h7a3x_adc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32h7a3x_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32h7a3x_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32h7a3x_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H723, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32h723_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H723, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32h723_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32h723_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32h723_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32h723_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32h723_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32h723_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32h723_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32h723_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32h723_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32h723_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32h723_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32h723_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32h723_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32h723_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32h723_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32h723_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32h723_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32h723_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32h723_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32h723_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32h723_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32h723_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32h723_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32h723_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32h723_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32h723_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32h723_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32h742x_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32h742x_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32h742x_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32h742x_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32h742x_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32h742x_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32h742x_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32h742x_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32h742x_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32h750x_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32h750x_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32h750x_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H723, ADC12_COMMON>
{
    static constexpr periph_t P = ADC12_COMMON;
    using T = stm32h723_adc3_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H723, ADC3_COMMON>
{
    static constexpr periph_t P = ADC3_COMMON;
    using T = stm32h723_adc3_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, ADC12_COMMON>
{
    static constexpr periph_t P = ADC12_COMMON;
    using T = stm32h723_adc3_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, ADC3_COMMON>
{
    static constexpr periph_t P = ADC3_COMMON;
    using T = stm32h723_adc3_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, ADC12_COMMON>
{
    static constexpr periph_t P = ADC12_COMMON;
    using T = stm32h723_adc3_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, ADC3_COMMON>
{
    static constexpr periph_t P = ADC3_COMMON;
    using T = stm32h723_adc3_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, ADC12_COMMON>
{
    static constexpr periph_t P = ADC12_COMMON;
    using T = stm32h723_adc3_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, ADC3_COMMON>
{
    static constexpr periph_t P = ADC3_COMMON;
    using T = stm32h723_adc3_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, ADC12_COMMON>
{
    static constexpr periph_t P = ADC12_COMMON;
    using T = stm32h723_adc3_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, ADC3_COMMON>
{
    static constexpr periph_t P = ADC3_COMMON;
    using T = stm32h723_adc3_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, ADC12_COMMON>
{
    static constexpr periph_t P = ADC12_COMMON;
    using T = stm32h723_adc3_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, ADC3_COMMON>
{
    static constexpr periph_t P = ADC3_COMMON;
    using T = stm32h723_adc3_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, ADC12_COMMON>
{
    static constexpr periph_t P = ADC12_COMMON;
    using T = stm32h723_adc3_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, ADC3_COMMON>
{
    static constexpr periph_t P = ADC3_COMMON;
    using T = stm32h723_adc3_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, ADC12_COMMON>
{
    static constexpr periph_t P = ADC12_COMMON;
    using T = stm32h723_adc3_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, ADC3_COMMON>
{
    static constexpr periph_t P = ADC3_COMMON;
    using T = stm32h723_adc3_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, ADC12_COMMON>
{
    static constexpr periph_t P = ADC12_COMMON;
    using T = stm32h723_adc3_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, ADC3_COMMON>
{
    static constexpr periph_t P = ADC3_COMMON;
    using T = stm32h723_adc3_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, ADC12_COMMON>
{
    static constexpr periph_t P = ADC12_COMMON;
    using T = stm32h723_adc3_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, ADC3_COMMON>
{
    static constexpr periph_t P = ADC3_COMMON;
    using T = stm32h723_adc3_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, ADC12_COMMON>
{
    static constexpr periph_t P = ADC12_COMMON;
    using T = stm32h723_adc3_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, ADC3_COMMON>
{
    static constexpr periph_t P = ADC3_COMMON;
    using T = stm32h723_adc3_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, ADC12_COMMON>
{
    static constexpr periph_t P = ADC12_COMMON;
    using T = stm32h723_adc3_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, ADC3_COMMON>
{
    static constexpr periph_t P = ADC3_COMMON;
    using T = stm32h723_adc3_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, ADC12_COMMON>
{
    static constexpr periph_t P = ADC12_COMMON;
    using T = stm32h723_adc3_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, ADC3_COMMON>
{
    static constexpr periph_t P = ADC3_COMMON;
    using T = stm32h723_adc3_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, ADC12_COMMON>
{
    static constexpr periph_t P = ADC12_COMMON;
    using T = stm32h750x_adc3_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, ADC3_COMMON>
{
    static constexpr periph_t P = ADC3_COMMON;
    using T = stm32h750x_adc3_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, ADC12_COMMON>
{
    static constexpr periph_t P = ADC12_COMMON;
    using T = stm32h750x_adc3_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, ADC12_COMMON>
{
    static constexpr periph_t P = ADC12_COMMON;
    using T = stm32h750x_adc3_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, ADC12_COMMON>
{
    static constexpr periph_t P = ADC12_COMMON;
    using T = stm32h750x_adc3_common_t;
    static T& V;
};

using adc1_t = peripheral_t<svd, ADC1>;
using adc12_common_t = peripheral_t<svd, ADC12_COMMON>;
using adc2_t = peripheral_t<svd, ADC2>;
using adc3_t = peripheral_t<svd, ADC3>;
using adc3_common_t = peripheral_t<svd, ADC3_COMMON>;

template<int INST> struct adc_traits {};

template<> struct adc_traits<1>
{
    using adc = adc1_t;
};

template<> struct adc_traits<12>
{
    using adc = adc12_common_t;
    static constexpr clock_source_t CLOCK = AHB_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB1ENR |= RCC::T::AHB1ENR_ADC12_COMMONEN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB1ENR &= ~RCC::T::AHB1ENR_ADC12_COMMONEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB1RSTR |= RCC::T::AHB1RSTR_ADC12_COMMONRST;
    }
};

template<> struct adc_traits<2>
{
    using adc = adc2_t;
};

template<> struct adc_traits<3>
{
    using adc = adc3_t;
    static constexpr clock_source_t CLOCK = AHB_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB4ENR |= RCC::T::AHB4ENR_ADC3EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB4ENR &= ~RCC::T::AHB4ENR_ADC3EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB4RSTR |= RCC::T::AHB4RSTR_ADC3RST;
    }
};

template<> struct adc_traits<0>
{
    using adc = adc3_common_t;
};
