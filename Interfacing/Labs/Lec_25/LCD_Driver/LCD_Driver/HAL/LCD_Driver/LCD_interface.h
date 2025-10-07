/*
 * LCD_interface.h
 *
 * Created: 9/22/2025 5:14:46 PM
 *  Author: Youssef
 */ 


#ifndef LCD_INTERFACE_H_
#define LCD_INTERFACE_H_


#define  LCD_4BITMode    +1
#define  LCD_8BITMode    +0

#define LCD_Mode  LCD_4BITMode



void LCD_voidSendData(u8 copy_u8data);

void LCD_voidSendCommand(u8 copy_u8command);

void LCD_voidInit(void);

void LCD_voidSendString(char *str);

void LCD_voidSendNumber(u32 copy_u8number);


#endif /* LCD_INTERFACE_H_ */