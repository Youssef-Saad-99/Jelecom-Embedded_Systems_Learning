/*
 * LED_prog.c
 *
 * Created: 9/8/2025 12:31:54 PM
 *  Author: progr
 */

#include "LED_interface.h"

void LED_voidLedOn(u8 copy_u8_port, u8 copy_u8pin)
{
	DIO_voidSetPinVal(copy_u8_port, copy_u8pin, HIGH);
}

void LED_voidLedOff(u8 copy_u8_port, u8 copy_u8pin)
{
	DIO_voidSetPinVal(copy_u8_port, copy_u8pin, LOW);
}

void LED_voidLedToggle(u8 copy_u8_port, u8 copy_u8pin)
{
	DIO_voidTogglePinVal(copy_u8_port, copy_u8pin);
}