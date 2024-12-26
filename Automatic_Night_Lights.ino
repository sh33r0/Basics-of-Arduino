void setup(){
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(11,OUTPUT);
}

void loop()
{
  int val = analogRead(A0);
  Serial.println(val);
  if(val<800){
  	digitalWrite(11,HIGH);
  }
  else{
  	digitalWrite(11,LOW);
  }
  
}