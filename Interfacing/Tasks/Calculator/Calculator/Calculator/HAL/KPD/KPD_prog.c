/*
 * KPD_prog.c
 *
 * Created: 9/25/2025 5:05:40 PM
 *  Author: Youssef
 */ 


#include "../../LIB/STD_TYPE.h"
#include "../../LIB/BIT_MATH.h"
#include "../../MCAL/DIO/DIO_interface.h"
#include "KPD_config.h"
#include "KPD_interface.h"

#define F_CPU  16000000
#include <util/delay.h>

void KPD_voidInit()
{
	/*Set Rows INPUT and HIGH*/
	DIO_voidSetPinDir(KPD_RPORT, KPD_RPIN1, INPUT);
	DIO_voidSetPinDir(KPD_RPORT, KPD_RPIN2, INPUT);
	DIO_voidSetPinDir(KPD_RPORT, KPD_RPIN3, INPUT);
	DIO_voidSetPinDir(KPD_RPORT, KPD_RPIN4, INPUT);
	DIO_voidSetPinVal(KPD_RPORT, KPD_RPIN1, HIGH);
	DIO_voidSetPinVal(KPD_RPORT, KPD_RPIN2, HIGH);
	DIO_voidSetPinVal(KPD_RPORT, KPD_RPIN3, HIGH);
	DIO_voidSetPinVal(KPD_RPORT, KPD_RPIN4, HIGH);
	
	
	/*Set COL INPUT and HIGH*/
	DIO_voidSetPinDir(KPD_CPORT, KPD_CPIN1, INPUT);
	DIO_voidSetPinDir(KPD_CPORT, KPD_CPIN2, INPUT);
	DIO_voidSetPinDir(KPD_CPORT, KPD_CPIN3, INPUT);
	DIO_voidSetPinDir(KPD_CPORT, KPD_CPIN4, INPUT);
	DIO_voidSetPinVal(KPD_CPORT, KPD_CPIN1, HIGH);
	DIO_voidSetPinVal(KPD_CPORT, KPD_CPIN2, HIGH);
	DIO_voidSetPinVal(KPD_CPORT, KPD_CPIN3, HIGH);
	DIO_voidSetPinVal(KPD_CPORT, KPD_CPIN4, HIGH);
}



