#ifdef EMBEDDED_BUILD

#include <Arduino.h>

void setup() {
    Serial.begin(115200);
}

void loop() {
}

#else
int main(){
    
}
#endif
