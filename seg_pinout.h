/*
 file created by khian victory d calderon , https://youtube.com/c/KhianVictoryDCalderon
the reason why i've put A,B,C,D, as pinout, is because sometimes,
 people don't like constant numbers so, customize it if you want in your
 code, such as changing the letters integer in your sketch.
 ---------------------------------
 If you want to customize your pinModes, do not include this file,
 do not type the "pinout()" in your void setup Code instead,
 make your own pinMode in the void setup
 */
int A = 2;
int B = 3;
int C = 4;
int D = 5;
int E = 6;
int F = 7;
int G = 8;

void pinout()
{
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(E,OUTPUT);
  pinMode(F,OUTPUT);
  pinMode(G,OUTPUT);
}