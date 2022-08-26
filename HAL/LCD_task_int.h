

#ifndef LCD_TASK_INT_H_
#define LCD_TASK_INT_H_

#include "..\\MCAL\\DIO_Int.h"
#include "..\\MCAL\\DIO_REG.h"
#include "..\\STD_types.h"
#include <avr/delay.h>

void LCD_4bits_intial(void);
void LCD_Write_command(u8 command);
void LCD_Write_data(u8 data);
u8 int2char(u8 num);
void LCD_print(u8 arr[]);
void arab_name(void);
void LCD_num(u16 num);

#define LCD_clr LCD_Write_command(0x01)
#define LCD_2nd_line LCD_Write_command(0xC0)
#define LCD_start_over LCD_Write_command(0x80)

#endif /* LCD_TASK_INT_H_ */
