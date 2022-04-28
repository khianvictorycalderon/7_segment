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
 //first seven segment declaration
int A = 0;
int B = 1;
int C = 2;
int D = 3;
int E = 4;
int F = 5;
int G = 6;
//second seven segment declaration
int H = 7;
int I = 8;
int J = 9;
int K = 10;
int L = 11;
int M = 12;
int N = 13;

void pinout()
{
  //first seven segment setup
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(E,OUTPUT);
  pinMode(F,OUTPUT);
  pinMode(G,OUTPUT);
  //second seven segment setup
  pinMode(H,OUTPUT);
  pinMode(I,OUTPUT);
  pinMode(J,OUTPUT);
  pinMode(K,OUTPUT);
  pinMode(L,OUTPUT);
  pinMode(M,OUTPUT);
  pinMode(N,OUTPUT);
}