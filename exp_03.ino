//Nomes: Josefa Aline Santos e Marcella Ricoy
#define ex5

#ifdef ex1
//Faça os leds de cores iguais piscarem na sequência verde, amarelo e vermelho com tempo de 1 seg. acesso e 1 seg. apagado.
//Variaveis
int pino8 = 8; //verde 1
int pino9 = 9; //amarelo 1
int pino10 = 10; //vermelho 1
int pino11 = 11; //verde 2
int pino12 = 12; //amarelo 2
int pino13 = 13; //verde 2

void setup() {
 pinMode(pino8, OUTPUT);
 pinMode(pino9, OUTPUT);
 pinMode(pino10, OUTPUT);
 pinMode(pino11, OUTPUT);
 pinMode(pino12, OUTPUT);
 pinMode(pino13, OUTPUT);
}

void loop() {
digitalWrite(pino8,HIGH); //liga verde 1
digitalWrite(pino11,HIGH); //liga verde 2
delay(1000); //tempo de 1 seg.
digitalWrite(pino8,LOW); //desliga verde 1
digitalWrite(pino11,LOW); //desliga verde 2
delay(1000); //tempo de 1 seg.
 

digitalWrite(pino9,HIGH); //liga amarelo 1
digitalWrite(pino12,HIGH); //liga amarelo 2
delay(1000); //tempo de 1 seg.
digitalWrite(pino9,LOW); //desliga amarelo 1
digitalWrite(pino12,LOW); //desliga amarelo 2
delay(1000); //tempo de 1 seg.
  
 digitalWrite(pino10,HIGH); //liga vermelho 1
 digitalWrite(pino13,HIGH); //liga vermelho 2
 delay(1000); //tempo de 1 seg.
 digitalWrite(pino10,LOW); //desliga vermelho 1
 digitalWrite(pino13,LOW); //desliga vermelho 2
 delay(1000); //tempo de 1 seg.

} 
#endif

#ifdef ex2
//Faça funcionar os 2 grupos de leds como um semáforo como num cruzamento com tempos iguais.
//Variaveis
int pino8 = 8; //verde 1
int pino9 = 9; //amarelo 1
int pino10 = 10; //vermelho 1
int pino11 = 11; //verde 2
int pino12 = 12; //amarelo 2
int pino13 = 13; //verde 2

void setup() {
 pinMode(pino8, OUTPUT);
 pinMode(pino9, OUTPUT);
 pinMode(pino10, OUTPUT);
 pinMode(pino11, OUTPUT);
 pinMode(pino12, OUTPUT);
 pinMode(pino13, OUTPUT);
}

void loop() {
  
digitalWrite(pino10,HIGH); //liga vermelho 1  
digitalWrite(pino11,HIGH); //liga verde 2  
delay(2000);
digitalWrite(pino11,LOW); //desliga verde 2
digitalWrite(pino12,HIGH); //liga amarelo 2
delay(2000); //tempo de 2 seg.
digitalWrite(pino12,LOW); //desliga amarelo 2
digitalWrite(pino13,HIGH); //liga vermelho 2
 
digitalWrite(pino8,HIGH); //liga verde 1
digitalWrite(pino10,LOW); //desliga vermelho 1
delay(2000); //tempo de 2 seg.
digitalWrite(pino8,LOW); //desliga verde 1
digitalWrite(pino9,HIGH); //liga amarelo 1
delay(2000); //tempo de 2 seg.
digitalWrite(pino9,LOW); //desliga amarelo 1
digitalWrite(pino13,LOW); //desliga vermelho 2 
} 
#endif

#ifdef ex3
//Modifique os tempos para que um dos semáforos do cruzamento fique mais tempo com verde aceso do que o outro. Verde 4 seg. e 2 segs.
//Variaveis
int pino8 = 8; //verde 1
int pino9 = 9; //amarelo 1
int pino10 = 10; //vermelho 1
int pino11 = 11; //verde 2
int pino12 = 12; //amarelo 2
int pino13 = 13; //verde 2

void setup() {
 pinMode(pino8, OUTPUT);
 pinMode(pino9, OUTPUT);
 pinMode(pino10, OUTPUT);
 pinMode(pino11, OUTPUT);
 pinMode(pino12, OUTPUT);
 pinMode(pino13, OUTPUT);
}

void loop() {
digitalWrite(pino10,HIGH); //liga vermelho 1  
digitalWrite(pino11,HIGH); //liga verde 2  
delay(4000); //tempo de 4 seg.
digitalWrite(pino11,LOW); //desliga verde 2
digitalWrite(pino12,HIGH); //liga amarelo 2
delay(2000); //tempo de 2 seg.
digitalWrite(pino12,LOW); //desliga amarelo 2
digitalWrite(pino13,HIGH); //liga vermelho 2
 
digitalWrite(pino8,HIGH); //liga verde 1
digitalWrite(pino10,LOW); //desliga vermelho 1
delay(2000); //tempo de 2 seg.
digitalWrite(pino8,LOW); //desliga verde 1
digitalWrite(pino9,HIGH); //liga amarelo 1
delay(2000); //tempo de 2 seg.
digitalWrite(pino9,LOW); //desliga amarelo 1
digitalWrite(pino13,LOW); //desliga vermelho 2 
} 
#endif

#ifdef ex4
//Acrescente um botão a montagem. Faça funcionar os semáforos para travessia de pedestres. Um será para o carro e o outro para os pedestres.
//Variaveis
int pino8 = 8; //verde 1
int pino10 = 10; //vermelho 1
int pino11 = 11; //verde 2
int pino12 = 12; //amarelo 2
int pino13 = 13; //verde 2
int buttonPin = 2; //botao
int buzzerPin = 7; //buzzer

