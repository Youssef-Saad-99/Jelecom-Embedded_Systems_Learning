/*
 * SSD_Driver.c
 *
 * Created: 9/8/2025 2:51:38 PM
 * Author : progr
 */ 

#include "main.h"


int main(void)
{
	DIO_voidSetPinDir(DIO_PORTA, DIO_PIN1, OUTPUT);
	DIO_voidSetPinDir(DIO_PORTA, DIO_PIN2, OUTPUT);
	DIO_voidSetPinDir(DIO_PORTA, DIO_PIN3, OUTPUT);
	DIO_voidSetPinDir(DIO_PORTA, DIO_PIN4, OUTPUT);
	DIO_voidSetPinDir(DIO_PORTA, DIO_PIN5, OUTPUT);
	DIO_voidSetPinDir(DIO_PORTA, DIO_PIN6, OUTPUT);
	DIO_voidSetPinDir(DIO_PORTA, DIO_PIN7, OUTPUT);
	
	DIO_voidSetPinDir(DIO_PORTC, DIO_PIN6, OUTPUT);
	DIO_voidSetPinVal(DIO_PORTC, DIO_PIN6, HIGH);
	
    while (1) 
    {
		for (u8 i = 0; i < 10; i++)
		{
			SSD_voidSendNumber(i);
			_delay_ms(800);
		}
    }
}

