/*
 *  wiringPi.c
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


#include "wiringPi.h"

int wiringPiSetup (void) {
	return 0;
};

int wiringPiSetupGpio (void) {
	return 0;
};

int wiringPiSetupPhys (void) {
	return 0;
};

int wiringPiSetupSys (void) {
	return 0;
};

void pinMode (int pin, int mode) {};

void pullUpDnControl (int pin, int pud) {};

void digitalWrite (int pin, int value) {};

void pwmWrite (int pin, int value) {};

int digitalRead (int pin) {
	return 1;
};

int analogRead (int pin) {
	return 0;
};

void analogWrite (int pin, int value) {};

