/*
 * KPD_Driver.c
 *
 * Created: 9/26/2025 9:38:55 AM
 * Author : Youssef
 */ 

#include "main.h"


u8 calc(u8 num1, u8 num2, u8 op)
{
	u8 val = 0;
	
	switch (op)
	{
		case '/': val = num1 / num2;	break;
		case '+': val = num1 + num2;	break;
		case '-': val = num1 - num2;	break;
		case '*': val = num1 * num2;	break;
	}
	return val;
}

u8 Get_Key()
{
	u8 check = 0xff;
	
	do 
	{
		check = KPD_u8GetKey();
		
	} while (check == 0xff);
	
	return check;
}

int main(void)
{
   DIO_voidSetPortDir(LCD_DPORT, 0xff);
   
   KPD_voidInit();
   LCD_voidInit();
   
   u8 num1 = 0;
   u8 num2 = 0;
   u8 result = 0;
   u8 operator = 0;
   u8 equal = 0;
   
   
   while (1)
   {
			num1 = Get_Key();
			LCD_voidGoToxy(0, 0);
			LCD_voidSendNumber(num1);
	
			operator = Get_Key();
			LCD_voidGoToxy(1, 0);
			LCD_voidSendData(operator);
			num2 = Get_Key();
			LCD_voidGoToxy(2, 0);
			LCD_voidSendNumber(num2);
			equal = Get_Key();
			if (equal == '=')
			{
				result= calc(num1,num2, operator);
				LCD_voidGoToxy(3, 0);
				LCD_voidSendData('=');
				LCD_voidGoToxy(4, 0);
				LCD_voidSendNumber(result);
			}
			operator = Get_Key();
			if (operator == 'c')
			{
				LCD_voidSendCommand(1);
			}
   }
}

