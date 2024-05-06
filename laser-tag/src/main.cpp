#include <Arduino.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include "irCommsFunctions.h"
#include "sensorTasks.h"

void setup() {
	sensorsPinModeSetUp();
	Serial.begin(115200);
	setUpSensorTasks();
}