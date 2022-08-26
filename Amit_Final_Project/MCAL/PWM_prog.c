
#include "..\\MCAL\\PWM_init.h"

void Timer_PWM_nit0(void)
{
	//mode select: fast PWM
	set_bit(TCCR0,6);
	set_bit(TCCR0,3);
	//set it to non-inverted
	set_bit(TCCR0,5);
	//Prescalar 128
	set_bit(TCCR0,0);
	set_bit(TCCR0,2);
	//B3 OUTPUT
	Dio_SetPinDirection(GroupB,3,OUTPUT);

}
void Timer_PWM_setDuty0(u8 Duty_Percent)
{
	OCR0=(Duty_Percent*255)/100;
}


