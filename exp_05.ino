//Nomes: Josefa Aline Santos e Marcella Ricoy
#define ex1

#ifdef ex1
//Acrescente um buzzer a montagem. Modifique o programa para o led acender e o buzzer apitar

//Sensor de temperatura usando o LM35
int LM35 = A0; // Define o pino que lê a saída do LM35
float temperatura; // Variável que armazena a temperatura medida
int ledPin = 13; //Led no pino 13
int buzzerPin = 8; // buzzer pino 8

//Função que é executada uma vez quando ligar ou resetar o Arduino
void setup() {
pinMode(ledPin,OUTPUT); //define a pino 13 como saída
Serial.begin(9600); // inicializa a comunicação serial
pinMode(buzzerPin, OUTPUT); //
}

//Função que é executada continuamente
void loop() {
temperatura = (float(((((analogRead(LM35)*5.0)/1023)*1000)-500)/10));
Serial.print("Temperatura: ");
Serial.println(temperatura);
 //se o valor lido for maior que 27, liga o led e ativa buzzer
 if (temperatura >= 27) {
 digitalWrite(ledPin,HIGH);
 tone(buzzerPin,2000); 
 }
 
 // senão, apaga o led e desativa buzzer
 else {
 digitalWrite(ledPin,LOW);
 noTone(buzzerPin); 
 }
delay(100);
} 
#endif 

#ifdef ex2
//Acrescente mais 2 leds a montagem. Conforme a temperatura aumenta os 
//leds vão acendendo progressivamente. O buzzer deve apitar quando o último led acender.
int led1 = 11; //Led no pino 11
int led2 = 12; //Led no pino 12
int led3 = 13; //Led no pino 13
int LM35 = A0; // Define o pino que lê a saída do LM35
float temperatura; // Variável que armazena a temperatura medida
int buzzerPin = 8; // buzzer pino 8

void setup() {
pinMode(led1,OUTPUT); 
pinMode(led2,OUTPUT); 
pinMode(led3,OUTPUT);
Serial.begin(9600);
pinMode(buzzerPin, OUTPUT);
}


void loop() {
temperatura = (float(((((analogRead(LM35)*5.0)/1023)*1000)-500)/10));
Serial.print("Temperatura: ");
Serial.println(temperatura);

if (temperatura >= 0)
	digitalWrite(led1,HIGH);
else
	digitalWrite(led1,LOW);
 
if (temperatura>= 45)
    digitalWrite(led2,HIGH);
else
	digitalWrite(led2,LOW);
  
if (temperatura >= 100) {
	digitalWrite(led3,HIGH);
  	tone (buzzerPin,2000);
}
  
else {
	digitalWrite(led3,LOW);
  	noTone(buzzerPin);
}
  
delay(100);
  
} 
#endif 

#ifdef ex3
//Transforme a leitura do sensor de temperatura em uma função que
//retorna o valor lido.
int led1 = 11; //Led no pino 11
int led2 = 12; //Led no pino 12
int led3 = 13; //Led no pino 13
int LM35 = A0; // Define o pino que lê a saída do LM35
int buzzerPin = 8; // buzzer pino 8

void setup() {
pinMode(led1,OUTPUT); 
pinMode(led2,OUTPUT); 
pinMode(led3,OUTPUT); 
Serial.begin(9600); 
pinMode(buzzerPin, OUTPUT);
}

float leituraTemp() {
float temperatura; // Variável que armazena a temperatura medida
temperatura = (float(((((analogRead(LM35)*5.0)/1023)*1000)-500)/10));
Serial.print("Temperatura: ");
Serial.println(temperatura);

return temperatura;
}

