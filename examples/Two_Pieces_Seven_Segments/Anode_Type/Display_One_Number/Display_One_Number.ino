/*
 Code by : Khian Victory D Calderon , https://www.youtube.com/c/KhianVictoryDCalderon
 this will display the the number one to both seven segment, since this code only calls the void one_1() and one_2()
*/
#include <2seg_pinout.h> // always include this first before 2seg_anode.h
#include <2seg_anode.h> // initialize the void functions for Anode type 7 segments

void setup() {
  pinout(); // pinMode from 0 - 13 with abc integer variables , since this is two piece seven segment display
  }

void loop() 
{
  one_1(); // display the number one to the first seven segment
  one_2(); // display the number one to the second seven segment
  /*
   the number after the underscore and before parenthesis 
   indicates which seven segment to display on.
   for example "_1()" means to display a number at the first seven segment
   while "_2()" means to display a number at the second seven segment
   */
}
