/*
 * Interrupt.c
 *
 * Created: 10/15/2025 10:30:59 PM
 * Author : Youssef
 */ 

#include "main.h"

volatile static u8 count = 0;


void APP(void)
{
	LED_voidLedToggle(DIO_PORTD, DIO_PIN2);
}

int main(void)
{
	DIO_voidSetPinDir(DIO_PORTD, DIO_PIN2, INPUT);
	DIO_voidSetPinVal(DIO_PORTD, DIO_PIN2, HIGH);
	DIO_voidSetPinDir(DIO_PORTD, DIO_PIN3, INPUT);
	DIO_voidSetPinVal(DIO_PORTD, DIO_PIN3, HIGH);
	DIO_voidSetPinDir(DIO_PORTB, DIO_PIN2, INPUT);
	DIO_voidSetPinVal(DIO_PORTB, DIO_PIN2, HIGH);
	
	/* Enable Global Interrupt */
	GI_voidEnable();
	
	/* Init External Interrupt for INT0 */
	EXTI_voidInit(RISING_EDGE, INT_0);
	
	/* Enable External Interrupt for INT0 */
	EXTI0_voidEnabel();
	
	EXTI_voidSetCallBack(APP);
	
	EXTI_voidInit(RISING_EDGE, INT_1);
	
	EXTI1_voidEnabel();
	
	EXTI_voidInit(RISING_EDGE, INT_2);
	
	EXTI2_voidEnabel();
	
	
	DIO_voidSetPortDir(LCD_DPORT, 0xff);
	LCD_voidInit();
	
	while (1)
	{
		LCD_voidGoToxy(0, 0);
		LCD_voidSendNumber(count);
	}
}

void __vector_2(void)__attribute__((signal));
void __vector_2(void)
{
	count--;
}

void __vector_3(void)__attribute__((signal));
void __vector_3(void)
{
	count = 0;
}

