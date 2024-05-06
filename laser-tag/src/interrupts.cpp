#include "interrupts.h"

void IRAM_ATTR isr1(){
    flag1 = true;
}

void IRAM_ATTR isr2(){
    flag2 = true;
}
