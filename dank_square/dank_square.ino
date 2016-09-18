
#include <LedControl.h>
#include <binary.h>

LedControl lc1 = LedControl(12,11,10,1);
//data pin 0
//clock pin 1
//csPin 13
//1 device total
int T = 500;

void setup() {
  lc1.setIntensity(0,10);
  lc1.clearDisplay(0);
  lc1.shutdown(0, false);
  
}

void loop() {

     // valid coordinates 00 01 02 03
     //                   10 11 12 13
     
//     for(int i = 0; i < 2; i++){   //Lights all the LEDs in a row
//       for(int j = 0; j < 4;j++){
//         lc1.setLed(0,i,j,true);
//         delay(T);
////         lc1.setLed(0,i,j,false); 
//       }
//     } 
//     
//     for(int i = 0; i < 2; i++){ //Turns off all the LEDs in a row
//       for(int j = 0; j < 4;j++){
//         lc1.setLed(0,i,j,false);
//         delay(T); 
//       }
//     } 

     lc1.setRow(0,0,B10100000); //alternates the LEDs in a row
     lc1.setRow(0,1,B10010000);
     delay(T);
     lc1.setRow(0,0,B01010000);
     lc1.setRow(0,1,B01100000);
     delay(T);
}