//Função que é executada continuamente
void loop() {
float temperatura;
temperatura = leituraTemp();

if (temperatura >= 0)
	digitalWrite(led1,HIGH); 
else
	digitalWrite(led1,LOW);
 
if (temperatura >= 45)
    digitalWrite(led2,HIGH);
else
	digitalWrite(led2,LOW);
  
if (temperatura >= 100) {
	digitalWrite(led3,HIGH);
  	tone (buzzerPin,2000);
}

else {
	digitalWrite(led3,LOW); 
   	noTone(buzzerPin);
}
  
delay(100);
  
} 
#endif ex3

#ifdef ex4
//Transforme o controle de cada um dos led em uma função que
//recebe o valor lido.

int led1 = 11; //Led no pino 11
int led2 = 12; //Led no pino 12
int led3 = 13; //Led no pino 13
int LM35 = A0; // Define o pino que lê a saída do LM35
int buzzerPin = 8; // buzzer pino 8

void setup() {
pinMode(led1,OUTPUT); 
pinMode(led2,OUTPUT); 
pinMode(led3,OUTPUT); 
Serial.begin(9600); 
pinMode(buzzerPin, OUTPUT); 
}

float leituraTemp() {
float temperatura; 
temperatura = (float(((((analogRead(LM35)*5.0)/1023)*1000)-500)/10));
Serial.print("Temperatura: ");
Serial.println(temperatura);

return temperatura;
}

void ligaLed1(float temperatura){
	if (temperatura >= 0)
		digitalWrite(led1,HIGH);
	else
		digitalWrite(led1,LOW);
}

void ligaLed2(float temperatura){
	if (temperatura >= 45)
  	  digitalWrite(led2,HIGH);
	else
		digitalWrite(led2,LOW);
}

void ligaLed3(float temperatura){
	if (temperatura >= 100)
		digitalWrite(led3,HIGH);
	else
		digitalWrite(led3,LOW);
}

void loop() {
float temperatura;
temperatura = leituraTemp();
ligaLed1(temperatura);
ligaLed2(temperatura);
ligaLed3(temperatura);
  
if (temperatura >= 100)
   tone(buzzerPin,2000);
else 
   noTone(buzzerPin);
  
delay(100);
} 
#endif ex4

#ifdef ex5
//Transforme o controle de cada um dos led em uma função que
//recebe o valor lido.

int led1 = 11; //Led no pino 11
int led2 = 12; //Led no pino 12
int led3 = 13; //Led no pino 13
int LM35 = A0; // Define o pino que lê a saída do LM35
int buzzerPin = 8; // buzzer pino 8

void setup() {
pinMode(led1,OUTPUT); //define a porta 13 como saída
pinMode(led2,OUTPUT); //define a porta 13 como saída
pinMode(led3,OUTPUT); //define a porta 13 como saída
Serial.begin(9600); // inicializa a comunicação serial
pinMode(buzzerPin, OUTPUT); //
}

float leituraTemp() {
float temperatura; // Variável que armazena a temperatura medida
temperatura = (float(((((analogRead(LM35)*5.0)/1023)*1000)-500)/10));
Serial.print("Temperatura: ");
Serial.println(temperatura);
 
return temperatura;
}

void ligaLed1(float temperatura){
	if (temperatura >= 0)
		digitalWrite(led1,HIGH);
	else
		digitalWrite(led1,LOW);
}

void ligaLed2(float temperatura){
	if (temperatura >= 45)
   		digitalWrite(led2,HIGH);
	else
		digitalWrite(led2,LOW);
}

void ligaLed3(float temperatura){
	if (temperatura >= 100)
		digitalWrite(led3,HIGH);
	else
		digitalWrite(led3,LOW);
}

void buzzerPin1(float temperatura){
	if (temperatura >= 100)
   		tone (buzzerPin,2000);
	else 
   		noTone(buzzerPin);
}

void loop() {
float temperatura;
temperatura = leituraTemp();
ligaLed1(temperatura);
ligaLed2(temperatura);
ligaLed3(temperatura);
buzzerPin1(temperatura);
delay(100); 
} 
#endif ex5
