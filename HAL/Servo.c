
#include "StdTypes.h"
#include "Servo.h"
#include "Timers.h"


void Servo_Init(void)
{
	Timer1_Init(TIMER1_FASTPWM_OCRA_TOP_MODE,TIMER1_SCALER_8);
	Timer1_OCRB1Mode(OCRB_NON_INVERTING);
	OCR1A = SERVO_TOP;
}

void Servo_SetAngle(u16 angle)
{
	OCR1B = (angle*(u32)1000)/180 + 999;
}