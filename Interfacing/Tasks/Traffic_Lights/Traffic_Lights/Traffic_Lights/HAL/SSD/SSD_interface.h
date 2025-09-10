/*
 * SSD_interface.h
 *
 * Created: 9/8/2025 2:54:44 PM
 *  Author: YOUSSEF
 */ 


#ifndef SSD_INTERFACE_H_
#define SSD_INTERFACE_H_

#include "../../LIB/STD_TYPE.h"
#include "../../MCAL/DIO/DIO_interface.h"

/*Numbers*/
#define SSD_NUM0   0
#define SSD_NUM1   1
#define SSD_NUM2   2
#define SSD_NUM3   3
#define SSD_NUM4   4
#define SSD_NUM5   5
#define SSD_NUM6   6
#define SSD_NUM7   7
#define SSD_NUM8   8
#define SSD_NUM9   9


/*****************************************************************************
* Function Name: SSD_voidSendNumber
* Purpose      : display any number from 0 to 9 on SSD
* Parameters   : u8 copy_u8num
* Return value : void
*****************************************************************************/

void SSD_voidSendNumber(u8 copy_u8num);



#endif /* SSD_INTERFACE_H_ */