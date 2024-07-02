/*
FileName    : SFR_MACRO_REG52.H
Author      : Somlak Mangnimit
Date        : 29/JUN/2024
For SDCC Compiler
*/
#ifndef __SFR_MACRO_REG52_H
#define __SFR_MACRO_REG52_H

#include "stdint.h"

#define sb(REG, BIT)        (REG |= BIT)
#define cb(REG, BIT)        (REG &= ~BIT)

/**********************************************/
/* GPIO */
#define P_RXD       P30
#define P_TXD       P31
#define P_INT0      P32
#define P_INT1      P33
#define P_T0        P34
#define P_T1        P35
#define P_T2        P10
#define P_T2EX      P11

/**********************************************/
/* SFR Bit Access */
/* P0 */
#define sbit_P00                P00 = 1
#define sbit_P01                P01 = 1
#define sbit_P02                P02 = 1
#define sbit_P03                P03 = 1
#define sbit_P04                P04 = 1
#define sbit_P05                P05 = 1
#define sbit_P06                P06 = 1
#define sbit_P07                P07 = 1

#define cbit_P00                P00 = 0
#define cbit_P01                P01 = 0
#define cbit_P02                P02 = 0
#define cbit_P03                P03 = 0
#define cbit_P04                P04 = 0
#define cbit_P05                P05 = 0
#define cbit_P06                P06 = 0
#define cbit_P07                P07 = 0

/* TCON */
#define sbit_IT0                IT0 = 1
#define sbit_IE0                IE0 = 1
#define sbit_IT1                IT1 = 1
#define sbit_IE1                IE1 = 1
#define sbit_TR0                TR0 = 1
#define sbit_TF0                TF0 = 1
#define sbit_TR1                TR1 = 1
#define sbit_TF1                TF1 = 1

#define cbit_IT0                IT0 = 0
#define cbit_IE0                IE0 = 0
#define cbit_IT1                IT1 = 0
#define cbit_IE1                IE1 = 0
#define cbit_TR0                TR0 = 0
#define cbit_TF0                TF0 = 0
#define cbit_TR1                TR1 = 0
#define cbit_TF1                TF1 = 0

/* P1 */
#define sbit_P10                P10 = 1
#define sbit_P11                P11 = 1
#define sbit_P12                P12 = 1
#define sbit_P13                P13 = 1
#define sbit_P14                P14 = 1
#define sbit_P15                P15 = 1
#define sbit_P16                P16 = 1
#define sbit_P17                P17 = 1

#define cbit_P10                P10 = 0
#define cbit_P11                P11 = 0
#define cbit_P12                P12 = 0
#define cbit_P13                P13 = 0
#define cbit_P14                P14 = 0
#define cbit_P15                P15 = 0
#define cbit_P16                P16 = 0
#define cbit_P17                P17 = 0

/* SCON */
#define sbit_RI                 RI  = 1
#define sbit_TI                 TI  = 1
#define sbit_RB8                RB8 = 1
#define sbit_TB8                TB8 = 1
#define sbit_REN                REN = 1
#define sbit_SM2                SM2 = 1
#define sbit_SM1                SM1 = 1
#define sbit_SM0                SM0 = 1

#define cbit_RI                 RI  = 0
#define cbit_TI                 TI  = 0
#define cbit_RB8                RB8 = 0
#define cbit_TB8                TB8 = 0
#define cbit_REN                REN = 0
#define cbit_SM2                SM2 = 0
#define cbit_SM1                SM1 = 0
#define cbit_SM0                SM0 = 0

/* P2 */
#define sbit_P20                P20 = 1
#define sbit_P21                P21 = 1
#define sbit_P22                P22 = 1
#define sbit_P23                P23 = 1
#define sbit_P24                P24 = 1
#define sbit_P25                P25 = 1
#define sbit_P26                P26 = 1
#define sbit_P27                P27 = 1

#define cbit_P20                P20 = 0
#define cbit_P21                P21 = 0
#define cbit_P22                P22 = 0
#define cbit_P23                P23 = 0
#define cbit_P24                P24 = 0
#define cbit_P25                P25 = 0
#define cbit_P26                P26 = 0
#define cbit_P27                P27 = 0

