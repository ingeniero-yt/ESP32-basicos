/*
 *      -----LEDS-----
 * 
 * Por "Ingeniero en Casa"
 * https://www.youtube.com/channel/UCurfoG9YbFyQmxCLlxZVArg
 * 
 * La distribución y/o modificación del código es totalmente libre.
 */

#define verde 18                //Se definen los pines a los que están conectados los LEDs.
#define rojo 21
#define azul 22

void setup() {
  
  pinMode(verde,OUTPUT);        //Se configuran los pines como salida.
  pinMode(rojo,OUTPUT);
  pinMode(azul,OUTPUT);
}

void loop() {
  
  digitalWrite(verde,HIGH);     //high = 1    low = 0 
  delay(1000);                  //Espera de un segundo entra acciones.
  digitalWrite(rojo,HIGH);
  delay(1000);
  digitalWrite(azul,HIGH);
  delay(1000);

  digitalWrite(verde,LOW);
  delay(1000);
  digitalWrite(rojo,LOW);
  delay(1000);
  digitalWrite(azul,LOW);
  delay(1000);
}
