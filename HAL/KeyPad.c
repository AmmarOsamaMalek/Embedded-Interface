#include "StdTypes.h"
#include "DIO_Interface.h"
#include "KeyPad_Cfg.h"
#include "KeyPad_Interface.h"


void KEYPAD_Init(void)
{
	Dio_WritePin(FIRST_OUTPUT,HIGH);
	Dio_WritePin(FIRST_OUTPUT+1,HIGH);
	Dio_WritePin(FIRST_OUTPUT+2,HIGH);
	Dio_WritePin(FIRST_OUTPUT+3,HIGH);
}

u8 KEYPAD_GetKey(void)
{
	u8 r,c,key=NO_KEY;
	for (r=0;r<ROWS;r++)
	{
		Dio_WritePin(FIRST_OUTPUT+r,LOW);
		for (c=0;c<COLS;c++)
		{
			if (Dio_ReadPin(FIRST_INPUT+c)==LOW)
			{
				key=KeysArray[r][c];
				while(Dio_ReadPin(FIRST_INPUT+c)==LOW);
			}
		}
		Dio_WritePin(FIRST_OUTPUT+r,HIGH);
	}
	
	return key;
	
}