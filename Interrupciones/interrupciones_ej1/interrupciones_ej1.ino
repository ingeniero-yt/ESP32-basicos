/* 
 * Interrupciones en el ESP32.
 * Ejemplo 1

 * Por "Ingeniero en Casa"
 * https://www.youtube.com/channel/UCurfoG9YbFyQmxCLlxZVArg
 * 
 * La distribución y/o modificación del código es totalmente libre.
 */
 
#define btn 27

int i = 0;

void isr(){
  Serial.println("¡Interrupción!");
}

void setup() {
  Serial.begin(115200);

  pinMode(btn, INPUT_PULLDOWN);       // INPUT_PULLDOWN/INPUT_PULLUP
  attachInterrupt(btn, isr, RISING);  // LOW/HIGH/FALLING/RISING/CHANGE
}
void loop() {
  Serial.println(i);
  i++;
  delay(200);
}
