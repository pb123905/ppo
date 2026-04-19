#include "stepper.h"
#include "keyboard.h"

unsigned char ucInversion;

void Delay(int iTimeInMs){
	int iCycle;
	int iNumberOfCycles = 10000 * iTimeInMs;
	
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {}
}

Stepper MyStepper;

int main(void)
{
	Keyboard MyKeyboard;
	if(BUTTON_4==MyKeyboard.eRead()){
		ucInversion = 1;
	} else {
		ucInversion = 0;
	}
	while(1){
		Delay(500);
		switch(MyKeyboard.eRead()){
			case BUTTON_1:
				MyStepper.StepRight();
				break;
			case BUTTON_2:
				MyStepper.StepLeft();
				break;
			default:
				break;		
		}
	}
}
