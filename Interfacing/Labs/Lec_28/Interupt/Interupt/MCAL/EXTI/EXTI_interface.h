/*
 * EXTI_interface.h
 *
 * Created: 9/27/2025 12:41:22 PM
 *  Author: Youssef
 */ 


#ifndef EXTI_INTERFACE_H_
#define EXTI_INTERFACE_H_


/* Interrupt pins */

#define INT_0   0
#define INT_1   1
#define INT_2   2

/* sense control */

#define    LOW_LEVEL              0
#define    ANY_LOGICAL_CHANGE     1
#define    FALLING_EDGE           2
#define    RISING_EDGE            3


void EXTI_voidInit(u8 copy_u8sense, u8 copy_u8exti_num);

void EXTI0_voidEnabel(void);
void EXTI0_voidDisable(void);

void EXTI1_voidEnabel(void);
void EXTI1_voidDisable(void);

void EXTI2_voidEnabel(void);
void EXTI2_voidDisable(void);
#endif /* EXTI_INTERFACE_H_ */