/*
 * motion.h
 *
 *  Created on: Dec 16, 2021
 *      Author: Ahmed hisham
 */

#ifndef MOTION_H_
#define MOTION_H_

#include "..\\MCAL\\DIO_Int.h"
#include "..\\MCAL\\DIO_REG.h"
#include "..\\MCAL\\PWM_init.h"

void motion_init(void);
void forward(void);
void backward(void);
void right(void);
void left(void);
void stop(void);
void Variable_Speed(u8 Duty);
#endif /* MOTION_H_ */
