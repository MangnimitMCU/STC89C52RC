;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 4.2.0 #13081 (MINGW64)
;--------------------------------------------------------
	.module main
	.optsdcc -mmcs51 --model-small
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _main
	.globl _Timer2_InterruptHandler
	.globl _Timer1_InterruptHandler
	.globl _Timer0_InterruptHandler
	.globl _P47
	.globl _P46
	.globl _P45
	.globl _P44
	.globl _P43
	.globl _P42
	.globl _P41
	.globl _P40
	.globl _PX3
	.globl _EX3
	.globl _IE3
	.globl _IT3
	.globl _PX2
	.globl _EX2
	.globl _IE2
	.globl _IT2
	.globl _CY
	.globl _AC
	.globl _F0
	.globl _RS1
	.globl _RS0
	.globl _OV
	.globl _P
	.globl _TF2
	.globl _EXF2
	.globl _RCLK
	.globl _TCLK
	.globl _EXEN2
	.globl _TR2
	.globl _C_T2
	.globl _CP_RL2
	.globl _PT2
	.globl _PS
	.globl _PT1
	.globl _PX1
	.globl _PT0
	.globl _PX0
	.globl _P37
	.globl _P36
	.globl _P35
	.globl _P34
	.globl _P33
	.globl _P32
	.globl _P31
	.globl _P30
	.globl _EA
	.globl _ET2
	.globl _ES
	.globl _ET1
	.globl _EX1
	.globl _ET0
	.globl _EX0
	.globl _P27
	.globl _P26
	.globl _P25
	.globl _P24
	.globl _P23
	.globl _P22
	.globl _P21
	.globl _P20
	.globl _SM0
	.globl _SM1
	.globl _SM2
	.globl _REN
	.globl _TB8
	.globl _RB8
	.globl _TI
	.globl _RI
	.globl _P17
	.globl _P16
	.globl _P15
	.globl _P14
	.globl _P13
	.globl _P12
	.globl _P11
	.globl _P10
	.globl _TF1
	.globl _TR1
	.globl _TF0
	.globl _TR0
	.globl _IE1
	.globl _IT1
	.globl _IE0
	.globl _IT0
	.globl _P07
	.globl _P06
	.globl _P05
	.globl _P04
	.globl _P03
	.globl _P02
	.globl _P01
	.globl _P00
	.globl _P4
	.globl _IAP_CONTR
	.globl _IAP_TRIG
	.globl _IAP_CMD
	.globl _IAP_ADDRL
	.globl _IAP_ADDRH
	.globl _IAP_DATA
	.globl _WDT_CONTR
	.globl _XICON
	.globl _SADEN
	.globl _IPH
	.globl _SADDR
	.globl _AUXR1
	.globl _AUXR
	.globl _B
	.globl _ACC
	.globl _PSW
	.globl _TH2
	.globl _TL2
	.globl _RCAP2H
	.globl _RCAP2L
	.globl _T2MOD
	.globl _T2CON
	.globl _IP
	.globl _P3
	.globl _IE
	.globl _P2
	.globl _SBUF
	.globl _SCON
	.globl _P1
	.globl _TH1
	.globl _TH0
	.globl _TL1
	.globl _TL0
	.globl _TMOD
	.globl _TCON
	.globl _PCON
	.globl _DPH
	.globl _DPL
	.globl _SP
	.globl _P0
;--------------------------------------------------------
; special function registers
;--------------------------------------------------------
	.area RSEG    (ABS,DATA)
	.org 0x0000
_P0	=	0x0080
_SP	=	0x0081
_DPL	=	0x0082
_DPH	=	0x0083
_PCON	=	0x0087
_TCON	=	0x0088
_TMOD	=	0x0089
_TL0	=	0x008a
_TL1	=	0x008b
_TH0	=	0x008c
_TH1	=	0x008d
_P1	=	0x0090
_SCON	=	0x0098
_SBUF	=	0x0099
_P2	=	0x00a0
_IE	=	0x00a8
_P3	=	0x00b0
_IP	=	0x00b8
_T2CON	=	0x00c8
_T2MOD	=	0x00c9
_RCAP2L	=	0x00ca
_RCAP2H	=	0x00cb
_TL2	=	0x00cc
_TH2	=	0x00cd
_PSW	=	0x00d0
_ACC	=	0x00e0
_B	=	0x00f0
_AUXR	=	0x008e
_AUXR1	=	0x00a2
_SADDR	=	0x00a9
_IPH	=	0x00b7
_SADEN	=	0x00b9
_XICON	=	0x00c0
_WDT_CONTR	=	0x00e1
_IAP_DATA	=	0x00e2
_IAP_ADDRH	=	0x00e3
_IAP_ADDRL	=	0x00e4
_IAP_CMD	=	0x00e5
_IAP_TRIG	=	0x00e6
_IAP_CONTR	=	0x00e7
_P4	=	0x00e8
;--------------------------------------------------------
; special function bits
;--------------------------------------------------------
	.area RSEG    (ABS,DATA)
	.org 0x0000
