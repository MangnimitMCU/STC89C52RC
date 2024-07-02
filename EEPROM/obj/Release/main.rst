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
                                     12 	.globl _IapEraseSector
                                     13 	.globl _IapProgramByte
                                     14 	.globl _IapReadByte
                                     15 	.globl _IapIdle
                                     16 	.globl _Delay
                                     17 	.globl _P47
                                     18 	.globl _P46
                                     19 	.globl _P45
                                     20 	.globl _P44
                                     21 	.globl _P43
                                     22 	.globl _P42
                                     23 	.globl _P41
                                     24 	.globl _P40
                                     25 	.globl _PX3
                                     26 	.globl _EX3
                                     27 	.globl _IE3
                                     28 	.globl _IT3
                                     29 	.globl _PX2
                                     30 	.globl _EX2
                                     31 	.globl _IE2
                                     32 	.globl _IT2
                                     33 	.globl _CY
                                     34 	.globl _AC
                                     35 	.globl _F0
                                     36 	.globl _RS1
                                     37 	.globl _RS0
                                     38 	.globl _OV
                                     39 	.globl _P
                                     40 	.globl _TF2
                                     41 	.globl _EXF2
                                     42 	.globl _RCLK
                                     43 	.globl _TCLK
                                     44 	.globl _EXEN2
                                     45 	.globl _TR2
                                     46 	.globl _C_T2
                                     47 	.globl _CP_RL2
                                     48 	.globl _PT2
                                     49 	.globl _PS
                                     50 	.globl _PT1
                                     51 	.globl _PX1
                                     52 	.globl _PT0
                                     53 	.globl _PX0
                                     54 	.globl _P37
                                     55 	.globl _P36
                                     56 	.globl _P35
                                     57 	.globl _P34
                                     58 	.globl _P33
                                     59 	.globl _P32
                                     60 	.globl _P31
                                     61 	.globl _P30
                                     62 	.globl _EA
                                     63 	.globl _ET2
                                     64 	.globl _ES
                                     65 	.globl _ET1
                                     66 	.globl _EX1
                                     67 	.globl _ET0
                                     68 	.globl _EX0
                                     69 	.globl _P27
                                     70 	.globl _P26
                                     71 	.globl _P25
                                     72 	.globl _P24
                                     73 	.globl _P23
                                     74 	.globl _P22
                                     75 	.globl _P21
                                     76 	.globl _P20
                                     77 	.globl _SM0
                                     78 	.globl _SM1
                                     79 	.globl _SM2
                                     80 	.globl _REN
                                     81 	.globl _TB8
                                     82 	.globl _RB8
                                     83 	.globl _TI
                                     84 	.globl _RI
                                     85 	.globl _P17
                                     86 	.globl _P16
                                     87 	.globl _P15
                                     88 	.globl _P14
                                     89 	.globl _P13
                                     90 	.globl _P12
                                     91 	.globl _P11
                                     92 	.globl _P10
                                     93 	.globl _TF1
                                     94 	.globl _TR1
                                     95 	.globl _TF0
                                     96 	.globl _TR0
                                     97 	.globl _IE1
                                     98 	.globl _IT1
                                     99 	.globl _IE0
                                    100 	.globl _IT0
                                    101 	.globl _P07
                                    102 	.globl _P06
                                    103 	.globl _P05
                                    104 	.globl _P04
                                    105 	.globl _P03
                                    106 	.globl _P02
                                    107 	.globl _P01
                                    108 	.globl _P00
                                    109 	.globl _P4
                                    110 	.globl _IAP_CONTR
                                    111 	.globl _IAP_TRIG
                                    112 	.globl _IAP_CMD
                                    113 	.globl _IAP_ADDRL
                                    114 	.globl _IAP_ADDRH
                                    115 	.globl _IAP_DATA
                                    116 	.globl _WDT_CONTR
                                    117 	.globl _XICON
                                    118 	.globl _SADEN
                                    119 	.globl _IPH
                                    120 	.globl _SADDR
                                    121 	.globl _AUXR1
                                    122 	.globl _AUXR
                                    123 	.globl _B
                                    124 	.globl _ACC
                                    125 	.globl _PSW
                                    126 	.globl _TH2
                                    127 	.globl _TL2
                                    128 	.globl _RCAP2H
                                    129 	.globl _RCAP2L
                                    130 	.globl _T2MOD
                                    131 	.globl _T2CON
                                    132 	.globl _IP
                                    133 	.globl _P3
                                    134 	.globl _IE
                                    135 	.globl _P2
                                    136 	.globl _SBUF
                                    137 	.globl _SCON
                                    138 	.globl _P1
                                    139 	.globl _TH1
                                    140 	.globl _TH0
                                    141 	.globl _TL1
                                    142 	.globl _TL0
                                    143 	.globl _TMOD
                                    144 	.globl _TCON
                                    145 	.globl _PCON
                                    146 	.globl _DPH
                                    147 	.globl _DPL
                                    148 	.globl _SP
                                    149 	.globl _P0
                                    150 	.globl _IapProgramByte_PARM_2
                                    151 ;--------------------------------------------------------
                                    152 ; special function registers
                                    153 ;--------------------------------------------------------
                                    154 	.area RSEG    (ABS,DATA)
      000000                        155 	.org 0x0000
                           000080   156 _P0	=	0x0080
                           000081   157 _SP	=	0x0081
                           000082   158 _DPL	=	0x0082
                           000083   159 _DPH	=	0x0083
                           000087   160 _PCON	=	0x0087
                           000088   161 _TCON	=	0x0088
                           000089   162 _TMOD	=	0x0089
                           00008A   163 _TL0	=	0x008a
                           00008B   164 _TL1	=	0x008b
                           00008C   165 _TH0	=	0x008c
                           00008D   166 _TH1	=	0x008d
                           000090   167 _P1	=	0x0090
                           000098   168 _SCON	=	0x0098
                           000099   169 _SBUF	=	0x0099
                           0000A0   170 _P2	=	0x00a0
                           0000A8   171 _IE	=	0x00a8
                           0000B0   172 _P3	=	0x00b0
                           0000B8   173 _IP	=	0x00b8
                           0000C8   174 _T2CON	=	0x00c8
                           0000C9   175 _T2MOD	=	0x00c9
                           0000CA   176 _RCAP2L	=	0x00ca
                           0000CB   177 _RCAP2H	=	0x00cb
                           0000CC   178 _TL2	=	0x00cc
                           0000CD   179 _TH2	=	0x00cd
                           0000D0   180 _PSW	=	0x00d0
                           0000E0   181 _ACC	=	0x00e0
                           0000F0   182 _B	=	0x00f0
                           00008E   183 _AUXR	=	0x008e
                           0000A2   184 _AUXR1	=	0x00a2
                           0000A9   185 _SADDR	=	0x00a9
                           0000B7   186 _IPH	=	0x00b7
                           0000B9   187 _SADEN	=	0x00b9
                           0000C0   188 _XICON	=	0x00c0
                           0000E1   189 _WDT_CONTR	=	0x00e1
                           0000E2   190 _IAP_DATA	=	0x00e2
                           0000E3   191 _IAP_ADDRH	=	0x00e3
                           0000E4   192 _IAP_ADDRL	=	0x00e4
                           0000E5   193 _IAP_CMD	=	0x00e5
                           0000E6   194 _IAP_TRIG	=	0x00e6
                           0000E7   195 _IAP_CONTR	=	0x00e7
                           0000E8   196 _P4	=	0x00e8
                                    197 ;--------------------------------------------------------
                                    198 ; special function bits
                                    199 ;--------------------------------------------------------
                                    200 	.area RSEG    (ABS,DATA)
      000000                        201 	.org 0x0000
                           000080   202 _P00	=	0x0080
                           000081   203 _P01	=	0x0081
                           000082   204 _P02	=	0x0082
                           000083   205 _P03	=	0x0083
                           000084   206 _P04	=	0x0084
                           000085   207 _P05	=	0x0085
                           000086   208 _P06	=	0x0086
                           000087   209 _P07	=	0x0087
                           000088   210 _IT0	=	0x0088
                           000089   211 _IE0	=	0x0089
                           00008A   212 _IT1	=	0x008a
                           00008B   213 _IE1	=	0x008b
                           00008C   214 _TR0	=	0x008c
                           00008D   215 _TF0	=	0x008d
                           00008E   216 _TR1	=	0x008e
                           00008F   217 _TF1	=	0x008f
                           000090   218 _P10	=	0x0090
                           000091   219 _P11	=	0x0091
                           000092   220 _P12	=	0x0092
                           000093   221 _P13	=	0x0093
                           000094   222 _P14	=	0x0094
                           000095   223 _P15	=	0x0095
                           000096   224 _P16	=	0x0096
                           000097   225 _P17	=	0x0097
                           000098   226 _RI	=	0x0098
                           000099   227 _TI	=	0x0099
                           00009A   228 _RB8	=	0x009a
                           00009B   229 _TB8	=	0x009b
                           00009C   230 _REN	=	0x009c
                           00009D   231 _SM2	=	0x009d
                           00009E   232 _SM1	=	0x009e
                           00009F   233 _SM0	=	0x009f
                           0000A0   234 _P20	=	0x00a0
                           0000A1   235 _P21	=	0x00a1
                           0000A2   236 _P22	=	0x00a2
                           0000A3   237 _P23	=	0x00a3
                           0000A4   238 _P24	=	0x00a4
                           0000A5   239 _P25	=	0x00a5
                           0000A6   240 _P26	=	0x00a6
                           0000A7   241 _P27	=	0x00a7
                           0000A8   242 _EX0	=	0x00a8
                           0000A9   243 _ET0	=	0x00a9
                           0000AA   244 _EX1	=	0x00aa
                           0000AB   245 _ET1	=	0x00ab
                           0000AC   246 _ES	=	0x00ac
                           0000AD   247 _ET2	=	0x00ad
                           0000AF   248 _EA	=	0x00af
                           0000B0   249 _P30	=	0x00b0
                           0000B1   250 _P31	=	0x00b1
                           0000B2   251 _P32	=	0x00b2
                           0000B3   252 _P33	=	0x00b3
                           0000B4   253 _P34	=	0x00b4
                           0000B5   254 _P35	=	0x00b5
                           0000B6   255 _P36	=	0x00b6
                           0000B7   256 _P37	=	0x00b7
                           0000B8   257 _PX0	=	0x00b8
                           0000B9   258 _PT0	=	0x00b9
                           0000BA   259 _PX1	=	0x00ba
                           0000BB   260 _PT1	=	0x00bb
                           0000BC   261 _PS	=	0x00bc
                           0000BD   262 _PT2	=	0x00bd
                           0000C8   263 _CP_RL2	=	0x00c8
                           0000C9   264 _C_T2	=	0x00c9
                           0000CA   265 _TR2	=	0x00ca
                           0000CB   266 _EXEN2	=	0x00cb
                           0000CC   267 _TCLK	=	0x00cc
                           0000CD   268 _RCLK	=	0x00cd
                           0000CE   269 _EXF2	=	0x00ce
                           0000CF   270 _TF2	=	0x00cf
                           0000D0   271 _P	=	0x00d0
                           0000D2   272 _OV	=	0x00d2
                           0000D3   273 _RS0	=	0x00d3
                           0000D4   274 _RS1	=	0x00d4
                           0000D5   275 _F0	=	0x00d5
                           0000D6   276 _AC	=	0x00d6
                           0000D7   277 _CY	=	0x00d7
                           0000C0   278 _IT2	=	0x00c0
                           0000C1   279 _IE2	=	0x00c1
                           0000C2   280 _EX2	=	0x00c2
                           0000C3   281 _PX2	=	0x00c3
                           0000C4   282 _IT3	=	0x00c4
                           0000C5   283 _IE3	=	0x00c5
                           0000C6   284 _EX3	=	0x00c6
                           0000C7   285 _PX3	=	0x00c7
                           0000E8   286 _P40	=	0x00e8
                           0000E9   287 _P41	=	0x00e9
                           0000EA   288 _P42	=	0x00ea
                           0000EB   289 _P43	=	0x00eb
                           0000EC   290 _P44	=	0x00ec
                           0000ED   291 _P45	=	0x00ed
                           0000EE   292 _P46	=	0x00ee
                           0000EF   293 _P47	=	0x00ef
                                    294 ;--------------------------------------------------------
                                    295 ; overlayable register banks
                                    296 ;--------------------------------------------------------
                                    297 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        298 	.ds 8
                                    299 ;--------------------------------------------------------
                                    300 ; internal ram data
                                    301 ;--------------------------------------------------------
                                    302 	.area DSEG    (DATA)
      000008                        303 _IapProgramByte_PARM_2:
      000008                        304 	.ds 1
                                    305 ;--------------------------------------------------------
                                    306 ; overlayable items in internal ram
                                    307 ;--------------------------------------------------------
                                    308 	.area	OSEG    (OVR,DATA)
                                    309 ;--------------------------------------------------------
                                    310 ; Stack segment in internal ram
                                    311 ;--------------------------------------------------------
                                    312 	.area	SSEG
      000009                        313 __start__stack:
      000009                        314 	.ds	1
                                    315 
                                    316 ;--------------------------------------------------------
                                    317 ; indirectly addressable internal ram data
                                    318 ;--------------------------------------------------------
                                    319 	.area ISEG    (DATA)
                                    320 ;--------------------------------------------------------
                                    321 ; absolute internal ram data
                                    322 ;--------------------------------------------------------
                                    323 	.area IABS    (ABS,DATA)
                                    324 	.area IABS    (ABS,DATA)
                                    325 ;--------------------------------------------------------
                                    326 ; bit data
                                    327 ;--------------------------------------------------------
                                    328 	.area BSEG    (BIT)
                                    329 ;--------------------------------------------------------
                                    330 ; paged external ram data
                                    331 ;--------------------------------------------------------
                                    332 	.area PSEG    (PAG,XDATA)
                                    333 ;--------------------------------------------------------
                                    334 ; external ram data
                                    335 ;--------------------------------------------------------
                                    336 	.area XSEG    (XDATA)
                                    337 ;--------------------------------------------------------
                                    338 ; absolute external ram data
                                    339 ;--------------------------------------------------------
                                    340 	.area XABS    (ABS,XDATA)
                                    341 ;--------------------------------------------------------
                                    342 ; external initialized ram data
                                    343 ;--------------------------------------------------------
                                    344 	.area XISEG   (XDATA)
                                    345 	.area HOME    (CODE)
                                    346 	.area GSINIT0 (CODE)
                                    347 	.area GSINIT1 (CODE)
                                    348 	.area GSINIT2 (CODE)
                                    349 	.area GSINIT3 (CODE)
                                    350 	.area GSINIT4 (CODE)
                                    351 	.area GSINIT5 (CODE)
                                    352 	.area GSINIT  (CODE)
                                    353 	.area GSFINAL (CODE)
                                    354 	.area CSEG    (CODE)
                                    355 ;--------------------------------------------------------
                                    356 ; interrupt vector
                                    357 ;--------------------------------------------------------
                                    358 	.area HOME    (CODE)
      000000                        359 __interrupt_vect:
      000000 02 00 06         [24]  360 	ljmp	__sdcc_gsinit_startup
                                    361 ;--------------------------------------------------------
                                    362 ; global & static initialisations
                                    363 ;--------------------------------------------------------
                                    364 	.area HOME    (CODE)
                                    365 	.area GSINIT  (CODE)
                                    366 	.area GSFINAL (CODE)
                                    367 	.area GSINIT  (CODE)
                                    368 	.globl __sdcc_gsinit_startup
                                    369 	.globl __sdcc_program_startup
                                    370 	.globl __start__stack
                                    371 	.globl __mcs51_genXINIT
                                    372 	.globl __mcs51_genXRAMCLEAR
                                    373 	.globl __mcs51_genRAMCLEAR
                                    374 	.area GSFINAL (CODE)
      00005F 02 00 03         [24]  375 	ljmp	__sdcc_program_startup
                                    376 ;--------------------------------------------------------
                                    377 ; Home
                                    378 ;--------------------------------------------------------
                                    379 	.area HOME    (CODE)
                                    380 	.area HOME    (CODE)
      000003                        381 __sdcc_program_startup:
      000003 02 00 E4         [24]  382 	ljmp	_main
                                    383 ;	return from main will return to caller
                                    384 ;--------------------------------------------------------
                                    385 ; code
                                    386 ;--------------------------------------------------------
                                    387 	.area CSEG    (CODE)
                                    388 ;------------------------------------------------------------
                                    389 ;Allocation info for local variables in function 'Delay'
                                    390 ;------------------------------------------------------------
                                    391 ;n                         Allocated to registers 
                                    392 ;x                         Allocated to registers r5 r6 
                                    393 ;------------------------------------------------------------
                                    394 ;	main.c:25: void Delay(uint8_t n) {
                                    395 ;	-----------------------------------------
                                    396 ;	 function Delay
                                    397 ;	-----------------------------------------
      000062                        398 _Delay:
                           000007   399 	ar7 = 0x07
                           000006   400 	ar6 = 0x06
                           000005   401 	ar5 = 0x05
                           000004   402 	ar4 = 0x04
                           000003   403 	ar3 = 0x03
                           000002   404 	ar2 = 0x02
                           000001   405 	ar1 = 0x01
                           000000   406 	ar0 = 0x00
      000062 AF 82            [24]  407 	mov	r7,dpl
                                    408 ;	main.c:28: while(n--) {
      000064                        409 00104$:
      000064 8F 06            [24]  410 	mov	ar6,r7
      000066 1F               [12]  411 	dec	r7
      000067 EE               [12]  412 	mov	a,r6
      000068 60 15            [24]  413 	jz	00107$
                                    414 ;	main.c:29: x = 0;
      00006A 7D 00            [12]  415 	mov	r5,#0x00
      00006C 7E 00            [12]  416 	mov	r6,#0x00
                                    417 ;	main.c:30: while(++x);
      00006E                        418 00101$:
      00006E 74 01            [12]  419 	mov	a,#0x01
      000070 2D               [12]  420 	add	a,r5
      000071 FB               [12]  421 	mov	r3,a
      000072 E4               [12]  422 	clr	a
      000073 3E               [12]  423 	addc	a,r6
      000074 FC               [12]  424 	mov	r4,a
      000075 8B 05            [24]  425 	mov	ar5,r3
      000077 8C 06            [24]  426 	mov	ar6,r4
      000079 EB               [12]  427 	mov	a,r3
      00007A 4C               [12]  428 	orl	a,r4
      00007B 60 E7            [24]  429 	jz	00104$
      00007D 80 EF            [24]  430 	sjmp	00101$
      00007F                        431 00107$:
                                    432 ;	main.c:32: }
      00007F 22               [24]  433 	ret
                                    434 ;------------------------------------------------------------
                                    435 ;Allocation info for local variables in function 'IapIdle'
                                    436 ;------------------------------------------------------------
                                    437 ;	main.c:37: void IapIdle(void) {
                                    438 ;	-----------------------------------------
                                    439 ;	 function IapIdle
                                    440 ;	-----------------------------------------
      000080                        441 _IapIdle:
                                    442 ;	main.c:38: IAP_CONTR = 0;                  //Close IAP function
      000080 75 E7 00         [24]  443 	mov	_IAP_CONTR,#0x00
                                    444 ;	main.c:39: IAP_CMD = 0;                    //Clear command to standby
      000083 75 E5 00         [24]  445 	mov	_IAP_CMD,#0x00
                                    446 ;	main.c:40: IAP_TRIG = 0;                   //Clear trigger register
      000086 75 E6 00         [24]  447 	mov	_IAP_TRIG,#0x00
                                    448 ;	main.c:41: IAP_ADDRH = 0x80;               //Data ptr point to non-EEPROM area
      000089 75 E3 80         [24]  449 	mov	_IAP_ADDRH,#0x80
                                    450 ;	main.c:42: IAP_ADDRL = 0;                  //Clear IAP address to prevent misuse
      00008C 75 E4 00         [24]  451 	mov	_IAP_ADDRL,#0x00
                                    452 ;	main.c:43: }
      00008F 22               [24]  453 	ret
                                    454 ;------------------------------------------------------------
                                    455 ;Allocation info for local variables in function 'IapReadByte'
                                    456 ;------------------------------------------------------------
                                    457 ;addr                      Allocated to registers r6 r7 
                                    458 ;dat                       Allocated to registers r7 
                                    459 ;------------------------------------------------------------
                                    460 ;	main.c:49: uint8_t IapReadByte(uint16_t addr) {
                                    461 ;	-----------------------------------------
                                    462 ;	 function IapReadByte
                                    463 ;	-----------------------------------------
      000090                        464 _IapReadByte:
      000090 AE 82            [24]  465 	mov	r6,dpl
      000092 AF 83            [24]  466 	mov	r7,dph
                                    467 ;	main.c:52: IAP_CONTR = ENABLE_IAP;         //Open IAP function, and set wait time
      000094 75 E7 80         [24]  468 	mov	_IAP_CONTR,#0x80
                                    469 ;	main.c:53: IAP_CMD = CMD_READ;             //Set ISP/IAP/EEPROM READ command
      000097 75 E5 01         [24]  470 	mov	_IAP_CMD,#0x01
                                    471 ;	main.c:54: IAP_ADDRL = addr;               //Set ISP/IAP/EEPROM address low
      00009A 8E E4            [24]  472 	mov	_IAP_ADDRL,r6
                                    473 ;	main.c:55: IAP_ADDRH = addr >> 8;          //Set ISP/IAP/EEPROM address high
      00009C 8F E3            [24]  474 	mov	_IAP_ADDRH,r7
                                    475 ;	main.c:56: IAP_TRIG = 0x46;                //Send trigger command1 (0x46)
      00009E 75 E6 46         [24]  476 	mov	_IAP_TRIG,#0x46
                                    477 ;	main.c:57: IAP_TRIG = 0xb9;                //Send trigger command2 (0xb9)
      0000A1 75 E6 B9         [24]  478 	mov	_IAP_TRIG,#0xb9
                                    479 ;	main.c:58: __asm__("nop");                        //MCU will hold here until ISP/IAP/EEPROM operation complete
      0000A4 00               [12]  480 	nop
                                    481 ;	main.c:59: dat = IAP_DATA;                 //Read ISP/IAP/EEPROM data
      0000A5 AF E2            [24]  482 	mov	r7,_IAP_DATA
                                    483 ;	main.c:60: IapIdle();                      //Close ISP/IAP/EEPROM function
      0000A7 C0 07            [24]  484 	push	ar7
      0000A9 12 00 80         [24]  485 	lcall	_IapIdle
      0000AC D0 07            [24]  486 	pop	ar7
                                    487 ;	main.c:62: return dat;                     //Return Flash data
      0000AE 8F 82            [24]  488 	mov	dpl,r7
                                    489 ;	main.c:63: }
      0000B0 22               [24]  490 	ret
                                    491 ;------------------------------------------------------------
                                    492 ;Allocation info for local variables in function 'IapProgramByte'
                                    493 ;------------------------------------------------------------
                                    494 ;dat                       Allocated with name '_IapProgramByte_PARM_2'
                                    495 ;addr                      Allocated to registers r6 r7 
                                    496 ;------------------------------------------------------------
                                    497 ;	main.c:70: void IapProgramByte(uint16_t addr, uint8_t dat) {
                                    498 ;	-----------------------------------------
                                    499 ;	 function IapProgramByte
                                    500 ;	-----------------------------------------
      0000B1                        501 _IapProgramByte:
      0000B1 AE 82            [24]  502 	mov	r6,dpl
      0000B3 AF 83            [24]  503 	mov	r7,dph
                                    504 ;	main.c:71: IAP_CONTR = ENABLE_IAP;         //Open IAP function, and set wait time
      0000B5 75 E7 80         [24]  505 	mov	_IAP_CONTR,#0x80
                                    506 ;	main.c:72: IAP_CMD = CMD_PROGRAM;          //Set ISP/IAP/EEPROM PROGRAM command
      0000B8 75 E5 02         [24]  507 	mov	_IAP_CMD,#0x02
                                    508 ;	main.c:73: IAP_ADDRL = addr;               //Set ISP/IAP/EEPROM address low
      0000BB 8E E4            [24]  509 	mov	_IAP_ADDRL,r6
                                    510 ;	main.c:74: IAP_ADDRH = addr >> 8;          //Set ISP/IAP/EEPROM address high
      0000BD 8F E3            [24]  511 	mov	_IAP_ADDRH,r7
                                    512 ;	main.c:75: IAP_DATA = dat;                 //Write ISP/IAP/EEPROM data
      0000BF 85 08 E2         [24]  513 	mov	_IAP_DATA,_IapProgramByte_PARM_2
                                    514 ;	main.c:76: IAP_TRIG = 0x46;                //Send trigger command1 (0x46)
      0000C2 75 E6 46         [24]  515 	mov	_IAP_TRIG,#0x46
                                    516 ;	main.c:77: IAP_TRIG = 0xb9;                //Send trigger command2 (0xb9)
      0000C5 75 E6 B9         [24]  517 	mov	_IAP_TRIG,#0xb9
                                    518 ;	main.c:78: __asm__("nop");                        //MCU will hold here until ISP/IAP/EEPROM operation complete
      0000C8 00               [12]  519 	nop
                                    520 ;	main.c:79: IapIdle();
                                    521 ;	main.c:80: }
      0000C9 02 00 80         [24]  522 	ljmp	_IapIdle
                                    523 ;------------------------------------------------------------
                                    524 ;Allocation info for local variables in function 'IapEraseSector'
                                    525 ;------------------------------------------------------------
                                    526 ;addr                      Allocated to registers r6 r7 
                                    527 ;------------------------------------------------------------
                                    528 ;	main.c:86: void IapEraseSector(uint16_t addr) {
                                    529 ;	-----------------------------------------
                                    530 ;	 function IapEraseSector
                                    531 ;	-----------------------------------------
      0000CC                        532 _IapEraseSector:
      0000CC AE 82            [24]  533 	mov	r6,dpl
      0000CE AF 83            [24]  534 	mov	r7,dph
                                    535 ;	main.c:87: IAP_CONTR = ENABLE_IAP;         //Open IAP function, and set wait time
      0000D0 75 E7 80         [24]  536 	mov	_IAP_CONTR,#0x80
                                    537 ;	main.c:88: IAP_CMD = CMD_ERASE;            //Set ISP/IAP/EEPROM ERASE command
      0000D3 75 E5 03         [24]  538 	mov	_IAP_CMD,#0x03
                                    539 ;	main.c:89: IAP_ADDRL = addr;               //Set ISP/IAP/EEPROM address low
      0000D6 8E E4            [24]  540 	mov	_IAP_ADDRL,r6
                                    541 ;	main.c:90: IAP_ADDRH = addr >> 8;          //Set ISP/IAP/EEPROM address high
      0000D8 8F E3            [24]  542 	mov	_IAP_ADDRH,r7
                                    543 ;	main.c:91: IAP_TRIG = 0x46;                //Send trigger command1 (0x46)
      0000DA 75 E6 46         [24]  544 	mov	_IAP_TRIG,#0x46
                                    545 ;	main.c:92: IAP_TRIG = 0xb9;                //Send trigger command2 (0xb9)
      0000DD 75 E6 B9         [24]  546 	mov	_IAP_TRIG,#0xb9
                                    547 ;	main.c:93: __asm__("nop");                        //MCU will hold here until ISP/IAP/EEPROM operation complete
      0000E0 00               [12]  548 	nop
                                    549 ;	main.c:94: IapIdle();
                                    550 ;	main.c:95: }
      0000E1 02 00 80         [24]  551 	ljmp	_IapIdle
                                    552 ;------------------------------------------------------------
                                    553 ;Allocation info for local variables in function 'main'
                                    554 ;------------------------------------------------------------
                                    555 ;i                         Allocated to registers r6 r7 
                                    556 ;------------------------------------------------------------
                                    557 ;	main.c:98: void main(void) {
                                    558 ;	-----------------------------------------
                                    559 ;	 function main
                                    560 ;	-----------------------------------------
      0000E4                        561 _main:
                                    562 ;	main.c:101: P1 = 0xfe;                      //1111,1110 System Reset OK
      0000E4 75 90 FE         [24]  563 	mov	_P1,#0xfe
                                    564 ;	main.c:102: Delay(10);                      //Delay
      0000E7 75 82 0A         [24]  565 	mov	dpl,#0x0a
      0000EA 12 00 62         [24]  566 	lcall	_Delay
                                    567 ;	main.c:103: IapEraseSector(IAP_ADDRESS);    //Erase current sector
      0000ED 90 20 00         [24]  568 	mov	dptr,#0x2000
      0000F0 12 00 CC         [24]  569 	lcall	_IapEraseSector
                                    570 ;	main.c:104: for(i=0; i<512; i++) {           //Check whether all sector data is FF
      0000F3 7E 00            [12]  571 	mov	r6,#0x00
      0000F5 7F 00            [12]  572 	mov	r7,#0x00
      0000F7                        573 00115$:
                                    574 ;	main.c:105: if(IapReadByte(IAP_ADDRESS+i) != 0xff) {
      0000F7 8E 04            [24]  575 	mov	ar4,r6
      0000F9 8F 05            [24]  576 	mov	ar5,r7
      0000FB 74 20            [12]  577 	mov	a,#0x20
      0000FD 2D               [12]  578 	add	a,r5
      0000FE FD               [12]  579 	mov	r5,a
      0000FF 8C 82            [24]  580 	mov	dpl,r4
      000101 8D 83            [24]  581 	mov	dph,r5
      000103 C0 07            [24]  582 	push	ar7
      000105 C0 06            [24]  583 	push	ar6
      000107 12 00 90         [24]  584 	lcall	_IapReadByte
      00010A AD 82            [24]  585 	mov	r5,dpl
      00010C D0 06            [24]  586 	pop	ar6
      00010E D0 07            [24]  587 	pop	ar7
      000110 BD FF 02         [24]  588 	cjne	r5,#0xff,00164$
      000113 80 03            [24]  589 	sjmp	00165$
      000115                        590 00164$:
      000115 02 01 93         [24]  591 	ljmp	00111$
      000118                        592 00165$:
                                    593 ;	main.c:104: for(i=0; i<512; i++) {           //Check whether all sector data is FF
      000118 0E               [12]  594 	inc	r6
      000119 BE 00 01         [24]  595 	cjne	r6,#0x00,00166$
      00011C 0F               [12]  596 	inc	r7
      00011D                        597 00166$:
      00011D 8F 05            [24]  598 	mov	ar5,r7
      00011F 74 FE            [12]  599 	mov	a,#0x100 - 0x02
      000121 2D               [12]  600 	add	a,r5
      000122 50 D3            [24]  601 	jnc	00115$
                                    602 ;	main.c:110: P1 = 0xfc;                      //1111,1100 Erase successful
      000124 75 90 FC         [24]  603 	mov	_P1,#0xfc
                                    604 ;	main.c:111: Delay(10);                      //Delay
      000127 75 82 0A         [24]  605 	mov	dpl,#0x0a
      00012A 12 00 62         [24]  606 	lcall	_Delay
                                    607 ;	main.c:112: for(i=0; i<512; i++) {          //Program 512 bytes data into data flash
      00012D 7E 00            [12]  608 	mov	r6,#0x00
      00012F 7F 00            [12]  609 	mov	r7,#0x00
      000131                        610 00117$:
                                    611 ;	main.c:113: IapProgramByte(IAP_ADDRESS+i, (uint8_t)i);
      000131 8E 04            [24]  612 	mov	ar4,r6
      000133 8F 05            [24]  613 	mov	ar5,r7
      000135 74 20            [12]  614 	mov	a,#0x20
      000137 2D               [12]  615 	add	a,r5
      000138 FD               [12]  616 	mov	r5,a
      000139 8C 82            [24]  617 	mov	dpl,r4
      00013B 8D 83            [24]  618 	mov	dph,r5
      00013D 8E 08            [24]  619 	mov	_IapProgramByte_PARM_2,r6
      00013F C0 07            [24]  620 	push	ar7
      000141 C0 06            [24]  621 	push	ar6
      000143 12 00 B1         [24]  622 	lcall	_IapProgramByte
      000146 D0 06            [24]  623 	pop	ar6
      000148 D0 07            [24]  624 	pop	ar7
                                    625 ;	main.c:112: for(i=0; i<512; i++) {          //Program 512 bytes data into data flash
      00014A 0E               [12]  626 	inc	r6
      00014B BE 00 01         [24]  627 	cjne	r6,#0x00,00168$
      00014E 0F               [12]  628 	inc	r7
      00014F                        629 00168$:
      00014F 8F 05            [24]  630 	mov	ar5,r7
      000151 74 FE            [12]  631 	mov	a,#0x100 - 0x02
      000153 2D               [12]  632 	add	a,r5
      000154 50 DB            [24]  633 	jnc	00117$
                                    634 ;	main.c:116: P1 = 0xf8;                      //1111,1000 Program successful
      000156 75 90 F8         [24]  635 	mov	_P1,#0xf8
                                    636 ;	main.c:117: Delay(10);                      //Delay
      000159 75 82 0A         [24]  637 	mov	dpl,#0x0a
      00015C 12 00 62         [24]  638 	lcall	_Delay
                                    639 ;	main.c:118: for(i=0; i<512; i++) {          //Verify 512 bytes data
      00015F 7E 00            [12]  640 	mov	r6,#0x00
      000161 7F 00            [12]  641 	mov	r7,#0x00
      000163                        642 00119$:
                                    643 ;	main.c:119: if(IapReadByte(IAP_ADDRESS+i) != (uint8_t)i) {
      000163 8E 04            [24]  644 	mov	ar4,r6
      000165 8F 05            [24]  645 	mov	ar5,r7
      000167 74 20            [12]  646 	mov	a,#0x20
      000169 2D               [12]  647 	add	a,r5
      00016A FD               [12]  648 	mov	r5,a
      00016B 8C 82            [24]  649 	mov	dpl,r4
      00016D 8D 83            [24]  650 	mov	dph,r5
      00016F C0 07            [24]  651 	push	ar7
      000171 C0 06            [24]  652 	push	ar6
      000173 12 00 90         [24]  653 	lcall	_IapReadByte
      000176 AD 82            [24]  654 	mov	r5,dpl
      000178 D0 06            [24]  655 	pop	ar6
      00017A D0 07            [24]  656 	pop	ar7
      00017C 8E 04            [24]  657 	mov	ar4,r6
      00017E ED               [12]  658 	mov	a,r5
      00017F B5 04 11         [24]  659 	cjne	a,ar4,00111$
                                    660 ;	main.c:118: for(i=0; i<512; i++) {          //Verify 512 bytes data
      000182 0E               [12]  661 	inc	r6
      000183 BE 00 01         [24]  662 	cjne	r6,#0x00,00172$
      000186 0F               [12]  663 	inc	r7
      000187                        664 00172$:
      000187 8F 05            [24]  665 	mov	ar5,r7
      000189 74 FE            [12]  666 	mov	a,#0x100 - 0x02
      00018B 2D               [12]  667 	add	a,r5
      00018C 50 D5            [24]  668 	jnc	00119$
                                    669 ;	main.c:124: P1 = 0xf0;                      //1111,0000 Verify successful
      00018E 75 90 F0         [24]  670 	mov	_P1,#0xf0
                                    671 ;	main.c:125: while(1);
      000191                        672 00109$:
                                    673 ;	main.c:127: Error:
      000191 80 FE            [24]  674 	sjmp	00109$
      000193                        675 00111$:
                                    676 ;	main.c:128: P1 &= 0x7f;                     //0xxx,xxxx IAP operation fail
      000193 53 90 7F         [24]  677 	anl	_P1,#0x7f
                                    678 ;	main.c:129: while(1);
      000196                        679 00113$:
                                    680 ;	main.c:130: }
      000196 80 FE            [24]  681 	sjmp	00113$
                                    682 	.area CSEG    (CODE)
                                    683 	.area CONST   (CODE)
                                    684 	.area XINIT   (CODE)
                                    685 	.area CABS    (ABS,CODE)
