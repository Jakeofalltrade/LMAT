#include "LedControl.h"

LedControl lc1 = LedControl(0,1,13,1);
//data pin 0
//clock pin 1
//csPin 13
//1 device total
void setup() {
  // put your setup code here, to run once:
  lc1.setIntensity(0,15);
  lc1.clearDisplay(0);
  lc1.shutdown(0, false);
  
 //Test change on Matt's computer
}

void loop() {
  // put your main code here, to run repeatedly:
  int T = 200;
   while (1==1)
   {

    //square 1
     lc1.setLed(0,3,4,true);
     lc1.setLed(0,3,5,true);
     lc1.setLed(0,4,4,true);
     lc1.setLed(0,4,5,true);

     lc1.setLed(0,0,0,true);
     lc1.setLed(0,1,0,true);
     lc1.setLed(0,0,7,true);

     lc1.setLed(0,0,1,true);
     lc1.setLed(0,1,1,true);
     lc1.setLed(0,0,2,true);

     lc1.setLed(0,7,0,true);
     lc1.setLed(0,6,0,true);
     lc1.setLed(0,7,7,true);

     lc1.setLed(0,7,1,true);
     lc1.setLed(0,6,1,true);
     lc1.setLed(0,7,2,true);

     
     delay (T);
     lc1.clearDisplay(0);

   //square 2

     lc1.setLed(0,2,3,true);
     lc1.setLed(0,2,4,true);
     lc1.setLed(0,2,5,true);
     lc1.setLed(0,2,6,true);

     lc1.setLed(0,3,3,true);
     lc1.setLed(0,4,3,true);
     lc1.setLed(0,5,3,true);

     lc1.setLed(0,5,4,true);
     lc1.setLed(0,5,5,true);
     lc1.setLed(0,5,6,true);

     lc1.setLed(0,3,6,true);
     lc1.setLed(0,4,6,true);

     //borders

     lc1.setLed(0,1,7,true);
     lc1.setLed(0,2,7,true);
     lc1.setLed(0,1,6,true);

     lc1.setLed(0,1,2,true);
     lc1.setLed(0,2,2,true);
     lc1.setLed(0,1,3,true);

     lc1.setLed(0,6,7,true);
     lc1.setLed(0,5,7,true);
     lc1.setLed(0,6,6,true);

     lc1.setLed(0,6,2,true);
     lc1.setLed(0,5,2,true);
     lc1.setLed(0,6,3,true);

     delay (T);
     lc1.clearDisplay(0);

     
   }
}
