//Carrega a biblioteca do sensor ultrassonico
#include <Ultrasonic.h>

//Define os pinos para o trigger e echo
#define pino_trigger 11
#define pino_echo 10

#define buzzer 6

//Inicializa o sensor nos pinos definidos acima
Ultrasonic ultrasonic(pino_trigger, pino_echo);

long tempoAtual;
long tempoAnterior;
int tempoControle;

void setup() {
    pinMode(buzzer, OUTPUT);
    tempoAnterior = 0;
    tempoControle = 0;
}

void loop() {
    tempoAtual = millis();
    //Le as informacoes do sensor, em cm e pol
    float cmMsec;

    long microsec = ultrasonic.timing();
    cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);

    if(cmMsec < 5) {
      tempoControle = 50;
    }else if(cmMsec < 30) {
      tempoControle = 250;
    }else if(cmMsec < 60) {
      tempoControle = 450;
    }else if(cmMsec < 100) {
      tempoControle = 650;
    }else {
      tempoControle = 0;
    }

    if(tempoControle != 0)
        tone(buzzer, 800, tempoControle);
    delay(tempoControle+50);
}
