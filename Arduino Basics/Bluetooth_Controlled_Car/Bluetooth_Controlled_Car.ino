char t;
 
void setup() {
pinMode(13,OUTPUT);   //left motors forward
pinMode(12,OUTPUT);   //left motors reverse
pinMode(11,OUTPUT);   //right motors forward
pinMode(10,OUTPUT);   //right motors reverse
pinMode(9,OUTPUT);   //Led
Serial.begin(9600);
 
}
 
void loop() {
if(Serial.available()){
  t = Serial.read();
  Serial.println(t);
}
 
if(t == 'F'){            //move forward(all motors rotate in forward direction)
  digitalWrite(13,HIGH); //left motor
  digitalWrite(11,HIGH);
}
 
else if(t == 'B'){      //move reverse (all motors rotate in reverse direction)
  digitalWrite(12,HIGH); //right reverse
  digitalWrite(10,HIGH); //left reverse
}
 
else if(t == 'L'){      //turn right (left side motors rotate in forward direction, right side motors doesn't rotate)
  digitalWrite(13,HIGH); //left motors
}
 
else if(t == 'R'){      //turn left (right side motors rotate in forward direction, left side motors doesn't rotate)
  digitalWrite(11,HIGH);//only left wheels work 
}

else if(t == 'U'){    //turn led on or off)
  digitalWrite(9,HIGH);
  
}
else if(t == 'u'){    //turn led on or off)
  digitalWrite(9,LOW);
  
}



else if(t == 'I'){    //for sharp right turn
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);//right reverse
}
else if(t == 'G'){    //for sharp left turn
  digitalWrite(13,HIGH);
  digitalWrite(10,HIGH);//left reverse
}


else if (t== 'H') //left back
{
  digitalWrite(12,HIGH); //right motor backward
  digitalWrite(11,HIGH); //left motors forwarrd
 
 }

 else if (t== 'J') //right back
{
  digitalWrite(13,HIGH); 
  digitalWrite(10,HIGH); 
 
 }
 
 
else if(t == 'S'){      //STOP (all motors stop)
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
}

}