u8 KPD_u8GetKey()
{
	u8 Loc_KPD_Data[4][4] =
	{ 
		{'0', '1', '2', '3'},
		{'4', '5', '6', '7'},
		{'8', '9', '+', '-'},
		{'*', '/', '=', 'c'}
	};
	
	while(1)
	{
		DIO_voidSetPinDir(KPD_CPORT, KPD_CPIN1, OUTPUT);
		
		DIO_voidSetPinVal(KPD_CPORT, KPD_CPIN1, LOW);
		if (DIO_u8ReadPinVal(KPD_RPORT, KPD_RPIN1) == 0)
		{
			while(DIO_u8ReadPinVal(KPD_RPORT, KPD_RPIN1) == 0);
			return Loc_KPD_Data[1][3];
			break;
		}
		else if (DIO_u8ReadPinVal(KPD_RPORT, KPD_RPIN2) == 0)
		{
			while(DIO_u8ReadPinVal(KPD_RPORT, KPD_RPIN2) == 0);
			return Loc_KPD_Data[1][0];
			break;
		}
		else if (DIO_u8ReadPinVal(KPD_RPORT, KPD_RPIN3) == 0)
		{
			while(DIO_u8ReadPinVal(KPD_RPORT, KPD_RPIN3) == 0);
			return Loc_KPD_Data[0][1];
			break;
		}
		else if (DIO_u8ReadPinVal(KPD_RPORT, KPD_RPIN4) == 0)
		{
			while(DIO_u8ReadPinVal(KPD_RPORT, KPD_RPIN4) == 0);
			return Loc_KPD_Data[3][3];
			break;
		}
		else
		{
			//Do Nothing
		}
		
		DIO_voidSetPinDir(KPD_CPORT, KPD_CPIN1, INPUT);
		DIO_voidSetPinDir(KPD_CPORT, KPD_CPIN2, OUTPUT);
		
		DIO_voidSetPinVal(KPD_CPORT, KPD_CPIN1, HIGH);
		DIO_voidSetPinVal(KPD_CPORT, KPD_CPIN2, LOW);
		if (DIO_u8ReadPinVal(KPD_RPORT, KPD_RPIN1) == 0)
		{
			while(DIO_u8ReadPinVal(KPD_RPORT, KPD_RPIN1) == 0);
			return Loc_KPD_Data[2][0];
			break;
		}
		else if (DIO_u8ReadPinVal(KPD_RPORT, KPD_RPIN2) == 0)
		{
			while(DIO_u8ReadPinVal(KPD_RPORT, KPD_RPIN2) == 0);
			return Loc_KPD_Data[1][1];
			break;
		}
		else if (DIO_u8ReadPinVal(KPD_RPORT, KPD_RPIN3) == 0)
		{
			while(DIO_u8ReadPinVal(KPD_RPORT, KPD_RPIN3) == 0);
			return Loc_KPD_Data[0][2];
			break;
		}
		else if (DIO_u8ReadPinVal(KPD_RPORT, KPD_RPIN4) == 0)
		{
			while(DIO_u8ReadPinVal(KPD_RPORT, KPD_RPIN4) == 0);
			return Loc_KPD_Data[0][0];
			break;
		}
		else
		{
			//Do Nothing
		}
		
		DIO_voidSetPinDir(KPD_CPORT, KPD_CPIN2, INPUT);
		DIO_voidSetPinDir(KPD_CPORT, KPD_CPIN3, OUTPUT);
		
		DIO_voidSetPinVal(KPD_CPORT, KPD_CPIN2, HIGH);
		DIO_voidSetPinVal(KPD_CPORT, KPD_CPIN3, LOW);
		if (DIO_u8ReadPinVal(KPD_RPORT, KPD_RPIN1) == 0)
		{
			while(DIO_u8ReadPinVal(KPD_RPORT, KPD_RPIN1) == 0);
			return Loc_KPD_Data[2][1];
			break;
		}
		else if (DIO_u8ReadPinVal(KPD_RPORT, KPD_RPIN2) == 0)
		{
			while(DIO_u8ReadPinVal(KPD_RPORT, KPD_RPIN2) == 0);
			return Loc_KPD_Data[1][2];
			break;
		}
		else if (DIO_u8ReadPinVal(KPD_RPORT, KPD_RPIN3) == 0)
		{
			while(DIO_u8ReadPinVal(KPD_RPORT, KPD_RPIN3) == 0);
			return Loc_KPD_Data[0][3];
			break;
		}
		else if (DIO_u8ReadPinVal(KPD_RPORT, KPD_RPIN4) == 0)
		{
			while(DIO_u8ReadPinVal(KPD_RPORT, KPD_RPIN4) == 0);
			return Loc_KPD_Data[3][2];
			break;
		}
		else
		{
			//Do Nothing
		}
		
		DIO_voidSetPinDir(KPD_CPORT, KPD_CPIN3, INPUT);
		DIO_voidSetPinDir(KPD_CPORT, KPD_CPIN4, OUTPUT);
		
		DIO_voidSetPinVal(KPD_CPORT, KPD_CPIN3, HIGH);
		DIO_voidSetPinVal(KPD_CPORT, KPD_CPIN4, LOW);
		if (DIO_u8ReadPinVal(KPD_RPORT, KPD_RPIN1) == 0)
		{
			while(DIO_u8ReadPinVal(KPD_RPORT, KPD_RPIN1) == 0);
			return Loc_KPD_Data[3][1];
			break;
		}
		else if (DIO_u8ReadPinVal(KPD_RPORT, KPD_RPIN2) == 0)
		{
			while(DIO_u8ReadPinVal(KPD_RPORT, KPD_RPIN2) == 0);
			return Loc_KPD_Data[3][0];
			break;
		}
		else if (DIO_u8ReadPinVal(KPD_RPORT, KPD_RPIN3) == 0)
		{
			while(DIO_u8ReadPinVal(KPD_RPORT, KPD_RPIN3) == 0);
			return Loc_KPD_Data[2][3];
			break;
		}
		else if (DIO_u8ReadPinVal(KPD_RPORT, KPD_RPIN4) == 0)
		{
			while(DIO_u8ReadPinVal(KPD_RPORT, KPD_RPIN4) == 0);
			return Loc_KPD_Data[2][2];
			break;
		}
		else
		{
			//Do Nothing
		}
		
		DIO_voidSetPinDir(KPD_CPORT, KPD_CPIN4, INPUT);

		DIO_voidSetPinVal(KPD_CPORT, KPD_CPIN4, HIGH);
	}
}