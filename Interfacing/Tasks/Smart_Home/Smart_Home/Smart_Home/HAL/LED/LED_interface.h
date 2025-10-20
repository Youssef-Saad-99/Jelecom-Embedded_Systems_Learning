/*
 * LED_interface.h
 *
 * Created: 9/8/2025 12:32:14 PM
 *  Author: progr
 */ 


#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_

#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPE.h"
#include "../../MCAL/DIO/DIO_interface.h"

/*****************************************************************************
* Function Name: LED_voidLedOn
* Purpose      : Turn LED on
* Parameters   : u8 copy_u8_port, u8 copy_u8pin
* Return value : void
*****************************************************************************/
void LED_voidLedOn(u8 copy_u8_port, u8 copy_u8pin);

/*****************************************************************************
* Function Name: LED_voidLedOff
* Purpose      : Turn LED off
* Parameters   : u8 copy_u8_port, u8 copy_u8pin
* Return value : void
*****************************************************************************/
void LED_voidLedOff(u8 copy_u8_port, u8 copy_u8pin);

/*****************************************************************************
* Function Name: LED_voidLedToggle
* Purpose      : Toggle LED
* Parameters   : u8 copy_u8_port, u8 copy_u8pin
* Return value : void
*****************************************************************************/
void LED_voidLedToggle(u8 copy_u8_port, u8 copy_u8pin);


#endif /* LED_INTERFACE_H_ */