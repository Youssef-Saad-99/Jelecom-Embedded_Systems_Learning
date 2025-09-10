/*
 * DIO_prog.c
 *
 * Created: 9/6/2025 10:43:04 AM
 *  Author: fathi

 */ 
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPE.h"
#include "DIO_reg.h"
#include "DIO_interface.h"



void DIO_voidSetPinDir( u8 copy_u8_port, u8 copy_u8pin , u8 copy_u8dir) {
	
	         if (copy_u8dir == OUTPUT)
	         {
				 
				 switch(copy_u8_port){
					 
					 case DIO_PORTA : SET_BIT(DDRA_REG,copy_u8pin) ;break ;
					 case DIO_PORTB : SET_BIT(DDRB_REG,copy_u8pin) ;break ;
					 case DIO_PORTC : SET_BIT(DDRC_REG,copy_u8pin) ;break ;
					 case DIO_PORTD : SET_BIT(DDRD_REG,copy_u8pin) ;break ;
				 } 
	         }
			 
		 else if (copy_u8dir==INPUT)
		 {
			 switch(copy_u8_port){
				 
				 case DIO_PORTA : CLR_BIT(DDRA_REG,copy_u8pin) ;break ;
				 case DIO_PORTB : CLR_BIT(DDRB_REG,copy_u8pin) ;break ;
				 case DIO_PORTC : CLR_BIT(DDRC_REG,copy_u8pin) ;break ;
				 case DIO_PORTD : CLR_BIT(DDRD_REG,copy_u8pin) ;break ;
			 }
			 
		 }
			 else {
				 
				 // do nothing 
			 }
			 
			 
 
}





void DIO_voidSetPinVal( u8 copy_u8_port, u8 copy_u8pin ,u8 copy_u8val) {
	
	
	if (copy_u8val == HIGH)
	{
		
		switch(copy_u8_port){
			
			case DIO_PORTA : SET_BIT(PORTA_REG,copy_u8pin) ;break ;
			case DIO_PORTB : SET_BIT(PORTB_REG,copy_u8pin) ;break ;
			case DIO_PORTC : SET_BIT(PORTC_REG,copy_u8pin) ;break ;
			case DIO_PORTD : SET_BIT(PORTD_REG,copy_u8pin) ;break ;
		}
	}
	
	else if (copy_u8val==LOW)
	{
		switch(copy_u8_port){
			
			case DIO_PORTA : CLR_BIT(PORTA_REG,copy_u8pin) ;break ;
			case DIO_PORTB : CLR_BIT(PORTB_REG,copy_u8pin) ;break ;
			case DIO_PORTC : CLR_BIT(PORTC_REG,copy_u8pin) ;break ;
			case DIO_PORTD : CLR_BIT(PORTD_REG,copy_u8pin) ;break ;
		}
	}
		else {
			
			// do nothing
		}
			
	}





void DIO_voidTogglePinVal(u8 copy_u8_port, u8 copy_u8pin ){
	
	
	
	
	switch(copy_u8_port){
		
		case DIO_PORTA : TOGGLE_BIT(PORTA_REG,copy_u8pin) ;break ;
		case DIO_PORTB : TOGGLE_BIT(PORTB_REG,copy_u8pin) ;break ;
		case DIO_PORTC : TOGGLE_BIT(PORTC_REG,copy_u8pin) ;break ;
		case DIO_PORTD : TOGGLE_BIT(PORTD_REG,copy_u8pin) ;break ;
	}
	
}


u8 DIO_u8ReadPinVal(u8 copy_u8_port, u8 copy_u8pin){
	
	u8 LOC_u8Val=0 ; 
	
	  switch(copy_u8_port){
		  
		  case DIO_PORTA :LOC_u8Val = GET_BIT(PINA_REG,copy_u8pin) ;break ;
		  case DIO_PORTB :LOC_u8Val = GET_BIT(PINB_REG,copy_u8pin) ;break ;
		  case DIO_PORTC :LOC_u8Val = GET_BIT(PINC_REG,copy_u8pin) ;break ;
		  case DIO_PORTD :LOC_u8Val = GET_BIT(PIND_REG,copy_u8pin) ;break ;
	  }
	 
	return LOC_u8Val ; 
	
	
}

