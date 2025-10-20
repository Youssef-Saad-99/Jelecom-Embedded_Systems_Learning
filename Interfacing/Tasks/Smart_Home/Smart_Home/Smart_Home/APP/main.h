/*
 * main.h
 *
 * Created: 10/20/2025 12:22:34 AM
 *  Author: Youssef
 */ 


#ifndef MAIN_H_
#define MAIN_H_


#include "../LIB/STD_TYPE.h"
#include "../LIB/BIT_MATH.h"
#include "../MCAL/DIO/DIO_interface.h"
#include "../MCAL/ADC/ADC_interface.h"
#include "../MCAL/GI/GI_interface.h"
#include "../MCAL/EXTI/EXTI_interface.h"
#include "../HAL/LCD/LCD_interface.h"
#include "../HAL/LCD/LCD_config.h"
#include "../HAL/LED/LED_interface.h"
#include "../HAL/KPD/KPD_config.h"
#include "../HAL/KPD/KPD_interface.h"

#define F_CPU  16000000

#include <util/delay.h>



u8 APP_u8CkeckPass(u8 *copy_u8pass);

void APP(void);


#endif /* MAIN_H_ */