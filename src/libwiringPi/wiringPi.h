/*
 *  wiringPi.h
 *
 *  Created on: Jan 7, 2018
 *      Author: shahada
 *
 *  Copyright (c) 2018 Shahada Abubakar.
 *
 *  This file is part of WiringPi-Sim.
 *
 *  This program is free software: you can redistribute it and/or
 *  modify it under the terms of the Lesser GNU General Public
 *  License as  published by the Free Software Foundation, either
 *  version 3 of the  License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 *  See the GNU General Public License for more details.
 *
 */


#ifndef WIRINGPI_H_
#define WIRINGPI_H_

#ifdef __cplusplus
extern "C" {
#endif

/* constants and enums ... copied from original wiringPi.h */

#ifndef TRUE
#  define       TRUE    (1==1)
#  define       FALSE   (!TRUE)
#endif

#define INPUT                    0
#define OUTPUT                   1
#define PWM_OUTPUT               2
#define GPIO_CLOCK               3
#define SOFT_PWM_OUTPUT          4
#define SOFT_TONE_OUTPUT         5
#define PWM_TONE_OUTPUT          6

#define LOW                      0
#define HIGH                     1

// Pull up/down/none

#define PUD_OFF                  0
#define PUD_DOWN                 1
#define PUD_UP                   2

// PWM

#define PWM_MODE_MS             0
#define PWM_MODE_BAL            1

// Interrupt levels

#define INT_EDGE_SETUP          0
#define INT_EDGE_FALLING        1
#define INT_EDGE_RISING         2
#define INT_EDGE_BOTH           3

/* core function prototypes */

int wiringPiSetup (void);

int wiringPiSetupGpio (void);

int wiringPiSetupPhys (void);

int wiringPiSetupSys (void);

void pinMode (int pin, int mode);

void pullUpDnControl (int pin, int pud);

void digitalWrite (int pin, int value);

void pwmWrite (int pin, int value);

int digitalRead (int pin);

int analogRead (int pin);

void analogWrite (int pin, int value);

/* timing function prototypes */

unsigned int millis (void);

unsigned int micros (void);

void delay (unsigned int howLong);

void delayMicroseconds (unsigned int howLong);



#ifdef __cplusplus
}
#endif


#endif /* WIRINGPI_H_ */

