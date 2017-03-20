/**********************************************************************************
**                                                                               **
**                                   Dau                                         **
**                                                                               **
**   NOM: Carles Bosch                                    DATA: 20 / 03 / 2017   **
**********************************************************************************/
//********** INCLUDE **************************************************************

//********** VARIABLES ************************************************************
byte numeros[4] = {5,6,7,8};
byte un[4] = {0,0,0,1};
byte dos[4] = {0,0,1,0};
byte tres[4] = {0,1,0,1};
byte quatre[4] = {0,1,1,0};
byte cinc[4] = {0,1,1,1};
byte sis[4] = {1,1,1,0};

int t = 1000;

int boto = 13;
long randomnum;

//********** SETUP ****************************************************************
void setup() {                // S'executa un sol cop
for (int i = 0;i<4;i++)
{
  pinMode(numeros[i],OUTPUT);
}
  randomSeed(analogRead(0));
}

//********** LOOP *****************************************************************
void loop() {                // S'executa repetidament 
randomnum = random(1,6);
for (int i = 0;i<4;i++)
{
  digitalWrite(numeros[i],un[i]);
}
 delay (t);
for (int i = 0;i<4;i++)
{
  digitalWrite(numeros[i],dos[i]);
}
 delay (t);
for (int i = 0;i<4;i++)
{
  digitalWrite(numeros[i],tres[i]);
}
 delay (t);
for (int i = 0;i<4;i++)
{
  digitalWrite(numeros[i],quatre[i]);
}
 delay (t);
for (int i = 0;i<4;i++)
{
  digitalWrite(numeros[i],cinc[i]);
}
 delay (t);
for (int i = 0;i<4;i++)
{
  digitalWrite(numeros[i],sis[i]);
}
 delay (t);

}
//********** FUNCIONS *************************************************************
