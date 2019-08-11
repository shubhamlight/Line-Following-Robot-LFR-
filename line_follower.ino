int right_ir;
int left_ir;

void setup() {
  // put your setup code here, to run once:
  // for left IR
  pinMode(2,INPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  
  //for left IR  
  pinMode(5,INPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);  


  //for motor
  //left motor

  // 9 = 1 , 8 = 0 == forward
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);

  
  // right motor
    // 11 = 1 , 10 = 0 == forward
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);


digitalWrite(4,HIGH);
digitalWrite(7,HIGH);
digitalWrite(3,LOW);
digitalWrite(6,LOW);
}

void loop()  
{
  // put your main code here, to run repeatedly:
  // here we are reading the value of the both ir sensors
  
right_ir = digitalRead(5);
left_ir = digitalRead(2);

if (left_ir == 1 && right_ir == 1)
{
//right motor forward
digitalWrite(9,1);
digitalWrite(8,0);

//left motor forward
digitalWrite(11,1);
digitalWrite(10,0);
}
else if (left_ir == 0 && right_ir == 1)
{
//right motor forward
digitalWrite(9,0);
digitalWrite(8,0);
digitalWrite(11,1);
digitalWrite(10,0);
}
else if (left_ir == 1 && right_ir == 0)
{
digitalWrite(9,1);
digitalWrite(8,0);
digitalWrite(11,0);
digitalWrite(10,0);
}
else if  (left_ir == 0 && right_ir == 0)
{
digitalWrite(9,0);
digitalWrite(8,0);
digitalWrite(11,0);
digitalWrite(10,0);
}























}
