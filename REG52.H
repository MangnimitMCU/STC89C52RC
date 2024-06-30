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
/* PCON */
#define IDL         0x01
#define PD          0x02
#define GF0         0x04
#define GF1         0x08
#define SMOD        0x80

/* TMOD */
#define M0_T0       0x01
#define M1_T0       0x02
#define C_T0        0x04
#define GATE_T0     0x08
#define M0_T1       0x10
#define M1_T1       0x20
#define C_T1        0x40
#define GATE_T1     0x80

/* T2MOD */
#define DCEN        0x01
#define T2OE        0x02

/* GPIO */
#define P_RXD       P30
#define P_TXD       P31
#define P_INT0      P32
#define P_INT1      P33
#define P_T0        P34
#define P_T1        P35
#define P_T2        P10
#define P_T2EX      P11

/* Interrupt numbers: address = (number * 8) + 3 */
#define IE0_VECTOR      0    /* External 0 (Highest Priority) */
#define TF0_VECTOR      1    /* Timer 0     */
#define IE1_VECTOR      2    /* External 1  */
#define TF1_VECTOR      3    /* Timer 1     */
#define RI_TI_VECTOR    4    /* Serial port */
#define TF2_EXF2_VECTOR 5    /* Timer 2 (Lowest Priority) */

#endif /* __REG52_H */

