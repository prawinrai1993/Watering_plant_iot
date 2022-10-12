
// Fill-in information from your Blynk Template here
#define BLYNK_TEMPLATE_ID "TMPLUaS6cThQ"
#define BLYNK_DEVICE_NAME "Nodemcu"

#define BLYNK_FIRMWARE_VERSION        "0.1.0"

#define BLYNK_PRINT Serial
//#define BLYNK_DEBUG

#define APP_DEBUG

// Uncomment your board, or configure a custom board in Settings.h
//#define USE_SPARKFUN_BLYNK_BOARD
//#define USE_NODE_MCU_BOARD
//#define USE_WITTY_CLOUD_BOARD
//#define USE_WEMOS_D1_MINI

#include "BlynkEdgent.h"

BLYNK_CONNECTED()
{
Blynk.syncVirtual(V0);  
Blynk.syncVirtual(V1);
  
}

BLYNK_WRITE(V0)
{
  if(param.asInt() == 1){
    digitalWrite(2,HIGH);
    BLYNK_LOG("pin value high");
  }
  else
  {
    digitalWrite(2,LOW);
    BLYNK_LOG("pin value low");
  }
  
  
}


BLYNK_WRITE(V1)
{
  if(param.asInt() == 1){
    digitalWrite(4,HIGH);
    BLYNK_LOG("pin value high");
  }
  else
  {
    digitalWrite(4,LOW);
    BLYNK_LOG("pin value low");
  }
  
  
}
void setup()
{
  Serial.begin(115200);
  delay(100);
  pinMode(2, OUTPUT);
  pinMode(0, OUTPUT);

  BlynkEdgent.begin();
}

void loop() {
  runBlynkWithChecks();
}
