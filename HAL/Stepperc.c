
#include "Stepper_Interface.h"



void Stepper_BiPolar_CW(void)
{
	
	Dio_WritePin(COIL1A,HIGH);
	Dio_WritePin(COIL1B,LOW);
	Dio_WritePin(COIL2A,LOW);
	Dio_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	
	Dio_WritePin(COIL1A,LOW);
	Dio_WritePin(COIL1B,LOW);
	Dio_WritePin(COIL2A,HIGH);
	Dio_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	
	Dio_WritePin(COIL1A,LOW);
	Dio_WritePin(COIL1B,HIGH);
	Dio_WritePin(COIL2A,LOW);
	Dio_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	
	Dio_WritePin(COIL1A,LOW);
	Dio_WritePin(COIL1B,LOW);
	Dio_WritePin(COIL2A,LOW);
	Dio_WritePin(COIL2B,HIGH);
	_delay_ms(DELAY);
	
}

void Stepper_BiPolar_CCW(void)
{
	Dio_WritePin(COIL1A,LOW);
	Dio_WritePin(COIL1B,LOW);
	Dio_WritePin(COIL2A,LOW);
	Dio_WritePin(COIL2B,HIGH);
	_delay_ms(DELAY);
	
	Dio_WritePin(COIL1A,LOW);
	Dio_WritePin(COIL1B,HIGH);
	Dio_WritePin(COIL2A,LOW);
	Dio_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
		
	Dio_WritePin(COIL1A,LOW);
	Dio_WritePin(COIL1B,LOW);
	Dio_WritePin(COIL2A,HIGH);
	Dio_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
		
	Dio_WritePin(COIL1A,HIGH);
	Dio_WritePin(COIL1B,LOW);
	Dio_WritePin(COIL2A,LOW);
	Dio_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
}

void Stepper_UniPolar_CW(void)
{
	Dio_WritePin(COIL1A,HIGH);
	Dio_WritePin(COIL1B,LOW);
	Dio_WritePin(COIL2A,LOW);
	Dio_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	
	Dio_WritePin(COIL1A,LOW);
	Dio_WritePin(COIL1B,HIGH);
	Dio_WritePin(COIL2A,LOW);
	Dio_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	
	Dio_WritePin(COIL1A,LOW);
	Dio_WritePin(COIL1B,LOW);
	Dio_WritePin(COIL2A,HIGH);
	Dio_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	
	Dio_WritePin(COIL1A,LOW);
	Dio_WritePin(COIL1B,LOW);
	Dio_WritePin(COIL2A,LOW);
	Dio_WritePin(COIL2B,HIGH);
	_delay_ms(DELAY);
}

void Stepper_UniPolar_CCW(void)
{
	Dio_WritePin(COIL1A,LOW);
	Dio_WritePin(COIL1B,LOW);
	Dio_WritePin(COIL2A,LOW);
	Dio_WritePin(COIL2B,HIGH);
	_delay_ms(DELAY);
	
	Dio_WritePin(COIL1A,LOW);
	Dio_WritePin(COIL1B,LOW);
	Dio_WritePin(COIL2A,HIGH);
	Dio_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	
	Dio_WritePin(COIL1A,LOW);
	Dio_WritePin(COIL1B,HIGH);
	Dio_WritePin(COIL2A,LOW);
	Dio_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	
	Dio_WritePin(COIL1A,HIGH);
	Dio_WritePin(COIL1B,LOW);
	Dio_WritePin(COIL2A,LOW);
	Dio_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
}


