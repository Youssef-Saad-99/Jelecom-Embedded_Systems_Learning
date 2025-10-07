/*
 * Traffic_Light-2.c
 *
 * Created: 9/12/2025 10:37:38 AM
 * Author : progr
 */ 

#include "main.h"

int main(void)
{
    DIO_voidSetPinDir(DIO_PORTC, DIO_PIN0, OUTPUT);
	DIO_voidSetPinDir(DIO_PORTC, DIO_PIN1, OUTPUT);
	DIO_voidSetPinDir(DIO_PORTC, DIO_PIN2, OUTPUT);
	DIO_voidSetPortDir(DIO_PORTA, OUTPUT);
	DIO_voidSetPinDir(DIO_PORTD, DIO_PIN2, INPUT);
	DIO_voidSetPinDir(DIO_PORTD, DIO_PIN3, INPUT);
	u8 check = 1;
	
    while (1) 
    {	
			if (DIO_u8ReadPinVal(DIO_PORTD, DIO_PIN2) == 0)
			{
				LED_voidLedOn(DIO_PORTC, DIO_PIN0);
				LED_voidLedOff(DIO_PORTC, DIO_PIN1);
				LED_voidLedOff(DIO_PORTC, DIO_PIN2);
				for (s8 i = 9; i >= 0; i--)
				{
					if (DIO_u8ReadPinVal(DIO_PORTD, DIO_PIN3) == 0)
					{
						check = 0;
						break;
					}
					SSD_voidSendNumber(i);
					_delay_ms(250);
				}
				if (check == 0)
				{
					break;
				}
				LED_voidLedOff(DIO_PORTC, DIO_PIN0);
				LED_voidLedOn(DIO_PORTC, DIO_PIN1);
				LED_voidLedOff(DIO_PORTC, DIO_PIN2);
				for (s8 i = 9; i >= 0; i--)
				{
					if (DIO_u8ReadPinVal(DIO_PORTD, DIO_PIN3) == 0)
					{
						check = 0;
						break;
					}
					SSD_voidSendNumber(i);
					_delay_ms(250);
				}
				if (check == 0)
				{
					break;
				}
				LED_voidLedOff(DIO_PORTC, DIO_PIN0);
				LED_voidLedOff(DIO_PORTC, DIO_PIN1);
				LED_voidLedOn(DIO_PORTC, DIO_PIN2);
				for (s8 i = 9; i >= 0; i--)
				{
					if (DIO_u8ReadPinVal(DIO_PORTD, DIO_PIN3) == 0)
					{
						check = 0;
						break;
					}
					SSD_voidSendNumber(i);
					_delay_ms(250);
				}
			}
    }
}

