#include "sensorTasks.h"
#include "irCommsFunctions.h"
#include "interrupts.h"
#include "game.h"

void taskSensorRecord1(void* pvParameters){
	while(true){
		if (flag1)
		{
			recordSensor(1);
			parseResults(1);
            sendResults(1);
			flag1 = false;
		}
	}
}

void taskSensorRecord2(void* pvParameters){
	while(true){
		if (flag2)
		{
			recordSensor(2);
			parseResults(2);
            sendResults(2);
			flag2 = false;
		}
	}
}

void setUpSensorTasks(){
    xTaskCreate(taskSensorRecord1, "taskSensorRecord1", 1024, NULL, 1, NULL);
    xTaskCreate(taskSensorRecord2, "taskSensorRecord2", 1024, NULL, 1, NULL);
}