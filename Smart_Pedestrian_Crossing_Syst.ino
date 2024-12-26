// C++ code
//
int r=5;
int g=6;
int pb=3;
void setup()
{
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(pb, INPUT);
}

void loop(){
  digitalWrite(r,HIGH);
  int sig=digitalRead(pb);
  if(sig==HIGH){
    digitalWrite(r,LOW);
    delay(20);
    digitalWrite(g,HIGH);
    delay(15000);
    digitalWrite(g,LOW);
    digitalWrite(r,HIGH);
  }
  delay(20);
}