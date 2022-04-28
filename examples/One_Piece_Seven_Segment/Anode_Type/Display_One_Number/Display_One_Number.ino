/*
 Code by : Khian Victory D Calderon , https://www.youtube.com/c/KhianVictoryDCalderon
 this will display the the number one, because this code only calls the void one()
*/
#include <seg_pinout.h> // always include this first before seg_anode.h
#include <seg_anode.h> // initialize the void functions for Anode type 7 segments

void setup() {
  pinout(); // pinMode from 2 - 8 with abc integer variables , since this is one seven_segment only
  }

void loop() 
{
  one(); // display the number one
}
