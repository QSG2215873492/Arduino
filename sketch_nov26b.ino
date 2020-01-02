void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i;
string x="HELLO";
  for(int z=0;z<x.length();z++)
  {
    // H的摩斯密码
  if(x[z]=='H')
  {
    for(i=0;i<4;i++){
    digitalWrite(13,HIGH);
     delay(200);
    if(i==3){
     digitalWrite(13,LOW);
      delay(2000);
    }else{
    digitalWrite(13,LOW);
     delay(500);
    }
   }
  Serial.println("H");
  }
  // E的摩斯密码
  if(x[z]=='E')
  {
    digitalWrite(13,HIGH);
    delay(200);
  digitalWrite(13,LOW);
    delay(2000);
    Serial.println("E");
  }
  // L的摩斯密码
  if(x[z]=='L')
  {
    if(a[i]=='L')
   {
    for(int j=0;j<2;j++){
   digitalWrite(13,HIGH);
    delay(200);
  digitalWrite(13,LOW);
    delay(500);
   digitalWrite(13,HIGH);
    delay(200);
  digitalWrite(13,LOW);
    delay(1000);
   digitalWrite(13,HIGH);
    delay(200);
  digitalWrite(13,LOW);
    delay(500);
   digitalWrite(13,HIGH);
    delay(200);
  digitalWrite(13,LOW);
    delay(2000);
   }
  }
    Serial.println("E");
 }
  // O的摩斯密码
  if(x[z]=='O')
  {
  for(i=0;i<3;i++){
    digitalWrite(13,HIGH);
    delay(200);
    if(i==2)
    {
      digitalWrite(13,HIGH);
    delay(200);
      digitalWrite(13,LOW);
    delay(2000);
    }
    else{
  digitalWrite(13,LOW);
    delay(1000);
    }
    }
   Serial.println("O");
   }
  }
}
