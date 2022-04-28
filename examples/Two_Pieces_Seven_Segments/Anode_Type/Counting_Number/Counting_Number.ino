/*
 Code by : Khian Victory D Calderon , https://www.youtube.com/c/KhianVictoryDCalderon
 this will display the number from 0 to 9 to the first seven segment
 and display number from 9 to 0 to the second seven segment
*/
#include <2seg_pinout.h> // always include this first before 2seg_anode.h
#include <2seg_anode.h> // initialize the void functions for Anode type 7 segments
void setup()
{
  pinout(); // calls the void pinout() and executes it. pins from 2 - 8
}
void loop(){
  zero_1();    // displays number 0 to first seven segment
  nine_2();    // displays number 9 to second seven segment
  delay(1000); // wait 1 second / 1000 milliseconds
  one_1();     // displays number 1 to first seven segment
  eight_2();   // displays number 8 to second seven segment
  delay(1000); // wait 1 second / 1000 milliseconds
  two_1();     //  displays number 2 to first seven segment
  seven_2();   // displays number 7 to second seven segment
  delay(1000); // wait 1 second / 1000 milliseconds
  three_1();   // displays number 3 to first seven segment
  six_2();     // displays number 6 to second seven segment
  delay(1000); // wait 1 second / 1000 milliseconds
  four_1();    // displays number 4 to first seven segment
  five_2();    // displays number 5 to second seven segment
  delay(1000); // wait 1 second / 1000 milliseconds
  five_1();    // displays number 5 to first seven segment
  four_2();    // displays number 4 to second seven segment
  delay(1000); // wait 1 second / 1000 milliseconds
  six_1();     // displays number 6 to first seven segment
  three_2();   // displays number 3 to second seven segment
  delay(1000); // wait 1 second / 1000 milliseconds
  seven_1();   // displays number 7 to first seven segment
  two_2();     // displays number 2 to second seven segment
  delay(1000); // wait 1 second / 1000 milliseconds
  eight_1();   // displays number 8 to first seven segment
  one_2();     // displays number 1 to second seven segment
  delay(1000); // wait 1 second / 1000 milliseconds
  nine_1();    // displays number 9 to first seven segment
  zero_2();    // displays number 0 to second seven segment
  delay(1000); // wait 1 second / 1000 milliseconds
  /*
   the number after the underscore and before parenthesis 
   indicates which seven segment to display on.
   for example "_1()" means to display a number at the first seven segment
   while "_2()" means to display a number at the second seven segment
   */
}
