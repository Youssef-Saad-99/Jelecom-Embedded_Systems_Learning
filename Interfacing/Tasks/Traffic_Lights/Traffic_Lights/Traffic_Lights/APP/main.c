/*
 * Traffic_Lights.c
 *
 * Created: 9/10/2025 5:40:36 PM
 * Author : progr
 */ 

#include "main.h"


int main(void)
{
    DIO_voidSetPortDir(DIO_PORTA, OUTPUT);
	DIO_voidSetPinDir(DIO_PORTC, DIO_PIN6, OUTPUT);
	DIO_voidSetPinDir(DIO_PORTC, DIO_PIN7, OUTPUT);
	DIO_voidSetPinDir(DIO_PORTC, DIO_PIN0, OUTPUT);
	DIO_voidSetPinDir(DIO_PORTC, DIO_PIN1, OUTPUT);
	DIO_voidSetPinDir(DIO_PORTC, DIO_PIN2, OUTPUT);
	
    while (1) 
    {
		DIO_voidSetPinVal(DIO_PORTC, DIO_PIN0, HIGH);
		for (s8 i = 5; i >= 0; i--)
		{
			for (s8 j = 9; j >= 0; j--)
			{
				DIO_voidSetPinVal(DIO_PORTC, DIO_PIN7, HIGH);
				DIO_voidSetPinVal(DIO_PORTC, DIO_PIN6, LOW);
				SSD_voidSendNumber(i);
				_delay_ms(80);
				DIO_voidSetPinVal(DIO_PORTC, DIO_PIN7, LOW);
				DIO_voidSetPinVal(DIO_PORTC, DIO_PIN6, HIGH);
				SSD_voidSendNumber(j);
				_delay_ms(80);
			}
		}
		DIO_voidSetPinVal(DIO_PORTC, DIO_PIN0, LOW);
		DIO_voidSetPinVal(DIO_PORTC, DIO_PIN2, HIGH);
		for (s8 i = 2; i >= 0; i--)
		{
			for (s8 j = 9; j >= 0; j--)
			{
				DIO_voidSetPinVal(DIO_PORTC, DIO_PIN7, HIGH);
				DIO_voidSetPinVal(DIO_PORTC, DIO_PIN6, LOW);
				SSD_voidSendNumber(i);
				_delay_ms(80);
				DIO_voidSetPinVal(DIO_PORTC, DIO_PIN7, LOW);
				DIO_voidSetPinVal(DIO_PORTC, DIO_PIN6, HIGH);
				SSD_voidSendNumber(j);
				_delay_ms(80);
			}
		}
		DIO_voidSetPinVal(DIO_PORTC, DIO_PIN2, LOW);
		DIO_voidSetPinVal(DIO_PORTC, DIO_PIN1, HIGH);
		for (s8 i = 2; i >= 0; i--)
		{
			for (s8 j = 9; j >= 0; j--)
			{
				DIO_voidSetPinVal(DIO_PORTC, DIO_PIN7, HIGH);
				DIO_voidSetPinVal(DIO_PORTC, DIO_PIN6, LOW);
				SSD_voidSendNumber(i);
				_delay_ms(80);
				DIO_voidSetPinVal(DIO_PORTC, DIO_PIN7, LOW);
				DIO_voidSetPinVal(DIO_PORTC, DIO_PIN6, HIGH);
				SSD_voidSendNumber(j);
				_delay_ms(80);
			}
		}
		DIO_voidSetPinVal(DIO_PORTC, DIO_PIN1, LOW);
		
    }
}