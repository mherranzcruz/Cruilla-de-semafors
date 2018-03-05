/*****************************************************************
**                                                              **
**                        Títol:                                **
**                 Cruïlla de semafors                          **
**                                                              **
** NOM:Martin Herranz Cruz                     Data:05/03/2018  **
*****************************************************************/
//****************************INCLUDE*****************************


//***************************VARIABLES****************************
const int led5=5;
const int led6=6;
const int led7=7;
const int led10=10;
const int led11=11;
const int led12=12;
signed long retard=1000;
//*****************************SETUP******************************

void setup() {                 //Configura el final de salida
    
    
    
}

//******************************LOOP******************************

void loop() {                 //Inicia el bucle del programa
pinMode(led5,OUTPUT);
    pinMode(led6,OUTPUT);
    pinMode(led7,OUTPUT);
    pinMode(led10,OUTPUT);
    pinMode(led11,OUTPUT);
    pinMode(led12,OUTPUT);
    
    digitalWrite(led5,HIGH);
    digitalWrite(led10,HIGH);
      delay(retard);
    digitalWrite(led5,HIGH);
    digitalWrite(led10,LOW);
    digitalWrite(led12,HIGH);
      delay(4*retard);
    digitalWrite(led5,HIGH);
    digitalWrite(led12,LOW);
    digitalWrite(led11,HIGH);
      delay(retard);
    digitalWrite(led5,HIGH);
    digitalWrite(led10,HIGH);
    digitalWrite(led11,LOW);
      delay(retard);
    digitalWrite(led5,LOW);
    digitalWrite(led7,HIGH);
      delay(4*retard);
    digitalWrite(led6,HIGH);
    digitalWrite(led7,LOW);
      delay(retard);
    digitalWrite(led6,LOW);
    digitalWrite(led5,HIGH);
      delay(retard);

}

//****************************FUNCIONS****************************
