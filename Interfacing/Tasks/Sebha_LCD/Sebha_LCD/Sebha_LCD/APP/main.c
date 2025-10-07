/*
 * Sebha_LCD.c
 *
 * Created: 9/25/2025 8:06:02 PM
 * Author : Youssef
 */ 

#include "main.h"


int main(void)
{
    DIO_voidSetPortDir(LCD_DPORT, 0xff);
	DIO_voidSetPinDir(DIO_PORTD, DIO_PIN2, INPUT);
	DIO_voidSetPinDir(DIO_PORTD, DIO_PIN3, INPUT);
	DIO_voidSetPinDir(DIO_PORTD, DIO_PIN4, INPUT);
	DIO_voidSetPinVal(DIO_PORTD, DIO_PIN2, HIGH);
	DIO_voidSetPinVal(DIO_PORTD, DIO_PIN3, HIGH);
	DIO_voidSetPinVal(DIO_PORTD, DIO_PIN4, HIGH);
	
	u8 Loc_u8count = 0;
	
	LCD_voidInit();
	
	LCD_voidGoToxy(0, 0);
	LCD_voidSendNumber(0);
	
    while (1) 
    {
		if (DIO_u8ReadPinVal(DIO_PORTD, DIO_PIN2) == 0)
		{
			    while(DIO_u8ReadPinVal(DIO_PORTD, DIO_PIN2) == 0);
				if (Loc_u8count == 9)
				{
					Loc_u8count = 0;
				}
				else
				{
					Loc_u8count++;
					LCD_voidGoToxy(0, 0);
					LCD_voidSendNumber(Loc_u8count);
				}
		}
		else if (DIO_u8ReadPinVal(DIO_PORTD, DIO_PIN3) == 0)
		{
				while(DIO_u8ReadPinVal(DIO_PORTD, DIO_PIN3) == 0);
				if (Loc_u8count == 0)
				{
					Loc_u8count = 0;
				}
				else
				{
					Loc_u8count--;
					LCD_voidGoToxy(0, 0);
					LCD_voidSendNumber(Loc_u8count);
				}
		}
		else if (DIO_u8ReadPinVal(DIO_PORTD, DIO_PIN4) == 0)
		{
			while(DIO_u8ReadPinVal(DIO_PORTD, DIO_PIN4) == 0);
			Loc_u8count = 0;
			LCD_voidGoToxy(0, 0);
			LCD_voidSendNumber(Loc_u8count);
		}
		else
		{
			// Do Nothing
		}
    }
}

