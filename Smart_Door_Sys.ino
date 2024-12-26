
#include<Servo.h>
Servo myservo;
int cm = 0;
long dist(int tp, int ep)
{
  pinMode(tp, OUTPUT);
  digitalWrite(tp, LOW);
  delay(10);
  digitalWrite(tp, HIGH);
  delay(10);
  digitalWrite(tp, LOW);
  pinMode(ep, INPUT);
  return(pulseIn(ep, HIGH));
}

void setup(){
  myservo.attach(9);
  myservo.write(0);
}

void loop(){
  cm = 0.01723 * dist(11, 10);
  if(cm<40){
    int i;
    myservo.write(0);
  	for(i=0;i<=90;i++){
    	myservo.write(i);
    	delay(10);
  	}
    delay(4000);
  	for(i=90;i>=0;i--){
    	myservo.write(i);
    	delay(20);		//opening the door faster,But closing it slowly for safety of user.
  	}
    myservo.write(0);
  }
  delay(100);
}