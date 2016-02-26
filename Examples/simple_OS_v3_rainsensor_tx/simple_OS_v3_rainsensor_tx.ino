#include "os_v3_rainsensor.h"

OS_v3_rainsensor rainsensor(7);// pin 7 to transmitter data pin

void setup(void)
{
  Serial.begin(115200);
  delay(300);
  
  rainsensor.setChannel(5);// 1 to 15 is valid
  
}

void loop(void)
{
  rainsensor.setRainRate(10);// 1 = 0.1mm
  
  rainsensor.setTotalRain(10);// 1 = 0.1mm 
  
  rainsensor.setBatteryStatus(true);// battery OK
  
  rainsensor.buildAndSendPacket();
  
  Serial.println("packet sent");
  delay(10000);
}
