int pin = 13;
unsigned long oldTime = 0;
int value = HIGH;

void setup() {
    pinMode(pin, OUTPUT);
}

void loop() {
    unsigned long timeNow = millis();
    if(oldTime - timeNow >= 3000){
        if(value == HIGH){
            value = LOW;
        }else {
            value = HIGH;
        }
    }
    digitalWrite(pin, value);
    oldTime = timeNow;
}
