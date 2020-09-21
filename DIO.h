/*
 * DIO.h
 *
 * Created: 8/24/2020 10:45:34 PM
 *  Author: Lenovo
 */ 


#ifndef DIO_H_
#define DIO_H_
#define PORTA 'A'
#define PORTB 'B'
#define PORTC 'C'
#define PORTD 'D'
#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7

typedef enum DIR
{
	LOW,
	HIGH
}DIR;

void DIO_init(uint8_t port,uint8_t pin,DIR dir);
void DIO_write (uint8_t port,uint8_t pin,DIR dir);
void DIO_toggle (uint8_t port,uint8_t pin);
uint8_t DIO_read (uint8_t port,uint8_t pin);

#endif /* DIO_H_ */