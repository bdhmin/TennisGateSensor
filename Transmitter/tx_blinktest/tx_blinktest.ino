#define ledPin 2
#define pSwitch 13
int toggleState_1 = 0; //Define integer to remember the toggle state
unsigned long starttime;
unsigned long endtime;
int loopcount;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
  pinMode(pSwitch, INPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:

  starttime = millis();
  endtime = starttime;
  while ((endtime - starttime) <=5000) // do this loop for up to 5000mS
  {
  Serial.println("AT+SEND=1,6,HI");
  digitalWrite(ledPin, HIGH);
  loopcount = loopcount+1;
  endtime = millis();
  }
  starttime = millis();
  endtime = starttime;
  while ((endtime - starttime) <=5000) // do this loop for up to 5000mS
  {
  Serial.println("AT+SEND=1,6,LOW");
  digitalWrite(ledPin, LOW);
  loopcount = loopcount+1;
  endtime = millis();
  }


  /*
  if (digitalRead(pSwitch) == HIGH){
    

  
    Serial.println("AT+SEND=1,6,HI");
    digitalWrite(ledPin, HIGH);
    delay(100);
    digitalWrite(ledPin, LOW);
  
  }
  */
  
}
