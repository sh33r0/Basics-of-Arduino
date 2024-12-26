int val,c;
void setup()
{
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
  pinMode(A1,INPUT);
  
}
void loop(){
  c = analogRead(A1);
  val = map(c,0,1023,0,255);  //Change the intensisty at the start of the loop.
  analogWrite(A3,val);
  analogWrite(A4,val);
  delay(2000);
  analogWrite(A3,0);
  analogWrite(A5,val);
  analogWrite(A4,val);
  delay(2000);
  analogWrite(A4,0);
  analogWrite(A3,val);
  analogWrite(A5,val);
  delay(2000);
  analogWrite(A3,val);
  analogWrite(A4,val);
  analogWrite(A5,val);
  delay(2000);
  analogWrite(A5,0);
}