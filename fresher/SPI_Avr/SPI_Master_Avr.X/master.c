#include <avr/io.h>
#include <util/delay.h>  
#define F_CPU 1000000UL

#define SS     4
#define MOSI   5
#define MISO   6
#define SCK    7

#define SS_D (PORTB |= (1<<SS))
#define SS_E (PORTB &= ~(1<<SS))

void SPI_MasterInit(void){
   DDRB |=  (1 << MOSI)|(1 << SCK)|(1<<SS);   
   DDRB &=  ~(1 << MISO);                  
   SPCR = (1<<SPE)|(1<<MSTR)|(1<<SPR0);/* Enable SPI, Master, set clock rate fck/16 */
}

void SPI_MasterTransmit(char cData){
    /* Start transmission */
    SPDR = cData;
    /* Wait for transmission complete */
    while(!(SPSR & (1<<SPIF)));
}

int main(void) {
    SPI_MasterInit();
    while (1) {
    SS_E;
    SPI_MasterTransmit('A');// hexa:0x41 D:65 B:0100 0001
    SPI_MasterTransmit('B');// hexa:0x42 D:66 B:0100 0010
    SS_D;
    _delay_ms(10);
}
}
