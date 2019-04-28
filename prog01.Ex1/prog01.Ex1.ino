/**********************************************************************************
**                                                                               **
**                              Cub 3x3x3 Leds                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
      
const int led0 = 13;          
const int led1 = 12;          
const int led2 = 11;
const int led3 = 10;          
const int led4 = 9;          
const int led5 = 8;      
const int led6 = 7;          
const int led7 = 6;          
const int led8 = 5;                      

const int NPN1 = 26;
const int NPN2 = 28;
const int NPN3 = 30;

unsigned long s = 1500;

//********** Setup ****************************************************************
void setup()
{
  Serial.begin(9600);

  pinMode(led0,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);
  pinMode(led8,OUTPUT);  

  pinMode(NPN1,OUTPUT);
  pinMode(NPN2,OUTPUT);
  pinMode(NPN3,OUTPUT);
 
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(led0,HIGH);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);  
  digitalWrite(NPN1,HIGH);
  digitalWrite(NPN2,LOW);
  digitalWrite(NPN3,LOW);

  delay(1500);

  digitalWrite(led0,LOW);
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);  
  digitalWrite(NPN1,HIGH);
  digitalWrite(NPN2,LOW);
  digitalWrite(NPN3,LOW);

  delay(1500);

  digitalWrite(led0,LOW);
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);  
  digitalWrite(NPN1,HIGH);
  digitalWrite(NPN2,LOW);
  digitalWrite(NPN3,LOW);

  delay(1500);

  digitalWrite(led0,LOW);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);  
  digitalWrite(NPN1,HIGH);
  digitalWrite(NPN2,LOW);
  digitalWrite(NPN3,LOW);

  delay(1500);

  digitalWrite(led0,LOW);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);  
  digitalWrite(NPN1,HIGH);
  digitalWrite(NPN2,LOW);
  digitalWrite(NPN3,LOW);

  delay(1500);

  digitalWrite(led0,LOW);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);  
  digitalWrite(NPN1,HIGH);
  digitalWrite(NPN2,LOW);
  digitalWrite(NPN3,LOW);

  delay(1500);

  digitalWrite(led0,LOW);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,HIGH);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);  
  digitalWrite(NPN1,HIGH);
  digitalWrite(NPN2,LOW);
  digitalWrite(NPN3,LOW);

  delay(1500);

  digitalWrite(led0,LOW);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,HIGH);
  digitalWrite(led8,LOW);  
  digitalWrite(NPN1,HIGH);
  digitalWrite(NPN2,LOW);
  digitalWrite(NPN3,LOW);

  delay(1500);

  digitalWrite(led0,LOW);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,HIGH);  
  digitalWrite(NPN1,HIGH);
  digitalWrite(NPN2,LOW);
  digitalWrite(NPN3,LOW);

  delay(1500);

  digitalWrite(led0,LOW);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);  
  digitalWrite(NPN1,LOW);
  digitalWrite(NPN2,LOW);
  digitalWrite(NPN3,LOW);

  delay(1500);

  digitalWrite(led0,HIGH);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);  
  digitalWrite(NPN1,LOW);
  digitalWrite(NPN2,HIGH);
  digitalWrite(NPN3,LOW);

  delay(1500);

  digitalWrite(led0,LOW);
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);  
  digitalWrite(NPN1,LOW);
  digitalWrite(NPN2,HIGH);
  digitalWrite(NPN3,LOW);

  delay(1500);

  digitalWrite(led0,LOW);
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);  
  digitalWrite(NPN1,LOW);
  digitalWrite(NPN2,HIGH);
  digitalWrite(NPN3,LOW);

  delay(1500);

  digitalWrite(led0,LOW);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);  
  digitalWrite(NPN1,LOW);
  digitalWrite(NPN2,HIGH);
  digitalWrite(NPN3,LOW);

  delay(1500);

  digitalWrite(led0,LOW);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);  
  digitalWrite(NPN1,LOW);
  digitalWrite(NPN2,HIGH);
  digitalWrite(NPN3,LOW);

  delay(1500);

  digitalWrite(led0,LOW);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);  
  digitalWrite(NPN1,LOW);
  digitalWrite(NPN2,HIGH);
  digitalWrite(NPN3,LOW);

  delay(1500);

  digitalWrite(led0,LOW);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,HIGH);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);  
  digitalWrite(NPN1,LOW);
  digitalWrite(NPN2,HIGH);
  digitalWrite(NPN3,LOW);

  delay(1500);

  digitalWrite(led0,LOW);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,HIGH);
  digitalWrite(led8,LOW);  
  digitalWrite(NPN1,LOW);
  digitalWrite(NPN2,HIGH);
  digitalWrite(NPN3,LOW);

  delay(1500);

  digitalWrite(led0,LOW);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,HIGH);  
  digitalWrite(NPN1,LOW);
  digitalWrite(NPN2,HIGH);
  digitalWrite(NPN3,LOW);

  delay(1500);

  digitalWrite(led0,LOW);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);  
  digitalWrite(NPN1,LOW);
  digitalWrite(NPN2,LOW);
  digitalWrite(NPN3,LOW);

  delay(1500);

  digitalWrite(led0,HIGH);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);  
  digitalWrite(NPN1,LOW);
  digitalWrite(NPN2,LOW);
  digitalWrite(NPN3,HIGH);

  delay(1500);

  digitalWrite(led0,LOW);
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);  
  digitalWrite(NPN1,LOW);
  digitalWrite(NPN2,LOW);
  digitalWrite(NPN3,HIGH);

  delay(1500);

  digitalWrite(led0,LOW);
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);  
  digitalWrite(NPN1,LOW);
  digitalWrite(NPN2,LOW);
  digitalWrite(NPN3,HIGH);

  delay(1500);

  digitalWrite(led0,LOW);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);  
  digitalWrite(NPN1,LOW);
  digitalWrite(NPN2,LOW);
  digitalWrite(NPN3,HIGH);

  delay(1500);

  digitalWrite(led0,LOW);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);  
  digitalWrite(NPN1,LOW);
  digitalWrite(NPN2,LOW);
  digitalWrite(NPN3,HIGH);

  delay(1500);

  digitalWrite(led0,LOW);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);  
  digitalWrite(NPN1,LOW);
  digitalWrite(NPN2,LOW);
  digitalWrite(NPN3,HIGH);

  delay(1500);

  digitalWrite(led0,LOW);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,HIGH);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);  
  digitalWrite(NPN1,LOW);
  digitalWrite(NPN2,LOW);
  digitalWrite(NPN3,HIGH);

  delay(1500);

  digitalWrite(led0,LOW);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,HIGH);
  digitalWrite(led8,LOW);  
  digitalWrite(NPN1,LOW);
  digitalWrite(NPN2,LOW);
  digitalWrite(NPN3,HIGH);

  delay(1500);

  digitalWrite(led0,LOW);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,HIGH);  
  digitalWrite(NPN1,LOW);
  digitalWrite(NPN2,LOW);
  digitalWrite(NPN3,HIGH);

  delay(1500);

  digitalWrite(led0,LOW);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);  
  digitalWrite(NPN1,LOW);
  digitalWrite(NPN2,LOW);
  digitalWrite(NPN3,LOW);

  delay(1500);
  
}

//********** Funcions *************************************************************
