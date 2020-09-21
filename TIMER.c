#include "TIMER.h"
#include "c:\users\lenovo\Documents\Atmel Studio\7.0\LED-Timer\LED-Timer\registers.h"

void TIMER_init (uint8_t timer,uint8_t mode)
{
	if (timer == T0)
	{
		if (mode == Normal)
		{
			T0_CONTROL &=~ (1<<3);
			T0_CONTROL &=~ (1<<6);
		}
		else if (mode == CTC)
		{
			T0_CONTROL |= (1<<3);
			T0_CONTROL &=~ (1<<6);
		}
		else if (mode == PWM)
		{
			T0_CONTROL |= (1<<6);
			T0_CONTROL &=~ (1<<3);
		}
		else if (mode == Fast_PWM)
		{
			T0_CONTROL |= (1<<3);
			T0_CONTROL |= (1<<6);
		}
	}
}
void TIMER_set (uint8_t timer,uint8_t prescalar)
{
	if (timer == T0)
	{
		if (prescalar == NO_CLK)
		{
			T0_CONTROL &=~ (1<<0);
			T0_CONTROL &=~ (1<<1);
			T0_CONTROL &=~ (1<<2);
		}
		else if (prescalar == CLK)
		{
			T0_CONTROL |= (1<<0);
			T0_CONTROL &=~ (1<<1);
			T0_CONTROL &=~ (1<<2);
		}
		else if (prescalar == CLK_8)
		{
			T0_CONTROL &=~ (1<<0);
			T0_CONTROL |= (1<<1);
			T0_CONTROL &=~ (1<<2);
		}
		else if (prescalar == CLK_64)
		{
			T0_CONTROL |= (1<<0);
			T0_CONTROL |= (1<<1);
			T0_CONTROL &=~ (1<<2);
		}
		else if (prescalar == CLK_256)
		{
			T0_CONTROL &=~ (1<<0);
			T0_CONTROL &=~ (1<<1);
			T0_CONTROL |= (1<<2);
		}
		else if (prescalar == CLK_1024)
		{
			T0_CONTROL |= (1<<0);
			T0_CONTROL &=~ (1<<1);
			T0_CONTROL |= (1<<2);
		}
	}	
}
uint8_t TIMER_count (uint8_t timer, uint8_t count,uint8_t prescalar)
{
	if (timer == T0)
	
	{
		uint8_t timer_ov = 0;
		while (timer_ov <= count)
		{
			T0_DATA = 0x01;
			TIMER_set(T0,prescalar);
			while ((T_IF&0x01) == 0);
			
			T0_CONTROL = 0;
			T_IF = 0x1;
			T0_DATA = 0x00;
			timer_ov ++;
		}
		if (timer_ov >= count)
		{
			timer_ov = 0;
			return 1;
		}
		else
		return 0;
	}
}
uint8_t TIMER_value (uint8_t timer, uint8_t value,uint8_t prescalar)
{
	if(timer == T0)
	{
		T0_DATA = 256-value;
		TIMER_set(T0,prescalar);
		uint8_t timer_ov =0;
		while ((T_IF&0x01) == 0);
		
		T0_CONTROL = 0;
		T0_DATA = 0x00;
		T_IF = 0x1;
		timer_ov ++;
		if(timer_ov >=1)
		{
			timer_ov =0;
			return 1;
		}
		else
		return 0;
	}
}