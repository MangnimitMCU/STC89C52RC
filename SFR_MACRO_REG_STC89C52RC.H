/*
FileName    : SFR_MACRO_REG_STC89C52RC.H
Author      : Somlak Mangnimit
Date        : 30/JUN/2024
For SDCC Compiler
*/
#ifndef __SFR_MACRO_REG_STC89C52RC_H
#define __SFR_MACRO_REG_STC89C52RC_H

#include "stdint.h"

/**********************************************/
/* SFR Bit Access */
/* XICON */
#define sbit_IT2                IT2 = 1   // STC89C52RC
#define sbit_IE2                IE2 = 1   // STC89C52RC
#define sbit_EX2                EX2 = 1   // STC89C52RC
#define sbit_PX2                PX2 = 1   // STC89C52RC
#define sbit_IT3                IT3 = 1   // STC89C52RC
#define sbit_IE3                IE3 = 1   // STC89C52RC
#define sbit_EX3                EX3 = 1   // STC89C52RC
#define sbit_PX3                PX3 = 1   // STC89C52RC

#define cbit_IT2                IT2 = 0   // STC89C52RC
#define cbit_IE2                IE2 = 0   // STC89C52RC
#define cbit_EX2                EX2 = 0   // STC89C52RC
#define cbit_PX2                PX2 = 0   // STC89C52RC
#define cbit_IT3                IT3 = 0   // STC89C52RC
#define cbit_IE3                IE3 = 0   // STC89C52RC
#define cbit_EX3                EX3 = 0   // STC89C52RC
#define cbit_PX3                PX3 = 0   // STC89C52RC

/* P4 */
#define sbit_P40                P40 = 1   // STC89C52RC
#define sbit_P41                P41 = 1   // STC89C52RC
#define sbit_P42                P42 = 1   // STC89C52RC
#define sbit_P43                P43 = 1   // STC89C52RC
#define sbit_P44                P44 = 1   // STC89C52RC
#define sbit_P45                P45 = 1   // STC89C52RC
#define sbit_P46                P46 = 1   // STC89C52RC
#define sbit_P47                P47 = 1   // STC89C52RC

#define cbit_P40                P40 = 0   // STC89C52RC
#define cbit_P41                P41 = 0   // STC89C52RC
#define cbit_P42                P42 = 0   // STC89C52RC
#define cbit_P43                P43 = 0   // STC89C52RC
#define cbit_P44                P44 = 0   // STC89C52RC
#define cbit_P45                P45 = 0   // STC89C52RC
#define cbit_P46                P46 = 0   // STC89C52RC
#define cbit_P47                P47 = 0   // STC89C52RC

/**********************************************/
/* SFR Byte Access */
/* AUXR */
#define sbit_ALEOFF             sb(AUXR, _ALEOFF)    // STC89C52RC
#define sbit_EXTRAM             sb(AUXR, _EXTRAM)    // STC89C52RC

#define cbit_ALEOFF             cb(AUXR, _ALEOFF)    // STC89C52RC
#define cbit_EXTRAM             cb(AUXR, _EXTRAM)    // STC89C52RC

/* AUXR1 */
#define sbit_DPS                sb(AUXR1, _DPS)  // STC89C52RC
#define sbit_GF2                sb(AUXR1, _GF2)  // STC89C52RC

#define cbit_DPS                cb(AUXR1, _DPS)  // STC89C52RC
#define cbit_GF2                cb(AUXR1, _GF2)  // STC89C52RC

/* IPH */
#define sbit_PX0H               sb(IPH, _PX0H)   // STC89C52RC
#define sbit_PT0H               sb(IPH, _PT0H)   // STC89C52RC
#define sbit_PX1H               sb(IPH, _PX1H)   // STC89C52RC
#define sbit_PT1H               sb(IPH, _PT1H)   // STC89C52RC
#define sbit_PSH                sb(IPH, _PSH)    // STC89C52RC
#define sbit_PT2H               sb(IPH, _PT2H)   // STC89C52RC
#define sbit_PX2H               sb(IPH, _PX2H)   // STC89C52RC
#define sbit_PX3H               sb(IPH, _PX3H)   // STC89C52RC

