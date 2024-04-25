
#ifndef I2C_H_
#define I2C_H_

#define SLAVE1_AD   0x10
#define SLAVE2_AD   0x03
#define SLAVE3_AD   0x04


typedef enum{
	SLAVE1 = 0,
	SLAVE2,
	SLAVE3
}SLAVE_NUMBER;

/*     Master Mode    */

void I2C_InitMaster(void);

void I2C_StartCondition(void);

void I2C_StopCondition(void);

void I2C_WriteData(u8 data);

void I2C_MasterSendData(SLAVE_NUMBER SLAVE,u8 data);


/*    Slave Mode     */

void I2C_InitSlave(u8 Slave_Address);

void I2C_SlaveSend(u8 data);

void I2C_Listen(void);

u8 I2C_SlaveReceiveData(u8 IsLast);

#endif /* I2C_H_ */