void Stepper_UniPolar_CW_HS(void)
{
	Dio_WritePin(COIL1A,HIGH);
	Dio_WritePin(COIL1B,LOW);
	Dio_WritePin(COIL2A,LOW);
	Dio_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	
	Dio_WritePin(COIL1A,HIGH);
	Dio_WritePin(COIL1B,HIGH);
	Dio_WritePin(COIL2A,LOW);
	Dio_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
/******************************************************/	
	Dio_WritePin(COIL1A,LOW);
	Dio_WritePin(COIL1B,HIGH);
	Dio_WritePin(COIL2A,LOW);
	Dio_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	
	Dio_WritePin(COIL1A,LOW);
	Dio_WritePin(COIL1B,HIGH);
	Dio_WritePin(COIL2A,HIGH);
	Dio_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
/**********************************************************/	
	Dio_WritePin(COIL1A,LOW);
	Dio_WritePin(COIL1B,LOW);
	Dio_WritePin(COIL2A,HIGH);
	Dio_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	
	Dio_WritePin(COIL1A,LOW);
	Dio_WritePin(COIL1B,LOW);
	Dio_WritePin(COIL2A,HIGH);
	Dio_WritePin(COIL2B,HIGH);
	_delay_ms(DELAY);
/*************************************************************/	
	Dio_WritePin(COIL1A,LOW);
	Dio_WritePin(COIL1B,LOW);
	Dio_WritePin(COIL2A,LOW);
	Dio_WritePin(COIL2B,HIGH);
	_delay_ms(DELAY);
	
	Dio_WritePin(COIL1A,HIGH);
	Dio_WritePin(COIL1B,LOW);
	Dio_WritePin(COIL2A,LOW);
	Dio_WritePin(COIL2B,HIGH);
	_delay_ms(DELAY);
	
	
}

void Stepper_UniPolar_CCW_HS(void)
{
	Dio_WritePin(COIL1A,LOW);
	Dio_WritePin(COIL1B,LOW);
	Dio_WritePin(COIL2A,LOW);
	Dio_WritePin(COIL2B,HIGH);
	_delay_ms(DELAY);
	
	Dio_WritePin(COIL1A,LOW);
	Dio_WritePin(COIL1B,LOW);
	Dio_WritePin(COIL2A,HIGH);
	Dio_WritePin(COIL2B,HIGH);
	_delay_ms(DELAY);
/*************************************************************/		
	Dio_WritePin(COIL1A,LOW);
	Dio_WritePin(COIL1B,LOW);
	Dio_WritePin(COIL2A,HIGH);
	Dio_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	
	Dio_WritePin(COIL1A,LOW);
	Dio_WritePin(COIL1B,HIGH);
	Dio_WritePin(COIL2A,HIGH);
	Dio_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	/******************************************************/
	Dio_WritePin(COIL1A,LOW);
	Dio_WritePin(COIL1B,HIGH);
	Dio_WritePin(COIL2A,LOW);
	Dio_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	
	Dio_WritePin(COIL1A,HIGH);
	Dio_WritePin(COIL1B,HIGH);
	Dio_WritePin(COIL2A,LOW);
	Dio_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
/***********************************************************/	
	Dio_WritePin(COIL1A,HIGH);
	Dio_WritePin(COIL1B,LOW);
	Dio_WritePin(COIL2A,LOW);
	Dio_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	
	Dio_WritePin(COIL1A,HIGH);
	Dio_WritePin(COIL1B,LOW);
	Dio_WritePin(COIL2A,LOW);
	Dio_WritePin(COIL2B,HIGH);
	_delay_ms(DELAY);
}

void Stepper_RotateByRevolution(u32 rev,Stepper_Direction_type d)
{
	u16 i;
		switch(d)
		{
			case CW:
			for(i = 0;i<STEPPER_FULL_REVOLUTION*rev;i++)
			{
				Stepper_UniPolar_CW();	
			}
			break;
			case CCW:
			for(i = 0;i<STEPPER_FULL_REVOLUTION*rev;i++)
			{
				Stepper_UniPolar_CCW();
			}
			break;
		}
}

void Stepper_RotateByAngle(s16 angle)
{ u16 i;
		if(angle>=0)
		{
			for(i = 0;i<(STEPPER_FULL_REVOLUTION*angle)/360;i++)
			{
				Stepper_UniPolar_CW();
			}
		}
		else
		{
			angle*=-1;
			for(i = 0;i<(STEPPER_FULL_REVOLUTION*angle)/360;i++)
			{
				Stepper_UniPolar_CCW();
			}
		}
}