_P00	=	0x0080
_P01	=	0x0081
_P02	=	0x0082
_P03	=	0x0083
_P04	=	0x0084
_P05	=	0x0085
_P06	=	0x0086
_P07	=	0x0087
_IT0	=	0x0088
_IE0	=	0x0089
_IT1	=	0x008a
_IE1	=	0x008b
_TR0	=	0x008c
_TF0	=	0x008d
_TR1	=	0x008e
_TF1	=	0x008f
_P10	=	0x0090
_P11	=	0x0091
_P12	=	0x0092
_P13	=	0x0093
_P14	=	0x0094
_P15	=	0x0095
_P16	=	0x0096
_P17	=	0x0097
_RI	=	0x0098
_TI	=	0x0099
_RB8	=	0x009a
_TB8	=	0x009b
_REN	=	0x009c
_SM2	=	0x009d
_SM1	=	0x009e
_SM0	=	0x009f
_P20	=	0x00a0
_P21	=	0x00a1
_P22	=	0x00a2
_P23	=	0x00a3
_P24	=	0x00a4
_P25	=	0x00a5
_P26	=	0x00a6
_P27	=	0x00a7
_EX0	=	0x00a8
_ET0	=	0x00a9
_EX1	=	0x00aa
_ET1	=	0x00ab
_ES	=	0x00ac
_ET2	=	0x00ad
_EA	=	0x00af
_P30	=	0x00b0
_P31	=	0x00b1
_P32	=	0x00b2
_P33	=	0x00b3
_P34	=	0x00b4
_P35	=	0x00b5
_P36	=	0x00b6
_P37	=	0x00b7
_PX0	=	0x00b8
_PT0	=	0x00b9
_PX1	=	0x00ba
_PT1	=	0x00bb
_PS	=	0x00bc
_PT2	=	0x00bd
_CP_RL2	=	0x00c8
_C_T2	=	0x00c9
_TR2	=	0x00ca
_EXEN2	=	0x00cb
_TCLK	=	0x00cc
_RCLK	=	0x00cd
_EXF2	=	0x00ce
_TF2	=	0x00cf
_P	=	0x00d0
_OV	=	0x00d2
_RS0	=	0x00d3
_RS1	=	0x00d4
_F0	=	0x00d5
_AC	=	0x00d6
_CY	=	0x00d7
_IT2	=	0x00c0
_IE2	=	0x00c1
_EX2	=	0x00c2
_PX2	=	0x00c3
_IT3	=	0x00c4
_IE3	=	0x00c5
_EX3	=	0x00c6
_PX3	=	0x00c7
_P40	=	0x00e8
_P41	=	0x00e9
_P42	=	0x00ea
_P43	=	0x00eb
_P44	=	0x00ec
_P45	=	0x00ed
_P46	=	0x00ee
_P47	=	0x00ef
;--------------------------------------------------------
; overlayable register banks
;--------------------------------------------------------
	.area REG_BANK_0	(REL,OVR,DATA)
	.ds 8
;--------------------------------------------------------
; internal ram data
;--------------------------------------------------------
	.area DSEG    (DATA)
_Timer0_InterruptHandler_u8Cnt_65536_2:
	.ds 1
_Timer1_InterruptHandler_u8Cnt_65536_6:
	.ds 1
_Timer2_InterruptHandler_u8Cnt_65536_10:
	.ds 1
;--------------------------------------------------------
; overlayable items in internal ram
;--------------------------------------------------------
;--------------------------------------------------------
; Stack segment in internal ram
;--------------------------------------------------------
	.area	SSEG
__start__stack:
	.ds	1

;--------------------------------------------------------
; indirectly addressable internal ram data
;--------------------------------------------------------
	.area ISEG    (DATA)
;--------------------------------------------------------
; absolute internal ram data
;--------------------------------------------------------
	.area IABS    (ABS,DATA)
	.area IABS    (ABS,DATA)
