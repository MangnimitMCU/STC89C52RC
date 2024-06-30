/////////////////////////////////////////////////////////////////////
// Author       : Mr.Somlak Mangnimit
// Device       : AT89C52
// Clock Speed  : 12T Mode @ 24MHz
/////////////////////////////////////////////////////////////////////

#include "../REG52.H"
#include "../SFR_MACRO_REG52.H"

/*
Fsys / 12DivClock or 6DivClock = Timer Clock Input

Xtal 24Mhz and 12DivClock Mode

24Mhz / 12T = 2Mhz

1 / 2Mhz = 0.5us per clock

Desire Time 10000us

10000us / 0.5us = 20000

Timer in 16bit mode over flow count = 65536

65536 - 20000 = Timer reload = 45536

---------------------
65536 - ((DesireTime / DivClock) * FsysClock)

((10000us / 12) * 24MHz) = 20000

65536 - 20000 = 45536
*/

#define timer0reload        65536 - 10000   // 5ms
#define timer1reload        65536 - 20000   // 10ms
#define timer2reload        65536 - 40000   // 20ms

/////////////////////////////////////////////////////////////////////
void Timer0_InterruptHandler(void) __interrupt TF0_VECTOR {
    static uint8_t u8Cnt;

    TIM0_CNT(timer0reload);

    if(++u8Cnt > 100) {
        u8Cnt = 0;
        P10 = !P10;
    }

}

/////////////////////////////////////////////////////////////////////
void Timer1_InterruptHandler(void) __interrupt TF1_VECTOR {
    static uint8_t u8Cnt;

    TIM1_CNT(timer1reload);

    if(++u8Cnt > 100) {
        u8Cnt = 0;
        P11 = !P11;
    }

}

/////////////////////////////////////////////////////////////////////
void Timer2_InterruptHandler(void) __interrupt TF2_EXF2_VECTOR {
    static uint8_t u8Cnt;

    if(TF2) {

        cbit_TF2;

        if(++u8Cnt > 100) {
            u8Cnt = 0;
            P12 = !P12;
        }

    }

}

/////////////////////////////////////////////////////////////////////
void main(void) {

    TIM0_MODE1_INT_CTRL;
    TIM0_CNT(timer0reload);
    TIM0_RUN;
    TIM0_INTERRUPT_ENABLE;

    TIM1_MODE1_INT_CTRL;
    TIM1_CNT(timer1reload);
    TIM1_RUN;
    TIM1_INTERRUPT_ENABLE;

    //TIM2_MODE_AUTORELOAD;
    //TIM2_CLOCKSOURCE_INTERNAL;
    TIM2_CNT(0);
    TIM2_RCAP2(timer2reload);
    TIM2_RUN;
    TIM2_INTERRUPT_ENABLE;

    GLOBAL_INTERRUPT_ENABLE;

    while(1);

}

