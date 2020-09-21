/*
 * LED-Timer.c
 *
 * Created: 9/2/2020 6:04:30 PM
 * Author : Lenovo
 */ 

#include "c:\users\lenovo\Documents\Atmel Studio\7.0\LED-Timer\LED-Timer\registers.h"
#include "c:\users\lenovo\Documents\Atmel Studio\7.0\LED-Timer\LED-Timer\MCAL\TIMER\TIMER.h"
#include "c:\users\lenovo\Documents\Atmel Studio\7.0\LED-Timer\LED-Timer\ECUAL\DELAY\DELAY.h"
#include "c:\users\lenovo\Documents\Atmel Studio\7.0\LED-Timer\LED-Timer\MCAL\DIO\DIO.h"
#include "c:\users\lenovo\Documents\Atmel Studio\7.0\LED-Timer\LED-Timer\ECUAL\LED\LED.h"
int main(void)
{
	uint32_t on_time = 500;
	uint32_t off_time = 250;
	LED_init(LED1);
    TIMER_init(T0,Normal);
	
	
    while (1) 
    {
		LED_set(LED1,ON);
		delay_msec(T0,on_time);
		LED_set(LED1,OFF);
		delay_msec(T0,off_time);
		
    }
}

