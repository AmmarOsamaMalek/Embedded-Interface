
#include "StdTypes.h"
#include "MemMap.h"
#include "Utlis.h"
#include "DIO_Interface.h"
#include "LED.h"

void LEDON(u8 led)
{
	SET_BIT(LED_PORT,led-1);
}

void LEDOFF(u8 led)
{
	CLEAR_BIT(LED_PORT,led-1);
}