void DIO_voidSetPortDir(u8 copy_u8_port , u8 copy_u8dir)
{
	if (copy_u8dir == OUTPUT)
	{
		switch (copy_u8_port)
		{
			case DIO_PORTA :
			{
				DIO_voidSetPinDir(DIO_PORTA, DIO_PIN0, OUTPUT);
				DIO_voidSetPinDir(DIO_PORTA, DIO_PIN1, OUTPUT);
				DIO_voidSetPinDir(DIO_PORTA, DIO_PIN2, OUTPUT);
				DIO_voidSetPinDir(DIO_PORTA, DIO_PIN3, OUTPUT);
				DIO_voidSetPinDir(DIO_PORTA, DIO_PIN4, OUTPUT);
				DIO_voidSetPinDir(DIO_PORTA, DIO_PIN5, OUTPUT);
				DIO_voidSetPinDir(DIO_PORTA, DIO_PIN6, OUTPUT);
				DIO_voidSetPinDir(DIO_PORTA, DIO_PIN7, OUTPUT);
			}
			break;
			case DIO_PORTB :
			{
				DIO_voidSetPinDir(DIO_PORTB, DIO_PIN0, OUTPUT);
				DIO_voidSetPinDir(DIO_PORTB, DIO_PIN1, OUTPUT);
				DIO_voidSetPinDir(DIO_PORTB, DIO_PIN2, OUTPUT);
				DIO_voidSetPinDir(DIO_PORTB, DIO_PIN3, OUTPUT);
				DIO_voidSetPinDir(DIO_PORTB, DIO_PIN4, OUTPUT);
				DIO_voidSetPinDir(DIO_PORTB, DIO_PIN5, OUTPUT);
				DIO_voidSetPinDir(DIO_PORTB, DIO_PIN6, OUTPUT);
				DIO_voidSetPinDir(DIO_PORTB, DIO_PIN7, OUTPUT);
			}
			break;
			case DIO_PORTC :
			{
				DIO_voidSetPinDir(DIO_PORTC, DIO_PIN0, OUTPUT);
				DIO_voidSetPinDir(DIO_PORTC, DIO_PIN1, OUTPUT);
				DIO_voidSetPinDir(DIO_PORTC, DIO_PIN2, OUTPUT);
				DIO_voidSetPinDir(DIO_PORTC, DIO_PIN3, OUTPUT);
				DIO_voidSetPinDir(DIO_PORTC, DIO_PIN4, OUTPUT);
				DIO_voidSetPinDir(DIO_PORTC, DIO_PIN5, OUTPUT);
				DIO_voidSetPinDir(DIO_PORTC, DIO_PIN6, OUTPUT);
				DIO_voidSetPinDir(DIO_PORTC, DIO_PIN7, OUTPUT);
			}
			break;
			case DIO_PORTD :
			{
				DIO_voidSetPinDir(DIO_PORTD, DIO_PIN0, OUTPUT);
				DIO_voidSetPinDir(DIO_PORTD, DIO_PIN1, OUTPUT);
				DIO_voidSetPinDir(DIO_PORTD, DIO_PIN2, OUTPUT);
				DIO_voidSetPinDir(DIO_PORTD, DIO_PIN3, OUTPUT);
				DIO_voidSetPinDir(DIO_PORTD, DIO_PIN4, OUTPUT);
				DIO_voidSetPinDir(DIO_PORTD, DIO_PIN5, OUTPUT);
				DIO_voidSetPinDir(DIO_PORTD, DIO_PIN6, OUTPUT);
				DIO_voidSetPinDir(DIO_PORTD, DIO_PIN7, OUTPUT);
			}
			break;
		}
	}
	else if (copy_u8dir == INPUT)
	{
		switch (copy_u8_port)
		{
			case DIO_PORTA : 
			{
				DIO_voidSetPinDir(DIO_PORTA, DIO_PIN0, INPUT);
				DIO_voidSetPinDir(DIO_PORTA, DIO_PIN1, INPUT);
				DIO_voidSetPinDir(DIO_PORTA, DIO_PIN2, INPUT);
				DIO_voidSetPinDir(DIO_PORTA, DIO_PIN3, INPUT);
				DIO_voidSetPinDir(DIO_PORTA, DIO_PIN4, INPUT);
				DIO_voidSetPinDir(DIO_PORTA, DIO_PIN5, INPUT);
				DIO_voidSetPinDir(DIO_PORTA, DIO_PIN6, INPUT);
				DIO_voidSetPinDir(DIO_PORTA, DIO_PIN7, INPUT);
			}
			break;
			case DIO_PORTB :
			{
				DIO_voidSetPinDir(DIO_PORTB, DIO_PIN0, INPUT);
				DIO_voidSetPinDir(DIO_PORTB, DIO_PIN1, INPUT);
				DIO_voidSetPinDir(DIO_PORTB, DIO_PIN2, INPUT);
				DIO_voidSetPinDir(DIO_PORTB, DIO_PIN3, INPUT);
				DIO_voidSetPinDir(DIO_PORTB, DIO_PIN4, INPUT);
				DIO_voidSetPinDir(DIO_PORTB, DIO_PIN5, INPUT);
				DIO_voidSetPinDir(DIO_PORTB, DIO_PIN6, INPUT);
				DIO_voidSetPinDir(DIO_PORTB, DIO_PIN7, INPUT);
			}
			break;
			case DIO_PORTC :
			{
				DIO_voidSetPinDir(DIO_PORTC, DIO_PIN0, INPUT);
				DIO_voidSetPinDir(DIO_PORTC, DIO_PIN1, INPUT);
				DIO_voidSetPinDir(DIO_PORTC, DIO_PIN2, INPUT);
				DIO_voidSetPinDir(DIO_PORTC, DIO_PIN3, INPUT);
				DIO_voidSetPinDir(DIO_PORTC, DIO_PIN4, INPUT);
				DIO_voidSetPinDir(DIO_PORTC, DIO_PIN5, INPUT);
				DIO_voidSetPinDir(DIO_PORTC, DIO_PIN6, INPUT);
				DIO_voidSetPinDir(DIO_PORTC, DIO_PIN7, INPUT);
			}
			break;
			case DIO_PORTD :
			{
				DIO_voidSetPinDir(DIO_PORTD, DIO_PIN0, INPUT);
				DIO_voidSetPinDir(DIO_PORTD, DIO_PIN1, INPUT);
				DIO_voidSetPinDir(DIO_PORTD, DIO_PIN2, INPUT);
				DIO_voidSetPinDir(DIO_PORTD, DIO_PIN3, INPUT);
				DIO_voidSetPinDir(DIO_PORTD, DIO_PIN4, INPUT);
				DIO_voidSetPinDir(DIO_PORTD, DIO_PIN5, INPUT);
				DIO_voidSetPinDir(DIO_PORTD, DIO_PIN6, INPUT);
				DIO_voidSetPinDir(DIO_PORTD, DIO_PIN7, INPUT);
			}
			break;
		}
	}
	
}

