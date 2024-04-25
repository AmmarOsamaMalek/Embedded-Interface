

#include "StdTypes.h"
#define F_CPU 8000000
#include <util/delay.h>
#include "ADC_Interface.h"
#include "Sensors_Interface.h"



u16 Temp_Read(void)
{
	//_delay_ms(170);
	u16 temp = (ADC_Read(LM35_CH)*(u32)5000)/1024;
	return temp;   /* Temperature in C*10 */
}


u16 Pressure_Read(void)
{
	u16 ADC = ADC_Read(MPX4115_CH);
	u16 pressure = ((u32)1000*(ADC-55))/921 + 150;
	return pressure;
}