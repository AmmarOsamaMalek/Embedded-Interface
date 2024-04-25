

#ifndef CAR_H_
#define CAR_H_

#define B_F   PINC1
#define B_B   PIND4
#define B_R   PIND0
#define B_L   PINC6
#define B_S   PIND7

void CAR_Init(); // Set initial speed
void CAR_Runnable(void);
void MoveForward(u8 speed);
void MoveBackward(u8 speed);
void MoveRight(u8 speed);
void MoveLeft(u8 speed);
void Stop(void);
void Turn_Right90(u8 speed);
void Turn_Left90(u8 speed);
void Turn_Right45(u8 speed);
void Turn_Left45(u8 speed);
void Turn_180(u8 speed);
void start_routine(u16 timeout); // in ms
void search(u8 speed);
#endif /* CAR_H_ */