;--------------------------------------------------------
; bit data
;--------------------------------------------------------
	.area BSEG    (BIT)
;--------------------------------------------------------
; paged external ram data
;--------------------------------------------------------
	.area PSEG    (PAG,XDATA)
;--------------------------------------------------------
; external ram data
;--------------------------------------------------------
	.area XSEG    (XDATA)
;--------------------------------------------------------
; absolute external ram data
;--------------------------------------------------------
	.area XABS    (ABS,XDATA)
;--------------------------------------------------------
; external initialized ram data
;--------------------------------------------------------
	.area XISEG   (XDATA)
	.area HOME    (CODE)
	.area GSINIT0 (CODE)
	.area GSINIT1 (CODE)
	.area GSINIT2 (CODE)
	.area GSINIT3 (CODE)
	.area GSINIT4 (CODE)
	.area GSINIT5 (CODE)
	.area GSINIT  (CODE)
	.area GSFINAL (CODE)
	.area CSEG    (CODE)
;--------------------------------------------------------
; interrupt vector
;--------------------------------------------------------
	.area HOME    (CODE)
__interrupt_vect:
	ljmp	__sdcc_gsinit_startup
	reti
	.ds	7
	ljmp	_Timer0_InterruptHandler
	.ds	5
	reti
	.ds	7
	ljmp	_Timer1_InterruptHandler
	.ds	5
	reti
	.ds	7
	ljmp	_Timer2_InterruptHandler
;--------------------------------------------------------
; global & static initialisations
;--------------------------------------------------------
	.area HOME    (CODE)
	.area GSINIT  (CODE)
	.area GSFINAL (CODE)
	.area GSINIT  (CODE)
	.globl __sdcc_gsinit_startup
	.globl __sdcc_program_startup
	.globl __start__stack
	.globl __mcs51_genXINIT
	.globl __mcs51_genXRAMCLEAR
	.globl __mcs51_genRAMCLEAR
	.area GSFINAL (CODE)
	ljmp	__sdcc_program_startup
;--------------------------------------------------------
; Home
;--------------------------------------------------------
	.area HOME    (CODE)
	.area HOME    (CODE)
__sdcc_program_startup:
	ljmp	_main
;	return from main will return to caller
;--------------------------------------------------------
; code
;--------------------------------------------------------
	.area CSEG    (CODE)
