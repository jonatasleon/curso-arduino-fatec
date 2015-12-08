const int LEFT_RED = 10, LEFT_ORANGE = 11, LEFT_GREEN = 12;
const int RIGHT_RED = 4, RIGHT_ORANGE = 5, RIGHT_GREEN = 6;
const int BUZZER = 2;
const int BUTTON = 9;

int acende = LOW;

int estadoAnterior = LOW;

struct Estado{
    int estadoAtual;
    int estadoAnterior;
};

void setup() {
    pinMode(LEFT_RED, OUTPUT);
    pinMode(LEFT_ORANGE, OUTPUT);
    pinMode(LEFT_GREEN, OUTPUT);

    pinMode(RIGHT_RED, OUTPUT);
    pinMode(RIGHT_ORANGE, OUTPUT);
    pinMode(RIGHT_GREEN, OUTPUT);

    pinMode(BUZZER, OUTPUT);

    pinMode(BUTTON, INPUT);
    Serial.begin(9600);
}

void loop() {
    Estado estado = {LOW, LOW};
    estado.estadoAtual = digitalRead(BUTTON);
    boolean clicked = click(estado);

    if(clicked){
        Serial.println("CLICOU");
    }

    //estadoAnterior = estadoAtual;
}

boolean click(Estado myEstado) {
    int eant = myEstado.estadoAnterior;
    myEstado.estadoAnterior = myEstado.estadoAtual;
    return (eant == HIGH && myEstado.estadoAtual == LOW);
}
