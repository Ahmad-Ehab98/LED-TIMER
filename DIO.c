/*
 * CFile1.c
 *
 * Created: 8/24/2020 10:29:28 PM
 *  Author: Lenovo
 */ 

#include "c:\users\lenovo\Documents\Atmel Studio\7.0\LED-Timer\LED-Timer\registers.h"
#include "DIO.h"
void DIO_init(uint8_t port,uint8_t pin,DIR dir)
{
	if (port == PORTA)
	{
		if (dir)
		  PORTA_DIR |=(1<<pin);
		else if (!dir)
		  PORTA_DIR &=~(1<<pin);

	}
	else if (port == PORTB)
	{
		if (dir)
		PORTB_DIR |=(1<<pin);
		else if (!dir)
		PORTB_DIR &=~(1<<pin);
	}
	else if (port == PORTC)
	{
		if (dir)
		PORTC_DIR |=(1<<pin);
		else if (!dir)
		PORTC_DIR &=~(1<<pin);
	}
	else if (port == PORTD)
	{
		if (dir)
		PORTD_DIR |=(1<<pin);
		else if (!dir)
		PORTD_DIR &=~(1<<pin);
	}
}
void DIO_write (uint8_t port,uint8_t pin,DIR dir)
{
		if (port == PORTA)
		{
			if (dir)
			PORTA_DATA |=(1<<pin);
			else if (!dir)
			PORTA_DATA &=~(1<<pin);

		}
		else if (port == PORTB)
		{
			if (dir)
			PORTB_DATA |=(1<<pin);
			else if (!dir)
			PORTB_DATA &=~(1<<pin);
		}
		else if (port == PORTC)
		{
			if (dir)
			PORTC_DATA |=(1<<pin);
			else if (!dir)
			PORTC_DATA &=~(1<<pin);
		}
		else if (port == PORTD)
		{
			if (dir)
			PORTD_DATA |=(1<<pin);
			else if (!dir)
			PORTD_DATA &=~(1<<pin);
		}
}
void DIO_toggle (uint8_t port,uint8_t pin)
{
	if (port == PORTA)
	{
		PORTA_DATA ^= (1<<pin);
	}
	if (port == PORTB)
	{
		PORTB_DATA ^= (1<<pin);
	}
	if (port == PORTC)
	{
		PORTC_DATA ^= (1<<pin);
	}
	if (port == PORTD)
	{
		PORTD_DATA ^= (1<<pin);
	}
}
uint8_t DIO_read (uint8_t port,uint8_t pin)
{
	if (port == PORTA)
	{
		if ((PORTA_PIN & (1<<pin))==1)
		return pin;
	}
	else if (port == PORTB)
	{
		if ((PORTB_PIN & (1<<pin))==1)
		return pin;
	}
	else if (port == PORTC)
	{
		if ((PORTC_PIN & (1<<pin))==1)
		return pin;
	}
	else if (port == PORTD)
	{
		if ((PORTD_PIN & (1<<pin))==1)
		return pin;
	}
	else
	return -1;
}