/*
 * Smart_Home.c
 *
 * Created: 10/20/2025 12:16:57 AM
 * Author : Youssef
 */ 

#include "main.h"


int main(void)
{
	/* Password */
	static u8 password[4];
	
	/* Enable Global Interrupt */
	GI_voidEnable();
	
	/* Init External Interrupt for INT2 */
	EXTI_voidInit(RISING_EDGE, INT_2);
	
	/* Enable External Interrupt for INT2 */
	EXTI2_voidEnabel();
	
	/* CallBack function */
	EXTI_voidSetCallBack(APP);
	
	/* LCD */
    DIO_voidSetPortDir(DIO_PORTA, 0x7E);
    LCD_voidInit();
	
	/* KPD */
	KPD_voidInit();
	
	/* ADC */
	ADC_voidInit();
	
	/* Button */
	DIO_voidSetPinDir(DIO_PORTD, DIO_PIN0, INPUT);
	DIO_voidSetPinVal(DIO_PORTD, DIO_PIN0, HIGH);
	
	/* Analog var */
	static u16 light = 0;
	static u16 temp = 0;
	
	
    while (1) 
    {
		if (DIO_u8ReadPinVal(DIO_PORTD, DIO_PIN0) == 0)
		{
			while(DIO_u8ReadPinVal(DIO_PORTD, DIO_PIN0) == 0);
			LED_voidLedOn(DIO_PORTC, DIO_PIN1);
			while (1)
			{
				for (u8 i = 0; i < 4; i++)
				{
					LCD_voidGoToxy(0, 0);
					LCD_voidSendString("Enter Password: ");
					password[i] = KPD_u8GetKey();
					LCD_voidGoToxy(i, 1);
					LCD_voidSendNumber(password[i]);
					_delay_ms(100);
					LCD_voidGoToxy(i, 1);
					LCD_voidSendData('*');
				}
				
				
				if (APP_u8CkeckPass(password) == 0)
				{
					LCD_voidSendCommand(1);
					LCD_voidGoToxy(0, 0);
					LCD_voidSendString("WELCOME TO SMART HOME");
					LED_voidLedOn(DIO_PORTC, DIO_PIN2);
					_delay_ms(500);
					LED_voidLedOff(DIO_PORTC, DIO_PIN2);
					LCD_voidSendCommand(1);
					while(1)
					{
						/*Digital values*/
						light = ADC_u16ReadChannel(ADC7);
						temp = ADC_u16ReadChannel(ADC0);
						
						/*Analog values*/
						light = light * 5 / 1023;
						temp = (temp * 5.0 / 1023.0) / 0.01;
						
						if (temp > 50)
						{
							while (temp > 50)
							{
								LCD_voidSendCommand(1);
								LED_voidLedOff(DIO_PORTC, DIO_PIN3);
								_delay_ms(300);
								LCD_voidGoToxy(0, 0);
								LCD_voidSendString("High Temperature!!");
								LED_voidLedOn(DIO_PORTC, DIO_PIN3);
								_delay_ms(600);
								temp = ADC_u16ReadChannel(ADC0);
								temp = (temp * 5.0 / 1023.0) / 0.01;
							}
							LCD_voidSendCommand(1);
							LED_voidLedOff(DIO_PORTC, DIO_PIN3);
						}
						
						if (light > 3)
						{
							LCD_voidGoToxy(0, 0);
							LCD_voidSendString("Temperature: ");
							LCD_voidGoToxy(13, 0);
							LCD_voidSendNumber(temp);
							LCD_voidGoToxy(20, 0);
							LCD_voidSendString("Light: ");
							LCD_voidGoToxy(27, 0);
							LCD_voidSendString("Day  ");
						}
						else
						{
							LCD_voidGoToxy(0, 0);
							LCD_voidSendString("Temperature: ");
							LCD_voidGoToxy(13, 0);
							LCD_voidSendNumber(temp);
							LCD_voidGoToxy(20, 0);
							LCD_voidSendString("Light: ");
							LCD_voidGoToxy(27, 0);
							LCD_voidSendString("Night");
						}
					}
				}
				else
				{
					LCD_voidSendCommand(1);
					LCD_voidSendString("Try Again.");
					_delay_ms(500);
				}
			}
		}
    }
}

