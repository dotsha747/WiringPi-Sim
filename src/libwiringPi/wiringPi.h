/*
 * wiringPi.h
 *
 *  Created on: Jan 7, 2018
 *      Author: shahada
 */

#ifndef WIRINGPI_H_
#define WIRINGPI_H_

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

/* function prototypes */

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

#endif /* WIRINGPI_H_ */
