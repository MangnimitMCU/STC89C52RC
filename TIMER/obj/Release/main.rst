                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 4.2.0 #13081 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module main
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _main
                                     12 	.globl _Timer2_InterruptHandler
                                     13 	.globl _Timer1_InterruptHandler
                                     14 	.globl _Timer0_InterruptHandler
                                     15 	.globl _CY
                                     16 	.globl _AC
                                     17 	.globl _F0
                                     18 	.globl _RS1
                                     19 	.globl _RS0
                                     20 	.globl _OV
                                     21 	.globl _P
                                     22 	.globl _TF2
                                     23 	.globl _EXF2
                                     24 	.globl _RCLK
                                     25 	.globl _TCLK
                                     26 	.globl _EXEN2
                                     27 	.globl _TR2
                                     28 	.globl _C_T2
                                     29 	.globl _CP_RL2
                                     30 	.globl _PT2
                                     31 	.globl _PS
                                     32 	.globl _PT1
                                     33 	.globl _PX1
                                     34 	.globl _PT0
                                     35 	.globl _PX0
                                     36 	.globl _P37
                                     37 	.globl _P36
                                     38 	.globl _P35
                                     39 	.globl _P34
                                     40 	.globl _P33
                                     41 	.globl _P32
                                     42 	.globl _P31
                                     43 	.globl _P30
                                     44 	.globl _EA
                                     45 	.globl _ET2
                                     46 	.globl _ES
                                     47 	.globl _ET1
                                     48 	.globl _EX1
                                     49 	.globl _ET0
                                     50 	.globl _EX0
                                     51 	.globl _P27
                                     52 	.globl _P26
                                     53 	.globl _P25
                                     54 	.globl _P24
                                     55 	.globl _P23
                                     56 	.globl _P22
                                     57 	.globl _P21
                                     58 	.globl _P20
                                     59 	.globl _SM0
                                     60 	.globl _SM1
                                     61 	.globl _SM2
                                     62 	.globl _REN
                                     63 	.globl _TB8
                                     64 	.globl _RB8
                                     65 	.globl _TI
                                     66 	.globl _RI
                                     67 	.globl _P17
                                     68 	.globl _P16
                                     69 	.globl _P15
                                     70 	.globl _P14
                                     71 	.globl _P13
                                     72 	.globl _P12
                                     73 	.globl _P11
                                     74 	.globl _P10
                                     75 	.globl _TF1
                                     76 	.globl _TR1
                                     77 	.globl _TF0
                                     78 	.globl _TR0
                                     79 	.globl _IE1
                                     80 	.globl _IT1
                                     81 	.globl _IE0
                                     82 	.globl _IT0
                                     83 	.globl _P07
                                     84 	.globl _P06
                                     85 	.globl _P05
                                     86 	.globl _P04
                                     87 	.globl _P03
                                     88 	.globl _P02
                                     89 	.globl _P01
                                     90 	.globl _P00
                                     91 	.globl _B
                                     92 	.globl _ACC
                                     93 	.globl _PSW
                                     94 	.globl _TH2
                                     95 	.globl _TL2
                                     96 	.globl _RCAP2H
                                     97 	.globl _RCAP2L
                                     98 	.globl _T2MOD
                                     99 	.globl _T2CON
                                    100 	.globl _IP
                                    101 	.globl _P3
                                    102 	.globl _IE
                                    103 	.globl _P2
                                    104 	.globl _SBUF
                                    105 	.globl _SCON
                                    106 	.globl _P1
                                    107 	.globl _TH1
                                    108 	.globl _TH0
                                    109 	.globl _TL1
                                    110 	.globl _TL0
                                    111 	.globl _TMOD
                                    112 	.globl _TCON
                                    113 	.globl _PCON
                                    114 	.globl _DPH
                                    115 	.globl _DPL
                                    116 	.globl _SP
                                    117 	.globl _P0
                                    118 ;--------------------------------------------------------
                                    119 ; special function registers
                                    120 ;--------------------------------------------------------
                                    121 	.area RSEG    (ABS,DATA)
      000000                        122 	.org 0x0000
                           000080   123 _P0	=	0x0080
                           000081   124 _SP	=	0x0081
                           000082   125 _DPL	=	0x0082
                           000083   126 _DPH	=	0x0083
                           000087   127 _PCON	=	0x0087
                           000088   128 _TCON	=	0x0088
                           000089   129 _TMOD	=	0x0089
                           00008A   130 _TL0	=	0x008a
                           00008B   131 _TL1	=	0x008b
                           00008C   132 _TH0	=	0x008c
                           00008D   133 _TH1	=	0x008d
                           000090   134 _P1	=	0x0090
                           000098   135 _SCON	=	0x0098
                           000099   136 _SBUF	=	0x0099
                           0000A0   137 _P2	=	0x00a0
                           0000A8   138 _IE	=	0x00a8
                           0000B0   139 _P3	=	0x00b0
                           0000B8   140 _IP	=	0x00b8
                           0000C8   141 _T2CON	=	0x00c8
                           0000C9   142 _T2MOD	=	0x00c9
                           0000CA   143 _RCAP2L	=	0x00ca
                           0000CB   144 _RCAP2H	=	0x00cb
                           0000CC   145 _TL2	=	0x00cc
                           0000CD   146 _TH2	=	0x00cd
                           0000D0   147 _PSW	=	0x00d0
                           0000E0   148 _ACC	=	0x00e0
                           0000F0   149 _B	=	0x00f0
                                    150 ;--------------------------------------------------------
                                    151 ; special function bits
                                    152 ;--------------------------------------------------------
                                    153 	.area RSEG    (ABS,DATA)
      000000                        154 	.org 0x0000
                           000080   155 _P00	=	0x0080
                           000081   156 _P01	=	0x0081
                           000082   157 _P02	=	0x0082
                           000083   158 _P03	=	0x0083
                           000084   159 _P04	=	0x0084
                           000085   160 _P05	=	0x0085
                           000086   161 _P06	=	0x0086
                           000087   162 _P07	=	0x0087
                           000088   163 _IT0	=	0x0088
                           000089   164 _IE0	=	0x0089
                           00008A   165 _IT1	=	0x008a
                           00008B   166 _IE1	=	0x008b
                           00008C   167 _TR0	=	0x008c
                           00008D   168 _TF0	=	0x008d
                           00008E   169 _TR1	=	0x008e
                           00008F   170 _TF1	=	0x008f
                           000090   171 _P10	=	0x0090
                           000091   172 _P11	=	0x0091
                           000092   173 _P12	=	0x0092
                           000093   174 _P13	=	0x0093
                           000094   175 _P14	=	0x0094
                           000095   176 _P15	=	0x0095
                           000096   177 _P16	=	0x0096
                           000097   178 _P17	=	0x0097
                           000098   179 _RI	=	0x0098
                           000099   180 _TI	=	0x0099
                           00009A   181 _RB8	=	0x009a
                           00009B   182 _TB8	=	0x009b
                           00009C   183 _REN	=	0x009c
                           00009D   184 _SM2	=	0x009d
                           00009E   185 _SM1	=	0x009e
                           00009F   186 _SM0	=	0x009f
                           0000A0   187 _P20	=	0x00a0
                           0000A1   188 _P21	=	0x00a1
                           0000A2   189 _P22	=	0x00a2
                           0000A3   190 _P23	=	0x00a3
                           0000A4   191 _P24	=	0x00a4
                           0000A5   192 _P25	=	0x00a5
                           0000A6   193 _P26	=	0x00a6
                           0000A7   194 _P27	=	0x00a7
                           0000A8   195 _EX0	=	0x00a8
                           0000A9   196 _ET0	=	0x00a9
                           0000AA   197 _EX1	=	0x00aa
                           0000AB   198 _ET1	=	0x00ab
                           0000AC   199 _ES	=	0x00ac
                           0000AD   200 _ET2	=	0x00ad
                           0000AF   201 _EA	=	0x00af
                           0000B0   202 _P30	=	0x00b0
                           0000B1   203 _P31	=	0x00b1
                           0000B2   204 _P32	=	0x00b2
                           0000B3   205 _P33	=	0x00b3
                           0000B4   206 _P34	=	0x00b4
                           0000B5   207 _P35	=	0x00b5
                           0000B6   208 _P36	=	0x00b6
                           0000B7   209 _P37	=	0x00b7
                           0000B8   210 _PX0	=	0x00b8
                           0000B9   211 _PT0	=	0x00b9
                           0000BA   212 _PX1	=	0x00ba
                           0000BB   213 _PT1	=	0x00bb
                           0000BC   214 _PS	=	0x00bc
                           0000BD   215 _PT2	=	0x00bd
                           0000C8   216 _CP_RL2	=	0x00c8
                           0000C9   217 _C_T2	=	0x00c9
                           0000CA   218 _TR2	=	0x00ca
                           0000CB   219 _EXEN2	=	0x00cb
                           0000CC   220 _TCLK	=	0x00cc
                           0000CD   221 _RCLK	=	0x00cd
                           0000CE   222 _EXF2	=	0x00ce
                           0000CF   223 _TF2	=	0x00cf
                           0000D0   224 _P	=	0x00d0
                           0000D2   225 _OV	=	0x00d2
                           0000D3   226 _RS0	=	0x00d3
                           0000D4   227 _RS1	=	0x00d4
                           0000D5   228 _F0	=	0x00d5
                           0000D6   229 _AC	=	0x00d6
                           0000D7   230 _CY	=	0x00d7
                                    231 ;--------------------------------------------------------
                                    232 ; overlayable register banks
                                    233 ;--------------------------------------------------------
                                    234 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        235 	.ds 8
                                    236 ;--------------------------------------------------------
                                    237 ; internal ram data
                                    238 ;--------------------------------------------------------
                                    239 	.area DSEG    (DATA)
      000008                        240 _Timer0_InterruptHandler_u8Cnt_65536_2:
      000008                        241 	.ds 1
      000009                        242 _Timer1_InterruptHandler_u8Cnt_65536_6:
      000009                        243 	.ds 1
      00000A                        244 _Timer2_InterruptHandler_u8Cnt_65536_10:
      00000A                        245 	.ds 1
                                    246 ;--------------------------------------------------------
                                    247 ; overlayable items in internal ram
                                    248 ;--------------------------------------------------------
                                    249 ;--------------------------------------------------------
                                    250 ; Stack segment in internal ram
                                    251 ;--------------------------------------------------------
                                    252 	.area	SSEG
      00000B                        253 __start__stack:
      00000B                        254 	.ds	1
                                    255 
                                    256 ;--------------------------------------------------------
                                    257 ; indirectly addressable internal ram data
                                    258 ;--------------------------------------------------------
                                    259 	.area ISEG    (DATA)
                                    260 ;--------------------------------------------------------
                                    261 ; absolute internal ram data
                                    262 ;--------------------------------------------------------
                                    263 	.area IABS    (ABS,DATA)
                                    264 	.area IABS    (ABS,DATA)
                                    265 ;--------------------------------------------------------
                                    266 ; bit data
                                    267 ;--------------------------------------------------------
                                    268 	.area BSEG    (BIT)
                                    269 ;--------------------------------------------------------
                                    270 ; paged external ram data
                                    271 ;--------------------------------------------------------
                                    272 	.area PSEG    (PAG,XDATA)
                                    273 ;--------------------------------------------------------
                                    274 ; external ram data
                                    275 ;--------------------------------------------------------
                                    276 	.area XSEG    (XDATA)
                                    277 ;--------------------------------------------------------
                                    278 ; absolute external ram data
                                    279 ;--------------------------------------------------------
                                    280 	.area XABS    (ABS,XDATA)
                                    281 ;--------------------------------------------------------
                                    282 ; external initialized ram data
                                    283 ;--------------------------------------------------------
                                    284 	.area XISEG   (XDATA)
                                    285 	.area HOME    (CODE)
                                    286 	.area GSINIT0 (CODE)
                                    287 	.area GSINIT1 (CODE)
                                    288 	.area GSINIT2 (CODE)
                                    289 	.area GSINIT3 (CODE)
                                    290 	.area GSINIT4 (CODE)
                                    291 	.area GSINIT5 (CODE)
                                    292 	.area GSINIT  (CODE)
                                    293 	.area GSFINAL (CODE)
                                    294 	.area CSEG    (CODE)
                                    295 ;--------------------------------------------------------
                                    296 ; interrupt vector
                                    297 ;--------------------------------------------------------
                                    298 	.area HOME    (CODE)
      000000                        299 __interrupt_vect:
      000000 02 00 31         [24]  300 	ljmp	__sdcc_gsinit_startup
      000003 32               [24]  301 	reti
      000004                        302 	.ds	7
      00000B 02 00 8D         [24]  303 	ljmp	_Timer0_InterruptHandler
      00000E                        304 	.ds	5
      000013 32               [24]  305 	reti
      000014                        306 	.ds	7
      00001B 02 00 A9         [24]  307 	ljmp	_Timer1_InterruptHandler
      00001E                        308 	.ds	5
      000023 32               [24]  309 	reti
      000024                        310 	.ds	7
      00002B 02 00 C5         [24]  311 	ljmp	_Timer2_InterruptHandler
                                    312 ;--------------------------------------------------------
                                    313 ; global & static initialisations
                                    314 ;--------------------------------------------------------
                                    315 	.area HOME    (CODE)
                                    316 	.area GSINIT  (CODE)
                                    317 	.area GSFINAL (CODE)
                                    318 	.area GSINIT  (CODE)
                                    319 	.globl __sdcc_gsinit_startup
                                    320 	.globl __sdcc_program_startup
                                    321 	.globl __start__stack
                                    322 	.globl __mcs51_genXINIT
                                    323 	.globl __mcs51_genXRAMCLEAR
                                    324 	.globl __mcs51_genRAMCLEAR
                                    325 	.area GSFINAL (CODE)
      00008A 02 00 2E         [24]  326 	ljmp	__sdcc_program_startup
                                    327 ;--------------------------------------------------------
                                    328 ; Home
                                    329 ;--------------------------------------------------------
                                    330 	.area HOME    (CODE)
                                    331 	.area HOME    (CODE)
      00002E                        332 __sdcc_program_startup:
      00002E 02 00 E0         [24]  333 	ljmp	_main
                                    334 ;	return from main will return to caller
                                    335 ;--------------------------------------------------------
                                    336 ; code
                                    337 ;--------------------------------------------------------
                                    338 	.area CSEG    (CODE)
                                    339 ;------------------------------------------------------------
                                    340 ;Allocation info for local variables in function 'Timer0_InterruptHandler'
                                    341 ;------------------------------------------------------------
                                    342 ;u8Cnt                     Allocated with name '_Timer0_InterruptHandler_u8Cnt_65536_2'
                                    343 ;------------------------------------------------------------
                                    344 ;	main.c:40: void Timer0_InterruptHandler(void) __interrupt TF0_VECTOR {
                                    345 ;	-----------------------------------------
                                    346 ;	 function Timer0_InterruptHandler
                                    347 ;	-----------------------------------------
      00008D                        348 _Timer0_InterruptHandler:
                           000007   349 	ar7 = 0x07
                           000006   350 	ar6 = 0x06
                           000005   351 	ar5 = 0x05
                           000004   352 	ar4 = 0x04
                           000003   353 	ar3 = 0x03
                           000002   354 	ar2 = 0x02
                           000001   355 	ar1 = 0x01
                           000000   356 	ar0 = 0x00
      00008D C0 E0            [24]  357 	push	acc
      00008F C0 D0            [24]  358 	push	psw
                                    359 ;	main.c:43: TIM0_CNT(timer0reload);
      000091 75 8C D8         [24]  360 	mov	_TH0,#0xd8
      000094 75 8A F0         [24]  361 	mov	_TL0,#0xf0
                                    362 ;	main.c:45: if(++u8Cnt > 100) {
      000097 05 08            [12]  363 	inc	_Timer0_InterruptHandler_u8Cnt_65536_2
      000099 E5 08            [12]  364 	mov	a,_Timer0_InterruptHandler_u8Cnt_65536_2
      00009B 24 9B            [12]  365 	add	a,#0xff - 0x64
      00009D 50 05            [24]  366 	jnc	00106$
                                    367 ;	main.c:46: u8Cnt = 0;
      00009F 75 08 00         [24]  368 	mov	_Timer0_InterruptHandler_u8Cnt_65536_2,#0x00
                                    369 ;	main.c:47: P10 = !P10;
      0000A2 B2 90            [12]  370 	cpl	_P10
      0000A4                        371 00106$:
                                    372 ;	main.c:50: }
      0000A4 D0 D0            [24]  373 	pop	psw
      0000A6 D0 E0            [24]  374 	pop	acc
      0000A8 32               [24]  375 	reti
                                    376 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                    377 ;	eliminated unneeded push/pop dpl
                                    378 ;	eliminated unneeded push/pop dph
                                    379 ;	eliminated unneeded push/pop b
                                    380 ;------------------------------------------------------------
                                    381 ;Allocation info for local variables in function 'Timer1_InterruptHandler'
                                    382 ;------------------------------------------------------------
                                    383 ;u8Cnt                     Allocated with name '_Timer1_InterruptHandler_u8Cnt_65536_6'
                                    384 ;------------------------------------------------------------
                                    385 ;	main.c:53: void Timer1_InterruptHandler(void) __interrupt TF1_VECTOR {
                                    386 ;	-----------------------------------------
                                    387 ;	 function Timer1_InterruptHandler
                                    388 ;	-----------------------------------------
      0000A9                        389 _Timer1_InterruptHandler:
      0000A9 C0 E0            [24]  390 	push	acc
      0000AB C0 D0            [24]  391 	push	psw
                                    392 ;	main.c:56: TIM1_CNT(timer1reload);
      0000AD 75 8D B1         [24]  393 	mov	_TH1,#0xb1
      0000B0 75 8B E0         [24]  394 	mov	_TL1,#0xe0
                                    395 ;	main.c:58: if(++u8Cnt > 100) {
      0000B3 05 09            [12]  396 	inc	_Timer1_InterruptHandler_u8Cnt_65536_6
      0000B5 E5 09            [12]  397 	mov	a,_Timer1_InterruptHandler_u8Cnt_65536_6
      0000B7 24 9B            [12]  398 	add	a,#0xff - 0x64
      0000B9 50 05            [24]  399 	jnc	00106$
                                    400 ;	main.c:59: u8Cnt = 0;
      0000BB 75 09 00         [24]  401 	mov	_Timer1_InterruptHandler_u8Cnt_65536_6,#0x00
                                    402 ;	main.c:60: P11 = !P11;
      0000BE B2 91            [12]  403 	cpl	_P11
      0000C0                        404 00106$:
                                    405 ;	main.c:63: }
      0000C0 D0 D0            [24]  406 	pop	psw
      0000C2 D0 E0            [24]  407 	pop	acc
      0000C4 32               [24]  408 	reti
                                    409 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                    410 ;	eliminated unneeded push/pop dpl
                                    411 ;	eliminated unneeded push/pop dph
                                    412 ;	eliminated unneeded push/pop b
                                    413 ;------------------------------------------------------------
                                    414 ;Allocation info for local variables in function 'Timer2_InterruptHandler'
                                    415 ;------------------------------------------------------------
                                    416 ;u8Cnt                     Allocated with name '_Timer2_InterruptHandler_u8Cnt_65536_10'
                                    417 ;------------------------------------------------------------
                                    418 ;	main.c:66: void Timer2_InterruptHandler(void) __interrupt TF2_EXF2_VECTOR {
                                    419 ;	-----------------------------------------
                                    420 ;	 function Timer2_InterruptHandler
                                    421 ;	-----------------------------------------
      0000C5                        422 _Timer2_InterruptHandler:
      0000C5 C0 E0            [24]  423 	push	acc
      0000C7 C0 D0            [24]  424 	push	psw
                                    425 ;	main.c:69: if(TF2) {
                                    426 ;	main.c:71: cbit_TF2;
                                    427 ;	assignBit
      0000C9 10 CF 02         [24]  428 	jbc	_TF2,00115$
      0000CC 80 0D            [24]  429 	sjmp	00105$
      0000CE                        430 00115$:
                                    431 ;	main.c:73: if(++u8Cnt > 100) {
      0000CE 05 0A            [12]  432 	inc	_Timer2_InterruptHandler_u8Cnt_65536_10
      0000D0 E5 0A            [12]  433 	mov	a,_Timer2_InterruptHandler_u8Cnt_65536_10
      0000D2 24 9B            [12]  434 	add	a,#0xff - 0x64
      0000D4 50 05            [24]  435 	jnc	00105$
                                    436 ;	main.c:74: u8Cnt = 0;
      0000D6 75 0A 00         [24]  437 	mov	_Timer2_InterruptHandler_u8Cnt_65536_10,#0x00
                                    438 ;	main.c:75: P12 = !P12;
      0000D9 B2 92            [12]  439 	cpl	_P12
      0000DB                        440 00105$:
                                    441 ;	main.c:80: }
      0000DB D0 D0            [24]  442 	pop	psw
      0000DD D0 E0            [24]  443 	pop	acc
      0000DF 32               [24]  444 	reti
                                    445 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                    446 ;	eliminated unneeded push/pop dpl
                                    447 ;	eliminated unneeded push/pop dph
                                    448 ;	eliminated unneeded push/pop b
                                    449 ;------------------------------------------------------------
                                    450 ;Allocation info for local variables in function 'main'
                                    451 ;------------------------------------------------------------
                                    452 ;	main.c:83: void main(void) {
                                    453 ;	-----------------------------------------
                                    454 ;	 function main
                                    455 ;	-----------------------------------------
      0000E0                        456 _main:
                                    457 ;	main.c:85: TIM0_MODE1_INT_CTRL;
      0000E0 53 89 F0         [24]  458 	anl	_TMOD,#0xf0
      0000E3 43 89 01         [24]  459 	orl	_TMOD,#0x01
                                    460 ;	main.c:86: TIM0_CNT(timer0reload);
      0000E6 75 8C D8         [24]  461 	mov	_TH0,#0xd8
      0000E9 75 8A F0         [24]  462 	mov	_TL0,#0xf0
                                    463 ;	main.c:87: TIM0_RUN;
                                    464 ;	assignBit
      0000EC D2 8C            [12]  465 	setb	_TR0
                                    466 ;	main.c:88: TIM0_INTERRUPT_ENABLE;
                                    467 ;	assignBit
      0000EE D2 A9            [12]  468 	setb	_ET0
                                    469 ;	main.c:90: TIM1_MODE1_INT_CTRL;
      0000F0 53 89 0F         [24]  470 	anl	_TMOD,#0x0f
      0000F3 43 89 10         [24]  471 	orl	_TMOD,#0x10
                                    472 ;	main.c:91: TIM1_CNT(timer1reload);
      0000F6 75 8D B1         [24]  473 	mov	_TH1,#0xb1
      0000F9 75 8B E0         [24]  474 	mov	_TL1,#0xe0
                                    475 ;	main.c:92: TIM1_RUN;
                                    476 ;	assignBit
      0000FC D2 8E            [12]  477 	setb	_TR1
                                    478 ;	main.c:93: TIM1_INTERRUPT_ENABLE;
                                    479 ;	assignBit
      0000FE D2 AB            [12]  480 	setb	_ET1
                                    481 ;	main.c:97: TIM2_CNT(0);
      000100 75 CD 00         [24]  482 	mov	_TH2,#0x00
      000103 75 CC 00         [24]  483 	mov	_TL2,#0x00
                                    484 ;	main.c:98: TIM2_RCAP2(timer2reload);
      000106 75 CB 63         [24]  485 	mov	_RCAP2H,#0x63
      000109 75 CA C0         [24]  486 	mov	_RCAP2L,#0xc0
                                    487 ;	main.c:99: TIM2_RUN;
                                    488 ;	assignBit
      00010C D2 CA            [12]  489 	setb	_TR2
                                    490 ;	main.c:100: TIM2_INTERRUPT_ENABLE;
                                    491 ;	assignBit
      00010E D2 AD            [12]  492 	setb	_ET2
                                    493 ;	main.c:102: GLOBAL_INTERRUPT_ENABLE;
                                    494 ;	assignBit
      000110 D2 AF            [12]  495 	setb	_EA
                                    496 ;	main.c:104: while(1);
      000112                        497 00120$:
                                    498 ;	main.c:106: }
      000112 80 FE            [24]  499 	sjmp	00120$
                                    500 	.area CSEG    (CODE)
                                    501 	.area CONST   (CODE)
                                    502 	.area XINIT   (CODE)
                                    503 	.area CABS    (ABS,CODE)
