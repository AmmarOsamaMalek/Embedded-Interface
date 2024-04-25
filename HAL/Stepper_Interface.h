


#ifndef STEPPER_INTERFACE_H_
#define STEPPER_INTERFACE_H_

#include "StdTypes.h"
#include "DIO_Interface.h"
#define F_CPU 8000000
#include <util/delay.h>
/**********************************************************/
#define COIL1A  PIND0
#define COIL1B  PIND1
#define COIL2A  PIND2
#define COIL2B  PIND3
#define DELAY  70
#define STEPPER_FULL_REVOLUTION   50
typedef enum{
	CW,
	CCW
	}Stepper_Direction_type;
/**********************************************************/
void Stepper_BiPolar_CW(void);
void Stepper_BiPolar_CCW(void);
void Stepper_UniPolar_CW(void);
void Stepper_UniPolar_CCW(void);
void Stepper_UniPolar_CW_HS(void);
void Stepper_UniPolar_CCW_HS(void);
void Stepper_RotateByRevolution(u32 rev,Stepper_Direction_type d);
void Stepper_RotateByAngle(s16 angle);
#endif /* STEPPER_INTERFACE_H_ */