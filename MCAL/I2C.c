

#include "StdTypes.h"
#include "MemMap.h"
#include "Utlis.h"
#include "I2C.h"

/*     Master  Mode   */

void I2C_InitMaster(void)
{
	/* adjust master clock  (160kHZ) */
	TWBR = 17;
	CLEAR_BIT(TWSR,TWPS0);
	CLEAR_BIT(TWSR,TWPS1);
	// ENABLE TWI //
	SET_BIT(TWCR,TWEN);
}

void I2C_StartCondition(void)
{
	TWCR = (1<<TWINT)|(1<<TWSTA)|(1<<TWEN);
	while (!(TWCR & (1<<TWINT)));
}

void I2C_StopCondition(void)
{
	TWCR = (1<<TWINT)|(1<<TWEN)|(1<<TWSTO);
}

void I2C_WriteData(u8 data)
{
	TWDR = data;
	TWCR = (1<<TWINT)|(1<<TWEN);
	while (!(TWCR & (1<<TWINT)));
}

void I2C_MasterSendData(SLAVE_NUMBER SLAVE,u8 data) 
{
	switch(SLAVE)
	{
		case SLAVE1:
		I2C_StartCondition();
		I2C_WriteData(SLAVE1_AD);
		I2C_WriteData(data);
		I2C_StopCondition();
		case SLAVE2:
		I2C_StartCondition();
		I2C_WriteData(SLAVE2_AD<<1);
		I2C_WriteData(data);
		I2C_StopCondition();
		case SLAVE3:
		I2C_StartCondition();
		I2C_WriteData(SLAVE3_AD<<1);
		I2C_WriteData(data);
		I2C_StopCondition();
	}
}


/*     Slave  Mode   */

void I2C_InitSlave(u8 Slave_Address)
{
SET_BIT(TWCR,TWEN);
TWAR = Slave_Address;
TWCR = 	(1<<TWINT)|(1<<TWEN)|(1<<TWEA);
}

void I2C_SlaveSend(u8 data)
{
	TWDR = data;
	TWCR = (1<<TWINT)|(1<<TWEN);
	while (!(TWCR & (1<<TWINT)));
}

void I2C_Listen(void)
{
	while (!(TWCR & (1<<TWINT)));
}

u8 I2C_SlaveReceiveData(u8 IsLast)
{
	if(IsLast == 0) // continue receiving
	TWCR = (1<<TWINT)|(1<<TWEN)|(1<<TWEA);
	else // Just One Byte
	TWCR = (1<<TWINT)|(1<<TWEN);
	while (!(TWCR & (1<<TWINT)));
	return TWDR;
}