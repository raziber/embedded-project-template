#include "irCommsFunctions.h"
#include "configuration.h"
#include <Arduino.h>

void recordSensor(int sensorId){

}

void parseResults(int sensorId){

}

// set up sensor pins as inputs
void sensorsPinModeSetUp(){
	for (int i = 0; i < sizeof(ports)/sizeof(ports[0]); i++)
	{
		pinMode(ports[i], INPUT);
	}
}
