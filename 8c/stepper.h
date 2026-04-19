#ifndef STEPPER_H
#define STEPPER_H

#include "LedInv.h"

class Stepper{
public:
	void StepRight(void);
	void StepLeft(void);
private:
	Led MyLed;
	LedInv MyLedInv;
	void Step(enum Step eStep);
	unsigned char ucLedCtr;
};
#endif
