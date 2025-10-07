/*
 * LCD_interface.h
 *
 * 
 *  
 */ 


#ifndef LCD_INTERFACE_H_
#define LCD_INTERFACE_H_

/*lcd mode */

#define LCD_4BITMODE        1 
#define LCD_8BITMODE        0

#define LCD_MODE      LCD_4BITMODE


void LCD_voidSendData( u8 copy_u8data) ; 

void LCD_voidSendCommand( u8 copy_u8command) ; 

void LCD_voidInit(void) ; 

void LCD_voidSendString(char *copy_u8str) ; 


void LCD_voidSendNumber(u32 copy_32num) ; 

void LCD_voidGoToxy(u8 copy_u8x, u8 copy_u8y);

void LCD_voidDrowData(u8 copy_u8pattern, u8* data, u8 copy_u8x, u8 copy_u8y);


#endif /* LCD_INTERFACE_H_ */