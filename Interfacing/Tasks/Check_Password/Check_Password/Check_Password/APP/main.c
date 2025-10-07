/*
 * Check_Password.c
 *
 * Created: 9/28/2025 6:27:26 PM
 * Author : Youssef
 */ 

#include "main.h"


static u8 Password[4] = {8, 5, 4, 2};


static u8 Check_Pass(u8 *pass)
{
	u8 check = 0;
	for (u8 i = 0; i < 4; i++)
	{
		if (pass[i] == Password[i])
		{
			check = 0;
		}
		else
		{
			check = 1;
			break;
		}
	}	
	return check;
}

int main(void)
{
    DIO_voidSetPortDir(LCD_DPORT, 0xff);
	
	LCD_voidInit();
	KPD_voidInit();
	
	u8 Loc_pass[4];
	u8 check = 0;
	u8 count = 1;
	
	LCD_voidGoToxy(6, 0);
	LCD_voidSendString("Welcome!!");
	_delay_ms(500);
	
    while (1) 
    {
		while(count != 4)
		{
			LCD_voidSendCommand(1);
			for (u8 i = 1; i < 5; i++)
			{
				LCD_voidGoToxy(0, 0);
				LCD_voidSendString("Enter your pass:");
				Loc_pass[i - 1] = KPD_u8GetKey();
				LCD_voidGoToxy((i - 1) ,1);
				LCD_voidSendNumber(Loc_pass[i - 1]);
				_delay_ms(200);
				LCD_voidGoToxy((i - 1) ,1);
				LCD_voidSendData('*');
			}
			
			
			check = Check_Pass(Loc_pass);
			
			if (check == 0)
			{
				LCD_voidSendCommand(1);
				LCD_voidGoToxy(0, 0);
				LCD_voidSendString("Password Accepted.");
				LED_voidLedOn(DIO_PORTC, DIO_PIN0);
				_delay_ms(1000);
				break;
			}
			else
			{
				LCD_voidSendCommand(1);
				LCD_voidGoToxy(0, 0);
				LCD_voidSendString("Password Denied.");
				LED_voidLedOn(DIO_PORTC, DIO_PIN1);
				_delay_ms(2000);
				LED_voidLedOff(DIO_PORTC, DIO_PIN1);
				if (count == 3)
				{
					LCD_voidSendCommand(1);
					LCD_voidGoToxy(0, 0);
					LCD_voidSendString("Back Off!!");
					break;
				}
				LCD_voidSendCommand(1);
				LCD_voidGoToxy(0, 0);
				LCD_voidSendString("TRY AGAIN: ");
				LCD_voidGoToxy(11, 0);
				LCD_voidSendNumber(3 - count);
				_delay_ms(2000);
			}
			count++;
		}
		break;
    }
}

