
#include "StdTypes.h"
#include "MemMap.h"
#include "Utlis.h"
#include "DIO_Interface.h"
#include "UART_Service.h"
#include "Servo.h"
#include "Motor_Interface.h"
#include "LCD_Interface.h"
#include "LED.h"
#include "ADC_Interface.h"
#include "Sensors_Interface.h"
#include "Bluetooth.h"
#include <util/delay.h>


static u8 str[30];
static u8 rec[30];
static u16 num = 0;
static flag = 0;
static flag_2 = -1;
static s16 index = -1;

#define commands    7

typedef struct  
{
	char string[20];
	void (*pfunc)(u16);
}Bluetooth_Command_type;

Bluetooth_Command_type command[commands] = {
	
	{"LCD", LCD_WriteNumber},
	{"LEDON", LEDON},
	{"LEDOFF", LEDOFF},
	{"Servo",Servo_SetAngle},
	{"MOTOR_ON_CW",Motor_CW},
	{"MOTOR_OFF",Motor_Stop},
	{"MOTOR_ON_CCW",Motor_CCW}
};


 void Parsing(u8*uart)
{
	u8 i,j = 0;
	for(i = 0;uart[i];i++)
	{
		if(flag == 0)
		{
			str[j] = uart[i];
			j++;
		}

		if(flag == 1)
		{
			num = num*10 + (uart[i]-'0');
		}
		if(uart[i] == ' ')
		{
			flag = 1;
			num = 0;
		}
	}
	flag = 0;
	str[--j] = 0;
}


 u8 String_Compare_NotCaseSenstive(char *str1,char *str2)
{
	u16 i;
	for(i = 0; str1[i]||str2[i]; i++)
	{

		if(str1[i] == (str2[i] + ('a'-'A')) || str2[i] == (str1[i] + ('a'-'A')))
		{

		}
		else if((str1[i] != str2[i]))
		return 0;
	}
	return 1;
}

void Bluetooth_GetCommand(void)
{
	u8 i = 0;
	UART_ReceiveString(&rec);
	Parsing(&rec);
	flag_2 = -1;
	for(i = 0;i<commands;i++)
	{
		if(String_Compare_NotCaseSenstive(str,command[i].string))
		{
			index = i;
			flag_2 = 1;
		}
	}
	    if(flag_2 == -1)
	{
		index = -1;
	}
}


void Bluetooth_ApplyCommand(void)
{
	if(index==-1)
	{
		LCD_SetCursor(1,0);
		LCD_WriteString("Try Again....     ");
	}
	else
	{
		command[index].pfunc(num);
		LCD_SetCursor(1,0);
		LCD_WriteString(rec);
		LCD_WriteString("       ");
	}
	
}

