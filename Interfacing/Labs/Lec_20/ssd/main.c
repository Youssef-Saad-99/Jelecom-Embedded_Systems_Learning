/*
 * ssd.c
 *
 * Created: 9/5/2025 12:03:34 PM
 * Author : progr
 */ 

#include <avr/io.h>
#include "BIT_MATH.h"
#include "STD_TYPE.h"

#define F_CPU 16000000UL

#include <util/delay.h>



int main(void)
{
	CLR_BIT(DDRC, 0);
	DDRA = 0xff;
	
	u8 arr[10] = {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f};
	SET_BIT(DDRC, 6);
	SET_BIT(PORTC, 6);
	
    while (1) 
    {
		
			for (u8 i = 0; i <= 9; i++)
			{
				PORTA = arr[i] << 1;				
				_delay_ms(800);
			}
		
    }
}

