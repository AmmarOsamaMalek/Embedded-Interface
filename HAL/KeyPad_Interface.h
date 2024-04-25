/*
 * KeyPad.h
 *
 * Created: 4/8/2023 11:10:11 AM
 *  Author: Ammar
 */ 


#ifndef KEYPAD_H_
#define KEYPAD_H_


#define  NO_KEY   'T'

void KEYPAD_Init(void);

u8 KEYPAD_GetKey(void);



#endif /* KEYPAD_H_ */