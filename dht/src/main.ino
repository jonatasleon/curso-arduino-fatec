#include "DHT.h"

#define DHTPIN A0
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println("Inicio do teste");
  dht.begin();
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  Serial.print(F("Umidade: "));
  Serial.println(h);
  Serial.print(F("Temperatura: "));
  Serial.print(t);
  Serial.println(F(" *C"));
}