/* IE */
#define sbit_EX0                EX0 = 1
#define sbit_ET0                ET0 = 1
#define sbit_EX1                EX1 = 1
#define sbit_ET1                ET1 = 1
#define sbit_ES                 ES  = 1
#define sbit_ET2                ET2 = 1
#define sbit_EA                 EA  = 1

#define cbit_EX0                EX0 = 0
#define cbit_ET0                ET0 = 0
#define cbit_EX1                EX1 = 0
#define cbit_ET1                ET1 = 0
#define cbit_ES                 ES  = 0
#define cbit_ET2                ET2 = 0
#define cbit_EA                 EA  = 0

/* P3 */
#define sbit_P30                P30 = 1
#define sbit_P31                P31 = 1
#define sbit_P32                P32 = 1
#define sbit_P33                P33 = 1
#define sbit_P34                P34 = 1
#define sbit_P35                P35 = 1
#define sbit_P36                P36 = 1
#define sbit_P37                P37 = 1

#define cbit_P30                P30 = 0
#define cbit_P31                P31 = 0
#define cbit_P32                P32 = 0
#define cbit_P33                P33 = 0
#define cbit_P34                P34 = 0
#define cbit_P35                P35 = 0
#define cbit_P36                P36 = 0
#define cbit_P37                P37 = 0

/* IP */
#define sbit_PX0                PX0 = 1
#define sbit_PT0                PT0 = 1
#define sbit_PX1                PX1 = 1
#define sbit_PT1                PT1 = 1
#define sbit_PS                 PS  = 1
#define sbit_PT2                PT2 = 1

#define cbit_PX0                PX0 = 0
#define cbit_PT0                PT0 = 0
#define cbit_PX1                PX1 = 0
#define cbit_PT1                PT1 = 0
#define cbit_PS                 PS  = 0
#define cbit_PT2                PT2 = 0

/* T2CON */
#define sbit_CP_RL2             CP_RL2 = 1
#define sbit_C_T2               C_T2   = 1
#define sbit_TR2                TR2    = 1
#define sbit_EXEN2              EXEN2  = 1
#define sbit_TCLK               TCLK   = 1
#define sbit_RCLK               RCLK   = 1
#define sbit_EXF2               EXF2   = 1
#define sbit_TF2                TF2    = 1

#define cbit_CP_RL2             CP_RL2 = 0
#define cbit_C_T2               C_T2   = 0
#define cbit_TR2                TR2    = 0
#define cbit_EXEN2              EXEN2  = 0
#define cbit_TCLK               TCLK   = 0
#define cbit_RCLK               RCLK   = 0
#define cbit_EXF2               EXF2   = 0
#define cbit_TF2                TF2    = 0

/**********************************************/
/* SFR Byte Access */
/* PCON */
#define sbit_IDL                sb(PCON, _IDL)
#define sbit_PD                 sb(PCON, _PD)
#define sbit_GF0                sb(PCON, _GF0)
#define sbit_GF1                sb(PCON, _GF1)
#define sbit_SMOD               sb(PCON, _SMOD)

#define cbit_IDL                cb(PCON, _IDL)
#define cbit_PD                 cb(PCON, _PD)
#define cbit_GF0                cb(PCON, _GF0)
#define cbit_GF1                cb(PCON, _GF1)
#define cbit_SMOD               cb(PCON, _SMOD)

/* TMOD */
#define sbit_M0_T0              sb(TMOD, _M0_T0)
#define sbit_M1_T0              sb(TMOD, _M1_T0)
#define sbit_C_T0               sb(TMOD, _C_T0)
#define sbit_GATE_T0            sb(TMOD, _GATE_T0)
#define sbit_M0_T1              sb(TMOD, _M0_T1)
#define sbit_M1_T1              sb(TMOD, _M1_T1)
#define sbit_C_T1               sb(TMOD, _C_T1)
#define sbit_GATE_T1            sb(TMOD, _GATE_T1)

#define cbit_M0_T0              cb(TMOD, _M0_T0)
#define cbit_M1_T0              cb(TMOD, _M1_T0)
#define cbit_CT_T0              cb(TMOD, _C_T0)
#define cbit_GATE_T0            cb(TMOD, _GATE_T0)
#define cbit_M0_T1              cb(TMOD, _M0_T1)
#define cbit_M1_T1              cb(TMOD, _M1_T1)
#define cbit_C_T1               cb(TMOD, _C_T1)
#define cbit_GATE_T1            cb(TMOD, _GATE_T1)

