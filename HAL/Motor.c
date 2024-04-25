

#define  MOTOR_PROG 1
#include "StdTypes.h"
//#include "Utlis.h"
#include "DIO_Interface.h"
#include "Motor_Interface.h"
#include "Motor_Cfg.h"


void Motor_Init(void)
{
	/* Do Nothing*/
}

void Motor_Stop(MOTOR_type motor)
{
	Dio_WritePin(MotorPinsArray[motor][IN1],LOW);
	Dio_WritePin(MotorPinsArray[motor][IN2],LOW);
	//Dio_WritePin(MotorPinsArray[motor][EN],LOW);
}

void Motor_CW(MOTOR_type motor)
{
	//Dio_WritePin(MotorPinsArray[motor][EN],HIGH);
	Dio_WritePin(MotorPinsArray[motor][IN1],HIGH);
	Dio_WritePin(MotorPinsArray[motor][IN2],LOW);
}

void Motor_CCW(MOTOR_type motor)
{
	//Dio_WritePin(MotorPinsArray[motor][EN],HIGH);
	Dio_WritePin(MotorPinsArray[motor][IN1],LOW);
	Dio_WritePin(MotorPinsArray[motor][IN2],HIGH);
}