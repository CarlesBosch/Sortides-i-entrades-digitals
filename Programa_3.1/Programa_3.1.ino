/**********************************************************************************
**                                                                               **
**                              Dissplay 7 bits                                  **
**                                                                               **
**   NOM: Carles Bosch                                    DATA: 20 / 03 / 2017   **
**********************************************************************************/
//********** INCLUDE **************************************************************

//********** VARIABLES ************************************************************
byte numeros[7] = {5,6,7,8,9,10,11};
byte zero[7] = {1,1,1,1,1,1,0};
byte un[7] = {0,1,1,0,0,0,0};
byte dos[7] = {1,1,0,1,1,0,1};
byte tres[7] = {1,1,1,1,0,0,1};
byte quatre[7] = {0,1,1,0,0,1,1};
byte cinc[7] = {1,0,1,1,0,1,1};
byte sis[7] = {1,0,1,1,1,1,1};
byte set[7] = {1,1,1,0,0,0,0};
byte vuit[7] = {1,1,1,1,1,1,1};
byte nou[7] = {1,1,1,1,0,1,1};

int t = 1000;

//********** SETUP ****************************************************************
void setup() {                // S'executa un sol cop
for (int i = 0;i<7;i++)
{
  pinMode(numeros[i],OUTPUT);
}
}

//********** LOOP *****************************************************************
void loop() {                // S'executa repetidament 
for (int i = 0;i<7;i++)
{
  digitalWrite(numeros[i],zero[i]);
}
 delay (t);
for (int i = 0;i<7;i++)
{
  digitalWrite(numeros[i],un[i]);
}
 delay (t);
for (int i = 0;i<7;i++)
{
  digitalWrite(numeros[i],dos[i]);
}
 delay (t);
for (int i = 0;i<7;i++)
{
  digitalWrite(numeros[i],tres[i]);
}
 delay (t);
for (int i = 0;i<7;i++)
{
  digitalWrite(numeros[i],quatre[i]);
}
 delay (t);
for (int i = 0;i<7;i++)
{
  digitalWrite(numeros[i],cinc[i]);
}
 delay (t);
for (int i = 0;i<7;i++)
{
  digitalWrite(numeros[i],sis[i]);
}
 delay (t);
for (int i = 0;i<7;i++)
{
  digitalWrite(numeros[i],set[i]);
}
 delay (t);
for (int i = 0;i<7;i++)
{
  digitalWrite(numeros[i],vuit[i]);
}
 delay (t);
for (int i = 0;i<7;i++)
{
  digitalWrite(numeros[i],nou[i]);
}
 delay (t);
}

//********** FUNCIONS *************************************************************
