int idletime = 1000; // 1 sec
int greenphase = 4000; // 4 sec
const int PIN_redped = 7;// pin # on Arduino
const int PIN_greenped = 6;
const int PIN_redcar = 5;
const int PIN_yellowcar = 4;
const int PIN_greencar = 3;
const int PIN_switch = 2;
//
void setup(){
pinMode(PIN_redped,OUTPUT);
pinMode(PIN_greenped,OUTPUT);
pinMode(PIN_redcar,OUTPUT);
pinMode(PIN_yellowcar,OUTPUT);
pinMode(PIN_greencar,OUTPUT);
pinMode(PIN_switch, INPUT);
digitalWrite(PIN_redped,HIGH);
digitalWrite(PIN_greenped,LOW);
digitalWrite(PIN_redcar,LOW);
digitalWrite(PIN_yellowcar,LOW);
digitalWrite(PIN_greencar,HIGH);
} // end of void setup
void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(PIN_switch)) // button press
{
  delay(idletime);
  digitalWrite(PIN_greencar,LOW);
  digitalWrite(PIN_yellowcar,HIGH);
  delay(idletime);
  digitalWrite(PIN_yellowcar,LOW);
  digitalWrite(PIN_redcar,HIGH);
  digitalWrite(PIN_redped,LOW);
  digitalWrite(PIN_greenped,HIGH); //pedistarian starts walking
  delay(idletime);
  delay(idletime);
  digitalWrite(PIN_greenped,LOW); //pedistarian stops walking
  digitalWrite(PIN_redped,HIGH);
  digitalWrite(PIN_redcar,LOW);
  digitalWrite(PIN_yellowcar,HIGH); //Car start 
  delay(idletime);
  digitalWrite(PIN_yellowcar,LOW);
  digitalWrite(PIN_greencar,HIGH);
  delay(idletime);
}
}