/* T2MOD */
#define sbit_DCEN               sb(T2MOD, _DCEN)
#define sbit_T2OE               sb(T2MOD, _T2OE)

#define cbit_DCEN               cb(T2MOD, _DCEN)
#define cbit_T2OE               cb(T2MOD, _T2OE)

/* Interrupt */
#define GLOBAL_INTERRUPT_ENABLE         sbit_EA
#define GLOBAL_INTERRUPT_DISABLE        cbit_EA

/* Interrupt Enable */
#define INT0_INTERRUPT_ENABLE           sbit_EX0
#define TIM0_INTERRUPT_ENABLE           sbit_ET0
#define INT1_INTERRUPT_ENABLE           sbit_EX1
#define TIM1_INTERRUPT_ENABLE           sbit_ET1
#define UART_INTERRUPT_ENABLE           sbit_ES
#define TIM2_INTERRUPT_ENABLE           sbit_ET2

/* Interrupt Disable */
#define INT0_INTERRUPT_DISABLE          cbit_EX0
#define TIM0_INTERRUPT_DISABLE          cbit_ET0
#define INT1_INTERRUPT_DISABLE          cbit_EX1
#define TIM1_INTERRUPT_DISABLE          cbit_ET1
#define UART_INTERRUPT_DISABLE          cbit_ES
#define TIM2_INTERRUPT_DISABLE          cbit_ET2

/* External Interrupt Type */
#define INT0_LOWLEVEL_TRIGGER           cbit_IT0
#define INT0_FALLINGEDGE_TRIGGER        sbit_IT0
#define INT1_LOWLEVEL_TRIGGER           cbit_IT1
#define INT1_FALLINGEDGE_TRIGGER        sbit_IT1

/* Interrupt Priority */
#define INT0_PRIORITY_HIGH              sbit_PX0
#define TIM0_PRIORITY_HIGH              sbit_PT0
#define INT1_PRIORITY_HIGH              sbit_PX1
#define TIM1_PRIORITY_HIGH              sbit_PT1
#define UART_PRIORITY_HIGH              sbit_PS
#define TIM2_PRIORITY_HIGH              sbit_PT2

#define INT0_PRIORITY_DEFAULT           cbit_PX0
#define TIM0_PRIORITY_DEFAULT           cbit_PT0
#define INT1_PRIORITY_DEFAULT           cbit_PX1
#define TIM1_PRIORITY_DEFAULT           cbit_PT1
#define UART_PRIORITY_DEFAULT           cbit_PS
#define TIM2_PRIORITY_DEFAULT           cbit_PT2

/**********************************************/
/* Macro Timer 0 */
#define TIM0_MODE0_INT_CTRL             cb(TMOD, 0x0F)
#define TIM0_MODE1_INT_CTRL             do{cb(TMOD, 0x0F);sb(TMOD, 0x01);}while(0)
#define TIM0_MODE2_INT_CTRL             do{cb(TMOD, 0x0F);sb(TMOD, 0x02);}while(0)
#define TIM0_MODE3_INT_CTRL             do{cb(TMOD, 0x0F);sb(TMOD, 0x03);}while(0)

#define CNT0_MODE0_INT_CTRL             do{cb(TMOD, 0x0F);sb(TMOD, 0x04);}while(0)
#define CNT0_MODE1_INT_CTRL             do{cb(TMOD, 0x0F);sb(TMOD, 0x05);}while(0)
#define CNT0_MODE2_INT_CTRL             do{cb(TMOD, 0x0F);sb(TMOD, 0x06);}while(0)
#define CNT0_MODE3_INT_CTRL             do{cb(TMOD, 0x0F);sb(TMOD, 0x07);}while(0)

#define TIM0_MODE0_EXT_CTRL             do{cb(TMOD, 0x0F);sb(TMOD, 0x08);}while(0)
#define TIM0_MODE1_EXT_CTRL             do{cb(TMOD, 0x0F);sb(TMOD, 0x09);}while(0)
#define TIM0_MODE2_EXT_CTRL             do{cb(TMOD, 0x0F);sb(TMOD, 0x0A);}while(0)
#define TIM0_MODE3_EXT_CTRL             do{cb(TMOD, 0x0F);sb(TMOD, 0x0B);}while(0)

