#define d1 3
#define d2 4
#define d3 5
#define d4 6
#define d5 7
#define d6 8
#define d7 9
#define d8 12

#define leftMotor 10
#define rightMotor 11



void setup()
{
  Serial.begin(9600);

  pinMode(d1,OUTPUT);
  pinMode(d2,OUTPUT);
  pinMode(d3,OUTPUT);
  pinMode(d4,OUTPUT);
  pinMode(d5,OUTPUT);
  pinMode(d6,OUTPUT);
  pinMode(d7,OUTPUT);


  
}

void forward()
{
  digitalWrite(leftMotor,250);
  digitalWrite(rightMotor,250);
  Serial.println("Inainte");
}

void right()
{ 
  digitalWrite(leftMotor,350);
  digitalWrite(rightMotor,0);
  Serial.println("Dreapta");
}

void left()
{
  digitalWrite(leftMotor,0);
  digitalWrite(rightMotor,350);
  Serial.println("Stanga");
}

void stopMotors()
{
  digitalWrite(leftMotor,0);
  digitalWrite(rightMotor,0); 
  Serial.println("Stop");
}

int D1,D2,D3,D4,D5,D6,D7,D8;
int sum = 0;
void loop()
{
  pinMode(d1,OUTPUT);
  pinMode(d2,OUTPUT);
  pinMode(d3,OUTPUT);
  pinMode(d4,OUTPUT);
  pinMode(d5,OUTPUT);
  pinMode(d6,OUTPUT);
  pinMode(d7,OUTPUT);
  pinMode(d8,OUTPUT);
  digitalWrite(d1,HIGH);
  digitalWrite(d2,HIGH);
  digitalWrite(d3,HIGH);
  digitalWrite(d4,HIGH);
  digitalWrite(d5,HIGH);
  digitalWrite(d6,HIGH);
  digitalWrite(d7,HIGH);
  digitalWrite(d8,HIGH);
  delay(20);
  pinMode(d1,INPUT);
  pinMode(d2,INPUT);
  pinMode(d3,INPUT);
  pinMode(d4,INPUT);
  pinMode(d5,INPUT);
  pinMode(d6,INPUT);
  pinMode(d7,INPUT);
  pinMode(d8,INPUT);
  delay(20);
//D1 = 0;
//D2 = 0;
//D3 = 0;
//D4 = 0;
//D5 = 0;
//D6 = 0;
//D7 = 0;
//D8 = 0;
  D1 = digitalRead(d1);
  D2 = digitalRead(d2);
  D3 = digitalRead(d3);
  D4 = digitalRead(d4);
  D5 = digitalRead(d5);
  D6 = digitalRead(d6);
  D7 = digitalRead(d7);
  D8 = digitalRead(d8);
//  Serial.print(digitalRead(d1));
//  Serial.print("\t");
//  Serial.print(digitalRead(d2));
//  Serial.print("\t");
//  Serial.print(digitalRead(d3));
//  Serial.print("\t");
//  Serial.print(digitalRead(d4));
//  Serial.print("\t");
//  Serial.print(digitalRead(d5));
//  Serial.print("\t");
//  Serial.print(digitalRead(d6));
//  Serial.print("\t");
//  Serial.print(digitalRead(d7));
//  Serial.print("\t");
//  Serial.print(digitalRead(d8));
//  Serial.print("\n");


//
//  if(digitalRead(d1) == HIGH)
//  {
//    D1 = -300;
//  }
//
//   if(digitalRead(d2) == HIGH)
//  {
//    D2 = -200;
//  }
//
//   if(digitalRead(d3) == HIGH)
//  {
//    D3 = -100;
//  }
//
//   if(digitalRead(d4) == HIGH)
//  {
//    D4 = 0;
//  }
//  
//
//
//   if(digitalRead(d5) == HIGH)
//  {
//    D5 = 0;
//  }
//
//   if(digitalRead(d6) == HIGH)
//  {
//    D6 = 100;
//  }
//
//   if(digitalRead(d7) == HIGH)
//  {
//    D7 = 200;
//  }
//
//   if(digitalRead(d8) == HIGH)
//  {
//    D8 = 300;
//  }
//
//  
  sum = D1+D2+D3+D4+D5+D6+D7+D8;


//  if(D1 == HIGH || D2 == HIGH  || D3 == HIGH){
//    right();
//    right();
//  }
//
//  if(D8 == HIGH || D7 == HIGH || D6 == HIGH ){
//    left();
//    left();
//  }
  if( D4 == 0 && D5 == 0 && D3 !=0 && D6 !=0)
  {
    forward();
  }

  if( D1 == 0 && D2 == 0 && D3 == 0 && D4 == 0 && D5 == 0 && D6 == 0 && D7 == 0 && D8 ==0)
  {
    stopMotors();
  }

  
//
//  if(sum > 0)
//  {
//      right();
//  }
//
//  if(sum < 0)
//  {
//    left();
//  }
//  if(sum < 0)
//  {
//    right(100);
//  }
//
//  if(sum > 0)
//  {
//    left(100);
//  }

//  if(sum == 0)
//  {
//    forward();
//  }
//  else{
//    stopMotors();
//  }
  if(D4 == HIGH && D5 == HIGH && D3 == LOW && D6 == LOW )
  {
    forward();
  }
//
////
  if( (D1 == LOW && D2 == LOW && D3 == LOW) && (D4 == HIGH || D5 == HIGH || D6 ==HIGH))
  {
  
    left();
  }


//    if(( D1 == HIGH || D2 == HIGH || D3 == HIGH) && (D4 == LOW && D5 == LOW && D6 ==LOW))
//  {
//    right();
//  }
//forward();
//  if((D5 == HIGH && D4 ==HIGH && D3 == HIGH && D2 == HIGH)
//  || (D4 == HIGH && D3 == HIGH))
//  {
//    right();
//  }
//
//  if( D6 == HIGH && D5 == HIGH)
//  {
//    right();
//  }

  
    
  if(D4== LOW && D5 == LOW && D3 == LOW && D6 == LOW)
{
  stopMotors();
}

if( D3 == HIGH)
{
  right();
}

//if(D6 == HIGH)
//{
//  right();
//}
//
  if(D3 == HIGH && D4 == HIGH && D5 == HIGH && D6 == HIGH)
  {
    right();
    
  }
//
//  if(D4 == LOW && D5 == HIGH)
//{
//  right();
//}
//  if(D4 == HIGH && D5 == LOW)
//  {
//    left();
//  }
//
  if(D3==HIGH && D4 == LOW && D5 == LOW)
  {
    right();
  }

  if(D4 == LOW && D5 == HIGH && D6 == HIGH)
  {
    left();
  }
  if(D4 == LOW && D5 == LOW && D1 == LOW && D2 == LOW && D3 == LOW && D6 == LOW && D7 == LOW && D8 == LOW)
  {
    stopMotors();
  }

 // forward();
 


if(D4 == LOW && D5 == HIGH)
{
  right();
  
}


if(D4 == HIGH && D5 == LOW)
{
  left();
}
// 




 
}
