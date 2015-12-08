//Carrega a biblioteca do sensor ultrassonico
#include <Ultrasonic.h>

//Define os pinos para o trigger e echo
#define pino_trigger 2
#define pino_echo 1

#define led 13

#define motor 8

//Inicializa o sensor nos pinos definidos acima
Ultrasonic ultrasonic(pino_trigger, pino_echo);


void setup()
{
  Serial.begin(9600);
  pinMode(motor, OUTPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
  //Le as informacoes do sensor, em cm e pol
  float cmMsec;
  long microsec;

  microsec = ultrasonic.timing();
  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);

  Serial.print(cmMsec);

  if(cmMsec < 5) {
      digitalWrite(motor, LOW);
      digitalWrite(led, LOW);
  }else {
      digitalWrite(motor, HIGH);
      digitalWrite(led, HIGH);
  }
  delay(500);
}
