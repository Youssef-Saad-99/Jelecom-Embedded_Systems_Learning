/*
 * Weavy_Name.c
 *
 * Created: 9/25/2025 9:25:38 PM
 * Author : Youssef
 */ 

#include "main.h"


int main(void)
{
    DIO_voidSetPortDir(LCD_DPORT, 0xff);
	
	u8 Loc_u8ch1[] = 
	{
		0x00,
		0x01,
		0x01,
		0x01,
		0x1F,
		0x00,
		0x05,
		0x00
	};
	
	u8 Loc_u8ch2[] =
	{
		0x00,
		0x00,
		0x1C,
		0x14,
		0x1F,
		0x04,
		0x1C,
		0x00
	};
	
	u8 Loc_u8ch3[] = 
	{
		0x00,
		0x07,
		0x07,
		0x07,
		0x1F,
		0x00,
		0x00,
		0x00
	};
	
	u8 Loc_u8ch4[] = 
	{
		0x02,
		0x00,
		0x07,
		0x15,
		0x1F,
		0x00,
		0x00,
		0x00
	};
	
	LCD_voidInit();
	
	u8 Loc_u8y = 0;
    while (1) 
    {
		for (u8 i = 0; i < (40 / 4); i++)
		{
			if (i == 39)
			{
				LCD_voidDrowData(0, Loc_u8ch1, i, Loc_u8y);
				i = 0;
				LCD_voidGoToxy(39, Loc_u8y);
				LCD_voidSendCommand(1);
			}
			else 
			{
				LCD_voidDrowData(0, Loc_u8ch1, (i * 4), Loc_u8y);
			}
			
			
			if (i == 38)
			{
				LCD_voidDrowData(1, Loc_u8ch2, i, Loc_u8y);
				i = 0;
				LCD_voidGoToxy(38, Loc_u8y);
				LCD_voidSendCommand(1);
			}
			else
			{
				LCD_voidDrowData(1, Loc_u8ch2, ((i * 4) - 1), Loc_u8y);
			}
			
			if (i == 37)
			{
				LCD_voidDrowData(2, Loc_u8ch3, i, Loc_u8y);
				i = 0;
				LCD_voidGoToxy(37, Loc_u8y);
				LCD_voidSendCommand(1);
			}
			else
			{
				LCD_voidDrowData(2, Loc_u8ch3, ((i * 4) - 2), Loc_u8y);
			}
			
			if (i == 36)
			{
				LCD_voidDrowData(3, Loc_u8ch4, i, Loc_u8y);
				i = 0;
				LCD_voidGoToxy(36, Loc_u8y);
				LCD_voidSendCommand(1);
			}
			else
			{
				LCD_voidDrowData(3, Loc_u8ch4, ((i * 4) - 3), Loc_u8y);
			}
			
			if (i == 35)
			{
				LCD_voidGoToxy(i, Loc_u8y);
				LCD_voidSendData(' ');
				i = 0;
				LCD_voidGoToxy(35, Loc_u8y);
				LCD_voidSendCommand(1);
			}
			else
			{
				LCD_voidGoToxy(((i * 4) - 4), Loc_u8y);
				LCD_voidSendData(' ');
			}
			
			TOGGLE_BIT(Loc_u8y, 0);
			_delay_ms(150);
			LCD_voidSendCommand(1);

		}
    }
}