int buttonState = 0;

void setup() {
 pinMode(pino8, OUTPUT);
 pinMode(pino10, OUTPUT);
 pinMode(pino11, OUTPUT);
 pinMode(pino12, OUTPUT);
 pinMode(pino13, OUTPUT);
 pinMode(buttonPin, INPUT);
 pinMode(buzzerPin, OUTPUT);
}
 
void loop(){
digitalWrite(pino10,HIGH); //liga vermelho pessoa 
digitalWrite(pino11,HIGH); //liga verde carro
digitalWrite(pino13,LOW); //desliga vermelho carro
delay(2000);
digitalWrite(pino11,LOW); //desliga verde carro
digitalWrite(pino12,HIGH); //liga amarelo carro
delay(2000); //tempo de 1 seg.
digitalWrite(pino12,LOW); //desliga amarelo carro
digitalWrite(pino13,HIGH); //liga vermelho carro
delay(2000);

  
 buttonState = digitalRead(buttonPin);
 Serial.println(buttonState);
     
//se botao estiver pressionado
if(buttonState == LOW)
   {
	digitalWrite(pino8,HIGH); //liga verde pessoa
	digitalWrite(pino10,LOW); //desliga vermelho pessoa

	delay(5000); //tempo de 2 seg.
  
	digitalWrite(pino8,LOW); //desliga verde pessoa
	digitalWrite(pino13,LOW); //desliga vermelho carro
    }  
}
#endif

#ifdef ex5
//Acrescente um buzzer a montagem e quando o botão for acionado no semáforo de pedestre o buzzer deve apitar por 100ms.
//Variaveis
int pino8 = 8; //verde 1
int pino10 = 10; //vermelho 1
int pino11 = 11; //verde 2
int pino12 = 12; //amarelo 2
int pino13 = 13; //verde 2
int buttonPin = 2; //botao
int buzzerPin = 7; ///buzzer

int buttonState = 0;

void setup() {
 pinMode(pino8, OUTPUT);
 pinMode(pino10, OUTPUT);
 pinMode(pino11, OUTPUT);
 pinMode(pino12, OUTPUT);
 pinMode(pino13, OUTPUT);
 pinMode(buttonPin, INPUT);
 pinMode(buzzerPin, OUTPUT);
}

void loop(){
digitalWrite(pino10,HIGH); //liga vermelho pessoa 
digitalWrite(pino11,HIGH); //liga verde carro
digitalWrite(pino13,LOW); //desliga vermelho carro
delay(2000); //tempo de 2 seg.
digitalWrite(pino11,LOW); //desliga verde carro
digitalWrite(pino12,HIGH); //liga amarelo carro
delay(2000); //tempo de 2 seg.
digitalWrite(pino12,LOW); //desliga amarelo carro
digitalWrite(pino13,HIGH); //liga vermelho carro
delay(2000);

buttonState = digitalRead(buttonPin);
Serial.println(buttonState);
  
//se botao estiver pressionado
if(buttonState == LOW)
   {
  	tone(buzzerPin, 100);
  	delay(100); //tempo de 100 ms
  	noTone(buzzerPin);
  
	digitalWrite(pino8,HIGH); //liga verde pessoa
	digitalWrite(pino10,LOW); //desliga vermelho pessoa

	delay(2000); //tempo de 2 seg.
  
	digitalWrite(pino8,LOW); //desliga verde pessoa
	digitalWrite(pino13,LOW); //desliga vermelho carro
    }  
}
#endif

#ifdef ex6
//Transforme o acionamento do buzzer em uma função.
int pino8 = 8; //verde 1
int pino10 = 10; //vermelho 1
int pino11 = 11; //verde 2
int pino12 = 12; //amarelo 2
int pino13 = 13; //verde 2
int buttonPin = 2; //botao
int buzzerPin = 7; //buzzer

int buttonState = 0;

void setup() {
 pinMode(pino8, OUTPUT);
 pinMode(pino10, OUTPUT);
 pinMode(pino11, OUTPUT);
 pinMode(pino12, OUTPUT);
 pinMode(pino13, OUTPUT);
 pinMode(buttonPin, INPUT);
 pinMode(buzzerPin, OUTPUT);
}
void BuzzerOn()
{
  tone(buzzerPin,3000);
  delay(100);
  noTone(buzzerPin);
}

void loop(){
digitalWrite(pino10,HIGH); //liga vermelho pessoa 
digitalWrite(pino11,HIGH); //liga verde carro
digitalWrite(pino13,LOW); //desliga vermelho carro
delay(2000); //tempo de 2 seg.
digitalWrite(pino11,LOW); //desliga verde carro
digitalWrite(pino12,HIGH); //liga amarelo carro
delay(2000); //tempo de 2 seg.
digitalWrite(pino12,LOW); //desliga amarelo carro
digitalWrite(pino13,HIGH); //liga vermelho carro
delay(2000);

buttonState = digitalRead(buttonPin);
Serial.println(buttonState);
  
//se botao estiver pressionado
if(buttonState == LOW)
   {
  	BuzzerOn();
  	delay(100); //tempo de 100 ms
  
	digitalWrite(pino8,HIGH); //liga verde pessoa
	digitalWrite(pino10,LOW); //desliga vermelho pessoa

	delay(2000); //tempo de 2 seg.
  
	digitalWrite(pino8,LOW); //desliga verde pessoa
	digitalWrite(pino13,LOW); //desliga vermelho carro
    }  
  
}
#endif