/*
 * AVRInterfacing.c
 *
 * Created: 9/19/2023 4:12:36 PM
 * Author : Eslam 
 */ 

#include "LED_Core.h"
#include "Button_Core.h"
#include "SevenSegment_Core.h"
#include "PORT_CORE.h"

int main(void)
{
	PORT_Init();
    /* Replace with your application code */
    while (1) 
    {
		SET_BIT(PORTC,1);
    }
}

