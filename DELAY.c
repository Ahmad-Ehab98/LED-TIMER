/*
 * DELAY.c
 *
 * Created: 9/3/2020 4:42:17 PM
 *  Author: Lenovo
 */ 
#include "DELAY.h"
#include "c:\users\lenovo\Documents\Atmel Studio\7.0\LED-Timer\LED-Timer\registers.h"
#include "c:\users\lenovo\Documents\Atmel Studio\7.0\LED-Timer\LED-Timer\MCAL\TIMER\TIMER.h"
void delay_usec (uint8_t timer,uint32_t us)
{
	if (timer == T0)
	
	{
		TIMER_init(T0,Normal);
		if (us > 256)
		{
			uint8_t count;
			uint8_t remain;
			count = (us/256);
			remain = us%256;
			if (TIMER_count(T0,count,CLK))
			{
				if(TIMER_value(T0,remain,CLK))
				return;
			}
		}
		else if (us <= 256)
		{
			uint8_t us_value =us;
			if(TIMER_value(T0,us_value,CLK))
			return;
		}
	}
}
void delay_msec (uint8_t timer,uint32_t ms)
{
	if (timer == T0)
	
	{
		//TIMER_init(T0,Normal);
		if (ms > 256)
		{
			uint8_t count;
			uint8_t remain;
			count = (ms/256);
			remain = ms%256;
			uint8_t x = TIMER_count(T0,count,CLK_1024);
			uint8_t y = TIMER_value(T0,remain,CLK_1024);
			if (x&y)
			{
				return;
			}
		}
		else if (ms <= 256)
		{
			uint8_t ms_value = ms;
			uint8_t x = TIMER_value(T0,ms_value,CLK_1024);
			if(x)
			return;
		}
	}
}