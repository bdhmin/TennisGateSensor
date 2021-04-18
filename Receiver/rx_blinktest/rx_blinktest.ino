#define ledPin 2
String incomingString;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  if (Serial.available()) {
    incomingString = Serial.readString();
    if (incomingString.indexOf("HI") >0) {
      digitalWrite(ledPin, HIGH);
    }
    else if (incomingString.indexOf("LOW") >0) {
      digitalWrite(ledPin, LOW);
    }
  }
  /*
  if(Serial.available()) {
    incomingString = Serial.readString();

    if (incomingString.indexOf("HI") >0) {
        digitalWrite(ledPin, HIGH);
        delay(100);
        digitalWrite(ledPin, LOW);
    }
  }
  */
}
