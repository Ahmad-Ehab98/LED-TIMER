/*
 * LED.h
 *
 * Created: 8/25/2020 12:34:56 AM
 *  Author: Lenovo
 */ 


#ifndef LED_H_
#define LED_H_

#define LED1 1
#define LED2 2
#define LED3 3
#define LED4 4

typedef enum STATUS
{
	OFF,
	ON
}STATUS;

void LED_init (uint8_t led);
void LED_set (uint8_t led,STATUS stat);
uint8_t LED_status(uint8_t led);
void LED_toggle (uint8_t led);

#endif /* LED_H_ */