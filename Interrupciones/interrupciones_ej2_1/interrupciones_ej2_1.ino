/* 
 * Interrupciones en el ESP32
 * Ejemplo 2.
 *  
 * Por "Ingeniero en Casa"
 * https://www.youtube.com/channel/UCurfoG9YbFyQmxCLlxZVArg
 *  
 * La distribución y/o modificación del código es totalmente libre.
 */
 
#define btn1 14
#define btn2 26
#define btn3 33
#define btn4 32

int i = 0;

void isr1(){
  Serial.println("¡Interrupción 1!");
}
void isr2(){
  Serial.println("¡Interrupción 2!");
}
void isr3(){
  Serial.println("¡Interrupción 3!");
}
void isr4(){
  Serial.println("¡Interrupción 4!");
}

void setup() {
  Serial.begin(115200);

  pinMode(btn1, INPUT_PULLUP);       // INPUT_PULLDOWN/INPUT_PULLUP
  pinMode(btn2, INPUT_PULLUP);       // INPUT_PULLDOWN/INPUT_PULLUP
  pinMode(btn3, INPUT_PULLUP);       // INPUT_PULLDOWN/INPUT_PULLUP
  pinMode(btn4, INPUT_PULLUP);       // INPUT_PULLDOWN/INPUT_PULLUP  

  attachInterrupt(btn1, isr1, FALLING);  // LOW/HIGH/FALLING/RISING/CHANGE
  attachInterrupt(btn2, isr2, FALLING);  // LOW/HIGH/FALLING/RISING/CHANGE  
  attachInterrupt(btn3, isr3, FALLING);  // LOW/HIGH/FALLING/RISING/CHANGE
  attachInterrupt(btn4, isr4, FALLING);  // LOW/HIGH/FALLING/RISING/CHANGE    
}
void loop() {
  Serial.println(i);
  i++;
  delay(200);
}
