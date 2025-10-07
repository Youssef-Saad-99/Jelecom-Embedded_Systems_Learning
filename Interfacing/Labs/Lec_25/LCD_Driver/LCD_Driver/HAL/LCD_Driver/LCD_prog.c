/*
 * LCD_prog.c
 *
 * Created: 9/22/2025 5:15:22 PM
 *  Author: Youssef
 */ 

#include "../../LIB/STD_TYPE.h"
#include "../../LIB/BIT_MATH.h"
#include "../../MCAL/DIO/DIO_interface.h"
#include "LCD_interface.h"
#include "LCD_config.h"

#define F_CPU 16000000
#include <util/delay.h>


//Send Half Data
static void LCD_voidSHD(u8 data)
{
	u8 LCD_arr[4] = {LCD_D4_BIT, LCD_D5_BIT, LCD_D6_BIT, LCD_D7_BIT};
	
	for (u8 i = 0; i < 4; i++)
	{
		DIO_voidSetPinVal(LCD_DPORT, LCD_arr[i], GET_BIT(data, i));
	}
}

/*Enable Pulse*/
static void LCD_voidEnblePulse()
{
	DIO_voidSetPinVal(LCD_CPORT, LCD_E_PIN, HIGH);
	_delay_ms(2);
	DIO_voidSetPinVal(LCD_CPORT, LCD_E_PIN, LOW);
}



void LCD_voidSendData(u8 copy_u8data)
{
	// set rs pin to 1 for data
	DIO_voidSetPinVal(LCD_CPORT, LCD_RS_PIN, HIGH);
	
	// set rw pin to 0 for write
	DIO_voidSetPinVal(LCD_CPORT, LCD_RW_PIN, LOW);
	
	// send data on Data PORT
	DIO_voidSetPortVal(LCD_DPORT, copy_u8data);
	
	#if LCD_Mode == LCD_8BITMode
	// send data on Data PORT
	DIO_voidSetPortVal(LCD_DPORT, copy_u8data);
	//Enable pulse and disable pulse
	LCD_voidEnblePulse();
		
	#elif LCD_Mode == LCD_4BITMode
	//send most significant bits
	LCD_voidSHD(copy_u8data >> 4);
	LCD_voidEnblePulse();
		
	//send least significant bits
	LCD_voidSHD(copy_u8data);
	LCD_voidEnblePulse();
		
	#endif
}

void LCD_voidSendCommand(u8 copy_u8command)
{
	// set rs pin to 0 for command
	DIO_voidSetPinVal(LCD_CPORT, LCD_RS_PIN, LOW);
	
	// set rw pin to 0 for write
	DIO_voidSetPinVal(LCD_CPORT, LCD_RW_PIN, LOW);
	
	#if LCD_Mode == LCD_8BITMode
	// send command on Data PORT
	DIO_voidSetPortVal(LCD_DPORT, copy_u8command);
	//Enable pulse and disable pulse
	LCD_voidEnblePulse();
	
	#elif LCD_Mode == LCD_4BITMode
	//send most significant bits
	LCD_voidSHD(copy_u8command >> 4);
	LCD_voidEnblePulse();
	
	//send least significant bits
	LCD_voidSHD(copy_u8command);
	LCD_voidEnblePulse();
	
	#endif
	
}

void LCD_voidInit(void)
{
	_delay_ms(40);
	
	#if LCD_Mode   LCD_8BITMode
	//send function Set command
	LCD_voidSendCommand(0x38);
	
	#elif LCD_Mode  LCD_4BITMode
	
	LCD_voidSHD(0b0010) ;
	LCD_voidSendEnablePulse() ;
	LCD_voidSHD(0b0010) ;
	LCD_voidSendEnablePulse() ;
	LCD_voidSHD(0b1000);
	LCD_voidSendEnablePulse();
	
	#endif
	//send function Display ON/OFF command
	LCD_voidSendCommand(0x0C);
	
	//send function clr command
	LCD_voidSendCommand(1);
}

void LCD_voidSendString(char *str)
{
	while (*str != '\0')
	{
		LCD_voidSendData(*str);
		
		str++;
		
	}
}

void LCD_voidSendNumber(u32 copy_u8number)
{
	u8 Loc_u32arr[20];
	u8 Loc_u8i = 0;
	
	if (copy_u8number == 0)
	{
		LCD_voidSendData(48);
	}
	else if (copy_u8number > 0)
	{
		while (copy_u8number > 0)
		{
			Loc_u32arr[Loc_u8i] = (copy_u8number % 10);
			copy_u8number = copy_u8number / 10;
			Loc_u8i++;
		}
		for (s8 i = (Loc_u8i - 1); i >= 0; i--)
		{
			LCD_voidSendData(48 + (Loc_u32arr[i]));
		}
	}
}