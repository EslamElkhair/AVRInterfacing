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
#include "DIO_Core.h"
#include "LCD_Core.h"

int main(void)
{
	PORT_Init();
	LCD_Init();
	LCD_WiteInteger(100);
    /* Replace with your application code */
    while (1) 
    {
		
    }
}

