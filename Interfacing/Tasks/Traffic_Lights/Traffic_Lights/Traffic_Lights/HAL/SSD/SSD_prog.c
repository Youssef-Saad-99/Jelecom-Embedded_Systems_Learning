/*
 * SSD_prog.c
 *
 * Created: 9/8/2025 2:54:28 PM
 *  Author: progr
 */ 

#include "SSD_interface.h"

void SSD_voidSendNumber(u8 copy_u8num)
{
	switch (copy_u8num)
	{
		case SSD_NUM0 : 
			{
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN1, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN2, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN3, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN4, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN5, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN6, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN7, LOW);
			}
			break;
			case SSD_NUM1 :
			{
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN1, LOW);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN2, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN3, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN4, LOW);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN5, LOW);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN6, LOW);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN7, LOW);
			}
			break;
			case SSD_NUM2 :
			{
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN1, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN2, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN3, LOW);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN4, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN5, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN6, LOW);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN7, HIGH);
			}
			break;
			case SSD_NUM3 :
			{
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN1, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN2, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN3, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN4, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN5, LOW);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN6, LOW);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN7, HIGH);
			}
			break;
			case SSD_NUM4 :
			{
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN1, LOW);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN2, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN3, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN4, LOW);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN5, LOW);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN6, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN7, HIGH);
			}
			break;
			case SSD_NUM5 :
			{
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN1, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN2, LOW);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN3, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN4, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN5, LOW);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN6, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN7, HIGH);
			}
			break;
			case SSD_NUM6 :
			{
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN1, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN2, LOW);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN3, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN4, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN5, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN6, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN7, HIGH);
			}
			break;
			case SSD_NUM7 :
			{
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN1, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN2, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN3, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN4, LOW);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN5, LOW);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN6, LOW);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN7, LOW);
			}
			break;
			case SSD_NUM8 :
			{
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN1, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN2, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN3, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN4, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN5, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN6, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN7, HIGH);
			}
			break;
			case SSD_NUM9 :
			{
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN1, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN2, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN3, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN4, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN5, LOW);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN6, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN7, HIGH);
			}
			break;
	}
}
