/*
 * GI_prog.c
 *
 * Created: 9/27/2025 11:39:12 AM
 *  Author: Youssef
 */ 

#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPE.h"
#include "GI_interface.h"
#include "GI_Reg.h"



void GI_voidEnable()
{
	SET_BIT(SREG, 7);
}


void GI_voidDisable()
{
	CLR_BIT(SREG, 7);
}
