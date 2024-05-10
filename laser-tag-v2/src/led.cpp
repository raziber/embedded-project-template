#ifdef EMBEDDED_BUILD

#include <Arduino.h>
#include "led.h"

void setLED(int state){
    pinMode(LED_BUILTIN, OUTPUT);
    digitalWrite(LED_BUILTIN, state);
}

#endif
