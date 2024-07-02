/*
FileName    : REG52.H
Author      : Somlak Mangnimit
Date        : 18/OCT/2022
For SDCC Compiler
*/
#ifndef __REG52_H
#define __REG52_H

/* SFR Byte register */
__sfr __at (0x80) P0        ;   // Bit register
__sfr __at (0x81) SP        ;
__sfr __at (0x82) DPL       ;
__sfr __at (0x83) DPH       ;
__sfr __at (0x87) PCON      ;

/*-------------------*/
__sfr __at (0x88) TCON      ;   // Bit register
__sfr __at (0x89) TMOD      ;
__sfr __at (0x8A) TL0       ;
__sfr __at (0x8B) TL1       ;
__sfr __at (0x8C) TH0       ;
__sfr __at (0x8D) TH1       ;

/*-------------------*/
__sfr __at (0x90) P1        ;   // Bit register

/*-------------------*/
__sfr __at (0x98) SCON      ;   // Bit register
__sfr __at (0x99) SBUF      ;

/*-------------------*/
__sfr __at (0xA0) P2        ;   // Bit register

/*-------------------*/
__sfr __at (0xA8) IE        ;   // Bit register

/*-------------------*/
__sfr __at (0xB0) P3        ;   // Bit register

/*-------------------*/
__sfr __at (0xB8) IP        ;   // Bit register

/*-------------------*/
__sfr __at (0xC8) T2CON     ;   // Bit register
__sfr __at (0xC9) T2MOD     ;
__sfr __at (0xCA) RCAP2L    ;
__sfr __at (0xCB) RCAP2H    ;
__sfr __at (0xCC) TL2       ;
__sfr __at (0xCD) TH2       ;

/*-------------------*/
__sfr __at (0xD0) PSW       ;   // Bit register

/*-------------------*/
__sfr __at (0xE0) ACC       ;   // Bit register

/*-------------------*/
__sfr __at (0xF0) B         ;   // Bit register

/* SFR Bit register */
/* P0 */
__sbit __at (0x80) P00      ;
__sbit __at (0x81) P01      ;
__sbit __at (0x82) P02      ;
__sbit __at (0x83) P03      ;
__sbit __at (0x84) P04      ;
__sbit __at (0x85) P05      ;
__sbit __at (0x86) P06      ;
__sbit __at (0x87) P07      ;

/* TCON */
__sbit __at (0x88) IT0      ;
__sbit __at (0x89) IE0      ;
__sbit __at (0x8A) IT1      ;
__sbit __at (0x8B) IE1      ;
__sbit __at (0x8C) TR0      ;
__sbit __at (0x8D) TF0      ;
__sbit __at (0x8E) TR1      ;
__sbit __at (0x8F) TF1      ;

/* P1 */
__sbit __at (0x90) P10      ;
__sbit __at (0x91) P11      ;
__sbit __at (0x92) P12      ;
__sbit __at (0x93) P13      ;
__sbit __at (0x94) P14      ;
__sbit __at (0x95) P15      ;
__sbit __at (0x96) P16      ;
__sbit __at (0x97) P17      ;

/* SCON */
__sbit __at (0x98) RI       ;
__sbit __at (0x99) TI       ;
__sbit __at (0x9A) RB8      ;
__sbit __at (0x9B) TB8      ;
__sbit __at (0x9C) REN      ;
__sbit __at (0x9D) SM2      ;
__sbit __at (0x9E) SM1      ;
__sbit __at (0x9F) SM0      ;

/* P2 */
__sbit __at (0xA0) P20      ;
__sbit __at (0xA1) P21      ;
__sbit __at (0xA2) P22      ;
__sbit __at (0xA3) P23      ;
__sbit __at (0xA4) P24      ;
__sbit __at (0xA5) P25      ;
__sbit __at (0xA6) P26      ;
__sbit __at (0xA7) P27      ;

/* IE */
__sbit __at (0xA8) EX0      ;
__sbit __at (0xA9) ET0      ;
__sbit __at (0xAA) EX1      ;
__sbit __at (0xAB) ET1      ;
__sbit __at (0xAC) ES       ;
__sbit __at (0xAD) ET2      ;
__sbit __at (0xAF) EA       ;

