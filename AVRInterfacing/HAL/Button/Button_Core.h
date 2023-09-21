/*
 * Button_Core.h
 *
 * Created: 9/21/2023 9:29:48 PM
 *  Author: ELGOHARY
 */ 


#ifndef BUTTON_CORE_H_
#define BUTTON_CORE_H_


#include "BIT_MATH.h"
#include "MCU.h"

#define F_CPU 16000000
#include <util/delay.h> 

void Button_Init(void);
uint8 Button_GetValue(void);


#endif /* BUTTON_CORE_H_ */