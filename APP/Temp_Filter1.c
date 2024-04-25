
#include "StdTypes.h"
#define F_CPU 8000000
#include <util/delay.h>
#include "Sensors_Interface.h"
#include "Temp_Filter.h"

static u16 Queue_Filter[FILTER_RANGE];
static u8 Top = 0;
static u8 Bottom = 0;
static u16 Reference_Temp = 0;
static u16 Filtered_Temp = 0;


u16 InQueue(u16 new_temp)
{
	if(Top == FILTER_RANGE)
	{
		Top = 0;
	}
		Queue_Filter[Top] = new_temp;
		Top++;
	return new_temp;
}

u16 DeQueue(void)
{
	u16 old_temp = 0;
	if(Bottom == FILTER_RANGE)
	{
		Bottom = 0;
	}
		old_temp = Queue_Filter[Bottom];
		Bottom++;
	return old_temp;
}

void TempFilter_Init(void)
{
	u8 i;
	u16 temp_sum = 0;
	_delay_ms(300);
	for(i = 0;i<FILTER_RANGE;i++)
	{
		temp_sum = temp_sum + InQueue(Temp_Read());
	}
	Reference_Temp = temp_sum / FILTER_RANGE;
}

void TempFilterRannable(void)
{
	s16 old_temp = DeQueue();
	s16 new_temp = InQueue(Temp_Read());
	s16 Error = (new_temp - old_temp)/FILTER_RANGE;
	Reference_Temp = Reference_Temp + Error;
	Filtered_Temp = Reference_Temp;
}

u16 TempFilter_Getter(void)
{
	return Filtered_Temp;
}