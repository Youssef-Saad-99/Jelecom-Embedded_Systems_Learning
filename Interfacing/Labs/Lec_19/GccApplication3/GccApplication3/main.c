/*
 * GccApplication3.c
 *
 * Created: 8/30/2025 11:52:09 AM
 * Author : progr
 */ 

#include <avr/io.h>
#include "BIT_MATH.h"


int main(void)
{
    SET_BIT(DDRC, 0);
	CLR_BIT(DDRD, 2);
	CLR_BIT(DDRD, 3);
	
    while (1) 
    {
		if (GET_BIT(PIND,2) == 0)
		{
			SET_BIT(PORTC, 0);
		}
		else if(GET_BIT(PIND,3)==0)
		{
			CLR_BIT(PORTC,0);
		}

    }
}

