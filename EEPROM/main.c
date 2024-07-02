/*
 Author       : Mr.Somlak Mangnimit
 Device       : STC89C52RC
 Clock Speed  : 12T Mode @ 24MHz
*/

#include "../STC89C52RC.H"

/* Define ISP/IAP/EEPROM command */
#define CMD_IDLE    0               //Stand-By
#define CMD_READ    1               //Byte-Read
#define CMD_PROGRAM 2               //Byte-Program
#define CMD_ERASE   3               //Sector-Erase

/* Define ISP/IAP/EEPROM operation const for IAP_CONTR */
#define ENABLE_IAP 0x80             //if SYSCLK<40MHz
//#define ENABLE_IAP 0x81           //if SYSCLK<20MHz
//#define ENABLE_IAP 0x82           //if SYSCLK<10MHz
//#define ENABLE_IAP 0x83           //if SYSCLK<5MHz

/* Start address for STC89C52xx EEPROM */
#define IAP_ADDRESS 0x2000

/////////////////////////////////////////////////////////////////////
void Delay(uint8_t n) {
    uint16_t x;

    while(n--) {
        x = 0;
        while(++x);
    }
}

/////////////////////////////////////////////////////////////////////
/*  Disable ISP/IAP/EEPROM function
    Make MCU in a safe state */
void IapIdle(void) {
    IAP_CONTR = 0;                  //Close IAP function
    IAP_CMD = 0;                    //Clear command to standby
    IAP_TRIG = 0;                   //Clear trigger register
    IAP_ADDRH = 0x80;               //Data ptr point to non-EEPROM area
    IAP_ADDRL = 0;                  //Clear IAP address to prevent misuse
}

/////////////////////////////////////////////////////////////////////
/*  Read one byte from ISP/IAP/EEPROM area
    Input: addr (ISP/IAP/EEPROM address)
    Output:Flash data */
uint8_t IapReadByte(uint16_t addr) {
    uint8_t dat;                       //Data buffer

    IAP_CONTR = ENABLE_IAP;         //Open IAP function, and set wait time
    IAP_CMD = CMD_READ;             //Set ISP/IAP/EEPROM READ command
    IAP_ADDRL = addr;               //Set ISP/IAP/EEPROM address low
    IAP_ADDRH = addr >> 8;          //Set ISP/IAP/EEPROM address high
    IAP_TRIG = 0x46;                //Send trigger command1 (0x46)
    IAP_TRIG = 0xb9;                //Send trigger command2 (0xb9)
    __asm__("nop");                        //MCU will hold here until ISP/IAP/EEPROM operation complete
    dat = IAP_DATA;                 //Read ISP/IAP/EEPROM data
    IapIdle();                      //Close ISP/IAP/EEPROM function

    return dat;                     //Return Flash data
}

/////////////////////////////////////////////////////////////////////
/*  Program one byte to ISP/IAP/EEPROM area
    Input: addr (ISP/IAP/EEPROM address)
       dat (ISP/IAP/EEPROM data)
    Output:- */
void IapProgramByte(uint16_t addr, uint8_t dat) {
    IAP_CONTR = ENABLE_IAP;         //Open IAP function, and set wait time
    IAP_CMD = CMD_PROGRAM;          //Set ISP/IAP/EEPROM PROGRAM command
    IAP_ADDRL = addr;               //Set ISP/IAP/EEPROM address low
    IAP_ADDRH = addr >> 8;          //Set ISP/IAP/EEPROM address high
    IAP_DATA = dat;                 //Write ISP/IAP/EEPROM data
    IAP_TRIG = 0x46;                //Send trigger command1 (0x46)
    IAP_TRIG = 0xb9;                //Send trigger command2 (0xb9)
    __asm__("nop");                        //MCU will hold here until ISP/IAP/EEPROM operation complete
    IapIdle();
}

/////////////////////////////////////////////////////////////////////
/*  Erase one sector area
    Input: addr (ISP/IAP/EEPROM address)
    Output:- */
void IapEraseSector(uint16_t addr) {
    IAP_CONTR = ENABLE_IAP;         //Open IAP function, and set wait time
    IAP_CMD = CMD_ERASE;            //Set ISP/IAP/EEPROM ERASE command
    IAP_ADDRL = addr;               //Set ISP/IAP/EEPROM address low
    IAP_ADDRH = addr >> 8;          //Set ISP/IAP/EEPROM address high
    IAP_TRIG = 0x46;                //Send trigger command1 (0x46)
    IAP_TRIG = 0xb9;                //Send trigger command2 (0xb9)
    __asm__("nop");                        //MCU will hold here until ISP/IAP/EEPROM operation complete
    IapIdle();
}

/////////////////////////////////////////////////////////////////////
void main(void) {
    uint16_t i;

    P1 = 0xfe;                      //1111,1110 System Reset OK
    Delay(10);                      //Delay
    IapEraseSector(IAP_ADDRESS);    //Erase current sector
    for(i=0; i<512; i++) {           //Check whether all sector data is FF
        if(IapReadByte(IAP_ADDRESS+i) != 0xff) {
            goto Error;             //If error, break
        }
    }

    P1 = 0xfc;                      //1111,1100 Erase successful
    Delay(10);                      //Delay
    for(i=0; i<512; i++) {          //Program 512 bytes data into data flash
        IapProgramByte(IAP_ADDRESS+i, (uint8_t)i);
    }

    P1 = 0xf8;                      //1111,1000 Program successful
    Delay(10);                      //Delay
    for(i=0; i<512; i++) {          //Verify 512 bytes data
        if(IapReadByte(IAP_ADDRESS+i) != (uint8_t)i) {
            goto Error;             //If error, break
        }
    }

    P1 = 0xf0;                      //1111,0000 Verify successful
    while(1);

Error:
    P1 &= 0x7f;                     //0xxx,xxxx IAP operation fail
    while(1);
}

