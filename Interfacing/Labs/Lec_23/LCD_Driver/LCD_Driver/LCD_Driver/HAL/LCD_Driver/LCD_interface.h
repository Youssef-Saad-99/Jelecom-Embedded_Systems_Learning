/*
 * LCD_interface.h
 *
 * Created: 9/16/2025 11:33:53 PM
 *  Author: Youssef
 */ 


#ifndef LCD_INTERFACE_H_
#define LCD_INTERFACE_H_

void LCD_voidSendCommand(u8 copy_u8command);
void LCD_voidSendData(u8 copy_u8data);
void LCD_voidInit(void);



#endif /* LCD_INTERFACE_H_ */