/*
 * LCD_Driver.c
 *
 * Created: 9/19/2025 10:18:53 AM
 * Author : Youssef
 */ 

#include "main.h"


int main(void)
{
	DIO_voidSetPortDir(LCD_DPORT, 0xff);
	DIO_voidSetPinDir(DIO_PORTD, DIO_PIN2, INPUT);
	DIO_voidSetPinDir(DIO_PORTD, DIO_PIN3, INPUT);
	DIO_voidSetPinDir(DIO_PORTD, DIO_PIN4, INPUT);
	
	u8 Loc_u8data[] = {
		0x11,
		0x0A,
		0x04,
		0x04,
		0x04,
		0x04,
		0x04,
		0x00
	};
	
	LCD_voidInit();
	
	u8 Loc_u8x = 0;
	u8 Loc_u8y = 0;
	while (1)
	{
		if (DIO_u8ReadPinVal(DIO_PORTD, DIO_PIN2) == 0)
		{
			if (Loc_u8y == 0)
			{
			}
			else if (Loc_u8y == 1)
			{
			}
			
		}
		if (DIO_u8ReadPinVal(DIO_PORTD, DIO_PIN3) == 0)
		{
			if (Loc_u8y == 0)
			{
			}
			else if (Loc_u8y == 1)
			{
			}
		}
		if (DIO_u8ReadPinVal(DIO_PORTD, DIO_PIN4) == 0)
		{
		}
	}
}

