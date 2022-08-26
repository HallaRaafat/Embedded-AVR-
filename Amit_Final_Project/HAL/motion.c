/*
 * motion.c
 *
 *  Created on: Dec 16, 2021
 *      Author: Ahmed hisham
 */
#include "..\\MCAL\\DIO_Int.h"

void motion_init(void)
{
	// Enable 1
	Dio_SetPinDirection(GroupD,PIN4,INPUT);

	// Enable 2
	Dio_SetPinDirection(GroupD,PIN5,INPUT);

	// Motor 1
	Dio_SetPinDirection(GroupC,PIN3,OUTPUT);
	Dio_SetPinDirection(GroupC,PIN4,OUTPUT);

	// Motor 2
	Dio_SetPinDirection(GroupC,PIN5,OUTPUT);
	Dio_SetPinDirection(GroupC,PIN6,OUTPUT);
	// initialize timers
	Timer_PWM_nit0();
}
void forward()
{
	Dio_SetPinValue(GroupC,PIN3,HIGH);
	Dio_SetPinValue(GroupC,PIN4,LOW);
	Dio_SetPinValue(GroupC,PIN5,HIGH);
	Dio_SetPinValue(GroupC,PIN6,LOW);
}
void backward(void)
{
	Dio_SetPinValue(GroupC,PIN3,LOW);
	Dio_SetPinValue(GroupC,PIN4,HIGH);
	Dio_SetPinValue(GroupC,PIN5,LOW);
	Dio_SetPinValue(GroupC,PIN6,HIGH);
}
void right(void)
{
	Dio_SetPinValue(GroupC,PIN3,LOW);
	Dio_SetPinValue(GroupC,PIN4,HIGH);
	Dio_SetPinValue(GroupC,PIN5,HIGH);
	Dio_SetPinValue(GroupC,PIN6,LOW);
}
void left(void)
{
	Dio_SetPinValue(GroupC,PIN3,HIGH);
	Dio_SetPinValue(GroupC,PIN4,LOW);
	Dio_SetPinValue(GroupC,PIN5,LOW);
	Dio_SetPinValue(GroupC,PIN6,HIGH);
}
void stop(void)
{
	Dio_SetPinValue(GroupC,PIN3,LOW);
	Dio_SetPinValue(GroupC,PIN4,LOW);
	Dio_SetPinValue(GroupC,PIN5,LOW);
	Dio_SetPinValue(GroupC,PIN6,LOW);
}
void Variable_Speed(u8 Duty)
{
	Timer_PWM_setDuty0(Duty);
}


