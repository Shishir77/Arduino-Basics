

int led = 13;

void setup() {
  // put your setup code here, to run once:

}

void flash( int duration)
{
  digitalWrite(led,HIGH);
  delay(duration);
  digitalWrite(led,LOW);
  delay(duration); 
}

void loop() {
// morse for S
  flash(200);
  flash(200); 
  flash(200);
  
  delay(300);

  //morse for O
  flash(500);
  flash(500); 
  flash(500);

 // morse for S
  flash(200);
  flash(200); 
  flash(200);

  delay(1000);  

}
