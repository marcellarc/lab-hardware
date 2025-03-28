//Nomes: Josefa Aline Santos e Marcella Ricoy
#define ex1

#ifdef ex1
//Monte mais 1 led e modifique o programa  para que os 2 leds 
//sejam controlados pelo potenciômetro

// Daremos um nome ao pino que está conectado o LED
int led1 = 11;
int led2 = 6;
int pwmPin = A0;
unsigned int valorLido;
unsigned int pwm;

//Função "setup" roda uma vez quando a placa e ligada ou resetada
void setup() {
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
Serial.begin(9600);
}

void loop() {
valorLido = analogRead(pwmPin); // valor entre 0 e 1023
//mostra o valor lido na porta analógica
Serial.println(valorLido);

pwm = map(valorLido, 0, 1023, 0, 255); // Mudança de escala
//Escreve no led um sinal PWM proporcional ao valor Lido
analogWrite(led1,pwm);
analogWrite(led2,pwm);
} 

#endif ex1

#ifdef ex2
//Modifique o programa para que os leds funcionem invertidos. 
//Com a variação do potenciômetro 1 led vai acendendo e outro led vai apagando.
int led1 = 11;
int led2 = 6;
int pwmPin = A0;
unsigned int valorLido;
unsigned int pwm;
unsigned int pwm1;

void setup() {
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
Serial.begin(9600);
}

void loop() {
valorLido = analogRead(pwmPin); 
Serial.println(valorLido);
  
pwm = map(valorLido, 0,1023,0, 255); 
pwm1 = 255 - pwm;  

analogWrite(led1,pwm);
analogWrite(led2,pwm1);

} 
#endif ex2

#ifdef ex3
//Monte mais 1 led. Conforme o potenciômetro vai variando, 
//os leds vão acendendo progressivamente.
int led1 = 11;
int led2 = 6;
int led3 = 10;
int pwmPin = A0;
unsigned int valorLido;
unsigned int pwm;

void setup() {
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
Serial.begin(9600);
}

void loop() {
valorLido = analogRead(pwmPin); 
Serial.println(valorLido);
  
pwm = map(valorLido, 0,1023,0, 255); 
  
if (pwm >= 64)
	analogWrite(led1, pwm);
else
    analogWrite(led1, 0);

if (pwm >= 127)
	analogWrite(led2, pwm);
else
  analogWrite(led2, 0);
 	
if (pwm >= 255)
  analogWrite(led3, pwm);

else
  analogWrite(led3, 0);
}
#endif ex3

#ifdef ex4
//Monte o buzzer e quando o último led acender apite o buzzer junto.
int led1 = 11;
int led2 = 6;
int led3 = 10;
int pwmPin = A0;
unsigned int valorLido;
unsigned int pwm;
int buzzerPin = 8;

