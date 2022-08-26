/*
 * main.c
 *
 *  Created on: Oct 2, 2021
 *      Author: Ahmed hisham
 */
#include "..\\HAL\\Hand_Init.h"
#include "..\\HAL\\LCD_task_int.h"
#include "..\\APP\\UART_int.h"
#include "..\\HAL\\motion.h"
#include "..\\MCAL\\Utilities.h"
#include "..\\HAL\\LED_INT.h"




void main(void)
{
#ifdef testing
	LCD_4bits_intial();
#endif
	Init_LED (0);//For stop indication

	motion_init();
	Hand_Init ();
	UART_init();



	while(1)
	{
#ifdef testing
		u32 digital_value=ADC_read(Channel0);
		//analog_value = ((digital_value*5*1000)/1023)
		u32 string[8];
			itoa(digital_value,string,10);
			UART_Send((u16)string[0]);
			UART_Send((u16)string[1]);
			UART_Send((u16)string[2]);
			UART_Send((u16)string[3]);
		UART_Send('\n');

#endif
		u8 Speed= Thumb_Position();
		fingers Condition = Fingers ();
 switch (Condition)
 {case INDEX:
	 forward();
	 break;
 case MIDDLE:
 	 backward();
     break;
 case RING:
  	 right();
      break;
 case LITTLE:
  	 left();
      break;
 case NONE:
	 stop();
	 break;

 }
 Variable_Speed(Speed);

}
}
