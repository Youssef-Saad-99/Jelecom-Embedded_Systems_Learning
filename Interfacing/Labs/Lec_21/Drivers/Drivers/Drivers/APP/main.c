/*
 * Drivers.c
 *
 * Created: 9/6/2025 10:28:15 AM
 * Author : progr
 */ 

#include "main.h"


int main(void)
{
	DIO_voidSetPinDir( DIO_PORTC, DIO_PIN0, OUTPUT);
	DIO_voidSetPinDir( DIO_PORTC, DIO_PIN1, OUTPUT);
	DIO_voidSetPinDir( DIO_PORTC, DIO_PIN2, OUTPUT);
	
    while (1) 
    {
		DIO_voidTogglePinVal(DIO_PORTC, DIO_PIN0);
		DIO_voidTogglePinVal(DIO_PORTC, DIO_PIN1);
		DIO_voidTogglePinVal(DIO_PORTC, DIO_PIN2);
		_delay_ms(800);
    }
}

