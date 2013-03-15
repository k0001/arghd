#include "Arduino.h"

const int ledPin = 13;

void setup()
{
    Serial.begin(9600);
}


void loop()
{
    Serial.write("Hello");
    Serial.write(10);
    delay(1000);
}
