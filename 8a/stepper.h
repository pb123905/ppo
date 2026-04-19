#ifndef STEPPER_H
#define STEPPER_H

#include "led.h"

class Stepper{
public:
	void StepRight(void);
	void StepLeft(void);
private:
	Led MyLed;
	void Step(enum Step eStep);
	unsigned char ucLedCtr;
};
#endif
