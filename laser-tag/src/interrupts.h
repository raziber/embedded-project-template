#ifndef INTERRUPTS_H
#define INTERRUPTS_H

#include <Arduino.h>

volatile bool flag1 = false;
volatile bool flag2 = false;

void IRAM_ATTR isr1();
void IRAM_ATTR isr2();

#endif
