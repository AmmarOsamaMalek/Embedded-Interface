 


#ifndef BLUETOOTH_H_
#define BLUETOOTH_H_

void Parsing(u8*uart);
u8 String_Compare_NotCaseSenstive(char *str1,char *str2);
void Bluetooth_GetCommand(void);
void Bluetooth_ApplyCommand(void);


#endif /* BLUETOOTH_H_ */