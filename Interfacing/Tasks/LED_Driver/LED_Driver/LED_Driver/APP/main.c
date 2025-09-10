/*
 * LED_Driver.c
 *
 * Created: 9/8/2025 12:27:51 PM
 * Author : progr
 */ 

#include "main.h"


int main(void)
{
    DIO_voidSetPinDir(DIO_PORTC, DIO_PIN0, OUTPUT);
    while (1) 
    {
		LED_voidLedOn(DIO_PORTC, DIO_PIN0);
		_delay_ms(800);
		LED_voidLedOff(DIO_PORTC, DIO_PIN0);
		_delay_ms(800);
		LED_voidLedToggle(DIO_PORTC, DIO_PIN0);
		_delay_ms(800);
		LED_voidLedToggle(DIO_PORTC, DIO_PIN0);
		_delay_ms(800);
    }
}

