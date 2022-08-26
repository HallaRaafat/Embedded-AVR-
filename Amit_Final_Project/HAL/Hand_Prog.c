
#include "Hand_Init.h"
#define threshold1 450
#define threshold2 470
#define threshold3 420
#define threshold4 470

#define Position1 450
#define Position2 500


void Hand_Init ()
{
	 ADC_init();

}
fingers Fingers ()
{

u16 index = ADC_read(Channel4);
u16 middle = ADC_read(Channel5);
u16 ring = ADC_read(Channel6);
u16 little = ADC_read(Channel7);

if(index<threshold1 )		//less than == up , bigger than == down
{
	return INDEX ;
}
else if(middle<threshold2)	//less than == up , bigger than == down
{

	return MIDDLE;
}
else if ( ring<threshold3)	//less than == up , bigger than == down
{

	return RING;
}
else if( little<threshold4)	//less than == up , bigger than == down
{

	return LITTLE;
}
else
{
	return NONE;
}

}
u8 Thumb_Position()
{u16 thumb = ADC_read(Channel0);
	if (thumb<Position1)
	{
		return 100;
	}
	else if (thumb<Position2)
	{
		return 75;
	}
	else
	{
		return 50;
	}

}
