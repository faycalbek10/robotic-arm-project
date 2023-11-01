#include <Servo.h>
Servo myservo1; 
Servo myservo2;
Servo myservo3;
Servo myservo4;


int pos_b = 90;  
int pos_2 = 90; 
int pos_3 = 90;
int pos_4 = 0; 
 

char data ; 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myservo1.attach(11);// base
  myservo2.attach(10);
  myservo3.attach(9);
  myservo4.attach(6);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()){
    char data = Serial.read();
    Serial.print("donné reçcu :");
 if (data == 'l'){
  
  pos_b = pos_b + 10;
  myservo1.write(pos_b);
   }
 else if(data == 'r'){
  
  pos_b = pos_b - 10 ; 
  myservo1.write(pos_b);}

 if(data == 'f' ){
  if(pos_2 > 180){
    pos_2 = 180;}
  pos_2 = pos_2 +10;
  myservo2.write(pos_2);}
 else if(data == 'b' ){
  if(pos_2 > 180){
    pos_2 = 180;}
  pos_2 = pos_2 -10;
  myservo2.write(pos_2);}

 if(data == 'c' ){
  if(pos_3 > 180){
    pos_3 = 180;}
  pos_3 = pos_3 +10;
  myservo3.write(pos_3);
  }
 else if(data == 't'){
  if(pos_3 > 180){
    pos_3 = 180;}
  pos_3 = pos_3 - 10;
  myservo3.write(pos_3);}

  if(data == 'u'){
    +
    
    myservo4.write(180); 
  }
  else if(data == 'd'){
   
    
    myservo4.write(0);

  }}


  
    
 //myservo2.write(pos);
 //myservo3.write(pos);// value between (180-0) 
 //delay(1);
    

}
