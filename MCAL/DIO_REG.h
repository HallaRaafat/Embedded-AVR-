#ifndef DIO_REG_H_INCLUDED
#define DIO_REG_H_INCLUDED

#define PORTA *((volatile u8 *)0x3B)
#define DDRA *((volatile u8 *)0x3A)
#define PINA *((volatile u8 *)0x39)

#define PORTB *((volatile u8 *)0x38)
#define DDRB *((volatile u8 *)0x37)
#define PINB *((volatile u8 *)0x36)

#define PORTC *((volatile u8 *)0x35)
#define DDRC *((volatile u8 *)0x34)
#define PINC *((volatile u8 *)0x33)

#define PORTD *((volatile u8 *)0x32)
#define DDRD *((volatile u8 *)0x31)
#define PIND *((volatile u8 *)0x30)

#define MCUCR *((volatile u8 *)0x55)
#define MCUCSR *((volatile u8 *)0x54)
#define GICR *((volatile u8 *)0x5B)
#define GIFR *((volatile u8 *)0x5A)
#define SREG *((volatile u8 *)0x5F)

#define TCNT0 *((volatile u8 *)0x52)
#define TCCR0 *((volatile u8 *)0x53)
#define TIMSK *((volatile u8 *)0x59)


#define ADMUX *((volatile u8 *)0x27)
#define ADCSRA *((volatile u8 *)0x26)
#define ADCL *((volatile u8 *)0x24)
#define ADCH *((volatile u8 *)0x25)
#define SFIOR *((volatile u8 *)0x50)

#define OCR0 *((volatile u8 *)0x5C)

#define ICR1 *((volatile u16 *)0x46)
#define TIFR *((volatile u8 *)0x58)
#define TCCR1A *((volatile u8 *)0x4F)
#define TCCR1B *((volatile u8 *)0x4E)
#define TCNT1 *((volatile u16 *)0x4C)


#define UCSRA *((volatile u8 *)0x2B)
#define UCSRB *((volatile u8 *)0x2A)
#define UCSRC *((volatile u8 *)0x40)
#define UBRRL *((volatile u8 *)0x29)
#define UBRRH *((volatile u8 *)0x40)
#define UDR *((volatile u8 *)0x2C)


#define SPCR *((volatile u8 *)0x2D)
#define SPSR *((volatile u8 *)0x2E)
#define SPDR *((volatile u8 *)0x2F)
#endif // DIO_REG_H_INCLUDED
