void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);

}

void loop() {
  
  // put your main code here, to run repeatedly:
int x;
for(x=3;x<=7;x++){
     digitalWrite(x,HIGH);
     delay(100);
     digitalWrite(x,LOW);
  
  }

  for(x=7;x>=3;x--){
     digitalWrite(x,HIGH);
     delay(100);
     digitalWrite(x,LOW);
  
  }
 
 

}
