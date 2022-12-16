
int frwd (int a, int b, int c, int d, int e, int f, int g, int h){
digitalWrite(a,HIGH);
digitalWrite(b,LOW);
digitalWrite(c,HIGH);
digitalWrite(d,LOW);
digitalWrite(e,HIGH);
digitalWrite(f,LOW);
digitalWrite(g,HIGH);
digitalWrite(h,LOW);
}
int reverse (int a, int b, int c, int d, int e, int f, int g, int h){
digitalWrite(a,LOW);
digitalWrite(b,HIGH);
digitalWrite(c,LOW);
digitalWrite(d,HIGH);
digitalWrite(e,LOW);
digitalWrite(f,HIGH);
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
frwd  (npin1,npin2,npin3,npin4,npin5,npin6,npin7,npin8); 

delay(3500);
reverse  (npin1,npin2,npin3,npin4,npin5,npin6,npin7,npin8); 

delay(5000);
}
