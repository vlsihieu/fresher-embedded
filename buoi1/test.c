#include<stdio.h>
#include<stdint.h>
//000
//001
//010
//011
//100
#define HIGH 1
#define LOW 0
uint8_t PORTA = 0b00000000;
uint8_t x;
uint8_t y;
void digitalWrite(uint8_t PIN,uint8_t STATUS)
{
    if (STATUS == HIGH)
    {
        uint8_t PORTX = 0X80 >> PIN;
        PORTA = PORTA | PORTX;
        printf("%d\n",PORTA);
        //8b001001011
        //8b001000000
    }
    else{
       uint8_t PORTY = 0X80 >> PIN;
       PORTA = PORTA ^ PORTY;
       printf("%d\n",PORTA);
    }
}
int main(int argc, char const *argv[])
{

    x = 0xff;
    y = x >> 2;
    printf("%d",y);
    return 0;
}