/*
 * wiringPi.h
 *
 *  Created on: Jan 7, 2018
 *      Author: shahada
 */

#ifndef WIRINGPI_H_
#define WIRINGPI_H_

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
