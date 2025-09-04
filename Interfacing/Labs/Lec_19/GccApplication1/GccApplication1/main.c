/*
 * GccApplication1.c
 *
 * Created: 8/30/2025 10:02:27 AM
 * Author : progr
 */ 

#include <avr/io.h>
#include "bIT_MATH.h"
#include <util/delay.h>

#define F_CPU 16000000UL

int main(void)
{
	SET_BIT(DDRC, 0);
	SET_BIT(DDRC, 1);	
	SET_BIT(DDRC, 2);



    while (1) 
    {
		TOGGLE_BIT(PORTC, 0);
		TOGGLE_BIT(PORTC, 1);
		TOGGLE_BIT(PORTC, 2);
		_delay_ms(500);
    }
}