void DIO_voidSetPortVal(u8 copy_u8_port , u8 copy_u8val)
{
	if (copy_u8val == HIGH)
	{
		switch (copy_u8_port)
		{
			case DIO_PORTA :
			{
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN0, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN1, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN2, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN3, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN4, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN5, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN6, HIGH);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN7, HIGH);
			}
			break;
			case DIO_PORTB :
			{
				DIO_voidSetPinVal(DIO_PORTB, DIO_PIN0, HIGH);
				DIO_voidSetPinVal(DIO_PORTB, DIO_PIN1, HIGH);
				DIO_voidSetPinVal(DIO_PORTB, DIO_PIN2, HIGH);
				DIO_voidSetPinVal(DIO_PORTB, DIO_PIN3, HIGH);
				DIO_voidSetPinVal(DIO_PORTB, DIO_PIN4, HIGH);
				DIO_voidSetPinVal(DIO_PORTB, DIO_PIN5, HIGH);
				DIO_voidSetPinVal(DIO_PORTB, DIO_PIN6, HIGH);
				DIO_voidSetPinVal(DIO_PORTB, DIO_PIN7, HIGH);
			}
			break;
			case DIO_PORTC :
			{
				DIO_voidSetPinVal(DIO_PORTC, DIO_PIN0, HIGH);
				DIO_voidSetPinVal(DIO_PORTC, DIO_PIN1, HIGH);
				DIO_voidSetPinVal(DIO_PORTC, DIO_PIN2, HIGH);
				DIO_voidSetPinVal(DIO_PORTC, DIO_PIN3, HIGH);
				DIO_voidSetPinVal(DIO_PORTC, DIO_PIN4, HIGH);
				DIO_voidSetPinVal(DIO_PORTC, DIO_PIN5, HIGH);
				DIO_voidSetPinVal(DIO_PORTC, DIO_PIN6, HIGH);
				DIO_voidSetPinVal(DIO_PORTC, DIO_PIN7, HIGH);
			}
			break;
			case DIO_PORTD :
			{
				DIO_voidSetPinVal(DIO_PORTD, DIO_PIN0, HIGH);
				DIO_voidSetPinVal(DIO_PORTD, DIO_PIN1, HIGH);
				DIO_voidSetPinVal(DIO_PORTD, DIO_PIN2, HIGH);
				DIO_voidSetPinVal(DIO_PORTD, DIO_PIN3, HIGH);
				DIO_voidSetPinVal(DIO_PORTD, DIO_PIN4, HIGH);
				DIO_voidSetPinVal(DIO_PORTD, DIO_PIN5, HIGH);
				DIO_voidSetPinVal(DIO_PORTD, DIO_PIN6, HIGH);
				DIO_voidSetPinVal(DIO_PORTD, DIO_PIN7, HIGH);
			}
			break;
		}
	}
	else if (copy_u8val == LOW)
	{
		switch (copy_u8_port)
		{
			case DIO_PORTA :
			{
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN0, LOW);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN1, LOW);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN2, LOW);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN3, LOW);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN4, LOW);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN5, LOW);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN6, LOW);
				DIO_voidSetPinVal(DIO_PORTA, DIO_PIN7, LOW);
			}
			break;
			case DIO_PORTB :
			{
				DIO_voidSetPinVal(DIO_PORTB, DIO_PIN0, LOW);
				DIO_voidSetPinVal(DIO_PORTB, DIO_PIN1, LOW);
				DIO_voidSetPinVal(DIO_PORTB, DIO_PIN2, LOW);
				DIO_voidSetPinVal(DIO_PORTB, DIO_PIN3, LOW);
				DIO_voidSetPinVal(DIO_PORTB, DIO_PIN4, LOW);
				DIO_voidSetPinVal(DIO_PORTB, DIO_PIN5, LOW);
				DIO_voidSetPinVal(DIO_PORTB, DIO_PIN6, LOW);
				DIO_voidSetPinVal(DIO_PORTB, DIO_PIN7, LOW);
			}
			break;
			case DIO_PORTC :
			{
				DIO_voidSetPinVal(DIO_PORTC, DIO_PIN0, LOW);
				DIO_voidSetPinVal(DIO_PORTC, DIO_PIN1, LOW);
				DIO_voidSetPinVal(DIO_PORTC, DIO_PIN2, LOW);
				DIO_voidSetPinVal(DIO_PORTC, DIO_PIN3, LOW);
				DIO_voidSetPinVal(DIO_PORTC, DIO_PIN4, LOW);
				DIO_voidSetPinVal(DIO_PORTC, DIO_PIN5, LOW);
				DIO_voidSetPinVal(DIO_PORTC, DIO_PIN6, LOW);
				DIO_voidSetPinVal(DIO_PORTC, DIO_PIN7, LOW);
			}
			break;
			case DIO_PORTD :
			{
				DIO_voidSetPinVal(DIO_PORTD, DIO_PIN0, LOW);
				DIO_voidSetPinVal(DIO_PORTD, DIO_PIN1, LOW);
				DIO_voidSetPinVal(DIO_PORTD, DIO_PIN2, LOW);
				DIO_voidSetPinVal(DIO_PORTD, DIO_PIN3, LOW);
				DIO_voidSetPinVal(DIO_PORTD, DIO_PIN4, LOW);
				DIO_voidSetPinVal(DIO_PORTD, DIO_PIN5, LOW);
				DIO_voidSetPinVal(DIO_PORTD, DIO_PIN6, LOW);
				DIO_voidSetPinVal(DIO_PORTD, DIO_PIN7, LOW);
			}
			break;
		}
	}
}
