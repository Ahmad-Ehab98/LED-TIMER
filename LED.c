/*
 * LED.c
 *
 * Created: 8/25/2020 12:35:17 AM
 *  Author: Lenovo
 */ 
#include "c:\users\lenovo\Documents\Atmel Studio\7.0\LED-Timer\LED-Timer\registers.h"
#include "c:\users\lenovo\Documents\Atmel Studio\7.0\LED-Timer\LED-Timer\MCAL\DIO\DIO.h"
#include "c:\users\lenovo\Documents\Atmel Studio\7.0\LED-Timer\LED-Timer\ECUAL\LED\LED.h"
#include "c:\users\lenovo\Documents\Atmel Studio\7.0\LED-Timer\LED-Timer\MCAL\TIMER\TIMER.h"
void LED_init (uint8_t led)
{
	if (led == LED1)
	{
		DIO_init(PORTA,PIN0,HIGH);
	}
	if (led == LED2)
	{
		DIO_init(PORTA,PIN1,HIGH);
	}
	else if (led == LED3)
	{
		DIO_init(PORTA,PIN2,HIGH);
	}
	else if (led == LED4)
	{
		DIO_init(PORTA,PIN3,HIGH);
	}
	
}
void LED_set (uint8_t led,STATUS stat)
{
	if (led == LED1)
	{
		if (stat == ON)
		  DIO_write(PORTA,PIN0,HIGH);
		else if (stat == OFF)
		  DIO_write(PORTA,PIN0,LOW);
	}
	else if (led == LED2)
	{
		if (stat == ON)
		DIO_write(PORTA,PIN1,HIGH);
		else if (stat == OFF)
		DIO_write(PORTA,PIN1,LOW);
	}
	else if (led == LED3)
	{
		if (stat == ON)
		DIO_write(PORTA,PIN2,HIGH);
		else if (stat == OFF)
		DIO_write(PORTA,PIN2,LOW);
	}
	else if (led == LED4)
	{
		if (stat == ON)
		DIO_write(PORTA,PIN3,HIGH);
		else if (stat == OFF)
		DIO_write(PORTA,PIN3,LOW);
	}
}
uint8_t LED_status(uint8_t led)
{
   if (led == LED1)
   return DIO_read(PORTA,PIN0);

   if (led == LED2)
   return DIO_read(PORTA,PIN1);
   
   if (led == LED3)
   return DIO_read(PORTA,PIN2);
   
   if (led == LED4)
   return DIO_read(PORTA,PIN3);
   
   else
   return -1;
}
void LED_toggle (uint8_t led)
{
   if (led == LED1)
   DIO_toggle(PORTA,PIN0);
   
   if (led == LED2)
   DIO_toggle(PORTA,PIN1);
   
   if (led == LED3)
   DIO_toggle(PORTA,PIN2);
   
   if (led == LED4)
   DIO_toggle(PORTA,PIN3);
}