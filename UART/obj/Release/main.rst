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
                                     12 	.globl _Uart_Print
                                     13 	.globl _Uart_Transmit
                                     14 	.globl _Uart_InterruptHandler
                                     15 	.globl _P47
                                     16 	.globl _P46
                                     17 	.globl _P45
                                     18 	.globl _P44
                                     19 	.globl _P43
                                     20 	.globl _P42
                                     21 	.globl _P41
                                     22 	.globl _P40
                                     23 	.globl _PX3
                                     24 	.globl _EX3
                                     25 	.globl _IE3
                                     26 	.globl _IT3
                                     27 	.globl _PX2
                                     28 	.globl _EX2
                                     29 	.globl _IE2
                                     30 	.globl _IT2
                                     31 	.globl _CY
                                     32 	.globl _AC
                                     33 	.globl _F0
                                     34 	.globl _RS1
                                     35 	.globl _RS0
                                     36 	.globl _OV
                                     37 	.globl _P
                                     38 	.globl _TF2
                                     39 	.globl _EXF2
                                     40 	.globl _RCLK
                                     41 	.globl _TCLK
                                     42 	.globl _EXEN2
                                     43 	.globl _TR2
                                     44 	.globl _C_T2
                                     45 	.globl _CP_RL2
                                     46 	.globl _PT2
                                     47 	.globl _PS
                                     48 	.globl _PT1
                                     49 	.globl _PX1
                                     50 	.globl _PT0
                                     51 	.globl _PX0
                                     52 	.globl _P37
                                     53 	.globl _P36
                                     54 	.globl _P35
                                     55 	.globl _P34
                                     56 	.globl _P33
                                     57 	.globl _P32
                                     58 	.globl _P31
                                     59 	.globl _P30
                                     60 	.globl _EA
                                     61 	.globl _ET2
                                     62 	.globl _ES
                                     63 	.globl _ET1
                                     64 	.globl _EX1
                                     65 	.globl _ET0
                                     66 	.globl _EX0
                                     67 	.globl _P27
                                     68 	.globl _P26
                                     69 	.globl _P25
                                     70 	.globl _P24
                                     71 	.globl _P23
                                     72 	.globl _P22
                                     73 	.globl _P21
                                     74 	.globl _P20
                                     75 	.globl _SM0
                                     76 	.globl _SM1
                                     77 	.globl _SM2
                                     78 	.globl _REN
                                     79 	.globl _TB8
                                     80 	.globl _RB8
                                     81 	.globl _TI
                                     82 	.globl _RI
                                     83 	.globl _P17
                                     84 	.globl _P16
                                     85 	.globl _P15
                                     86 	.globl _P14
                                     87 	.globl _P13
                                     88 	.globl _P12
                                     89 	.globl _P11
                                     90 	.globl _P10
                                     91 	.globl _TF1
                                     92 	.globl _TR1
                                     93 	.globl _TF0
                                     94 	.globl _TR0
                                     95 	.globl _IE1
                                     96 	.globl _IT1
                                     97 	.globl _IE0
                                     98 	.globl _IT0
                                     99 	.globl _P07
                                    100 	.globl _P06
                                    101 	.globl _P05
                                    102 	.globl _P04
                                    103 	.globl _P03
                                    104 	.globl _P02
                                    105 	.globl _P01
                                    106 	.globl _P00
                                    107 	.globl _P4
                                    108 	.globl _IAP_CONTR
                                    109 	.globl _IAP_TRIG
                                    110 	.globl _IAP_CMD
                                    111 	.globl _IAP_ADDRL
                                    112 	.globl _IAP_ADDRH
                                    113 	.globl _IAP_DATA
                                    114 	.globl _WDT_CONTR
                                    115 	.globl _XICON
                                    116 	.globl _SADEN
                                    117 	.globl _IPH
                                    118 	.globl _SADDR
                                    119 	.globl _AUXR1
                                    120 	.globl _AUXR
                                    121 	.globl _B
                                    122 	.globl _ACC
                                    123 	.globl _PSW
                                    124 	.globl _TH2
                                    125 	.globl _TL2
                                    126 	.globl _RCAP2H
                                    127 	.globl _RCAP2L
                                    128 	.globl _T2MOD
                                    129 	.globl _T2CON
                                    130 	.globl _IP
                                    131 	.globl _P3
                                    132 	.globl _IE
                                    133 	.globl _P2
                                    134 	.globl _SBUF
                                    135 	.globl _SCON
                                    136 	.globl _P1
                                    137 	.globl _TH1
                                    138 	.globl _TH0
                                    139 	.globl _TL1
                                    140 	.globl _TL0
                                    141 	.globl _TMOD
                                    142 	.globl _TCON
                                    143 	.globl _PCON
                                    144 	.globl _DPH
                                    145 	.globl _DPL
                                    146 	.globl _SP
                                    147 	.globl _P0
                                    148 	.globl _txbuf
                                    149 ;--------------------------------------------------------
                                    150 ; special function registers
                                    151 ;--------------------------------------------------------
                                    152 	.area RSEG    (ABS,DATA)
      000000                        153 	.org 0x0000
                           000080   154 _P0	=	0x0080
                           000081   155 _SP	=	0x0081
                           000082   156 _DPL	=	0x0082
                           000083   157 _DPH	=	0x0083
                           000087   158 _PCON	=	0x0087
                           000088   159 _TCON	=	0x0088
                           000089   160 _TMOD	=	0x0089
                           00008A   161 _TL0	=	0x008a
                           00008B   162 _TL1	=	0x008b
                           00008C   163 _TH0	=	0x008c
                           00008D   164 _TH1	=	0x008d
                           000090   165 _P1	=	0x0090
                           000098   166 _SCON	=	0x0098
                           000099   167 _SBUF	=	0x0099
                           0000A0   168 _P2	=	0x00a0
                           0000A8   169 _IE	=	0x00a8
                           0000B0   170 _P3	=	0x00b0
                           0000B8   171 _IP	=	0x00b8
                           0000C8   172 _T2CON	=	0x00c8
                           0000C9   173 _T2MOD	=	0x00c9
                           0000CA   174 _RCAP2L	=	0x00ca
                           0000CB   175 _RCAP2H	=	0x00cb
                           0000CC   176 _TL2	=	0x00cc
                           0000CD   177 _TH2	=	0x00cd
                           0000D0   178 _PSW	=	0x00d0
                           0000E0   179 _ACC	=	0x00e0
                           0000F0   180 _B	=	0x00f0
                           00008E   181 _AUXR	=	0x008e
                           0000A2   182 _AUXR1	=	0x00a2
                           0000A9   183 _SADDR	=	0x00a9
                           0000B7   184 _IPH	=	0x00b7
                           0000B9   185 _SADEN	=	0x00b9
                           0000C0   186 _XICON	=	0x00c0
                           0000E1   187 _WDT_CONTR	=	0x00e1
                           0000E2   188 _IAP_DATA	=	0x00e2
                           0000E3   189 _IAP_ADDRH	=	0x00e3
                           0000E4   190 _IAP_ADDRL	=	0x00e4
                           0000E5   191 _IAP_CMD	=	0x00e5
                           0000E6   192 _IAP_TRIG	=	0x00e6
                           0000E7   193 _IAP_CONTR	=	0x00e7
                           0000E8   194 _P4	=	0x00e8
                                    195 ;--------------------------------------------------------
                                    196 ; special function bits
                                    197 ;--------------------------------------------------------
                                    198 	.area RSEG    (ABS,DATA)
      000000                        199 	.org 0x0000
                           000080   200 _P00	=	0x0080
                           000081   201 _P01	=	0x0081
                           000082   202 _P02	=	0x0082
                           000083   203 _P03	=	0x0083
                           000084   204 _P04	=	0x0084
                           000085   205 _P05	=	0x0085
                           000086   206 _P06	=	0x0086
                           000087   207 _P07	=	0x0087
                           000088   208 _IT0	=	0x0088
                           000089   209 _IE0	=	0x0089
                           00008A   210 _IT1	=	0x008a
                           00008B   211 _IE1	=	0x008b
                           00008C   212 _TR0	=	0x008c
                           00008D   213 _TF0	=	0x008d
                           00008E   214 _TR1	=	0x008e
                           00008F   215 _TF1	=	0x008f
                           000090   216 _P10	=	0x0090
                           000091   217 _P11	=	0x0091
                           000092   218 _P12	=	0x0092
                           000093   219 _P13	=	0x0093
                           000094   220 _P14	=	0x0094
                           000095   221 _P15	=	0x0095
                           000096   222 _P16	=	0x0096
                           000097   223 _P17	=	0x0097
                           000098   224 _RI	=	0x0098
                           000099   225 _TI	=	0x0099
                           00009A   226 _RB8	=	0x009a
                           00009B   227 _TB8	=	0x009b
                           00009C   228 _REN	=	0x009c
                           00009D   229 _SM2	=	0x009d
                           00009E   230 _SM1	=	0x009e
                           00009F   231 _SM0	=	0x009f
                           0000A0   232 _P20	=	0x00a0
                           0000A1   233 _P21	=	0x00a1
                           0000A2   234 _P22	=	0x00a2
                           0000A3   235 _P23	=	0x00a3
                           0000A4   236 _P24	=	0x00a4
                           0000A5   237 _P25	=	0x00a5
                           0000A6   238 _P26	=	0x00a6
                           0000A7   239 _P27	=	0x00a7
                           0000A8   240 _EX0	=	0x00a8
                           0000A9   241 _ET0	=	0x00a9
                           0000AA   242 _EX1	=	0x00aa
                           0000AB   243 _ET1	=	0x00ab
                           0000AC   244 _ES	=	0x00ac
                           0000AD   245 _ET2	=	0x00ad
                           0000AF   246 _EA	=	0x00af
                           0000B0   247 _P30	=	0x00b0
                           0000B1   248 _P31	=	0x00b1
                           0000B2   249 _P32	=	0x00b2
                           0000B3   250 _P33	=	0x00b3
                           0000B4   251 _P34	=	0x00b4
                           0000B5   252 _P35	=	0x00b5
                           0000B6   253 _P36	=	0x00b6
                           0000B7   254 _P37	=	0x00b7
                           0000B8   255 _PX0	=	0x00b8
                           0000B9   256 _PT0	=	0x00b9
                           0000BA   257 _PX1	=	0x00ba
                           0000BB   258 _PT1	=	0x00bb
                           0000BC   259 _PS	=	0x00bc
                           0000BD   260 _PT2	=	0x00bd
                           0000C8   261 _CP_RL2	=	0x00c8
                           0000C9   262 _C_T2	=	0x00c9
                           0000CA   263 _TR2	=	0x00ca
                           0000CB   264 _EXEN2	=	0x00cb
                           0000CC   265 _TCLK	=	0x00cc
                           0000CD   266 _RCLK	=	0x00cd
                           0000CE   267 _EXF2	=	0x00ce
                           0000CF   268 _TF2	=	0x00cf
                           0000D0   269 _P	=	0x00d0
                           0000D2   270 _OV	=	0x00d2
                           0000D3   271 _RS0	=	0x00d3
                           0000D4   272 _RS1	=	0x00d4
                           0000D5   273 _F0	=	0x00d5
                           0000D6   274 _AC	=	0x00d6
                           0000D7   275 _CY	=	0x00d7
                           0000C0   276 _IT2	=	0x00c0
                           0000C1   277 _IE2	=	0x00c1
                           0000C2   278 _EX2	=	0x00c2
                           0000C3   279 _PX2	=	0x00c3
                           0000C4   280 _IT3	=	0x00c4
                           0000C5   281 _IE3	=	0x00c5
                           0000C6   282 _EX3	=	0x00c6
                           0000C7   283 _PX3	=	0x00c7
                           0000E8   284 _P40	=	0x00e8
                           0000E9   285 _P41	=	0x00e9
                           0000EA   286 _P42	=	0x00ea
                           0000EB   287 _P43	=	0x00eb
                           0000EC   288 _P44	=	0x00ec
                           0000ED   289 _P45	=	0x00ed
                           0000EE   290 _P46	=	0x00ee
                           0000EF   291 _P47	=	0x00ef
                                    292 ;--------------------------------------------------------
                                    293 ; overlayable register banks
                                    294 ;--------------------------------------------------------
                                    295 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        296 	.ds 8
                                    297 ;--------------------------------------------------------
                                    298 ; internal ram data
                                    299 ;--------------------------------------------------------
                                    300 	.area DSEG    (DATA)
      000008                        301 _txbuf::
      000008                        302 	.ds 1
                                    303 ;--------------------------------------------------------
                                    304 ; overlayable items in internal ram
                                    305 ;--------------------------------------------------------
                                    306 	.area	OSEG    (OVR,DATA)
                                    307 ;--------------------------------------------------------
                                    308 ; Stack segment in internal ram
                                    309 ;--------------------------------------------------------
                                    310 	.area	SSEG
      000009                        311 __start__stack:
      000009                        312 	.ds	1
                                    313 
                                    314 ;--------------------------------------------------------
                                    315 ; indirectly addressable internal ram data
                                    316 ;--------------------------------------------------------
                                    317 	.area ISEG    (DATA)
                                    318 ;--------------------------------------------------------
                                    319 ; absolute internal ram data
                                    320 ;--------------------------------------------------------
                                    321 	.area IABS    (ABS,DATA)
                                    322 	.area IABS    (ABS,DATA)
                                    323 ;--------------------------------------------------------
                                    324 ; bit data
                                    325 ;--------------------------------------------------------
                                    326 	.area BSEG    (BIT)
                                    327 ;--------------------------------------------------------
                                    328 ; paged external ram data
                                    329 ;--------------------------------------------------------
                                    330 	.area PSEG    (PAG,XDATA)
                                    331 ;--------------------------------------------------------
                                    332 ; external ram data
                                    333 ;--------------------------------------------------------
                                    334 	.area XSEG    (XDATA)
                                    335 ;--------------------------------------------------------
                                    336 ; absolute external ram data
                                    337 ;--------------------------------------------------------
                                    338 	.area XABS    (ABS,XDATA)
                                    339 ;--------------------------------------------------------
                                    340 ; external initialized ram data
                                    341 ;--------------------------------------------------------
                                    342 	.area XISEG   (XDATA)
                                    343 	.area HOME    (CODE)
                                    344 	.area GSINIT0 (CODE)
                                    345 	.area GSINIT1 (CODE)
                                    346 	.area GSINIT2 (CODE)
                                    347 	.area GSINIT3 (CODE)
                                    348 	.area GSINIT4 (CODE)
                                    349 	.area GSINIT5 (CODE)
                                    350 	.area GSINIT  (CODE)
                                    351 	.area GSFINAL (CODE)
                                    352 	.area CSEG    (CODE)
                                    353 ;--------------------------------------------------------
                                    354 ; interrupt vector
                                    355 ;--------------------------------------------------------
                                    356 	.area HOME    (CODE)
      000000                        357 __interrupt_vect:
      000000 02 00 29         [24]  358 	ljmp	__sdcc_gsinit_startup
      000003 32               [24]  359 	reti
      000004                        360 	.ds	7
      00000B 32               [24]  361 	reti
      00000C                        362 	.ds	7
      000013 32               [24]  363 	reti
      000014                        364 	.ds	7
      00001B 32               [24]  365 	reti
      00001C                        366 	.ds	7
      000023 02 00 85         [24]  367 	ljmp	_Uart_InterruptHandler
                                    368 ;--------------------------------------------------------
                                    369 ; global & static initialisations
                                    370 ;--------------------------------------------------------
                                    371 	.area HOME    (CODE)
                                    372 	.area GSINIT  (CODE)
                                    373 	.area GSFINAL (CODE)
                                    374 	.area GSINIT  (CODE)
                                    375 	.globl __sdcc_gsinit_startup
                                    376 	.globl __sdcc_program_startup
                                    377 	.globl __start__stack
                                    378 	.globl __mcs51_genXINIT
                                    379 	.globl __mcs51_genXRAMCLEAR
                                    380 	.globl __mcs51_genRAMCLEAR
                                    381 	.area GSFINAL (CODE)
      000082 02 00 26         [24]  382 	ljmp	__sdcc_program_startup
                                    383 ;--------------------------------------------------------
                                    384 ; Home
                                    385 ;--------------------------------------------------------
                                    386 	.area HOME    (CODE)
                                    387 	.area HOME    (CODE)
      000026                        388 __sdcc_program_startup:
      000026 02 00 CB         [24]  389 	ljmp	_main
                                    390 ;	return from main will return to caller
                                    391 ;--------------------------------------------------------
                                    392 ; code
                                    393 ;--------------------------------------------------------
                                    394 	.area CSEG    (CODE)
                                    395 ;------------------------------------------------------------
                                    396 ;Allocation info for local variables in function 'Uart_InterruptHandler'
                                    397 ;------------------------------------------------------------
                                    398 ;	main.c:14: void Uart_InterruptHandler(void) __interrupt RI_TI_VECTOR {
                                    399 ;	-----------------------------------------
                                    400 ;	 function Uart_InterruptHandler
                                    401 ;	-----------------------------------------
      000085                        402 _Uart_InterruptHandler:
                           000007   403 	ar7 = 0x07
                           000006   404 	ar6 = 0x06
                           000005   405 	ar5 = 0x05
                           000004   406 	ar4 = 0x04
                           000003   407 	ar3 = 0x03
                           000002   408 	ar2 = 0x02
                           000001   409 	ar1 = 0x01
                           000000   410 	ar0 = 0x00
                                    411 ;	main.c:16: if(RI) {
                                    412 ;	main.c:18: cbit_RI;
                                    413 ;	assignBit
      000085 10 98 02         [24]  414 	jbc	_RI,00121$
      000088 80 05            [24]  415 	sjmp	00105$
      00008A                        416 00121$:
                                    417 ;	main.c:19: P1 = SBUF;
      00008A 85 99 90         [24]  418 	mov	_P1,_SBUF
      00008D 80 0A            [24]  419 	sjmp	00107$
      00008F                        420 00105$:
                                    421 ;	main.c:24: cbit_TI;
                                    422 ;	assignBit
      00008F C2 99            [12]  423 	clr	_TI
                                    424 ;	main.c:25: SBUF = txbuf;
      000091 85 08 99         [24]  425 	mov	_SBUF,_txbuf
                                    426 ;	main.c:26: while(!TI);
      000094                        427 00101$:
                                    428 ;	main.c:27: cbit_TI;
                                    429 ;	assignBit
      000094 10 99 02         [24]  430 	jbc	_TI,00122$
      000097 80 FB            [24]  431 	sjmp	00101$
      000099                        432 00122$:
      000099                        433 00107$:
                                    434 ;	main.c:31: }
      000099 32               [24]  435 	reti
                                    436 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                    437 ;	eliminated unneeded push/pop not_psw
                                    438 ;	eliminated unneeded push/pop dpl
                                    439 ;	eliminated unneeded push/pop dph
                                    440 ;	eliminated unneeded push/pop b
                                    441 ;	eliminated unneeded push/pop acc
                                    442 ;------------------------------------------------------------
                                    443 ;Allocation info for local variables in function 'Uart_Transmit'
                                    444 ;------------------------------------------------------------
                                    445 ;txdat                     Allocated to registers 
                                    446 ;------------------------------------------------------------
                                    447 ;	main.c:34: void Uart_Transmit(uint8_t txdat) {
                                    448 ;	-----------------------------------------
                                    449 ;	 function Uart_Transmit
                                    450 ;	-----------------------------------------
      00009A                        451 _Uart_Transmit:
      00009A 85 82 08         [24]  452 	mov	_txbuf,dpl
                                    453 ;	main.c:37: sbit_TI;
                                    454 ;	assignBit
      00009D D2 99            [12]  455 	setb	_TI
                                    456 ;	main.c:39: }
      00009F 22               [24]  457 	ret
                                    458 ;------------------------------------------------------------
                                    459 ;Allocation info for local variables in function 'Uart_Print'
                                    460 ;------------------------------------------------------------
                                    461 ;pdat                      Allocated to registers 
                                    462 ;------------------------------------------------------------
                                    463 ;	main.c:42: void Uart_Print(uint8_t *pdat) {
                                    464 ;	-----------------------------------------
                                    465 ;	 function Uart_Print
                                    466 ;	-----------------------------------------
      0000A0                        467 _Uart_Print:
      0000A0 AD 82            [24]  468 	mov	r5,dpl
      0000A2 AE 83            [24]  469 	mov	r6,dph
      0000A4 AF F0            [24]  470 	mov	r7,b
                                    471 ;	main.c:44: while(*pdat) {
      0000A6                        472 00101$:
      0000A6 8D 82            [24]  473 	mov	dpl,r5
      0000A8 8E 83            [24]  474 	mov	dph,r6
      0000AA 8F F0            [24]  475 	mov	b,r7
      0000AC 12 00 ED         [24]  476 	lcall	__gptrget
      0000AF FC               [12]  477 	mov	r4,a
      0000B0 60 18            [24]  478 	jz	00104$
                                    479 ;	main.c:45: Uart_Transmit(*pdat++);
      0000B2 8C 82            [24]  480 	mov	dpl,r4
      0000B4 0D               [12]  481 	inc	r5
      0000B5 BD 00 01         [24]  482 	cjne	r5,#0x00,00116$
      0000B8 0E               [12]  483 	inc	r6
      0000B9                        484 00116$:
      0000B9 C0 07            [24]  485 	push	ar7
      0000BB C0 06            [24]  486 	push	ar6
      0000BD C0 05            [24]  487 	push	ar5
      0000BF 12 00 9A         [24]  488 	lcall	_Uart_Transmit
      0000C2 D0 05            [24]  489 	pop	ar5
      0000C4 D0 06            [24]  490 	pop	ar6
      0000C6 D0 07            [24]  491 	pop	ar7
      0000C8 80 DC            [24]  492 	sjmp	00101$
      0000CA                        493 00104$:
                                    494 ;	main.c:48: }
      0000CA 22               [24]  495 	ret
                                    496 ;------------------------------------------------------------
                                    497 ;Allocation info for local variables in function 'main'
                                    498 ;------------------------------------------------------------
                                    499 ;	main.c:51: void main(void) {
                                    500 ;	-----------------------------------------
                                    501 ;	 function main
                                    502 ;	-----------------------------------------
      0000CB                        503 _main:
                                    504 ;	main.c:53: SCON |= (_SM1|_REN);    // Uart Mode1 Rx Enable
      0000CB 43 98 50         [24]  505 	orl	_SCON,#0x50
                                    506 ;	main.c:54: PCON |= _SMOD;
      0000CE 43 87 80         [24]  507 	orl	_PCON,#0x80
                                    508 ;	main.c:55: UART_PRIORITY_HIGH;
                                    509 ;	assignBit
      0000D1 D2 BC            [12]  510 	setb	_PS
                                    511 ;	main.c:65: TIM1_MODE2_INT_CTRL;
      0000D3 53 89 0F         [24]  512 	anl	_TMOD,#0x0f
      0000D6 43 89 20         [24]  513 	orl	_TMOD,#0x20
                                    514 ;	main.c:66: TH1 = 0xF3;             // 9600 @ 24MHz
      0000D9 75 8D F3         [24]  515 	mov	_TH1,#0xf3
                                    516 ;	main.c:67: TIM1_RUN;
                                    517 ;	assignBit
      0000DC D2 8E            [12]  518 	setb	_TR1
                                    519 ;	main.c:79: UART_INTERRUPT_ENABLE;
                                    520 ;	assignBit
      0000DE D2 AC            [12]  521 	setb	_ES
                                    522 ;	main.c:80: GLOBAL_INTERRUPT_ENABLE;
                                    523 ;	assignBit
      0000E0 D2 AF            [12]  524 	setb	_EA
                                    525 ;	main.c:82: Uart_Print("HELLO");
      0000E2 90 01 0D         [24]  526 	mov	dptr,#___str_0
      0000E5 75 F0 80         [24]  527 	mov	b,#0x80
      0000E8 12 00 A0         [24]  528 	lcall	_Uart_Print
                                    529 ;	main.c:84: while(1);
      0000EB                        530 00105$:
                                    531 ;	main.c:86: }
      0000EB 80 FE            [24]  532 	sjmp	00105$
                                    533 	.area CSEG    (CODE)
                                    534 	.area CONST   (CODE)
                                    535 	.area CONST   (CODE)
      00010D                        536 ___str_0:
      00010D 48 45 4C 4C 4F         537 	.ascii "HELLO"
      000112 00                     538 	.db 0x00
                                    539 	.area CSEG    (CODE)
                                    540 	.area XINIT   (CODE)
                                    541 	.area CABS    (ABS,CODE)
