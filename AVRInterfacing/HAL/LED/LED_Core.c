/*
 * LED_Core.c
 *
 * Created: 9/21/2023 9:30:31 PM
 *  Author: ELGOHARY
 */ 

#include "LED_Core.h"

void LED_Init(void)
{
	SET_BIT(DDRC,1);
	
}
void LED_ON(void)
{
	SET_BIT(PORTC,2);
	
}

void LED_OFF(void)
{
	CLR_BIT(PORTC,2);
	
}

void LED_Toggle(void)
{
	TOGGLE_BIT(PORTC,2);
	
}