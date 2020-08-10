/* 
 * Interrupciones en el ESP32
 * Ejemplo 2 Mejorado.
 * 
 * Por "Ingeniero en Casa"
 * https://www.youtube.com/channel/UCurfoG9YbFyQmxCLlxZVArg
 * 
 * La distribución y/o modificación del código es totalmente libre.
 *  
 */
 
#define btn1 14
#define btn2 26
#define btn3 33
#define btn4 32

#define DELAY_BTN 500   // 500ms

int i = 0;
int btnPress = 0;
long lastTime = 0;

void ISR(){
  if (!digitalRead(btn1)) btnPress = 1;
  else if (!digitalRead(btn2)) btnPress = 2;
  else if (!digitalRead(btn3)) btnPress = 3;
  else if (!digitalRead(btn4)) btnPress = 4;
  else btnPress = 0;
}

void setup() {
  Serial.begin(115200);

  pinMode(btn1, INPUT_PULLUP);       // INPUT_PULLDOWN/INPUT_PULLUP
  pinMode(btn2, INPUT_PULLUP);       // INPUT_PULLDOWN/INPUT_PULLUP
  pinMode(btn3, INPUT_PULLUP);       // INPUT_PULLDOWN/INPUT_PULLUP
  pinMode(btn4, INPUT_PULLUP);       // INPUT_PULLDOWN/INPUT_PULLUP  

  attachInterrupt(btn1, ISR, FALLING);  // LOW/HIGH/FALLING/RISING/CHANGE
  attachInterrupt(btn2, ISR, FALLING);  // LOW/HIGH/FALLING/RISING/CHANGE  
  attachInterrupt(btn3, ISR, FALLING);  // LOW/HIGH/FALLING/RISING/CHANGE
  attachInterrupt(btn4, ISR, FALLING);  // LOW/HIGH/FALLING/RISING/CHANGE    
}

void loop() {

  if (btnPress)
  {
    if (millis()-lastTime > DELAY_BTN)
    {
      Serial.print("¡Interrupción ");
      Serial.print(btnPress);
      Serial.println("!");

      lastTime = millis();
    }
    btnPress = 0;
  }
  Serial.println(i);
  i++;
  delay(200);
}
