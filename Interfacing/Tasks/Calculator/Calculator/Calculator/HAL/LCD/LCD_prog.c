/*
 * LCD_prog.c
 *
 *
 
 */ 
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPE.h"
#include "../../MCAL/DIO/DIO_interface.h"

#define  F_CPU 16000000UL 
#include <util/delay.h>
#include "LCD_interface.h"
#include "LCD_config.h"



static void LCD_voidSHD(u8 copy_u8data){  //  1101  0011  // DATA>>4 
	
	u8 loc_arr[4]={LCD_D4_PIN,LCD_D5_PIN,LCD_D6_PIN,LCD_D7_PIN} ; 
	
	u8 loc_in=0 ; 
	
	for (loc_in=0 ; loc_in< 4 ;loc_in++)
	{
		DIO_voidSetPinVal(LCD_DPORT,loc_arr[loc_in],GET_BIT(copy_u8data,loc_in)) ; 
		
		
	}
			
}


static void LCD_voidSendEnablePulse(){
		DIO_voidSetPinVal(LCD_CPORT,LCD_EN_PIN,HIGH) ;
		_delay_ms(2) ;
		DIO_voidSetPinVal(LCD_CPORT,LCD_EN_PIN,LOW) ;
		
}

void LCD_voidSendData(u8 copy_u8data) {
	
	
	/*set rs pin to low ---> send DATA  */
	DIO_voidSetPinVal(LCD_CPORT,LCD_RS_PIN,HIGH) ;
	/* set RW PIN to low --->  write data  */
	DIO_voidSetPinVal(LCD_CPORT,LCD_RW_PIN,LOW) ;
	
	#if LCD_MODE == LCD_8BITMODE
	/*SEND data */
	
	DIO_voidSetPortVal(LCD_DPORT,copy_u8data) ;
      // enable pin 
	  LCD_voidSendEnablePulse() ; 
	#elif LCD_MODE ==LCD_4BITMODE 
	LCD_voidSHD(copy_u8data>>4) ; 
	  LCD_voidSendEnablePulse() ;
	  LCD_voidSHD(copy_u8data) ; 
	  LCD_voidSendEnablePulse() ;
	  #endif 
	
}

void LCD_voidSendCommand(u8 copy_u8command){
	
	/*CLR rs pin to low ---> send command  */
	DIO_voidSetPinVal(LCD_CPORT,LCD_RS_PIN,LOW) ; 
	/* LCR RW PIN to low --->  write data  */
	DIO_voidSetPinVal(LCD_CPORT,LCD_RW_PIN,LOW) ; 
	
	#if LCD_MODE == LCD_8BITMODE
	/*SEND data */
	
	DIO_voidSetPortVal(LCD_DPORT,copy_u8command) ;
	// enable pin
	LCD_voidSendEnablePulse() ;
	#elif LCD_MODE ==LCD_4BITMODE
	LCD_voidSHD(copy_u8command>>4) ;
	LCD_voidSendEnablePulse() ;
	LCD_voidSHD(copy_u8command) ;
	LCD_voidSendEnablePulse() ;
	#endif
	
}

void LCD_voidInit(void){
	
	_delay_ms(40) ; 
	
	#if LCD_MODE == LCD_8BITMODE 
	/*send command ( Function set ) */
	LCD_voidSendCommand(0x38) ; 
	#elif LCD_MODE ==LCD_4BITMODE 
	
	LCD_voidSHD(0b0010) ; 
	LCD_voidSendEnablePulse() ; 
	LCD_voidSHD(0b0010) ;
	LCD_voidSendEnablePulse() ;
    LCD_voidSHD(0b1000) ;
    LCD_voidSendEnablePulse() ;
	#endif 
   /*send command  (display on /off control) */	 
	 LCD_voidSendCommand(0x0C) ; 
	 
   /*send command  (LCD CLR ) */
   LCD_voidSendCommand(0x01) ; 
	
}


void LCD_voidSendString(char  *copy_u8str){
	
	 u8 i=0 ; 
	
	 while(copy_u8str[i] != '\0'){
		 
		 LCD_voidSendData(copy_u8str[i]) ; 
		 i++ ; 
		 
	 }

}


void LCD_voidGoToxy(u8 copy_u8x , u8 copy_u8y){
	
	u8 Loc_u8DDRamAddress = copy_u8x + copy_u8y * 0x40;
	
	SET_BIT(Loc_u8DDRamAddress, 7);
	
	LCD_voidSendCommand(Loc_u8DDRamAddress); 
}



void LCD_voidDrowData(u8 copy_u8pattern, u8* data, u8 copy_u8x, u8 copy_u8y)
{
	// for draw in CGRam
	u8 CGRamAddress = copy_u8pattern * 8;
	
	CLR_BIT(CGRamAddress, 7);
	SET_BIT(CGRamAddress, 6);
	
	LCD_voidSendCommand(CGRamAddress);
	
	for (u8 i = 0; i < 8; i++)
	{
		LCD_voidSendData(data[i]);
	}
	
	// for display --> DDRam
	LCD_voidGoToxy(copy_u8x, copy_u8y);
	LCD_voidSendData(copy_u8pattern);
}




void LCD_voidSendNumber(u32 copy_32num) {
	s8 i=0 ; 
	
	u8 array[10] ; 
	
	if (copy_32num ==0)
	{
		LCD_voidSendData('0') ; 
		
		return ; 
	}
	
	for (i=0 ; copy_32num !=0 ; i++)
	{
		array[i]=copy_32num % 10 +48 ; 
		
		copy_32num /=10 ; 
		
	}

	i-- ;  // 4 
	while( i >=0){
		
		LCD_voidSendData(array[i]) ; 
		i-- ; 
	}
}