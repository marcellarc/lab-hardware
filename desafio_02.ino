//Nomes: Josefa Aline Santos e Marcella Ricoy
#include <Adafruit_LiquidCrystal.h>
  
int led1 = 13; //led 1 no pino 13
int led2 = 10; //led 2 no pino 10
int led3 = 9; //led 3 no pino 9
int buttonPin = 7; //botao 1 no pino 7
int buttonPin2 = 6; //botao 2 no pino 6
int buzzerPin = 8; //buzzer no pino 8
int ldrPin = A0; //LDR no pino A0
int LM35 = A1; //sensor de temperatura no A1
int pwmPin = A2; //potenciometro no A2

int seconds = 0;

Adafruit_LiquidCrystal lcd_1(0);

void setup()
{
lcd_1.begin(16, 2);
lcd_1.print("TP:       PT: ");
lcd_1.setCursor(0, 1);
lcd_1.print("LD     L1:  L2: ");
pinMode(led1, OUTPUT);
pinMode(buttonPin, INPUT);
pinMode(led2, OUTPUT);
pinMode(buttonPin2, INPUT);
pinMode(led3, OUTPUT);
pinMode(buzzerPin, OUTPUT);
}

int leituraLDR() { //função que lê o valor do LDR
int ldrValor = 0;
ldrValor = analogRead(ldrPin);
Serial.println(ldrValor);
  
return ldrValor;
}

void escreveLDR(int ldrValor) { //função que escreve o valor do LDR no display
  if (ldrValor >= 1000) {
  lcd_1.setCursor(2, 1);
  lcd_1.print(ldrValor);
  }
  
  else {
  lcd_1.setCursor(2, 1);
  lcd_1.print(ldrValor);
  lcd_1.setCursor(5, 1);
  lcd_1.print(" ");
  }
}

void ligaBuzzer(int ldrValor) { //função que liga o buzzer de acordo com LDR
  if (ldrValor >= 500)
    tone(buzzerPin, 2000);
  else
    noTone(buzzerPin);
}

int valorBotao1() { //função que lê estado do botão 1
int buttonState = 0;
buttonState = digitalRead(buttonPin);
Serial.println(buttonState);

return buttonState;
}

void ligaLED1(int buttonState) { //função que liga LED1 de acordo com o estado do botão 1
 if (buttonState == LOW)
   digitalWrite(led1, HIGH);
 else
   digitalWrite(led1, LOW);
}

void decisaoLED1(int buttonState) { //função que escreve se LED1 está ligado/desligado no display
  if (buttonState == LOW) {
   lcd_1.setCursor(10, 1);
   lcd_1.print("L");
  }
  else {
   lcd_1.setCursor(10, 1);
   lcd_1.print("D");
  }
}

int valorBotao2() { //função que lê estado do botão 2
int buttonState2 = 0;
buttonState2 = digitalRead(buttonPin2);
Serial.println(buttonState2);

return buttonState2;
}

void ligaLED2(int buttonState2) { //função que liga LED2 de acordo com o estado do botão 2
 if (buttonState2 == LOW)
   digitalWrite(led2, HIGH);
 else
   digitalWrite(led2, LOW);
}

void decisaoLED2(int buttonState2) { //função que escreve se LED2 está ligado/desligado no display
  if (buttonState2 == LOW) {
   lcd_1.setCursor(15, 1);
   lcd_1.print("L");
  }
  else {
   lcd_1.setCursor(15, 1);
    lcd_1.print("D");
  }
}

unsigned int leituraPot() { //função que lê o valor do potenciometro
unsigned int potencia;
potencia = analogRead(pwmPin); 
Serial.println(potencia);
  
return potencia;
}

unsigned int calculoPot(unsigned int potencia) { //função que calcula a potencia
unsigned int pwm;
pwm = map(potencia, 0,1023,0, 255);
  
return pwm;
}

void escrevePot(unsigned int potencia) { //função que escreve o valor da potencia no display
  if (potencia >= 100) {
  lcd_1.setCursor(13, 0);
  lcd_1.print(potencia);
  }
  
  else if (potencia >= 10) {
  lcd_1.setCursor(13, 0);
  lcd_1.print(potencia);
  lcd_1.setCursor(15, 0);
  lcd_1.print(" ");
  }
  
  else {
  lcd_1.setCursor(13, 0);
  lcd_1.print(potencia);
  lcd_1.setCursor(14, 0);
  lcd_1.print(" ");
  lcd_1.setCursor(15, 0);
  lcd_1.print(" ");
  }
}

void ligaLED3(unsigned int potencia){ //função que liga LED3 a partir do valor (> 0) do potenciometro
  analogWrite(led3, potencia);
}

float leituraTemp(){ //função que lê a temperatura
float temperatura;
temperatura = (float(((((analogRead(LM35)*5.0)/1023)*1000)-500)/10));
Serial.println(temperatura);

return temperatura;
}

void escreveTemp(float temperatura) { //função que escreve o valor da temperatura no display
  if (temperatura > 100 || temperatura < 0){
  lcd_1.setCursor(3, 0);
  lcd_1.print(temperatura); 
  }
  
  else if (temperatura >= 10){
  lcd_1.setCursor(3, 0);
  lcd_1.print(temperatura);
  lcd_1.setCursor(8, 0);
  lcd_1.print(" ");
  }
  
  else {
  lcd_1.setCursor(3, 0);
  lcd_1.print(temperatura);
  lcd_1.setCursor(7, 0);
  lcd_1.print(" ");
  lcd_1.setCursor(8, 0);
  lcd_1.print(" ");
  }
}

void loop(){
int vlrLDR, buttonState, buttonState2;
float temp;
unsigned int potencia, vlrPot;

vlrLDR = leituraLDR();
escreveLDR(vlrLDR);
ligaBuzzer(vlrLDR);

buttonState = valorBotao1();
ligaLED1(buttonState); //led1 (pino 13) liga pelo botão 1
decisaoLED1(buttonState);

vlrPot = leituraPot();
potencia = calculoPot(vlrPot);
ligaLED3(potencia); //led3 (pino 9) liga pelo potenciometro
escrevePot(potencia);

buttonState2 = valorBotao2();
ligaLED2(buttonState2); //led2 (pino 10) liga pelo botão 2
decisaoLED2(buttonState2);

temp = leituraTemp();
escreveTemp(temp);
}