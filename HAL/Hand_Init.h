
#ifndef HAL_HAND_INIT_H_
#define HAL_HAND_INIT_H_

#include "..\\MCAL\\ADC_int.h"
typedef enum
{
	INDEX,MIDDLE,RING,LITTLE,THUMB,NONE
}fingers;
void Hand_Init ();
u8 Thumb_Position();
fingers Fingers ();





#endif /* HAL_HAND_INIT_H_ */
