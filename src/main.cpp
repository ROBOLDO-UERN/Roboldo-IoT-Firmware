#include <Arduino.h>
#include "roboldo_pins.h"

void setup() {
    Serial.begin(115200);
    pinMode(PIN_STATUS_LED, OUTPUT);
    pinMode(PIN_ESTOP, INPUT_PULLUP);
    Serial.println("{\"event\":\"boot\",\"subsystem\":\"Roboldo-IoT-Firmware\",\"status\":\"ready\"}");
}

void loop() {
    bool estopTriggered = (digitalRead(PIN_ESTOP) == LOW);
    if (estopTriggered) {
        digitalWrite(PIN_STATUS_LED, LOW);
        Serial.println("{\"event\":\"estop\",\"active\":true}");
    } else {
        digitalWrite(PIN_STATUS_LED, HIGH);
    }
    delay(100);
}
