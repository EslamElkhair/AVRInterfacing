/*
 * SevenSegment_Core.h
 *
 * Created: 9/21/2023 9:31:40 PM
 *  Author: ELGOHARY
 */ 


#ifndef SEVENSEGMENT_CORE_H_
#define SEVENSEGMENT_CORE_H_

#include "BIT_MATH.h"
#include "STD.h"
#include "MCU.h"

#define F_CPU 16000000    //---> frequency of ATMEga 32 --> 16MIPS --> Replacement is in The Library util/delay.h
#include <util/delay.h>

void sevenSegment_init(void);
void sevenSegment_write(uint8 num);

#endif /* SEVENSEGMENT_CORE_H_ */