/*
 * App.c
 *
 * Created: 10/20/2025 1:05:58 AM
 *  Author: Youssef
 */ 

#include "main.h"


static u8 PASSWORD[4] = {7, 1, 4, 9};
	
	
u8 APP_u8CkeckPass(u8 *copy_u8pass)
{
	static u8 check = 0;
	for (u8 i = 0; i < 4; i++)
	{
		if (copy_u8pass[i] == PASSWORD[i])
		{
			check = 0;
		}
		else
		{
			check = 1;
			break;
		}
	}
	
	return check;
}


void APP(void)
{
	LED_voidLedOff(DIO_PORTC, DIO_PIN1);
	LED_voidLedOff(DIO_PORTC, DIO_PIN2);
	LED_voidLedOff(DIO_PORTC, DIO_PIN3);
	LCD_voidSendCommand(1);
	while(1)
	{
		LCD_voidGoToxy(0, 0);
		LCD_voidSendString("POWER OFF");
	}
}