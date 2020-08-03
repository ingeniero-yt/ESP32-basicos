/*
 *      -----HOLA MUNDO-----
 * 
 * Por "Ingeniero en Casa"
 * https://www.youtube.com/channel/UCurfoG9YbFyQmxCLlxZVArg
 * 
 * La distribución y/o modificación del código es totalmente libre.
 */

void setup() {
  
  Serial.begin(115200);                       //Se inicializa la conexión serie a 115200 baudios.
  
  Serial.print("Esto es el setup.");
  Serial.println("Línea nueva después.");
}

void loop() {
  
  Serial.println("Esto es el loop");
  delay(2000);
}
