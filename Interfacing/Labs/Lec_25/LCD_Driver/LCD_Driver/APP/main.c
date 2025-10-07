/*
 * LCD_Driver.c
 *
 * Created: 9/22/2025 5:10:50 PM
 * Author : Youssef
 */ 

#include "main.h"


int main(void)
{
    
	DIO_voidSetPortDir(LCD_DPORT, 0xff);
	
	LCD_voidInit();
	
	LCD_voidSendData(' ');
	LCD_voidSendData(' ');
	LCD_voidSendData(' ');
	LCD_voidSendData(' ');
	LCD_voidSendString("YOUSEF");
	LCD_voidSendNumber(99);
	
    while (1) 
    {
    }
}

