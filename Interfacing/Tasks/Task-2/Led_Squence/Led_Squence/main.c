/*
 * Led_Squence.c
 *
 * Created: 9/3/2025 7:39:13 PM
 * Author : progr
 */ 

#include <avr/io.h>
#include "BIT_MATH.h"
#include <util/delay.h>

#define F_CPU 16000000;
char check = 1;
int main(void)
{
    CLR_BIT(DDRA, 0);
	SET_BIT(DDRC, 0);
	SET_BIT(DDRC, 1);
	SET_BIT(DDRC, 2);
	SET_BIT(DDRC, 3);
	SET_BIT(DDRC, 4);
	SET_BIT(DDRC, 5);
	SET_BIT(DDRC, 6);
	SET_BIT(DDRC, 7);
	
    while (1) 
    {
		if ((GET_BIT(PINA, 0) == 0) && (check == 1))
		{
			check = 0;
			SET_BIT(PORTC, 0);
			_delay_ms(2000);
			SET_BIT(PORTC, 1);
			_delay_ms(2000);
			SET_BIT(PORTC, 2);
			_delay_ms(2000);
			SET_BIT(PORTC, 3);
			_delay_ms(2000);
			SET_BIT(PORTC, 4);
			_delay_ms(2000);
			SET_BIT(PORTC, 5);
			_delay_ms(2000);
			SET_BIT(PORTC, 6);
			_delay_ms(2000);
			SET_BIT(PORTC, 7);
			_delay_ms(2000);
		}
		if ((GET_BIT(PINA, 0) == 0) && (check == 0))	
		{
			check = 1;
			CLR_BIT(PORTC, 7);
			_delay_ms(2000);
			CLR_BIT(PORTC, 6);
			_delay_ms(2000);
			CLR_BIT(PORTC, 5);
			_delay_ms(2000);
			CLR_BIT(PORTC, 4);
			_delay_ms(2000);
			CLR_BIT(PORTC, 3);
			_delay_ms(2000);
			CLR_BIT(PORTC, 2);
			_delay_ms(2000);
			CLR_BIT(PORTC, 1);
			_delay_ms(2000);
			CLR_BIT(PORTC, 0);
			_delay_ms(2000);
		}	
		_delay_ms(1000);
    }
}

