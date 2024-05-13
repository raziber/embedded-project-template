#include <gtest/gtest.h>
#include <Arduino.h>
#include "led.h"

#define LED_BUILTIN 2

TEST(setLED, test_if_sets_led_to_high){
    setLED(HIGH);
    ASSERT_EQ(digitalRead(LED_BUILTIN), HIGH);
}
