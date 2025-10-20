/*
 * EXTI_prog.c
 *
 * Created: 9/27/2025 12:42:10 PM
 *  Author: Youssef
 */ 


#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPE.h"
#include "../../LIB/INTEERUPT_NUM.h"
#include "EXTI_interface.h"
#include "EXTI_reg.h"


void (*EXTI2_PTR)(void) = null;

void EXTI_voidInit(u8 copy_u8sense, u8 copy_u8exti_num)
{
	switch(copy_u8exti_num)
	{
		case INT_0:
			if (copy_u8sense == LOW_LEVEL)
			{
				CLR_BIT(MCUCR_REG, 0);
				CLR_BIT(MCUCR_REG, 1);
			}
			else if (copy_u8sense == ANY_LOGICAL_CHANGE)
			{
				SET_BIT(MCUCR_REG, 0);
				CLR_BIT(MCUCR_REG, 1);
			}
			else if (copy_u8sense == FALLING_EDGE)
			{
				CLR_BIT(MCUCR_REG, 0);
				SET_BIT(MCUCR_REG, 1);
			}
			else if (copy_u8sense == RISING_EDGE)
			{
				SET_BIT(MCUCR_REG, 0);
				SET_BIT(MCUCR_REG, 1);
			}
			
			break;
		
		case INT_1:
			if (copy_u8sense == LOW_LEVEL)
			{
				CLR_BIT(MCUCR_REG, 2);
				CLR_BIT(MCUCR_REG, 3);
			}
			else if (copy_u8sense == ANY_LOGICAL_CHANGE)
			{
				SET_BIT(MCUCR_REG, 2);
				CLR_BIT(MCUCR_REG, 3);
			}
			else if (copy_u8sense == FALLING_EDGE)
			{
				CLR_BIT(MCUCR_REG, 2);
				SET_BIT(MCUCR_REG, 3);
			}
			else if (copy_u8sense == RISING_EDGE)
			{
				SET_BIT(MCUCR_REG, 2);
				SET_BIT(MCUCR_REG, 3);
			}
			
			break;
			
		case INT_2:
			if (copy_u8sense == FALLING_EDGE)
			{
				CLR_BIT(MCUCSR_REG, 6);
			}
			else if (copy_u8sense == RISING_EDGE)
			{
				SET_BIT(MCUCSR_REG, 6);
			}
			
			break;
	}
}

void EXTI0_voidEnabel(void)
{
	SET_BIT(GICR_REG, 6);
}

void EXTI0_voidDisable(void)
{
	CLR_BIT(GICR_REG, 6);
}


void EXTI1_voidEnabel(void)
{
	SET_BIT(GICR_REG, 7);
}

void EXTI1_voidDisable(void)
{
	CLR_BIT(GICR_REG, 7);
}


void EXTI2_voidEnabel(void)
{
	SET_BIT(GICR_REG, 5);
}

void EXTI2_voidDisable(void)
{
	CLR_BIT(GICR_REG, 5);
}



 void EXTI_voidSetCallBack(void (*ptr)(void))
{
	EXTI2_PTR = ptr;	
}


ISR(__vector_3)
{
	EXTI2_PTR();
}