
#include <WiFiClient.h>
#include <WiFiServer.h>
#include <WiFiUdp.h>

#define pinLed1 11   // Pin 11 a R
#define pinLed2 10  // Pin 10 a G
#define pinLed3 9  // Pin 10 a B
#define pinLed4 8 // Pin 8 a R
#define pinLed5 7 // Pin 7 a G
#define pinLed6 6 // Pin 6 a B
#define pinLed7 5 // Pin 8 a R
#define pinLed8 4 // Pin 7 a G
#define pinLed9 3 // Pin 6 a B 
int retardo = 2000;
void setup() 
{
    pinMode(pinLed1, OUTPUT);
    pinMode(pinLed2, OUTPUT);
    pinMode(pinLed3, OUTPUT);
    pinMode(pinLed4, OUTPUT);
    pinMode(pinLed5, OUTPUT);
    pinMode(pinLed6, OUTPUT);
    pinMode(pinLed7, OUTPUT);
    pinMode(pinLed8, OUTPUT);
    pinMode(pinLed9, OUTPUT);
}
 
void loop() {
    // Verde
    digitalWrite(pinLed1, LOW);
    digitalWrite(pinLed2, HIGH);
    digitalWrite(pinLed3, LOW);
    digitalWrite(pinLed4, LOW);
    digitalWrite(pinLed5, HIGH);
    digitalWrite(pinLed6, LOW);
    digitalWrite(pinLed7, LOW);
    digitalWrite(pinLed8, HIGH);
    digitalWrite(pinLed9, LOW);
    delay(retardo);
    // Azul
    digitalWrite(pinLed1, LOW);
    digitalWrite(pinLed2, LOW);
    digitalWrite(pinLed3, HIGH);
    digitalWrite(pinLed4, LOW);
    digitalWrite(pinLed5, LOW);
    digitalWrite(pinLed6, HIGH);
    digitalWrite(pinLed7, LOW);
    digitalWrite(pinLed8, LOW);
    digitalWrite(pinLed9, HIGH);
    delay(retardo);
    // Rojo
    digitalWrite(pinLed1, HIGH);
    digitalWrite(pinLed2, LOW);
    digitalWrite(pinLed3, LOW);
    digitalWrite(pinLed4, HIGH);
    digitalWrite(pinLed5, LOW);
    digitalWrite(pinLed6, LOW);
    digitalWrite(pinLed7, HIGH);
    digitalWrite(pinLed8, LOW);
    digitalWrite(pinLed9, LOW);
    delay(retardo);
    //Violeta
    digitalWrite(pinLed1, HIGH);
    digitalWrite(pinLed2, LOW);
    digitalWrite(pinLed3, HIGH);
    digitalWrite(pinLed4, HIGH);
    digitalWrite(pinLed5, LOW);
    digitalWrite(pinLed6, HIGH);
    digitalWrite(pinLed7, HIGH);
    digitalWrite(pinLed8, LOW);
    digitalWrite(pinLed9, HIGH);
    
    delay(retardo);
    //Amarillo
    digitalWrite(pinLed1, HIGH);
    digitalWrite(pinLed2, HIGH);
    digitalWrite(pinLed3, LOW);
    digitalWrite(pinLed4, HIGH);
    digitalWrite(pinLed5, HIGH);
    digitalWrite(pinLed6, LOW);
    digitalWrite(pinLed7, HIGH);
    digitalWrite(pinLed8, HIGH);
    digitalWrite(pinLed9, LOW);
    delay(retardo);
    //Azul Marino 
    digitalWrite(pinLed1, LOW);
    digitalWrite(pinLed2, HIGH);
    digitalWrite(pinLed3, HIGH);
    digitalWrite(pinLed4, LOW);
    digitalWrite(pinLed5, HIGH);
    digitalWrite(pinLed6, HIGH);
    digitalWrite(pinLed7, LOW);
    digitalWrite(pinLed8, HIGH);
    digitalWrite(pinLed9, HIGH);
    delay(retardo);
    //Blanco 
    digitalWrite(pinLed1, HIGH);
    digitalWrite(pinLed2, HIGH);
    digitalWrite(pinLed3, HIGH);
    digitalWrite(pinLed4, HIGH);
    digitalWrite(pinLed5, HIGH);
    digitalWrite(pinLed6, HIGH);
    digitalWrite(pinLed7, HIGH);
    digitalWrite(pinLed8, HIGH);
    digitalWrite(pinLed9, HIGH);
    delay(retardo);
    // Negro - No presenta ningún color
   /* digitalWrite(pinLed1, LOW);
    digitalWrite(pinLed2, LOW);
    digitalWrite(pinLed3, LOW);
    digitalWrite(pinLed4, LOW);
    digitalWrite(pinLed5, LOW);
    digitalWrite(pinLed6, LOW);
    digitalWrite(pinLed7, LOW);
    digitalWrite(pinLed8, LOW);
    digitalWrite(pinLed9, LOW);
    delay(500);*/
}
