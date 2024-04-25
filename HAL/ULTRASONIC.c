

#include "StdTypes.h"
#include "DIO_Interface.h"
#include "Timers.h"
#include "ULTRASONIC.h"
#define  F_CPU 8000000
#include <util/delay.h>

static volatile u16 t1,t2;
static volatile u8 flag=0;


static void f1(void);

void ULTRASONIC_Init(void)
{
	Timer1_ICU_SetCallBack(f1);
	Timer1_ICU_InterruptEnable();
}

u8 ULTRASONIC_GetDistance(ULTRASONIC_type us,u16*pdistance)
{
	u16 t,d;
	TCNT1=0;
     flag=0;
	u16 c=0;
	Timer1_InputCaptureEdge(RISING);
	Dio_WritePin(us,HIGH);
	_delay_us(10);
	Dio_WritePin(us,LOW);
	while((flag<2)&&(c<23000))
	{
		c++;
		_delay_us(1);
	}
	if (flag==2)
	{
		t=t2-t1;
		d=t/58;  // (340*100*t)/(2*1000000) in cm
		*pdistance=d;
		return 1;
	}
	
	return 0;
}

static void f1(void)
 {
	if (flag==0)
	{
		t1=ICR1;
		Timer1_InputCaptureEdge(FALLING);
		flag=1;
	}
	else if (flag==1)
	{
		t2=ICR1;
		flag=2;
	}
}

