
#include <avr/io.h>
#include <util/delay.h>  
#include <avr/interrupt.h>
#define F_CPU 1000000UL

#define SS 4
#define MOSI 5                           
#define MISO 6
#define SCK 7

void SPI_SlaveInit(void){
   DDRB &= ~((1<<MOSI)|(1<<SS)|(1<<SCK));
   DDRB |= (1<<MISO);                     /* Make MISO pin as output pin */
   SPCR = (1<<SPIE)|(1<<SPE);
}

char SPI_SlaveReceive(void){
    /* Wait for reception complete */
    while(!(SPSR & (1<<SPIF)));
    /* Return data register */
    return SPDR;
}

void SPI_Slave_Transmit(char data){
   SPDR = data;
   while(!(SPSR & (1<<SPIF)));               
}

int main(void)
{
   DDRA=0xff;
   SPI_SlaveInit();
    while (1) 
    {    
        PORTA = SPI_SlaveReceive();
        SPDR='C';
    }
}

 

