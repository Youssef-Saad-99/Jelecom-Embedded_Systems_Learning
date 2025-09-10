/*
 * Sebha.c
 *
 * Created: 9/5/2025 8:50:30 PM
 * Author : progr
 */ 

#include <avr/io.h>
#include "BIT_MATH.h"
#include "STD_TYPE.h"

#define F_CPU 16000000UL

#include <util/delay.h>

int main(void)
{
	CLR_BIT(DDRD, 2);
	CLR_BIT(DDRD, 3);
	CLR_BIT(DDRD, 4);
	DDRA = 0xff;
	SET_BIT(DDRC, 6);
	SET_BIT(PORTC, 6);
	
	u8 arr[10] = {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f};
	u8 count = 0;
		
    while (1) 
    {
		if (GET_BIT(PIND, 2) == 0)
		{
			if (count == 9)
			{
				count = 0;
			}
			else
			{
				count++;
				PORTA = arr[count] << 1;
				_delay_ms(400);
			}
		}
		if (GET_BIT(PIND, 3) == 0)
		{
			if (count == 0)
			{
				continue;
			}
			else
			{
				count--;
				PORTA = arr[count] << 1;
				_delay_ms(400);
			}
		}
		if (GET_BIT(PIND, 4) == 0)
		{
			count = 0;
			PORTA = arr[count] << 1;
			_delay_ms(400);
		}
    }
}