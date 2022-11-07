#include <io.h>
#include <delay.h>
#ifndef F_CPU
#define F_CPU 8000000UL // 16 MHz clock speed
#endif

int main(void)
{
   DDRB |= (1 << PINB0);  //PB0 output
   DDRB &=~ (1 << PINB1); //PB1 input
   PORTB |= (1 << PINB1);  //PB1 internall pullup
   PORTB |= (1 << PINB0); //PB0=0
 
   while(1)
   {
    
	if(bit_is_clear(PINB, 1))
    {
		PORTB |= (1 << PINB0);
	} else 
	{
		PORTB &=~ (1 << PINB0);
	}
	_delay_ms(30);
   }
	return 0;
}