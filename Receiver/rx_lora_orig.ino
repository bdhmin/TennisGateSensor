#define ledPin 2
#define aSwitch 13

int toggleState_1 = 0;

String incomingString;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()) {
    incomingString = Serial.readString();
    
    if(incomingString.indexOf("LEDON") >0) {
      digitalWrite(ledPin, HIGH);
    }
    else if(incomingString.indexOf("LEDOFF") >0) {
      digitalWrite(ledPin, LOW);
    }
    
  }

  
  // Supplementary Switch to make sure light turns on
  if (digitalRead(aSwitch) == HIGH) {
    if (toggleState_1 == 0) {
      digitalWrite(ledPin, HIGH);
      toggleState_1 = 1;
      delay(500);
    }
    else {
      digitalWrite(ledPin, LOW);
      toggleState_1 = 0;
      delay(500);
    }
  }
  
  
}
