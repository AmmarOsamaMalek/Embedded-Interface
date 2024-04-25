


#ifndef MOTOR_INTERFACE_H_
#define MOTOR_INTERFACE_H_

typedef enum{
	M1,
	M2,
	M3,
	M4,
	TOTAL_MOTORS
}MOTOR_type;


typedef enum{
	IN1,
	IN2,
	EN,
	TOTAL_MOTOR_PINS	
	}MOTOR_Pins_type;



void Motor_Init(void);

void Motor_Stop(MOTOR_type motor);

void Motor_CW(MOTOR_type motor);

void Motor_CCW(MOTOR_type motor);

#endif /* MOTOR_INTERFACE_H_ */