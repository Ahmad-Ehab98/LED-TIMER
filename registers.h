#ifndef _REGISTERS_H_
#define _REGISTERS_H_

#include "D:\3rdCSE\Me\Sprints Embedded Booster\types.h"

#define PORTA_DATA *((volatile ptochar_t)(0x3B))
#define PORTA_DIR *((volatile ptochar_t)(0x3A))
#define PORTA_PIN *((volatile ptochar_t)(0x39))
#define PORTB_DATA *((volatile ptochar_t)(0x38))
#define PORTB_DIR *((volatile ptochar_t)(0x37))
#define PORTB_PIN *((volatile ptochar_t)(0x36))
#define PORTC_DATA *((volatile ptochar_t)(0x35))
#define PORTC_DIR *((volatile ptochar_t)(0x34))
#define PORTC_PIN *((volatile ptochar_t)(0x33))
#define PORTD_DATA *((volatile ptochar_t)(0x32))
#define PORTD_DIR *((volatile ptochar_t)(0x31))
#define PORTD_PIN *((volatile ptochar_t)(0x30))
#define STATUS_REG *((volatile ptochar_t)(0x5F))
#define T0_CONTROL *((volatile uint8_t*)(0x53))
#define T0_DATA *((volatile uint8_t*)(0x52))
#define T_IF *((volatile uint8_t*)(0x58))
#define T_IMSK *((volatile uint8_t*)(0x59))


//#define T0_CONTROL *((volatile uint8_t*)(0x53))
//#define T0_DATA *((volatile uint8_t*)(0x52))
//#define T_IF *((volatile uint8_t*)(0x58))

#endif