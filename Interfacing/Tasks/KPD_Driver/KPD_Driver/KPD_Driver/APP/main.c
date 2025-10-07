/*
 * KPD_Driver.c
 *
 * Created: 9/25/2025 5:02:54 PM
 * Author : Youssef
 */ 

#include "main.h"


int main(void)
{
    DIO_voidSetPortDir(LCD_DPORT, 0xff);
	
	KPD_voidInit();
	LCD_voidInit();
	
	u8 num = 255;
	
	LCD_voidGoToxy(0, 0);
	LCD_voidSendNumber(num);
	
    while (1) 
    {
		do 
		{
			num = KPD_u8GetKey();
			LCD_voidGoToxy(0,0);
			LCD_voidSendNumber(num);
		} while (num == 255);
    }
}

