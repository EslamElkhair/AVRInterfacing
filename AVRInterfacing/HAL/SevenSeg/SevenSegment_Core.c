/*
 * SevenSegment_Core.c
 *
 * Created: 9/21/2023 9:31:24 PM
 *  Author: Eslam
 */ 


#include "SevenSegment_Core.h"

void sevenSegment_init(void) {
	DDRA= 0xff;
	SET_BIT(DDRC,6);
	SET_BIT(DDRC,7);
}

void sevenSegment_write(uint8 num) {
	SET_BIT(PORTC,6);
	CLR_BIT(PORTC,7);
	
	uint8 sevenSegment_values[10]= {0x7e,0x0c,0xb6,0x9e,0xcc,0xda,0xfa,0x0e,0xfe,0xce};
	
	PORTA = sevenSegment_values[num%10];
	
	_delay_ms(1);
	CLR_BIT(PORTC,6);
	SET_BIT(PORTC,7);
	
	PORTA = sevenSegment_values[num/10];
	_delay_ms(1);
}