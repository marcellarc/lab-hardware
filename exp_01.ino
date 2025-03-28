//Nomes: Josefa Aline Santos e Marcella Ricoy

#define ex1

#ifdef ex1
//Faça os leds piscarem a cada 4 seg
int led = 13;
// Esta função "setup" roda uma vez quando a placa e ligada ou resetada
void setup() {
// Configura o pino do led (digital) como saída
pinMode(led, OUTPUT);
}
// Função que se repete infinitamente quando a placa é ligada
void loop() {
digitalWrite(led, HIGH);// Liga o LED (HIGH = nível lógico alto)
delay(4000); // Espera quatro segundos
digitalWrite(led, LOW); // Desliga o LED (LOW = nível lógico baixo)
delay(4000); // Espera quatro segundos
}
#endif 

#ifdef ex2
int led = 13;

void setup() {
pinMode(led, OUTPUT);
}

void loop() {
digitalWrite(led, HIGH);// Liga o LED (HIGH = nível lógico alto)
delay(2000); // Espera dois segundos
digitalWrite(led, LOW); // Desliga o LED (LOW = nível lógico baixo)
delay(4000); // Espera quatro segundos
}
#endif 

#ifdef ex3
int led = 13;

void setup(){
pinMode(led, OUTPUT);
}

void loop() {
digitalWrite(led, HIGH); //Liga o LED
delay(2000); //Espera dois segundos
digitalWrite(led, LOW); //Desliga o LED
delay(4000); //Espera quatro segundos
digitalWrite(led, HIGH); //Liga o LED
delay(3000); //Espera trÊs segundos
digitalWrite(led, LOW); //Desliga o LED
delay(5000); //Espera cinco segundos
}
#endif 

#ifdef ex4
//Troque no programa a inicialização da variável led de 13 para 12. Observe o que ocorre.
int led = 12;

void setup(){
pinMode(led, OUTPUT);
}

void loop() {
digitalWrite(led, HIGH); //Liga o LED
delay(2000); //Espera dois segundos
digitalWrite(led, LOW); //Desliga o LED
delay(4000); //Espera quatro segundos
digitalWrite(led, HIGH); //Liga o LED
delay(3000); //Espera trÊs segundos
digitalWrite(led, LOW); //Desliga o LED
delay(5000); //Espera cinco segundos
}
//O LED não acendeu porque o resistor não está conectado com o pino 12 no arduino.
//Para acender, a corrente elétrica precisa estar passando para o pino 12.
//Caso o resistor esteja conectado no pino 12, somente o LED externo irá acender.
#endif

#ifdef ex5
//Modifique o programa para o led externo piscar. Tempo 1 seg.
int led = 12;

void setup(){
pinMode(led, OUTPUT);
}

void loop(){
digitalWrite(led, HIGH); //Liga o LED
delay(1000); //Espera um segundo
digitalWrite(led, LOW); //Desliga o LED
delay(1000); //Espera um segundo
}
//Para que somente o LED externo acenda, o resistor estará conectado no pino 12.
#endif 

#ifdef ex6
//Faça o led da placa piscar ao mesmo tempo que o led externo. Tempo 1 seg.
int led = 13;

void setup(){
pinMode(led, OUTPUT);
}

void loop(){
digitalWrite(led, HIGH); //Liga o LED
delay(1000); //Espera um segundo
digitalWrite(led, LOW); //Desliga o LED
delay(1000); //Espera um segundo
}
//Basta desfazer os feitos do exercício anterior e retornar a variável led para 13, assim como o resistor.
//Dessa forma, os dois LEDs (externo e da placa) irão acender.
#endif 

#ifdef ex7
//Faça o led da placa piscar com um tempo de 2 seg. e o led externo piscar com um tempo de 3 seg.
int ledPLACA = 13;
int ledEXTERNO = 12;

void setup(){
pinMode(ledPLACA, OUTPUT);
pinMode(ledEXTERNO, OUTPUT);
}

void loop(){
digitalWrite(ledPLACA, HIGH); //Liga o LED da placa
delay(2000); //Espera dois segundos
digitalWrite(ledPLACA, LOW); //Desliga o LED da placa
digitalWrite(ledEXTERNO, HIGH); //Liga o LED externo
delay(3000); //Espera três segundos
digitalWrite(ledEXTERNO, LOW); //Desliga o LED externo
}
//O resistor do LED externo precisa estar conectado ao pino 12.
#endif 

#ifdef ex8
//Faça o led da placa piscar alternadamente em relação ao led externo. Tempo de 1 seg.
int ledPLACA = 13;
int ledEXTERNO = 12;

void setup(){
pinMode(ledPLACA, OUTPUT);
pinMode(ledEXTERNO, OUTPUT);
}

void loop(){
digitalWrite(ledPLACA, HIGH); //Liga o LED da placa
delay(1000); //Espera um segundo
digitalWrite(ledPLACA, LOW); //Desliga o LED da placa
digitalWrite(ledEXTERNO, HIGH); //Liga o LED externo
delay(1000); //Espera um segundo
digitalWrite(ledEXTERNO, LOW); //Desliga o LED externo
}
//O resistor do LED externo precisa estar conectado ao pino 12.
#endif 
