

#ifndef MCAL_PWM_INIT_H_
#define MCAL_PWM_INIT_H_

#include "..\\STD_types.h"
#include "..\\MCAL\\DIO_REG.h"
#include "..\\MCAL\\Utilities.h"
#include "..\\MCAL\\ADC_int.h"

void Timer_PWM_nit0(void);
void Timer_PWM_setDuty0(u8 Duty_Percent);



#endif /* MCAL_PWM_INIT_H_ */
