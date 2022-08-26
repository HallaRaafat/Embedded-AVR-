/*
 * LED_PROG.h
 *
 *  Created on: Sep 18, 2021
 *      Author: Hp
 */

#include "..\\STD_types.h"
#include "..\\HAL\\LED_INT.h"
#include "..\\MCAL\\DIO_REG.h"
#include "..\\MCAL\\Dio_Int.h"
#include "..\\MCAL\\Utilities.h"

void Init_LED (u8 LEDNO )
{
	if (LEDNO ==0)
	{Dio_SetPinDirection(GroupC,PIN2,OUTPUT);}
	else if(LEDNO ==1)
		{Dio_SetPinDirection(GroupC,PIN7,OUTPUT);}
	else if (LEDNO ==2)
		{Dio_SetPinDirection(GroupD,PIN3,OUTPUT);	}
}
void ON (u8 LEDNO)
{

	if (LEDNO == 0)

		Dio_SetPinValue(GroupC,PIN2,HIGH);


	else if(LEDNO ==1)

		Dio_SetPinValue(GroupC,PIN7,HIGH);
	else if (LEDNO ==2)

		Dio_SetPinValue(GroupD,PIN3,HIGH);

}
void OFF(u8 LEDNO)
{
	if (LEDNO ==0)

			Dio_SetPinValue(GroupC,PIN2,LOW);


			else if(LEDNO ==1)

				Dio_SetPinValue(GroupC,PIN7,LOW);
			else if (LEDNO ==2)

				Dio_SetPinValue(GroupD,PIN3,LOW);


}
