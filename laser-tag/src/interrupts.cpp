#include "interrupts.h"
#include "configuration.h"
#include <Arduino.h>

// Define the type for clarity
typedef void (*IsrFunction)();

// Array of function pointers
IsrFunction isrFunctions[] = {isr1, isr2};

// set up sensor pins as inputs
void sensorsInterruptsSetUp(){
	for (int i = 0; i < sizeof(ports)/sizeof(ports[0]); i++)
	{
		pinMode(ports[i], INPUT);
        attachInterrupt(digitalPinToInterrupt(ports[i]), isrFunctions[i], RISING);
	}
}

void IRAM_ATTR isr1(){
    if(!interruptEnabled) return;
    interruptEnabled = false;
    flag1 = true;
}

void IRAM_ATTR isr2(){
    if(!interruptEnabled) return;
    interruptEnabled = false;
    flag2 = true;
}
