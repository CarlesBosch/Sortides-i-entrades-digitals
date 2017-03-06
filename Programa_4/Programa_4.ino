/**********************************************************************************
**                                                                               **
**                                Programa 4                                     **
**                                                                               **
**   NOM: Carles Bosch                                    DATA: 06 / 03 / 2017   **
**********************************************************************************/
//********** INCLUDE **************************************************************

//********** VARIABLES ************************************************************
int LED5 = 5;                         // LED5 es el pin digital 5
int LED6 = 6;                         // LED6 es el pin digital 6
int LED7 = 7;                         // LED7 es el pin digital 7
int LED8 = 8;                         // LED8 es el pin digital 8


//********** SETUP ****************************************************************
void setup() 
{                                     // S'executa un sol cop

  pinMode(LED5, OUTPUT);              // configura el pin 5 com a sortida
  pinMode(LED6, OUTPUT);              // configura el pin 6 com a sortida
  pinMode(LED7, OUTPUT);              // configura el pin 7 com a sortida
  pinMode(LED8, OUTPUT);              // configura el pin 8 com a sortida

}

//********** LOOP *****************************************************************
void loop() 
{                                     // S'executa repetidament 
  
  digitalWrite(LED5, HIGH);           // activa el LED5 
  delay(1000);                         // espera 1 segon
  
  digitalWrite(LED5, LOW);            // desactiva el LED5
  digitalWrite(LED6, HIGH);           // activa el LED6 
  delay(1000);                         // espera 1 segon

  digitalWrite (LED5, HIGH);
  
  
}

//********** FUNCIONS *************************************************************
