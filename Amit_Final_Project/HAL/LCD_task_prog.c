/*
 * LCD_task_prog.c
 *
 *  Created on: Sep 25, 2021
 *      Author: Ahmed hisham
 */
#include "..\\HAL\\LCD_task_int.h"

void LCD_4bits_intial(void)
{
	Dio_SetPinDirection(GroupB,1,OUTPUT);
	Dio_SetPinDirection(GroupB,2,OUTPUT);
	Dio_SetPinDirection(GroupB,3,OUTPUT);
	Dio_SetPinDirection(GroupA,4,OUTPUT);
	Dio_SetPinDirection(GroupA,5,OUTPUT);
	Dio_SetPinDirection(GroupA,6,OUTPUT);
	Dio_SetPinDirection(GroupA,7,OUTPUT);

	_delay_ms(50);

	LCD_Write_command(0x02);
	LCD_Write_command(0x28);

	_delay_ms(1);

	LCD_Write_command(0x0C);

	_delay_ms(1);

	LCD_Write_command(0x01);

	_delay_ms(2);

	LCD_Write_command(0x06);

}
void LCD_Write_command(u8 command)
{
	Dio_SetPinValue(GroupB,1,LOW);
		Dio_SetPinValue(GroupB,2,LOW);

		PORTA= (PORTA & 0x0F)|(command & 0xF0);
		Dio_SetPinValue(GroupB,3,HIGH);
		_delay_ms(2);
		Dio_SetPinValue(GroupB,3,LOW);

		PORTA= (PORTA & 0x0F)|((command & 0x0F)<<4);
		Dio_SetPinValue(GroupB,3,HIGH);
		_delay_ms(2);
		Dio_SetPinValue(GroupB,3,LOW);
}
void LCD_Write_data(u8 data)
{
	Dio_SetPinValue(GroupB,1,HIGH);
		Dio_SetPinValue(GroupB,2,LOW);

		PORTA= (PORTA & 0x0F)|(data & 0xF0);
		Dio_SetPinValue(GroupB,3,HIGH);
		_delay_ms(2);
		Dio_SetPinValue(GroupB,3,LOW);

		PORTA= (PORTA & 0x0F)|((data & 0x0F)<<4);
		Dio_SetPinValue(GroupB,3,HIGH);
		_delay_ms(2);
		Dio_SetPinValue(GroupB,3,LOW);
}
u8 int2char(u8 num)
{
	u8 charact;
	if(num==1)
		charact='1';
	else if(num==2)
		charact='2';
	else if(num==3)
		charact='3';
	else if(num==4)
		charact='4';
	else if(num==5)
		charact='5';
	else if(num==6)
		charact='6';
	else if(num==7)
		charact='7';
	else if(num==8)
		charact='8';
	else if(num==9)
		charact='9';
	else
		charact='0';
	return charact;
}
void LCD_print(u8 arr[])
{
	u8 i=0;
	while(arr[i]!='\0' && i<=16)
	{
		LCD_Write_data(arr[i]);
		i++;
	}
}
void arab_name(void)
{
	LCD_Write_command(0x40);

			LCD_Write_data(0b00100);
			LCD_Write_data(0b00100);
			LCD_Write_data(0b00100);
			LCD_Write_data(0b00100);
			LCD_Write_data(0b00100);
			LCD_Write_data(0b00100);
			LCD_Write_data(0b00100);
			LCD_Write_data(0b00000);

			LCD_Write_data(0b00000);
			LCD_Write_data(0b01100);
			LCD_Write_data(0b00110);
			LCD_Write_data(0b00010);
			LCD_Write_data(0b00001);
			LCD_Write_data(0b11111);
			LCD_Write_data(0b00000);
			LCD_Write_data(0b00000);

			LCD_Write_data(0b00000);
			LCD_Write_data(0b00000);
			LCD_Write_data(0b00000);
			LCD_Write_data(0b01110);
			LCD_Write_data(0b10001);
			LCD_Write_data(0b10001);
			LCD_Write_data(0b01110);
			LCD_Write_data(0b00000);

			LCD_Write_data(0b00000);
			LCD_Write_data(0b00000);
			LCD_Write_data(0b00000);
			LCD_Write_data(0b00010);
			LCD_Write_data(0b00010);
			LCD_Write_data(0b01111);
			LCD_Write_data(0b00000);
			LCD_Write_data(0b00000);
}
void LCD_num(u16 num)
{
	u16 string[8];
	itoa(num,string,10);
	LCD_print(string);
}
