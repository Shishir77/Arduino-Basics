// This is just general blinking code

int led = 13 ;
void setup() {
  // put your setup code here, to run once:
 pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

 digitalWrite(led,HIGH); // turns on the led
 delay(1000); //1 second gap 

 digitalWrite(led,LOW); //turns of led
 delay(1000); //1 second gap
 

  

}
