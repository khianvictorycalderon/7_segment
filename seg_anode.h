/*
 this file was created by khian victory d calderon
 https://youtube.com/c/KhianVictoryDCalderon
 this file was created to ease coding in 7 segment
 this file is for anode type only of 7 segment
*/

// first seven segment
void zero()
{
  digitalWrite (A,LOW); 
  digitalWrite (B,LOW); 
  digitalWrite (C,LOW); 
  digitalWrite (D,HIGH); 
  digitalWrite (E,LOW); 
  digitalWrite (F,LOW);
  digitalWrite (G,LOW);
}

void one()
{
  digitalWrite (A,LOW); 
  digitalWrite (B,HIGH); 
  digitalWrite (C,HIGH); 
  digitalWrite (D,HIGH); 
  digitalWrite (E,HIGH); 
  digitalWrite (F,HIGH); 
  digitalWrite (G,LOW);
}

void two()
{
	digitalWrite (A,LOW); 
	digitalWrite (B,LOW); 
	digitalWrite (C,HIGH); 
	digitalWrite (D,LOW); 
	digitalWrite (E,LOW); 
	digitalWrite (F,LOW); 
	digitalWrite (G,HIGH);
}

void three()
{
    digitalWrite (A,LOW);
    digitalWrite (B,LOW);
	digitalWrite (C,HIGH);
	digitalWrite (D,LOW);
	digitalWrite (E,HIGH);
	digitalWrite (F,LOW);
	digitalWrite (G,LOW);
}

void four()
{
	digitalWrite (A,LOW); 
	digitalWrite (B,HIGH); 
	digitalWrite (C,LOW); 
	digitalWrite (D,LOW); 
	digitalWrite (E,HIGH); 
	digitalWrite (F,HIGH); 
	digitalWrite (G,LOW);
}

void five()
{
	digitalWrite (A,HIGH); 
	digitalWrite (B,LOW); 
	digitalWrite (C,LOW); 
	digitalWrite (D,LOW); 
	digitalWrite (E,HIGH); 
	digitalWrite (F,LOW); 
	digitalWrite (G,LOW);
}

void six()
{
	digitalWrite (A,HIGH); 
	digitalWrite (B,LOW); 
	digitalWrite (C,LOW); 
	digitalWrite (D,LOW); 
	digitalWrite (E,LOW); 
	digitalWrite (F,LOW); 
	digitalWrite (G,LOW);
}

void seven()
{
	digitalWrite (A,LOW); 
	digitalWrite (B,LOW); 
	digitalWrite (C,HIGH); 
	digitalWrite (D,HIGH); 
	digitalWrite (E,HIGH); 
	digitalWrite (F,HIGH); 
	digitalWrite (G,LOW);
}

void eight()
{
	digitalWrite (A,LOW); 
	digitalWrite (B,LOW); 
	digitalWrite (C,LOW); 
	digitalWrite (D,LOW); 
	digitalWrite (E,LOW); 
	digitalWrite (F,LOW); 
	digitalWrite (G,LOW);
}

void nine()
{
	digitalWrite (A,LOW); 
	digitalWrite (B,LOW); 
	digitalWrite (C,LOW); 
	digitalWrite (D,LOW); 
	digitalWrite (E,HIGH); 
	digitalWrite (F,HIGH); 
	digitalWrite (G,LOW);
}