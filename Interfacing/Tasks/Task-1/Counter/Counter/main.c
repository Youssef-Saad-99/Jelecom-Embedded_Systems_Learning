/*
 * Counter.c
 *
 * Created: 9/3/2025 5:43:58 PM
 * Author : progr
 */ 

#include <avr/io.h>
#include "BIT_MATH.h"
#include <util/delay.h>

#define F_CPU 16000000;

int main(void)
{
	SET_BIT(DDRC, 0);
	CLR_BIT(DDRA, 0);
	CLR_BIT(DDRA, 1);
	CLR_BIT(DDRA, 2);
	
    while (1) 
    {
		if(GET_BIT(PINA, 0) == 0)
		{
			SET_BIT(PORTC, 0);
		}
		if(GET_BIT(PINA, 1) == 0)
		{
			CLR_BIT(PORTC, 0);
		}
		if (GET_BIT(PINA, 2) == 0)
		{
			TOGGLE_BIT(PORTC, 0);
		}
		_delay_ms(1000);
    }
}

