#ifndef IR_COMMS_FUNCTIONS_H
#define IR_COMMS_FUNCTIONS_H

// sensor pins
const int ports[] = {3, 4, 5, 6, 2, 3};

void recordSensor(int sensorId);
void parseResults(int sensorId);
void sensorsPinModeSetUp();

#endif