#define CNT0_MODE0_EXT_CTRL             do{cb(TMOD, 0x0F);sb(TMOD, 0x0C);}while(0)
#define CNT0_MODE1_EXT_CTRL             do{cb(TMOD, 0x0F);sb(TMOD, 0x0D);}while(0)
#define CNT0_MODE2_EXT_CTRL             do{cb(TMOD, 0x0F);sb(TMOD, 0x0E);}while(0)
#define CNT0_MODE3_EXT_CTRL             sb(TMOD, 0x0F)

#define TIM0_CNT(TMR0CNT)               do{TH0=(uint8_t)(TMR0CNT>>8);TL0=(uint8_t)(TMR0CNT&0xFF);}while(0)
#define TIM0_RUN                        sbit_TR0
#define TIM0_HALT                       cbit_TR0

/**********************************************/
/* Macro Timer 1 */
#define TIM1_MODE0_INT_CTRL             cb(TMOD, 0xF0)
#define TIM1_MODE1_INT_CTRL             do{cb(TMOD, 0xF0);sb(TMOD, 0x10);}while(0)
#define TIM1_MODE2_INT_CTRL             do{cb(TMOD, 0xF0);sb(TMOD, 0x20);}while(0)

#define CNT1_MODE0_INT_CTRL             do{cb(TMOD, 0xF0);sb(TMOD, 0x40);}while(0)
#define CNT1_MODE1_INT_CTRL             do{cb(TMOD, 0xF0);sb(TMOD, 0x50);}while(0)
#define CNT1_MODE2_INT_CTRL             do{cb(TMOD, 0xF0);sb(TMOD, 0x60);}while(0)

#define TIM1_MODE0_EXT_CTRL             do{cb(TMOD, 0xF0);sb(TMOD, 0x80);}while(0)
#define TIM1_MODE1_EXT_CTRL             do{cb(TMOD, 0xF0);sb(TMOD, 0x90);}while(0)
#define TIM1_MODE2_EXT_CTRL             do{cb(TMOD, 0xF0);sb(TMOD, 0xA0);}while(0)

#define CNT1_MODE0_EXT_CTRL             do{cb(TMOD, 0xF0);sb(TMOD, 0xC0);}while(0)
#define CNT1_MODE1_EXT_CTRL             do{cb(TMOD, 0xF0);sb(TMOD, 0xD0);}while(0)
#define CNT1_MODE2_EXT_CTRL             do{cb(TMOD, 0xF0);sb(TMOD, 0xE0);}while(0)

#define TIM1_CNT(TMR1CNT)               do{TH1=(uint8_t)(TMR1CNT>>8);TL1=(uint8_t)(TMR1CNT&0xFF);}while(0)
#define TIM1_RUN                        sbit_TR1
#define TIM1_HALT                       cbit_TR1

/**********************************************/
/* Macro Timer 2 */
#define TIM2_MODE_CAPTURE               sbit_CP_RL2
#define TIM2_MODE_AUTORELOAD            cbit_CP_RL2

#define TIM2_CLOCKSOURCE_EXTERNAL       sbit_C_T2
#define TIM2_CLOCKSOURCE_INTERNAL       cbit_C_T2

#define TIM2_EXPIN_ENABLE               sbit_EXEN2
#define TIM2_EXPIN_DISABLE              cbit_EXEN2

#define TIM2_RUN                        sbit_TR2
#define TIM2_HALT                       cbit_TR2
#define TIM2_CNT(TMR2CNT)               do{TH2=(uint8_t)(TMR2CNT>>8);TL2=(uint8_t)(TMR2CNT&0xFF);}while(0)
#define TIM2_RCAP2(RCAPCNT)             do{RCAP2H=(uint8_t)(RCAPCNT>>8);RCAP2L=(uint8_t)(RCAPCNT&0xFF);}while(0)

/**********************************************/
/* UART */
/* SM0-SM1-SM2-REN-TB8-RB8-TI-RI */
#define UART_MODE0                      cb(SCON, 0xC0)
#define UART_MODE1                      cb(SCON, 0xC0);sb(SCON, 0x40)
#define UART_MODE2                      cb(SCON, 0xC0);sb(SCON, 0x80)
#define UART_MODE3                      sb(SCON, 0xC0)

#endif /* __SFR_MACRO_REG52_H */

