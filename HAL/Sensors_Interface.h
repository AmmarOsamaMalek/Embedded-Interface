

#ifndef SENSORS_INTERFACE_H_
#define SENSORS_INTERFACE_H_

#define LM35_CH     0
#define MPX4115_CH  7


u16 Temp_Read(void);
u16 Pressure_Read(void);


#endif /* SENSORS_INTERFACE_H_ */