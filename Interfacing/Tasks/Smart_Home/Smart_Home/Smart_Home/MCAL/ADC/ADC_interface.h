/*
 * ADC_interface.h
 *
 * Created: 10/17/2025 10:12:39 AM
 *  Author: Youssef
 */ 


#ifndef ADC_INTERFACE_H_
#define ADC_INTERFACE_H_

/* prescaler pins */

#define  ADC_2_Prescaler      1
#define  ADC_4_Prescaler      2
#define  ADC_8_Prescaler      3
#define  ADC_16_Prescaler     4
#define  ADC_32_Prescaler     5
#define  ADC_64_Prescaler     6
#define  ADC_128_Prescaler    7

/* prescaler selection */

#define  ADC_PRESCALER  ADC_128_Prescaler



#define  ADC0     0
#define  ADC1     1
#define  ADC2     2
#define  ADC3     3
#define  ADC4     4
#define  ADC5	  5
#define  ADC6     6
#define  ADC7     7


void ADC_voidInit();

u16 ADC_u16ReadChannel(u8 copy_u8channel);



#endif /* ADC_INTERFACE_H_ */