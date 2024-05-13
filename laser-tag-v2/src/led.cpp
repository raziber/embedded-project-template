#ifdef EMBEDDED_BUILD

#include <Arduino.h>
#include "led.h"

#define LED_BUILTIN 2

void setLED(int state){
    pinMode(LED_BUILTIN, OUTPUT);
    digitalWrite(LED_BUILTIN, state);
}

#endif
