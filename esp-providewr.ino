#include <Arduino.h>
#include "GTDevice.h"


void setup() {
  Serial.begin(115200);
  DEVICE.generateChannels(0);
  DEVICE.channels[0].write("hello world");
}

void loop() {
  // put your main code here, to run repeatedly:

}
