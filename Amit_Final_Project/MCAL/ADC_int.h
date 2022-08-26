/*
 * ADC_int.h
 *
 *  Created on: Oct 2, 2021
 *      Author: Ahmed hisham
 */

#ifndef ADC_INT_H_
#define ADC_INT_H_

#include "..\\STD_types.h"
#include "..\\MCAL\\Utilities.h"
#include "..\\MCAL\\DIO_Int.h"

enum{
	Channel0,Channel1,Channel2,Channel3,Channel4,Channel5,Channel6,Channel7

};
#define ADMUX *((volatile u8 *)0x27)
#define ADCSRA *((volatile u8 *)0x26)
#define ADCL *((volatile u8 *)0x24)
#define ADCH *((volatile u8 *)0x25)


void ADC_init(void);
u32 ADC_read(u8 channel);
#endif /* ADC_INT_H_ */
