/*
 * PORT_CORE.c
 *
 * Created: 9/21/2023 9:58:44 PM
 *  Author: Eslam
 */ 


#include "PORT_CORE.h"

void PORT_Init(void)
{
	uint8 Cnt = 0 , Port = 0, PIN = 0 , DIR = 0;
	for(Cnt = 0;Cnt<DEFINED_PINS;Cnt++)
	{
		Port = PORT_Intialization[Cnt].PIN_NUM / NUMBER_OF_PORT_PINS;
		PIN  = PORT_Intialization[Cnt].PIN_NUM % NUMBER_OF_PORT_PINS;
		DIR  = PORT_Intialization[Cnt].DIR;
		
		switch (DIR)
		{
			case PIN_DIRECTION_OUTPUT :
			switch(Port)
			{
				case PORTAa:
				SET_BIT(DDRA, PIN);
				break;
				
				case PORTBb:
				SET_BIT(DDRB, PIN);
				break;
				
				case PORTCc:
				SET_BIT(DDRC, PIN);
				break;
				case PORTDd:
				SET_BIT(DDRD, PIN);
				break;
			}
			
			break;
			
			case PIN_DIRECTION_INPUT :
			switch(Port)
			{
				case PORTAa:
				CLR_BIT(DDRA, PIN);
				break;
				
				case PORTBb:
				CLR_BIT(DDRB, PIN);
				break;
				
				case PORTCc:
				CLR_BIT(DDRC, PIN);
				break;
				case PORTDd:
				CLR_BIT(DDRD, PIN);
				break;
			}
			
			break;
			
			default:
			break;
		}
	}
	
}

