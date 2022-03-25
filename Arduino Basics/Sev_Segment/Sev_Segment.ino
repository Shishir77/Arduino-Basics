

#include <singleSevSeg.h>
//setting the pins ( segment a-g)

singleSevSeg sevseg(1,2,3,4,5,6,7); //singleSevSeg is a data struture
int delayTime = 1000;
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  sevseg.ZERO();
  delay(delayTime);
  sevseg.ONE();
  delay(delayTime);
  sevseg.TWO();
  delay(delayTime);
  sevseg.THREE();
  delay(delayTime);
  sevseg.FOUR();
  delay(delayTime);
  sevseg.FIVE();
  delay(delayTime);
  sevseg.SIX();
  delay(delayTime);
  sevseg.SEVEN();
  delay(delayTime);
  sevseg.EIGHT();
  delay(delayTime);
  sevseg.NINE();
  delay(delayTime);
  sevseg.CLEAR(); //CLEAR THE ENTIRE SCREEN 
  delay(delayTime);
  
  

}