#define cbit_PX0H               cb(IPH, _PX0H)   // STC89C52RC
#define cbit_PT0H               cb(IPH, _PT0H)   // STC89C52RC
#define cbit_PX1H               cb(IPH, _PX1H)   // STC89C52RC
#define cbit_PT1H               cb(IPH, _PT1H)   // STC89C52RC
#define cbit_PSH                cb(IPH, _PSH)    // STC89C52RC
#define cbit_PT2H               cb(IPH, _PT2H)   // STC89C52RC
#define cbit_PX2H               cb(IPH, _PX2H)   // STC89C52RC
#define cbit_PX3H               cb(IPH, _PX3H)   // STC89C52RC

/* WDT_CONTR */
#define sbit_PS0                sb(WDT_CONTR, _PS0)       // STC89C52RC
#define sbit_PS1                sb(WDT_CONTR, _PS1)       // STC89C52RC
#define sbit_PS2                sb(WDT_CONTR, _PS2)       // STC89C52RC
#define sbit_IDLE_WDT           sb(WDT_CONTR, _IDLE_WDT)  // STC89C52RC
#define sbit_CLR_WDT            sb(WDT_CONTR, _CLR_WDT)   // STC89C52RC
#define sbit_EN_WDT             sb(WDT_CONTR, _EN_WDT)    // STC89C52RC

#define cbit_PS0                cb(WDT_CONTR, _PS0)       // STC89C52RC
#define cbit_PS1                cb(WDT_CONTR, _PS1)       // STC89C52RC
#define cbit_PS2                cb(WDT_CONTR, _PS2)       // STC89C52RC
#define cbit_IDLE_WDT           cb(WDT_CONTR, _IDLE_WDT)  // STC89C52RC
#define cbit_CLR_WDT            cb(WDT_CONTR, _CLR_WDT)   // STC89C52RC
#define cbit_EN_WDT             cb(WDT_CONTR, _EN_WDT)    // STC89C52RC

/* IAP_CMD */
#define sbit_MS0                sb(IAP_CMD, _MS0)    // STC89C52RC
#define sbit_MS1                sb(IAP_CMD, _MS1)    // STC89C52RC
#define sbit_MS2                sb(IAP_CMD, _MS2)    // STC89C52RC

#define cbit_MS0                cb(IAP_CMD, _MS0)    // STC89C52RC
#define cbit_MS1                cb(IAP_CMD, _MS1)    // STC89C52RC
#define cbit_MS2                cb(IAP_CMD, _MS2)    // STC89C52RC

/* IAP_CONTR */
#define sbit_WT0                sb(IAP_CONTR, _WT0)      // STC89C52RC
#define sbit_WT1                sb(IAP_CONTR, _WT1)      // STC89C52RC
#define sbit_WT2                sb(IAP_CONTR, _WT2)      // STC89C52RC
#define sbit_SWRST              sb(IAP_CONTR, _SWRST)    // STC89C52RC
#define sbit_SWBS               sb(IAP_CONTR, _SWBS)     // STC89C52RC
#define sbit_IAPEN              sb(IAP_CONTR, _IAPEN)    // STC89C52RC

#define cbit_WT0                cb(IAP_CONTR, _WT0)      // STC89C52RC
#define cbit_WT1                cb(IAP_CONTR, _WT1)      // STC89C52RC
#define cbit_WT2                cb(IAP_CONTR, _WT2)      // STC89C52RC
#define cbit_SWRST              cb(IAP_CONTR, _SWRST)    // STC89C52RC
#define cbit_SWBS               cb(IAP_CONTR, _SWBS)     // STC89C52RC
#define cbit_IAPEN              cb(IAP_CONTR, _IAPEN)    // STC89C52RC

#endif /* __SFR_MACRO_REG_STC89C52RC_H */

