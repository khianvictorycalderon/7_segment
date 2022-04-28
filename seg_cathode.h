/*
 this file was created by khian victory d calderon
 https://youtube.com/c/KhianVictoryDCalderon
 this file was created to ease coding in 7 segment
 this file is for cathode type only of 7 segment
*/

// first seven segment
void zero()
{
  digitalWrite (A,HIGH); 
  digitalWrite (B,HIGH); 
  digitalWrite (C,HIGH); 
  digitalWrite (D,LOW); 
  digitalWrite (E,HIGH); 
  digitalWrite (F,HIGH);
  digitalWrite (G,HIGH);
}

void one()
{
  digitalWrite (A,HIGH); 
  digitalWrite (B,LOW); 
  digitalWrite (C,LOW); 
  digitalWrite (D,LOW); 
  digitalWrite (E,LOW); 
  digitalWrite (F,LOW); 
  digitalWrite (G,HIGH);
}

void two()
{
	digitalWrite (A,HIGH); 
	digitalWrite (B,HIGH); 
	digitalWrite (C,LOW); 
	digitalWrite (D,HIGH); 
	digitalWrite (E,HIGH); 
	digitalWrite (F,HIGH); 
	digitalWrite (G,LOW);
}

void three()
{
    digitalWrite (A,HIGH);
    digitalWrite (B,HIGH);
	digitalWrite (C,LOW);
	digitalWrite (D,HIGH);
	digitalWrite (E,LOW);
	digitalWrite (F,HIGH);
	digitalWrite (G,HIGH);
}

void four()
{
	digitalWrite (A,HIGH); 
	digitalWrite (B,LOW); 
	digitalWrite (C,HIGH); 
	digitalWrite (D,HIGH); 
	digitalWrite (E,LOW); 
	digitalWrite (F,LOW); 
	digitalWrite (G,HIGH);
}

void five()
{
	digitalWrite (A,LOW); 
	digitalWrite (B,HIGH); 
	digitalWrite (C,HIGH); 
	digitalWrite (D,HIGH); 
	digitalWrite (E,LOW); 
	digitalWrite (F,HIGH); 
	digitalWrite (G,HIGH);
}

void six()
{
	digitalWrite (A,LOW); 
	digitalWrite (B,HIGH); 
	digitalWrite (C,HIGH); 
	digitalWrite (D,HIGH); 
	digitalWrite (E,HIGH); 
	digitalWrite (F,HIGH); 
	digitalWrite (G,HIGH);
}

void seven()
{
	digitalWrite (A,HIGH); 
	digitalWrite (B,HIGH); 
	digitalWrite (C,LOW); 
	digitalWrite (D,LOW); 
	digitalWrite (E,LOW); 
	digitalWrite (F,LOW); 
	digitalWrite (G,HIGH);
}

void eight()
{
	digitalWrite (A,HIGH); 
	digitalWrite (B,HIGH); 
	digitalWrite (C,HIGH); 
	digitalWrite (D,HIGH); 
	digitalWrite (E,HIGH); 
	digitalWrite (F,HIGH); 
	digitalWrite (G,HIGH);
}

void nine()
{
	digitalWrite (A,HIGH); 
	digitalWrite (B,HIGH); 
	digitalWrite (C,HIGH); 
	digitalWrite (D,HIGH); 
	digitalWrite (E,LOW); 
	digitalWrite (F,LOW); 
	digitalWrite (G,HIGH);
}