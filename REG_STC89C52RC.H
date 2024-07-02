/*
FileName    : REG_STC89C52RC.H
Author      : Somlak Mangnimit
Date        : 30/JUN/2024
For SDCC Compiler
*/
#ifndef __REG_STC89C52RC_H
#define __REG_STC89C52RC_H

/* SFR Byte register */
__sfr __at (0x8E) AUXR      ;   // STC89C52RC

__sfr __at (0xA2) AUXR1     ;   // STC89C52RC

__sfr __at (0xA9) SADDR     ;   // STC89C52RC

__sfr __at (0xB7) IPH       ;   // STC89C52RC

__sfr __at (0xB9) SADEN     ;   // STC89C52RC

__sfr __at (0xC0) XICON     ;   // Bit register // STC89C52RC

__sfr __at (0xE1) WDT_CONTR ;   // STC89C52RC
__sfr __at (0xE2) IAP_DATA  ;   // STC89C52RC
__sfr __at (0xE3) IAP_ADDRH ;   // STC89C52RC
__sfr __at (0xE4) IAP_ADDRL ;   // STC89C52RC
__sfr __at (0xE5) IAP_CMD   ;   // STC89C52RC
__sfr __at (0xE6) IAP_TRIG  ;   // STC89C52RC
__sfr __at (0xE7) IAP_CONTR ;   // STC89C52RC

__sfr __at (0xE8) P4        ;   // Bit register // STC89C52RC

/* SFR Bit register */
/* XICON */
__sbit __at (0xC0) IT2      ;   // STC89C52RC
__sbit __at (0xC1) IE2      ;   // STC89C52RC
__sbit __at (0xC2) EX2      ;   // STC89C52RC
__sbit __at (0xC3) PX2      ;   // STC89C52RC
__sbit __at (0xC4) IT3      ;   // STC89C52RC
__sbit __at (0xC5) IE3      ;   // STC89C52RC
__sbit __at (0xC6) EX3      ;   // STC89C52RC
__sbit __at (0xC7) PX3      ;   // STC89C52RC

/* P4 */
__sbit __at (0xE8) P40      ;   // STC89C52RC
__sbit __at (0xE9) P41      ;   // STC89C52RC
__sbit __at (0xEA) P42      ;   // STC89C52RC
__sbit __at (0xEB) P43      ;   // STC89C52RC
__sbit __at (0xEC) P44      ;   // STC89C52RC
__sbit __at (0xED) P45      ;   // STC89C52RC
__sbit __at (0xEE) P46      ;   // STC89C52RC
__sbit __at (0xEF) P47      ;   // STC89C52RC

/* SFR Bit define */
/* XICON */
#define _IT2        0x01
#define _IE2        0x02
#define _EX2        0x04
#define _PX2        0x08
#define _IT3        0x10
#define _IE3        0x20
#define _EX3        0x40
#define _PX3        0x80

/* P4 */
#define _P40        0x01
#define _P41        0x02
#define _P42        0x04
#define _P43        0x08
#define _P44        0x10
#define _P45        0x20
#define _P46        0x40
#define _P47        0x80

/* AUXR */
#define _ALEOFF     0x01        // STC89C52RC
#define _EXTRAM     0x02        // STC89C52RC

/* AUXR1 */
#define _DPS        0x01        // STC89C52RC
#define _GF2        0x08        // STC89C52RC

/* IPH */
#define _PX0H       0x01        // STC89C52RC
#define _PT0H       0x02        // STC89C52RC
#define _PX1H       0x04        // STC89C52RC
#define _PT1H       0x08        // STC89C52RC
#define _PSH        0x10        // STC89C52RC
#define _PT2H       0x20        // STC89C52RC
#define _PX2H       0x40        // STC89C52RC
#define _PX3H       0x80        // STC89C52RC

/* WDT_CONTR */
#define PS0         0x01        // STC89C52RC
#define PS1         0x02        // STC89C52RC
#define PS2         0x04        // STC89C52RC
#define IDLE_WDT    0x08        // STC89C52RC
#define CLR_WDT     0x10        // STC89C52RC
#define EN_WDT      0x20        // STC89C52RC

/* IAP_CMD */
#define MS0         0x01        // STC89C52RC
#define MS1         0x02        // STC89C52RC
#define MS2         0x04        // STC89C52RC

/* IAP_CONTR */
#define WT0         0x01        // STC89C52RC
#define WT1         0x02        // STC89C52RC
#define WT2         0x04        // STC89C52RC
#define SWRST       0x20        // STC89C52RC
#define SWBS        0x40        // STC89C52RC
#define IAPEN       0x80        // STC89C52RC

/* Interrupt numbers: address = (number * 8) + 3 */
#define IE2_VECTOR      6    /* External 2  */
#define IE3_VECTOR      7    /* External 3  (Lowest Priority) */

#endif /* __REG_STC89C52RC_H */

