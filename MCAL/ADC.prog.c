
#include "ADC_int.h"
#include <avr/delay.h>

void ADC_init(void)
{
	ADMUX =0;

	set_bit(ADCSRA,7);
	set_bit(ADCSRA,0);
	set_bit(ADCSRA,1);
	clr_bit(ADCSRA,2);

}

u32 ADC_read(u8 channel)
{
	if(channel !=0 && channel <8)
		ADMUX = channel;
	set_bit(ADMUX,6);
	u32 result=0;
	set_bit(ADCSRA,6);
	while(Get_bit(ADCSRA,4)==0);
	set_bit(ADCSRA,4);
	u8 lower=ADCL;
	u16 higher =(ADCH)<<8;
	result=lower|higher ;

	return result;
}
