#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

Servo myservo;  
#define BLYNK_TEMPLATE_ID "TMPL3yz189Z12"
#define BLYNK_TEMPLATE_NAME "SERVO MOTOR"
char auth[] = "g22S4wJslDvO_nuEhdyx7aHHmYuhcN67";
 
// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "   ";
char pass[] = "    ";
BLYNK_WRITE(V0){
  myservo.write(param.asInt());
  }
void setup() {
  Serial.begin(9600);
  myservo.attach(D5);  // attaches the servo on pin 9 to the servo object
   Blynk.begin(auth, ssid, pass);
}

void loop() {
  Blynk.run();
}
