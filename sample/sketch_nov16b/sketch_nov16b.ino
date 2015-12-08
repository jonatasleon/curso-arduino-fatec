int var = 7;
int j = 2;

void setup() {
  pinMode(j, OUTPUT);
  pinMode(var, OUTPUT);
}

void loop() {
  for(int i = 0; i < 4; i++) {
    if(i==0) {
      digitalWrite(j, HIGH);
      delay(100);
      digitalWrite(j, LOW);
      delay(100);
    }      
    else {

      digitalWrite(var, HIGH);
      delay(100);
      digitalWrite(var, LOW);
      delay(100);
    }

  }

}

