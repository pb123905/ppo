#ifndef STEPPER_H
#define STEPPER_H

class Led;

class Stepper{
public:
	void StepRight(void);
	void StepLeft(void);
	void SetLed(Led* pLedSet);
private:
	Led* pLed;
	void Step(enum Step eStep);
	unsigned char ucLedCtr;
};
#endif
