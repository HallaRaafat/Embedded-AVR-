

#ifndef UART_INT_H_
#define UART_INT_H_
#include "..\\STD_types.h"
#include "..\\MCAL\\Utilities.h"
#include "..\\MCAL\\DIO_REG.h"
#include "..\\MCAL\\DIO_Int.h"

void UART_init(void);
void UART_Send(u8 data);
u8 UART_Recieve(void);
void UART_Array_Send(u8 arr[]);

#endif /* UART_INT_H_ */
