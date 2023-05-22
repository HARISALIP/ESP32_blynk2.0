//Include the library files
#define BLYNK_TEMPLATE_ID ""
#define BLYNK_TEMPLATE_NAME "AUTOMATION"
#define BLYNK_AUTH_TOKEN ""

#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

// Enter your Auth token
char auth[] = BLYNK_AUTH_TOKEN;

//Enter your WIFI SSID and password
char ssid[] = "harisalip";
char pass[] = "12345678";

BLYNK_WRITE(V0)
{
  int value = param.asInt();
  Serial.println(value);
  if(value == 1)
  {
    digitalWrite(26, LOW);
    Serial.println("LED ON");
    
  }
  if(value == 0)
  {
     digitalWrite(26, HIGH);
     Serial.println("LED OFF");
     
  }
}

BLYNK_WRITE(V3)
{
  int value = param.asInt();
  Serial.println(value);
  if(value == 1)
  {
    digitalWrite(27, LOW);
    Serial.println("LED ON");
    
  }
  if(value == 0)
  {
     digitalWrite(27, HIGH);
     Serial.println("LED OFF");
     
  }
}
BLYNK_WRITE(V1)
{
  int value = param.asInt();
  Serial.println(value);
  if(value == 1)
  {
    digitalWrite(25, LOW);
    Serial.println("LED ON");
    
  }
  if(value == 0)
  {
     digitalWrite(25, HIGH);
     Serial.println("LED OFF");
     
  }
}
BLYNK_WRITE(V2)
{
  int value = param.asInt();
  Serial.println(value);
  if(value == 1)
  {
    digitalWrite(33, LOW);
    Serial.println("LED ON");
    
  }
  if(value == 0)
  {
     digitalWrite(33, HIGH);
     Serial.println("LED OFF");
     
  }
}
void setup(){
  digitalWrite(25, HIGH);
  digitalWrite(26, HIGH);
  digitalWrite(27, HIGH);
  digitalWrite(33, HIGH);
  
  // Debug console
  pinMode(26,OUTPUT);
  pinMode(27,OUTPUT);
  pinMode(25,OUTPUT);
  pinMode(33,OUTPUT);
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop(){
  Blynk.run();
}
