/*
 Code by : Khian Victory D Calderon , https://www.youtube.com/c/KhianVictoryDCalderon
 this will display the number from 0 to 9 to the seven segment
*/
#include <seg_pinout.h> // always include this first before seg_anode.h
#include <seg_anode.h> // initialize the void functions for Anode type 7 segments
void setup()
{
  pinout(); // calls the void pinout() and executes it. pins from 2 - 8
}
void loop(){
  zero();            // calls the void zero() and displays number 0
  delay(1000);       // wait 1 second / 1000 milliseconds
  one();             // calls the void one() and displays number 1
  delay(1000);       // wait 1 second / 1000 milliseconds
  two();             //  calls the void two() and displays number 2
  delay(1000);       // wait 1 second / 1000 milliseconds
  three();           // calls the void three() and displays number 3
  delay(1000);       // wait 1 second / 1000 milliseconds
  four();            // calls the void four() and displays number 4
  delay(1000);       // wait 1 second / 1000 milliseconds
  five();            // calls the void five() and displays number 5
  delay(1000);       // wait 1 second / 1000 milliseconds
  six();             // calls the void six() and displays number 6
  delay(1000);       // wait 1 second / 1000 milliseconds
  seven();           // calls the void seven() and displays number 7
  delay(1000);       // wait 1 second / 1000 milliseconds
  eight();           // calls the void eight() and displays number 8
  delay(1000);       // wait 1 second / 1000 milliseconds
  nine();            // calls the void nine() and displays number 9
  delay(1000);       // wait 1 second / 1000 milliseconds
}
