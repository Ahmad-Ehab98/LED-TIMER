/*
 * TIMER.h
 *
 * Created: 9/2/2020 6:09:48 PM
 *  Author: Lenovo
 */ 


#ifndef TIMER_H_
#define TIMER_H_
#include "D:\3rdCSE\Me\Sprints Embedded Booster\types.h"

#define T0 0
#define T1 1
#define Normal 0
#define CTC 1
#define PWM 2
#define Fast_PWM 3
#define NO_CLK 0
#define CLK 1
#define CLK_8 2
#define CLK_64 3
#define CLK_256 4
#define CLK_1024 5


void TIMER_init (uint8_t timer,uint8_t mode);
void TIMER_set (uint8_t timer,uint8_t prescalar);
uint8_t TIMER_count (uint8_t timer,uint8_t count,uint8_t prescalar);
uint8_t TIMER_value (uint8_t timer,uint8_t value,uint8_t prescalar);

#endif /* TIMER_H_ */