void setup() {
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(buzzerPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
valorLido = analogRead(pwmPin); 
Serial.println(valorLido);
  
pwm = map(valorLido, 0,1023,0, 255); 
  
if (pwm >= 64)
	analogWrite(led1, pwm);
else
    analogWrite(led1, 0);

if (pwm >= 127)
	analogWrite(led2, pwm);
else
  analogWrite(led2, 0);
 	
if (pwm >= 255){
  analogWrite(led3, pwm);
  tone(buzzerPin, 2000);
}

else {
  analogWrite(led3, 0);
  noTone(buzzerPin);
}
 
delay(100);
}
#endif ex4

#ifdef ex5
//Transforme a leitura do potenciômetro em uma função.
int led1 = 11;
int led2 = 6;
int led3 = 10;
int pwmPin = A0;
unsigned int pwm;
int buzzerPin = 8;

void setup() {
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(buzzerPin, OUTPUT);
Serial.begin(9600);
}

unsigned int leituraPot() {
unsigned int valorLido;
valorLido = analogRead(pwmPin); 
Serial.println(valorLido);
  
return valorLido;
}

void loop() {
unsigned int valorLido;
valorLido = leituraPot();

pwm = map(valorLido, 0,1023,0, 255);
  
if (pwm >= 64)
	analogWrite(led1, pwm);
else
    analogWrite(led1, 0);

if (pwm >= 127)
	analogWrite(led2, pwm);
else
  analogWrite(led2, 0);
 	
if (pwm >= 255){
  analogWrite(led3, pwm);
  tone(buzzerPin, 2000);
}

else {
  analogWrite(led3, 0);
  noTone(buzzerPin);
}
 
delay(100);
}
#endif ex5

#ifdef ex6
//Transforme a mudança de escala (cálculo) em uma função. 
int led1 = 11;
int led2 = 6;
int led3 = 10;
int pwmPin = A0;
int buzzerPin = 8;

void setup() {
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(buzzerPin, OUTPUT);
Serial.begin(9600);
}

unsigned int leituraPot() {
unsigned int valorLido;
valorLido = analogRead(pwmPin); 
Serial.println(valorLido);
  
return valorLido;
}

unsigned int escala(unsigned int valorLido) {
unsigned int pwm;
pwm = map(valorLido, 0,1023,0, 255);
  
return pwm;
}

void loop() {
unsigned int valorLido, potencia;
valorLido = leituraPot();
potencia = escala(valorLido);
  
if (potencia >= 64)
	analogWrite(led1, potencia);
else
    analogWrite(led1, 0);

if (potencia >= 127)
	analogWrite(led2, potencia);
else
  analogWrite(led2, 0);
 	
if (potencia >= 255){
  analogWrite(led3, potencia);
  tone(buzzerPin, 2000);
}

else {
  analogWrite(led3, 0);
  noTone(buzzerPin);
}
 
delay(100);
}
#endif ex6

#ifdef ex7
//Transforme o controle de cada dos led em uma função.
int led1 = 11;
int led2 = 6;
int led3 = 10;
int pwmPin = A0;
int buzzerPin = 8;

void setup() {
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(buzzerPin, OUTPUT);
Serial.begin(9600);
}

unsigned int leituraPot() {
unsigned int valorLido;
valorLido = analogRead(pwmPin); 
Serial.println(valorLido);
  
return valorLido;
}

unsigned int escala(unsigned int valorLido) {
unsigned int pwm;
pwm = map(valorLido, 0,1023,0, 255);
  
return pwm;
}

void ligaLED1(unsigned int pwm){
	if (pwm >= 64)
		analogWrite(led1, pwm);
	else
    	analogWrite(led1, 0);
}

void ligaLED2(unsigned int pwm){
	if (pwm >= 127)
		analogWrite(led2, pwm);
	else
 		analogWrite(led2, 0);
}

void ligaLED3(unsigned int pwm){
	if (pwm >= 255)
  		analogWrite(led3, pwm);
	else
 		analogWrite(led3, 0);
}

void loop() {
unsigned int valorLido, potencia;
valorLido = leituraPot();
potencia = escala(valorLido);
  
ligaLED1(potencia);
ligaLED2(potencia);
ligaLED3(potencia);

if (potencia >= 255)
  tone(buzzerPin, 2000);

else 
  noTone(buzzerPin);
 
delay(100);
}
#endif ex7

#ifdef ex8
//Transforme o controle do buzzer em uma função.
int led1 = 11;
int led2 = 6;
int led3 = 10;
int pwmPin = A0;

int buzzerPin = 8;

void setup() {
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(buzzerPin, OUTPUT);
Serial.begin(9600);
}

unsigned int leituraPot() {
unsigned int valorLido;
valorLido = analogRead(pwmPin); 
Serial.println(valorLido);
  
return valorLido;
}

unsigned int escala(unsigned int valorLido) {
unsigned int pwm;
pwm = map(valorLido, 0,1023,0, 255);
  
return pwm;
}

void ligaLED1(unsigned int pwm){
	if (pwm >= 64)
		analogWrite(led1, pwm);
	else
    	analogWrite(led1, 0);
}

void ligaLED2(unsigned int pwm){
	if (pwm >= 127)
		analogWrite(led2, pwm);
	else
 		analogWrite(led2, 0);
}

void ligaLED3(unsigned int pwm){
	if (pwm >= 255)
  		analogWrite(led3, pwm);
	else
 		analogWrite(led3, 0);
}

void ligaBuzzer(unsigned int pwm){
	if (pwm >= 255)
  		tone(buzzerPin, 2000);
	else 
 		noTone(buzzerPin);
}


void loop() {
unsigned int valorLido, potencia;
valorLido = leituraPot();
potencia = escala(valorLido);
 
ligaLED1(potencia);
ligaLED2(potencia);
ligaLED3(potencia);
ligaBuzzer(potencia);
 
delay(100);
}
#endif ex8

#ifdef ex9
//Transforme a escrita do led em uma função.
int led1 = 11;
int led2 = 6;
int led3 = 10;
int pwmPin = A0;
int buzzerPin = 8;
 
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}
 
unsigned int leituraPot() {
  unsigned int valorLido;
  valorLido = analogRead(pwmPin);
  Serial.println(valorLido);
  
  return valorLido;
}
 
unsigned int escala(unsigned int valorLido) {
  unsigned int pwm;
  pwm = map(valorLido, 0, 1023, 0, 255);
  
  return pwm;
}

void escritaLED1(unsigned int pwm)
{	
  analogWrite(led1, pwm); 
}

void escritaLED2(unsigned int pwm)
{	
  analogWrite(led2, pwm); 
}

void escritaLED3(unsigned int pwm)
{	
  analogWrite(led3, pwm); 
}
 
void ligaLED1(unsigned int pwm) {
  if (pwm >= 64)
    escritaLED1(pwm);
  else
    analogWrite(led1, 0);
}

 void ligaLED2(unsigned int pwm) {
  if (pwm >= 127)
    escritaLED2(pwm);
  else
    analogWrite(led2, 0);
}

void ligaLED3(unsigned int pwm) {
  if (pwm >= 255)
    escritaLED3(pwm);
  else
    analogWrite(led3, 0);
}

void ligaBuzzer(unsigned int pwm) {
  if (pwm >= 255)
    tone(buzzerPin, 2000);
  else
    noTone(buzzerPin);
}
 
void loop() {
  unsigned int valorLido, potencia;
  valorLido = leituraPot();
  potencia = escala(valorLido);
 
  ligaLED1(potencia);
  ligaLED2(potencia);
  ligaLED3(potencia);
  ligaBuzzer(potencia);
 
  delay(100);
}

#endif ex9