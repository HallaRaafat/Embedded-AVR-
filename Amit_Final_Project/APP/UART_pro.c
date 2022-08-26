
#include "..\\APP\\UART_int.h"

void UART_init(void)
{
	//Enable UCSRC
	//set_bit(UCSRC,7);
	//Enable Rx
	set_bit(UCSRB,4);
	//Enable Tx
	set_bit(UCSRB,3);
	//8-bits (Data)
	set_bit(UCSRC,1);
	set_bit(UCSRC,2);
	//No parity
	clr_bit(UCSRC,4);
	clr_bit(UCSRC,5);
	//single stop
	clr_bit(UCSRC,3);

	//baud rate = 9600
	UBRRH=0;
	UBRRL = 103;

}

void UART_Send(u8 data)
{
	//wait till transmission of buffer is empty
	while(Get_bit(UCSRA,5)!=1);
	//send data
	UDR = data;

}

u8 UART_Recieve(void)
{
	//wait till receive is complete
	while(Get_bit(UCSRA,7)!=1);
	//return data
	return UDR;

}
void UART_Array_Send(u8 arr[])
{
	u8 i=0;
		while(arr[i]!='\0')
		{
			UART_Send(arr[i]);
			i++;
		}
}
