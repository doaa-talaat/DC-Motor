
int frwd (int a, int b){
digitalWrite(a,HIGH);
digitalWrite(b,LOW);
}
int frwd1 (int c, int d){
digitalWrite(c,HIGH);
digitalWrite(d,LOW);
}
int frwd2 (int e, int f){
digitalWrite(e,HIGH);
digitalWrite(f,LOW);
}
int frwd3 (int g, int h){
digitalWrite(g,HIGH);
digitalWrite(h,LOW);
}
int reverse (int a, int b){
digitalWrite(a,LOW);
digitalWrite(b,HIGH);
}
int reverse1 (int c, int d){
digitalWrite(c,LOW);
digitalWrite(d,HIGH);
}
int reverse2 (int e, int f){
digitalWrite(e,LOW);
digitalWrite(f,HIGH);
}
int reverse3 (int g, int h){
digitalWrite(g,LOW);
digitalWrite(h,HIGH);
}
int npin1=13;
int npin2=12;
int npin3=11;
int npin4=10;
int npin5=5;
int npin6=4;
int npin7=3;
int npin8=2;
void setup() {
  pinMode(npin1,OUTPUT);
  pinMode(npin2,OUTPUT);
  pinMode(npin3,OUTPUT);
  pinMode(npin4,OUTPUT);
  pinMode(npin5,OUTPUT);
  pinMode(npin6,OUTPUT);
  pinMode(npin7,OUTPUT);
  pinMode(npin8,OUTPUT);  
}

void loop() {
frwd  (npin1,npin2); 
frwd1 (npin3,npin4);
frwd2 (npin5,npin6);
frwd3 (npin7,npin8);
delay(3500);
reverse  (npin1,npin2); 
reverse1 (npin3,npin4);
reverse2 (npin5,npin6);
reverse3 (npin7,npin8);
delay(5000);
}
