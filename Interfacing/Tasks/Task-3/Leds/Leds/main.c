/*
 * Leds.c
 *
 * Created: 9/4/2025 5:48:08 PM
 * Author : progr
 */ 

#include <avr/io.h>
#include "BIT_MATH.h"
#include <util/delay.h>

#define F_CPU 16000000;

char check = 0;

int main(void)
{
	SET_BIT(DDRC, 0);
	SET_BIT(DDRC, 1);
	SET_BIT(DDRC, 2);
	CLR_BIT(DDRA, 0);
	
    while (1) 
    {
		if (GET_BIT(PINA, 0) == 0)
		{
			SET_BIT(PORTC, check);
			_delay_ms(7000);
			check++;
		}
		
    }
}

