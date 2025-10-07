/*
 * LCD_config.h
 *
 * Created: 9/22/2025 5:15:04 PM
 *  Author: Youssef
 */ 


#ifndef LCD_CONFIG_H_
#define LCD_CONFIG_H_


/*control port*/
#define LCD_CPORT    DIO_PORTA

/*control pins*/
#define LCD_RS_PIN   DIO_PIN1
#define LCD_RW_PIN   DIO_PIN0
#define LCD_E_PIN    DIO_PIN2


// 8 bit mode
#if LCD_Mode == LCD_8BITMode
/*data port*/
#define LCD_DPORT    DIO_PORTA

// 4 bit mode
#elif LCD_Mode == LCD_4BITMode

#define LCD_DPORT    DIO_PORTA
/*data Pins*/
#define  LCD_D4_BIT   DIO_PIN3
#define  LCD_D5_BIT   DIO_PIN4
#define  LCD_D6_BIT   DIO_PIN5
#define  LCD_D7_BIT   DIO_PIN6

#endif







#endif /* LCD_CONFIG_H_ */