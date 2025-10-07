/*
 * Calculator.c
 *
 * Created: 10/1/2025 1:39:06 AM
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
	
	u8 num1[2] = {};
	u8 num2[2] = {};
	u8 num3[2] = "0";
	u8 num4[2] = "0";
	u8 number1 = 0;
	u8 number2 = 0;
	u8 operator = 0;
	//u8 equal = 0;
	u8 result = 0;
	u8 count = 0;
	u8 count1 = 0;
	
	
	
	while (1)
	{
		while(num1[count] != '+' || num1[count] != '*' || num1[count] != '/' || num1[count] != 'c' || num1[count] != '-')
		{
				num1[count] = Get_Key();
				
				
				if (num1[count] == '+' || num1[count] == '*' || num1[count] == '/' || num1[count] == 'c' || num1[count] == '-')
				{
					break;
				}
				strcat(num3, num1);
				LCD_voidGoToxy(count, 0);
				LCD_voidSendData(num1[count]);
				
				count++;
		}
		operator = num1[count];
		LCD_voidGoToxy(count, 0);
		LCD_voidSendData(operator);
		
		num1[count] = 0;
		number1 = atoi(num3);
		number1 = number1 / 10;
		
		count++;
		
		while(num2[count1] != '=')
		{
			num2[count1] = Get_Key();
			
			if (num2[count1] == '=')
			{
				break;
			}
			strcat(num4, num2);
			LCD_voidGoToxy(count1 + count, 0);
			LCD_voidSendData(num2[count1]);
			
			count++;
		}
		
		num2[count1] = 0;
		LCD_voidGoToxy(count1 + count, 0);
		LCD_voidSendData('=');
		number2 = atoi(num4);
		number2 = number2 / 10;
		
		result= calc(num3 ,num4, operator);
		LCD_voidGoToxy((count1 + 1) + count, 0);
		LCD_voidSendNumber(result);
		
		operator = Get_Key();
		if (operator == 'c')
		{
			LCD_voidSendCommand(1);
		}
	}
}

