/*
 * EXTI_reg.h
 *
 * Created: 9/27/2025 12:41:54 PM
 *  Author: Youssef
 */ 


#ifndef EXTI_REG_H_
#define EXTI_REG_H_


#define   MCUCR_REG          *((volatile u8*) 0x55)

#define   MCUCSR_REG         *((volatile u8*) 0x54)

#define   GICR_REG           *((volatile u8*) 0x5B)

#define   GIFR_REG           *((volatile u8*) 0x5A)


#endif /* EXTI_REG_H_ */