/* P3 */
__sbit __at (0xB0) P30      ;
__sbit __at (0xB1) P31      ;
__sbit __at (0xB2) P32      ;
__sbit __at (0xB3) P33      ;
__sbit __at (0xB4) P34      ;
__sbit __at (0xB5) P35      ;
__sbit __at (0xB6) P36      ;
__sbit __at (0xB7) P37      ;

/* IP */
__sbit __at (0xB8) PX0      ;
__sbit __at (0xB9) PT0      ;
__sbit __at (0xBA) PX1      ;
__sbit __at (0xBB) PT1      ;
__sbit __at (0xBC) PS       ;
__sbit __at (0xBD) PT2      ;

/* T2CON */
__sbit __at (0xC8) CP_RL2   ;
__sbit __at (0xC9) C_T2     ;
__sbit __at (0xCA) TR2      ;
__sbit __at (0xCB) EXEN2    ;
__sbit __at (0xCC) TCLK     ;
__sbit __at (0xCD) RCLK     ;
__sbit __at (0xCE) EXF2     ;
__sbit __at (0xCF) TF2      ;

/* PSW */
__sbit __at (0xD0) P        ;
__sbit __at (0xD2) OV       ;
__sbit __at (0xD3) RS0      ;
__sbit __at (0xD4) RS1      ;
__sbit __at (0xD5) F0       ;
__sbit __at (0xD6) AC       ;
__sbit __at (0xD7) CY       ;

/* SFR Bit define */
/* P0 */
#define _P00        0x01
#define _P01        0x02
#define _P02        0x04
#define _P03        0x08
#define _P04        0x10
#define _P05        0x20
#define _P06        0x40
#define _P07        0x80

/* TCON */
#define _IT0        0x01
#define _IE0        0x02
#define _IT1        0x04
#define _IE1        0x08
#define _TR0        0x10
#define _TF0        0x20
#define _TR1        0x40
#define _TF1        0x80

/* P1 */
#define _P10        0x01
#define _P11        0x02
#define _P12        0x04
#define _P13        0x08
#define _P14        0x10
#define _P15        0x20
#define _P16        0x40
#define _P17        0x80

/* SCON */
#define _RI         0x01
#define _TI         0x02
#define _RB8        0x04
#define _TB8        0x08
#define _REN        0x10
#define _SM2        0x20
#define _SM1        0x40
#define _SM0        0x80

/* P2 */
#define _P20        0x01
#define _P21        0x02
#define _P22        0x04
#define _P23        0x08
#define _P24        0x10
#define _P25        0x20
#define _P26        0x40
#define _P27        0x80

/* IE */
#define _EX0        0x01
#define _ET0        0x02
#define _EX1        0x04
#define _ET1        0x08
#define _ES         0x10
#define _ET2        0x20
#define _EA         0x80

/* P3 */
#define _P30        0x01
#define _P31        0x02
#define _P32        0x04
#define _P33        0x08
#define _P34        0x10
#define _P35        0x20
#define _P36        0x40
#define _P37        0x80

/* IP */
#define _PX0        0x01
#define _PT0        0x02
#define _PX1        0x04
#define _PT1        0x08
#define _PS         0x10
#define _PT2        0x20

/* T2CON */
#define _CP_RL2     0x01
#define _C_T2       0x02
#define _TR2        0x04
#define _EXEN2      0x08
#define _TCLK       0x10
#define _RCLK       0x20
#define _EXF2       0x40
#define _TF2        0x80

/* PCON */
#define _IDL        0x01
#define _PD         0x02
#define _GF0        0x04
#define _GF1        0x08
#define _SMOD       0x80

/* TMOD */
#define _M0_T0      0x01
#define _M1_T0      0x02
#define _C_T0       0x04
#define _GATE_T0    0x08
#define _M0_T1      0x10
#define _M1_T1      0x20
#define _C_T1       0x40
#define _GATE_T1    0x80

/* T2MOD */
#define _DCEN       0x01
#define _T2OE       0x02

/* Interrupt numbers: address = (number * 8) + 3 */
#define IE0_VECTOR      0    /* External 0 (Highest Priority) */
#define TF0_VECTOR      1    /* Timer 0     */
#define IE1_VECTOR      2    /* External 1  */
#define TF1_VECTOR      3    /* Timer 1     */
#define RI_TI_VECTOR    4    /* Serial port */
#define TF2_EXF2_VECTOR 5    /* Timer 2 (Lowest Priority) */

#endif /* __REG52_H */

