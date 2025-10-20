/*
 * ADC_Driver.c
 *
 * Created: 10/17/2025 10:10:22 AM
 * Author : Youssef
 */ 

#include "main.h"


int main(void)
{
	DIO_voidSetPinDir(DIO_PORTD, DIO_PIN0, INPUT);
    DIO_voidSetPortDir(DIO_PORTA, 0x7E);
	
	LCD_voidInit();
	
	ADC_voidInit();
	
	u16 val = 0;
	u8 light = 1;

	
    while (1) 
    {
		val = ADC_u16ReadChannel(ADC0);
		val = val * 5 / 1023;
		
		/*if (DIO_u8ReadPinVal(DIO_PORTD, DIO_PIN0) == 0)
		{
			if (light == 1)
			{
				LCD_voidGoToxy(0, 0);
				LCD_voidSendString("Light on!");
				LED_voidLedOn(DIO_PORTC, DIO_PIN3);
				_delay_ms(1000);
				light++;
			}
			
			LCD_voidSendCommand(1);
			LCD_voidSendString("Temp : ");
			LCD_voidGoToxy(7, 0);
			LCD_voidSendNumber(val);
			LCD_voidSendData('C');
			LCD_voidSendData(0xDF);
			if (val > 3)
			{
				LED_voidLedOn(DIO_PORTC, DIO_PIN2);
			}
			else
			{
				LED_voidLedOff(DIO_PORTC, DIO_PIN2);
			}
			_delay_ms(500);
		}
		else if (DIO_u8ReadPinVal(DIO_PORTD, DIO_PIN0) == 1)
		{
			LED_voidLedOff(DIO_PORTC, DIO_PIN2);
			LED_voidLedOff(DIO_PORTC, DIO_PIN3);
			LCD_voidSendCommand(1);
			LCD_voidGoToxy(0, 0);
			LCD_voidSendString("Light off!");
			break;
		}	*/
		LCD_voidGoToxy(0, 0);
		LCD_voidSendNumber(val);
		if (val > 3)
		{
			LED_voidLedOn(DIO_PORTC, DIO_PIN2);
		}
		else
		{
			LED_voidLedOff(DIO_PORTC, DIO_PIN2);
		}
    }
}

