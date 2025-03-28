//Nomes: Josefa Aline Santos e Marcella Ricoy
#include <Adafruit_LiquidCrystal.h>

int seconds = 0;

//Variaveis carro e pessoa 1
int VC1 = 13; // verde carro  1
int AC1 = 12; // amarelo carro 1
int RC1 = 11; // vermelho carro 1
int VP1 = 10; // verde pessoa 1
int RP1 = 9; // vermelho pessoa 1

//Variaveis carro e pessoa 2
int VC2 = 7; // verde carro 2
int AC2 = 6; // amarelo carro 2
int RC2 = 5; // vermelho carro 2
int VP2 = 4; // verde pessoa 2
int RP2 = 3; // vermelho pessoa 2

int buttonPin = 2;
int buttonState = 0;

Adafruit_LiquidCrystal lcd_1(0);

void setup()
{
 pinMode(RC1, OUTPUT);
 pinMode(AC1, OUTPUT);
 pinMode(VC1, OUTPUT);
 pinMode(RP1, OUTPUT);
 pinMode(VP1, OUTPUT);
 pinMode(RC2, OUTPUT);
 pinMode(AC2, OUTPUT);
 pinMode(VC2, OUTPUT);
 pinMode(RP2, OUTPUT);
 pinMode(VP2, OUTPUT);
 pinMode(buttonPin, INPUT);
  
  lcd_1.begin(16, 2);
  lcd_1.print("1V  A  R  V  R");
 
  lcd_1.setCursor(0, 1);
  lcd_1.print("2V  A  R  V  R");
}

void acendeRP1eRP2()
{
  digitalWrite(RP1, HIGH);
  digitalWrite(RP2, HIGH);
  lcd_1.setCursor(14, 0);
  lcd_1.print("x");
  lcd_1.setCursor(14, 1);
  lcd_1.print("x");  
}

void apagaRC1eAC2()
{
  digitalWrite(RC1, LOW);
  digitalWrite(AC2, LOW);
  lcd_1.setCursor(8, 0);
  lcd_1.print(" ");
  lcd_1.setCursor(5, 1);
  lcd_1.print(" "); 
}

void acendeVC1eRC2()
{
  digitalWrite(VC1, HIGH);
  digitalWrite(RC2, HIGH);
  lcd_1.setCursor(2, 0);
  lcd_1.print("x");
  lcd_1.setCursor(8, 1);
  lcd_1.print("x"); 
}

void apagaVC1()
{
  digitalWrite(VC1, LOW);
  lcd_1.setCursor(2, 0);
  lcd_1.print(" ");  
}

void acendeAC1()
{
  digitalWrite(AC1,HIGH);
  lcd_1.setCursor(5, 0);
  lcd_1.print("x"); 
}

void apagaAC1()
{
  digitalWrite(AC1, LOW);
  lcd_1.setCursor(5, 0);
  lcd_1.print(" "); 
}

void acendeRC1()
{
  digitalWrite(RC1, HIGH);
  lcd_1.setCursor(8, 0);
  lcd_1.print("x"); 
}

void apagaRP1eRP2()
{
  digitalWrite(RP1, LOW);
  digitalWrite(RP2, LOW);
  lcd_1.setCursor(14, 0);
  lcd_1.print(" "); 
  lcd_1.setCursor(14, 1);
  lcd_1.print(" "); 
}

void acendeVP1eVP2()
{
  digitalWrite(VP1, HIGH);
  digitalWrite(VP2, HIGH);
  lcd_1.setCursor(11, 0);
  lcd_1.print("x"); 
  lcd_1.setCursor(11, 1);
  lcd_1.print("x"); 
}

void apagaVP1eVP2()
{
  digitalWrite(VP1, LOW);
  digitalWrite(VP2, LOW);
  lcd_1.setCursor(11, 0);
  lcd_1.print(" "); 
  lcd_1.setCursor(11, 1);
  lcd_1.print(" ");
}

void apagaRC2()
{
  digitalWrite(RC2, LOW);
  lcd_1.setCursor(8, 1);
  lcd_1.print(" "); 
}

void acendeAC2()
{
  digitalWrite(AC2, HIGH);
  lcd_1.setCursor(5, 1);
  lcd_1.print("x"); 
}

void acendeVC2()
{
  digitalWrite(VC2, HIGH);
  lcd_1.setCursor(2, 1);
  lcd_1.print("x");           
}

void apagaVC2()
{
  digitalWrite(VC2, LOW);
  lcd_1.setCursor(2, 1);
  lcd_1.print(" ");           
}

void loop()
{
  acendeRP1eRP2(); //acende vermelho pessoa 1 e pessoa 2
  apagaRC1eAC2(); //apaga vermelho carro 1 e amarelo carro 2
  acendeVC1eRC2(); //acende verde carro 1 e vermelho carro 2
  
  delay(3000);
  
  apagaVC1(); //apaga verde carro 1
  acendeAC1(); //acende amarelo carro 1
  
  delay(3000);
  
  apagaAC1(); //apaga amarelo carro 1
  acendeRC1(); //acende vermelho carro 1
  
 
  buttonState = digitalRead(buttonPin);
  Serial.println(buttonState);
  
  
//botao pressionado
  if (buttonState == LOW)
  {
  	apagaRP1eRP2(); //apaga vermelho pessoa 1 e pessoa 2
    acendeVP1eVP2(); //acende verde pessoa  1 e pessoa 2
    
    delay(3000);
    
    acendeRP1eRP2(); //acende vermelho pessoa 1 e pessoa 2
    apagaVP1eVP2(); //apaga verde pessoa 1 e pessoa 2    
  }
  
  apagaRC2(); //apaga vermelho carro 2
  acendeVC2(); //acende verde carro 2
  
  delay(3000);
  
  apagaVC2(); //apaga verde carro 2
  acendeAC2(); //acende amarelo carro 2
  
  delay(3000);
}