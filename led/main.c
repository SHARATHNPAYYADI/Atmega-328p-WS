#define F_CPU 1000000
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB = 0x01;
	PORTB = 0x00;
	while(1)
	{
		PORTB=0x01;
		_delay_ms(1000);
		PORTB=0x00;
		_delay_ms(1000);
	}
}