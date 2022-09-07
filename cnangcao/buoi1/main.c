#include<stdio.h>
#include<stdint.h>
#define HIGH 1
#define LOW 0
uint8_t PORTA = 0b00000000;

void digitalWrite(uint8_t PIN,uint8_t STATUS)
{
    if (STATUS == HIGH)
    {
        uint8_t PORTX = 0X80 >> PIN;
        PORTA = PORTA | PORTX;
        printf("%d\n",PORTA);
        //8b001001011
        //8b01111111 -> 0
    }
    else{
       uint8_t PORTY = 0X80 >> PIN;
       PORTA = PORTA ^ PORTY;
       printf("%d\n",PORTA);
    }
}
int main(int argc, char const *argv[])
{
    digitalWrite(2,HIGH); // 00100000 32
    digitalWrite(5,HIGH); // 00100100 36
    digitalWrite(7,HIGH); // 00100101 37
    digitalWrite(1,HIGH); // 01100101 101
    digitalWrite(5,LOW); //  01100001 97
    digitalWrite(7,LOW);
    digitalWrite(1,LOW);
    digitalWrite(2,LOW);
    return 0;
}