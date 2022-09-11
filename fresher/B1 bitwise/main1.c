#include <stdio.h>
#include <stdint.h>

#define HIGH 1
#define LOW 0


#define PIN0 0b00000001
#define PIN1 0b00000010
#define PIN2 0b00000100
#define PIN3 0b00001000
#define PIN4 0b00010000
#define PIN5 0b00100000
#define PIN6 0b01000000
#define PIN7 0b10000000


uint8_t PORTA = 0b00000000;
//              0b10000000;
//              

void digitalWrite(uint8_t PIN, uint8_t STATUS)//PIN 2 = muc cao
{
    if(STATUS ==HIGH)
    {
        uint8_t PINx[] = {PIN0,PIN1,PIN2,PIN3,PIN4,PIN5,PIN6,PIN7};
        {
            for(int i=0; i<8; i++)
            {
                if(*PINx == PIN)
                   PORTA |= *PINx;
            }
        }
        // uint8_t PORTx = 0x80 >> PIN;
        // PORTA  |= PORTx;
        
       
    }else{
        uint8_t PINx[] = {PIN0,PIN1,PIN2,PIN3,PIN4,PIN5,PIN6,PIN7};
        {
            for(int i=0; i<8; i++)
            {
                if(*PINx == PIN)
                   PORTA &= ~*PINx;
            }
        }
        // uint8_t PORTx = 0x80 >> PIN;
        // PORTA  &= ~PORTx;
       
    }
        
}

//PORTA = 0b00100000;
//PIN 2 sang


int main(int argc, char const *argv[])
{
    digitalWrite(2,HIGH);
    //0b00100000
    digitalWrite(3,HIGH);
    //0b00100000
    //0b00010000
    //0b00110000
    return 0;
}

