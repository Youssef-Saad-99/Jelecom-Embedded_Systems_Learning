/*
 * Count.c
 *
 * Created: 9/5/2025 9:57:35 AM
 * Author : progr
 */ 

#include <avr/io.h>
#include "BIT_MATH.h"
#include "STD_TYPE.h"

#define F_CPU 16000000

#include <util/delay.h>


int main(void)
{
    u8 count = 0;
	CLR_BIT(DDRA, 0);
	SET_BIT(DDRC, 0);
	SET_BIT(DDRC, 4);
	SET_BIT(DDRC, 7);
	
    while (1) 
    {
		while (count < 9)
		{
			if(GET_BIT(PINA, 0) == 0)
			{
				GET_BIT(count, 0) ? SET_BIT(PORTC, 0) : CLR_BIT(PORTC, 0);
				GET_BIT(count, 1) ? SET_BIT(PORTC, 4) : CLR_BIT(PORTC, 4);
				GET_BIT(count, 2) ? SET_BIT(PORTC, 7) : CLR_BIT(PORTC, 7);
				while(GET_BIT(PINA, 0) == 0);
					count++;
			}
			
			if (count == 8)
			{
				count = 0;
			}
		}
    }
}