;------------------------------------------------------------
;Allocation info for local variables in function 'Timer0_InterruptHandler'
;------------------------------------------------------------
;u8Cnt                     Allocated with name '_Timer0_InterruptHandler_u8Cnt_65536_2'
;------------------------------------------------------------
;	main.c:39: void Timer0_InterruptHandler(void) __interrupt TF0_VECTOR {
;	-----------------------------------------
;	 function Timer0_InterruptHandler
;	-----------------------------------------
_Timer0_InterruptHandler:
	ar7 = 0x07
	ar6 = 0x06
	ar5 = 0x05
	ar4 = 0x04
	ar3 = 0x03
	ar2 = 0x02
	ar1 = 0x01
	ar0 = 0x00
	push	acc
	push	psw
;	main.c:42: TIM0_CNT(timer0reload);
	mov	_TH0,#0xd8
	mov	_TL0,#0xf0
;	main.c:44: if(++u8Cnt > 100) {
	inc	_Timer0_InterruptHandler_u8Cnt_65536_2
	mov	a,_Timer0_InterruptHandler_u8Cnt_65536_2
	add	a,#0xff - 0x64
	jnc	00106$
;	main.c:45: u8Cnt = 0;
	mov	_Timer0_InterruptHandler_u8Cnt_65536_2,#0x00
;	main.c:46: P10 = !P10;
	cpl	_P10
00106$:
;	main.c:49: }
	pop	psw
	pop	acc
	reti
;	eliminated unneeded mov psw,# (no regs used in bank)
;	eliminated unneeded push/pop dpl
;	eliminated unneeded push/pop dph
;	eliminated unneeded push/pop b
;------------------------------------------------------------
;Allocation info for local variables in function 'Timer1_InterruptHandler'
;------------------------------------------------------------
;u8Cnt                     Allocated with name '_Timer1_InterruptHandler_u8Cnt_65536_6'
;------------------------------------------------------------
;	main.c:52: void Timer1_InterruptHandler(void) __interrupt TF1_VECTOR {
;	-----------------------------------------
;	 function Timer1_InterruptHandler
;	-----------------------------------------
_Timer1_InterruptHandler:
	push	acc
	push	psw
;	main.c:55: TIM1_CNT(timer1reload);
	mov	_TH1,#0xb1
	mov	_TL1,#0xe0
;	main.c:57: if(++u8Cnt > 100) {
	inc	_Timer1_InterruptHandler_u8Cnt_65536_6
	mov	a,_Timer1_InterruptHandler_u8Cnt_65536_6
	add	a,#0xff - 0x64
	jnc	00106$
;	main.c:58: u8Cnt = 0;
	mov	_Timer1_InterruptHandler_u8Cnt_65536_6,#0x00
;	main.c:59: P11 = !P11;
	cpl	_P11
00106$:
;	main.c:62: }
	pop	psw
	pop	acc
	reti
;	eliminated unneeded mov psw,# (no regs used in bank)
;	eliminated unneeded push/pop dpl
;	eliminated unneeded push/pop dph
;	eliminated unneeded push/pop b
;------------------------------------------------------------
;Allocation info for local variables in function 'Timer2_InterruptHandler'
;------------------------------------------------------------
;u8Cnt                     Allocated with name '_Timer2_InterruptHandler_u8Cnt_65536_10'
;------------------------------------------------------------
;	main.c:65: void Timer2_InterruptHandler(void) __interrupt TF2_EXF2_VECTOR {
;	-----------------------------------------
;	 function Timer2_InterruptHandler
;	-----------------------------------------
_Timer2_InterruptHandler:
	push	acc
	push	psw
;	main.c:68: if(TF2) {
;	main.c:70: cbit_TF2;
;	assignBit
	jbc	_TF2,00115$
	sjmp	00105$
00115$:
;	main.c:72: if(++u8Cnt > 100) {
	inc	_Timer2_InterruptHandler_u8Cnt_65536_10
	mov	a,_Timer2_InterruptHandler_u8Cnt_65536_10
	add	a,#0xff - 0x64
	jnc	00105$
;	main.c:73: u8Cnt = 0;
	mov	_Timer2_InterruptHandler_u8Cnt_65536_10,#0x00
;	main.c:74: P12 = !P12;
	cpl	_P12
00105$:
;	main.c:79: }
	pop	psw
	pop	acc
	reti
;	eliminated unneeded mov psw,# (no regs used in bank)
;	eliminated unneeded push/pop dpl
;	eliminated unneeded push/pop dph
;	eliminated unneeded push/pop b
;------------------------------------------------------------
;Allocation info for local variables in function 'main'
;------------------------------------------------------------
;	main.c:82: void main(void) {
;	-----------------------------------------
;	 function main
;	-----------------------------------------
_main:
;	main.c:84: TIM0_MODE1_INT_CTRL;
	anl	_TMOD,#0xf0
	orl	_TMOD,#0x01
;	main.c:85: TIM0_CNT(timer0reload);
	mov	_TH0,#0xd8
	mov	_TL0,#0xf0
;	main.c:86: TIM0_RUN;
;	assignBit
	setb	_TR0
;	main.c:87: TIM0_INTERRUPT_ENABLE;
;	assignBit
	setb	_ET0
;	main.c:89: TIM1_MODE1_INT_CTRL;
	anl	_TMOD,#0x0f
	orl	_TMOD,#0x10
;	main.c:90: TIM1_CNT(timer1reload);
	mov	_TH1,#0xb1
	mov	_TL1,#0xe0
;	main.c:91: TIM1_RUN;
;	assignBit
	setb	_TR1
;	main.c:92: TIM1_INTERRUPT_ENABLE;
;	assignBit
	setb	_ET1
;	main.c:96: TIM2_CNT(0);
	mov	_TH2,#0x00
	mov	_TL2,#0x00
;	main.c:97: TIM2_RCAP2(timer2reload);
	mov	_RCAP2H,#0x63
	mov	_RCAP2L,#0xc0
;	main.c:98: TIM2_RUN;
;	assignBit
	setb	_TR2
;	main.c:99: TIM2_INTERRUPT_ENABLE;
;	assignBit
	setb	_ET2
;	main.c:101: GLOBAL_INTERRUPT_ENABLE;
;	assignBit
	setb	_EA
;	main.c:103: while(1);
00120$:
;	main.c:105: }
	sjmp	00120$
	.area CSEG    (CODE)
	.area CONST   (CODE)
	.area XINIT   (CODE)
	.area CABS    (ABS,CODE)
