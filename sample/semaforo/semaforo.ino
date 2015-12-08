const int LED_X_RED = 11;
const int LED_X_YEL = 10;
const int LED_X_GRE = 13;

const int LED_Y_RED = 6;
const int LED_Y_YEL = 5;
const int LED_Y_GRE = 3;
/*
const int SEM_X[] = {LED_X_RED, LED_X_YEL, LED_X_GRE};
const int SEM_Y[] = {LED_Y_RED, LED_Y_YEL, LED_Y_GRE};

boolean acenderX = true;

unsigned long time;
unsigned long timeBefore = 0;*/

void setup() {
 /*   int sizeX = sizeof(SEM_X);
    int sizeY = sizeof(SEM_Y);

    for(int i = 0; i < sizeX; i++) {
        pinMode(SEM_X[i], OUTPUT);
    }

    for(int i = 0; i < sizeY; i++) {
        pinMode(SEM_Y[i], OUTPUT);
    }
    
    Serial.begin(9600);*/
    pinMode(LED_X_RED, OUTPUT);
}

void loop() {
    /*Serial.print(F("Time: "));
    time = millis();
    Serial.println(time);
    
    Serial.print(F("TimeB: "));
    Serial.println(timeBefore);
    
    if(time - timeBefore <= 3000) {
      digitalWrite((acenderX)?SEM_X[2]:LED_Y_GRE, HIGH);
      digitalWrite((acenderX)?LED_X_RED:LED_Y_RED, LOW);
      
    }else if(time - timeBefore <= 5000) {
      digitalWrite((acenderX)?LED_X_GRE:LED_Y_GRE, LOW);      
      digitalWrite((acenderX)?LED_X_YEL:LED_Y_YEL, HIGH);
      
    }else {
      digitalWrite((acenderX)?LED_X_YEL:LED_Y_YEL, LOW);
      acenderX = !acenderX;
      timeBefore = time;
    }*/
    digitalWrite(LED_X_RED, HIGH);
    digitalWrite(LED_X_GRE, HIGH);
}
