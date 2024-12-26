int bz=8;
int r=10;
int g=11;
int tp=6;
int ep=5;
void setup(){
  Serial.begin(9600);
  pinMode(bz,OUTPUT);  
  pinMode(r,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(tp, OUTPUT);
  pinMode(ep, INPUT);
  digitalWrite(bz,HIGH);   //Checking if my components are working ri8 or not.
  delay(1000);
  digitalWrite(bz,LOW); 
  digitalWrite(g,HIGH);
  digitalWrite(r,HIGH);
  delay(1000);
  digitalWrite(g,LOW);
  digitalWrite(r,LOW);

}

void loop(){
  digitalWrite(tp, LOW);
  delay(10);
  digitalWrite(tp, HIGH);
  delay(10);
  digitalWrite(tp, LOW);
  long dist=pulseIn(ep, HIGH);
  long cm = 0.01723 * dist;
  if(cm<50){
    digitalWrite(bz,HIGH);
  	delay(1000);
  	digitalWrite(bz,LOW);
    Serial.println("Enter The Password: ");
    while (Serial.available() == 0) {
  	}
    int pass = Serial.parseInt();
    if(pass==3421){
    	digitalWrite(g,HIGH);}
    else{
    	digitalWrite(r,HIGH);
      	digitalWrite(bz,HIGH);
      	delay(10000);
      	digitalWrite(bz,LOW);
    }
  }
  delay(1000);
}