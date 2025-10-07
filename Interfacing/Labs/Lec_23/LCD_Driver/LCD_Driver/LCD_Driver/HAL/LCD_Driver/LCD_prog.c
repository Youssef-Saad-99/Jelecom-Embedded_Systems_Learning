/*
 * LCD_prog.c
 *
 * Created: 9/16/2025 11:34:25 PM
 *  Author: Youssef
 */ 

#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPE.h"
#include "../../MCAL/DIO/DIO_interface.h"
#define F_CPU  16000000
#include <util/delay.h>
#include "LCD_config.h"

void LCD_voidSendCommand(u8 copy_u8command)
{
	/* Set pin RS 0 for command */
	DIO_voidSetPinVal(LCD_CPORT, LCD_RS_PIN, LOW);
	
	/* Set pin RW 0 for write */
	DIO_voidSetPinVal(LCD_CPORT, LCD_RW_PIN, LOW);
	
	/* Send command*/
	DIO_voidSetPortVal(LCD_DPORT, copy_u8command);
	
	/* Send Enable Pulse */
	DIO_voidSetPinVal(LCD_CPORT, LCD_E_PIN, HIGH);
	_delay_ms(2);
	DIO_voidSetPinVal(LCD_CPORT, LCD_E_PIN, LOW);
}


void LCD_voidSendData(u8 copy_u8data)
{
	DIO_voidSetPinVal(LCD_CPORT, LCD_RS_PIN, HIGH);
	DIO_voidSetPinVal(LCD_CPORT, LCD_RW_PIN, LOW);
	DIO_voidSetPortVal(LCD_DPORT, copy_u8data);
	DIO_voidSetPinVal(LCD_CPORT, LCD_E_PIN, HIGH);
	_delay_ms(2);
	DIO_voidSetPinVal(LCD_CPORT, LCD_E_PIN, LOW);
}


void LCD_voidInit(void);