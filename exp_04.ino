//Nomes: Josefa Aline Santos e Marcella Ricoy
#define ex1

#ifdef ex1
//Acrescente um buzzer a montagem. Modifique o programa para o led
//acender e o buzzer apitar.
//Sensor de luz
int ledPin = 13; //Led no pino 13
int ldrPin = A0; //LDR no pino analogico A0
int ldrValor = 0; //Valor lido do LDR
int buzzerPin = 8;

void setup() {
pinMode(ledPin,OUTPUT); //define a porta 13 como saída
pinMode(buzzerPin, OUTPUT); ////Inicializa o pin do buzzer como saÍda(OUTPUT)
Serial.begin(9600); //Inicia a comunicação serial
}
void loop() {
//ler o valor do LDR
ldrValor = analogRead(ldrPin); //O valor lido sera’ entre 0 e 1023
//imprime o valor lido do LDR no monitor serial
Serial.println(ldrValor);
  
//se o valor lido for maior que 500, liga o led e aciona o buzzer
if (ldrValor>= 500) {
  digitalWrite(ledPin,HIGH);
  tone(buzzerPin, 2000);
}
// senão, apaga o led e desliga o buzzer
else {
  digitalWrite(ledPin,LOW);
  noTone(buzzerPin);
}
  
delay(100);
} 
#endif

#ifdef ex2
//Acrescente mais 2 leds a montagem. Conforme a luminosidade diminui os
//leds vão acendendo progressivamente. O buzzer deve apitar quando o último led
//acender.
int led1 = 11; //Led no pino 11
int led2 = 12; //Led no pino 12
int led3 = 13; //Led no pino 13
int ldrPin = A0; //LDR no pino analogico A0
int ldrValor = 0; //Valor lido do LDR
int buzzerPin = 8;

void setup() {
pinMode(led1,OUTPUT); 
pinMode(led2,OUTPUT); 
pinMode(led3,OUTPUT); 
pinMode(buzzerPin, OUTPUT); 
Serial.begin(9600); 
}

void loop() {
//ler o valor do LDR
ldrValor = analogRead(ldrPin); 
Serial.println(ldrValor);
  
if (ldrValor >= 345)
  digitalWrite(led1,HIGH);
else
  digitalWrite(led1,LOW);
  
if (ldrValor >= 500)
  digitalWrite(led2,HIGH);
else
  digitalWrite(led2,LOW);
  
if (ldrValor >= 1000) {
  digitalWrite(led3,HIGH);
  tone(buzzerPin, 2000);
}
  
else {
  digitalWrite(led3,LOW);
  noTone(buzzerPin);
}

delay(100);
} 
#endif

#ifdef ex3
//Transforme a leitura do sensor de luminosidade em uma função que
//retorna o valor lido.
int led1 = 11; 
int led2 = 12; 
int led3 = 13;
int ldrPin = A0; //LDR no pino analogico A0
int buzzerPin = 8;

void setup() {
pinMode(led1,OUTPUT); 
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT); 
pinMode(buzzerPin, OUTPUT); 
Serial.begin(9600); 
}

int leituraSensor() { //função que lê e retorna o valor lido
int ldrValor = 0;
//ler o valor do LDR
ldrValor = analogRead(ldrPin); //O valor lido sera’ entre 0 e 1023
//imprime o valor lido do LDR no monitor serial
Serial.println(ldrValor);
  
return ldrValor;
}

void loop() {
int ldrValor;
ldrValor = leituraSensor();

if (ldrValor >= 345)
  digitalWrite(led1,HIGH);
else
  digitalWrite(led1,LOW);
  
if (ldrValor >= 500)
  digitalWrite(led2,HIGH);
else
  digitalWrite(led2,LOW);
  
if (ldrValor >= 1000) {
  digitalWrite(led3,HIGH);
  tone(buzzerPin, 2000);
}

else {
  digitalWrite(led3,LOW);
  noTone(buzzerPin);
}

delay(100);
} 
#endif

#ifdef ex4
//Transforme o controle de cada um dos leds em uma função que
//recebe o valor lido.
int led1 = 11; //Led no pino 11
int led2 = 12; //Led no pino 12
int led3 = 13; //Led no pino 13
int ldrPin = A0; //LDR no pino analogico A0
int buzzerPin = 8;

void setup() {
pinMode(led1,OUTPUT); //define a porta 13 como saída
pinMode(led2,OUTPUT); //define a porta 13 como saída
pinMode(led3,OUTPUT); //define a porta 13 como saída
pinMode(buzzerPin, OUTPUT); ////Inicializa o pin do buzzer como saÍda(OUTPUT)
Serial.begin(9600); //Inicia a comunicação serial
}

int leituraSensor() {
int ldrValor = 0; 
ldrValor = analogRead(ldrPin); 
Serial.println(ldrValor);
  
return ldrValor; 
}

void ligaLED1(int ldrValor) {
	if (ldrValor >= 345)
		digitalWrite(led1,HIGH);
	else
		digitalWrite(led1,LOW);
}

void ligaLED2(int ldrValor) {
	if (ldrValor >= 500)
	  digitalWrite(led2,HIGH);
	else
		digitalWrite(led2,LOW);
}

void ligaLED3(int ldrValor) {
  if (ldrValor >= 1000) {
  	digitalWrite(led3,HIGH);
 	tone(buzzerPin, 2000);
  }
  else {
	digitalWrite(led3,LOW);
  	noTone(buzzerPin);
    }
}

void loop() {
int ldrValor;
ldrValor = leituraSensor();
ligaLED1(ldrValor);
ligaLED2(ldrValor);
ligaLED3(ldrValor);
  
if (ldrValor >= 1000) 
 	tone(buzzerPin, 2000);
else 
  	noTone(buzzerPin);
  
delay(100);
} 
#endif

#ifdef ex5
//Transforme o controle do buzzer em uma função que
//recebe o valor lido.
int led1 = 11; //Led no pino 11
int led2 = 12; //Led no pino 12
int led3 = 13; //Led no pino 13
int ldrPin = A0; //LDR no pino analogico A0
int buzzerPin = 8;

void setup() {
pinMode(led1,OUTPUT); 
pinMode(led2,OUTPUT); //define a porta 13 como saída
pinMode(led3,OUTPUT); //define a porta 13 como saída
pinMode(buzzerPin, OUTPUT); ////Inicializa o pin do buzzer como saÍda(OUTPUT)
Serial.begin(9600); //Inicia a comunicação serial
}

int leituraSensor() {
int ldrValor = 0; 
ldrValor = analogRead(ldrPin); 
Serial.println(ldrValor);
  
return ldrValor; 
}

void ligaLED1(int ldrValor) {
	if (ldrValor >= 345)
		digitalWrite(led1,HIGH);
	else
		digitalWrite(led1,LOW);
}

void ligaLED2(int ldrValor) {
	if (ldrValor >= 500)
	  digitalWrite(led2,HIGH);
	else
		digitalWrite(led2,LOW);
}

void ligaLED3(int ldrValor) {
	if (ldrValor >= 1000)
  		digitalWrite(led3,HIGH);
	else
		digitalWrite(led3,LOW);
}


void ligaBuzzer(int ldrValor) {
	if (ldrValor >= 1000)
 	 tone(buzzerPin, 2000);
  
	else
	  noTone(buzzerPin);
}

void loop() {
int ldrValor;
ldrValor = leituraSensor();
ligaLED1(ldrValor);
ligaLED2(ldrValor);
ligaLED3(ldrValor);
ligaBuzzer(ldrValor);
  
delay(100);
} 
#endif
