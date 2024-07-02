/////////////////////////////////////////////////////////////////////
// Author       : Mr.Somlak Mangnimit
// Device       : AT89C52
// Clock Speed  : 12T Mode @ 24MHz
/////////////////////////////////////////////////////////////////////

#include "../STC89C52RC.H"

#define BaudRate_UseTimer1

uint8_t txbuf;

/////////////////////////////////////////////////////////////////////
void Uart_InterruptHandler(void) __interrupt RI_TI_VECTOR {

    if(RI) {

        cbit_RI;
        P1 = SBUF;

    }
    else {

        cbit_TI;
        SBUF = txbuf;
        while(!TI);
        cbit_TI;

    }

}

/////////////////////////////////////////////////////////////////////
void Uart_Transmit(uint8_t txdat) {

    txbuf = txdat;
    sbit_TI;

}

/////////////////////////////////////////////////////////////////////
void Uart_Print(uint8_t *pdat) {

    while(*pdat) {
        Uart_Transmit(*pdat++);
    }

}

/////////////////////////////////////////////////////////////////////
void main(void) {

    SCON |= (_SM1|_REN);    // Uart Mode1 Rx Enable
    PCON |= _SMOD;
    UART_PRIORITY_HIGH;

#ifdef BaudRate_UseTimer1

    /* SMOD = 0 */
    /* TH1 = 256 - ((Crystal / (32*12)) / Baud) */

    /* SMOD = 1 */
    /* TH1 = 256 - ((Crystal / (16*12)) / Baud) */

    TIM1_MODE2_INT_CTRL;
    TH1 = 0xF3;             // 9600 @ 24MHz
    TIM1_RUN;

#else /* 52 Only */

    /* RCAP2 = 65536 - ((Crystal / 32) / Baud) */

    T2CON |= (_RCLK|_TCLK);
    TIM2_RCAP2(65497);      // 19200 @ 24MHz
    TIM2_RUN;

#endif

    UART_INTERRUPT_ENABLE;
    GLOBAL_INTERRUPT_ENABLE;

    Uart_Print("HELLO");

    while(1);

}

