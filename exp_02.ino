//Nomes: Josefa Aline Santos e Marcella Ricoy
#define ex8

#ifdef ex1
/*Acrescente mais um botão e um led a montagem. 
Modifique o programa para que cada botão acenda um dos led sem acionar o buzzer. */
// Variaveis dos primeiros led/botao
int buttonPin = 2; // Numero do pino do botão de pressão
int ledPin = 13; // Numero do pino do led
int buttonState = 0;// Variável para leitura do estado do botão

//Variaveis dos segundos led/botao
int buttonPin2 = 3; // Numero do pino do botão de pressão 2
int ledPin2 = 12; // Numero do pino do led 2
int buttonState2 = 0; // Variável para leitura do estado do botão 2

//Variavel do buzzer
int buzzerPin = 7; // Numero do pino do buzzer

// Executa uma vez ao ligar ou reiniciar a placa
void setup() {
pinMode(ledPin, OUTPUT); //Inicializa o pino do LED 1 como saída (OUTPUT)
pinMode(buttonPin, INPUT); // Inicializa o pin do botão como entrada (INPUT)
pinMode(ledPin2, OUTPUT); //Inicializa o pino do LED 2 como saída (OUTPUT)
pinMode(buttonPin2, INPUT); // Inicializa o pin do botão 2 como entrada (INPUT)
pinMode(buzzerPin, OUTPUT); //Inicializa o pin do buzzer como saÍda(OUTPUT)
Serial.begin(9600); //Inicia porta serial e define a velocidade de transmissão
}
// Executa infinitamente quando liga a placa
void loop() {
//Lê o estado do botao (HIGH -> +5V -> botão nao press.)(LOW -> 0V botao press)
buttonState = digitalRead(buttonPin);
Serial.println(buttonState);
buttonState2 = digitalRead(buttonPin2);
Serial.println(buttonState2);
// Testa se o botão não está pressionado
// Se sim, o estado do botão e alto (HIGH)
if (buttonState == HIGH) {
digitalWrite(ledPin, LOW ); // Desliga o LED
noTone(buzzerPin); //desliga buzzer
}
else {
digitalWrite(ledPin,HIGH ); // Liga o LED
noTone(buzzerPin); //desliga buzzer
}
if (buttonState2 == HIGH) {
digitalWrite(ledPin2, LOW ); // Desliga o LED 2
noTone(buzzerPin); //desliga buzzer 
}
// Senão (Botao pressionado)
else {
digitalWrite(ledPin2,HIGH ); // Liga o LED 2
noTone(buzzerPin); //desliga buzzer
}
}
#endif

#ifdef ex2
/*Modifique o programa para o buzzer apitar quando o led 1 acender.*/
// Variaveis dos primeiros led/botao
int buttonPin = 2; // Numero do pino do botão de pressão
int ledPin = 13; // Numero do pino do led
int buttonState = 0; // Variável para leitura do estado do botão

//Variaveis dos segundos led/botao
int buttonPin2 = 3; // Numero do pino do botão de pressão
int ledPin2 = 12; // Numero do pino do led
int buttonState2 = 0; // Variável para leitura do estado do botão

//Variavel do buzzer
int buzzerPin = 7; // Numero do pino do buzzer

// Executa uma vez ao ligar ou reiniciar a placa
void setup() {
pinMode(ledPin, OUTPUT); //Inicializa o pino do LED como saída (OUTPUT)
pinMode(buttonPin, INPUT); // Inicializa o pin do botão como entrada (INPUT)
pinMode(ledPin2, OUTPUT); //Inicializa o pino do LED 2 como saída (OUTPUT)
pinMode(buttonPin2, INPUT); // Inicializa o pin do botão 2 como entrada (INPUT)
pinMode(buzzerPin, OUTPUT); //Inicializa o pin do buzzer como saÍda(OUTPUT)
Serial.begin(9600); //Inicia porta serial e define a velocidade de transmissão
}
// Executa infinitamente quando liga a placa
void loop() {
//Lê o estado do botao (HIGH -> +5V -> botão nao press.)(LOW -> 0V botao press)
buttonState = digitalRead(buttonPin);
Serial.println(buttonState);
buttonState2 = digitalRead(buttonPin2);
Serial.println(buttonState2);
// Testa se o botão não está pressionado
// Se sim, o estado do botão e alto (HIGH)
if (buttonState == HIGH) {
digitalWrite(ledPin, LOW ); // Desliga o LED 1
}
else {
digitalWrite(ledPin,HIGH ); // Liga o LED 1
}
  
if (buttonState2 == HIGH) {
digitalWrite(ledPin2, LOW ); // Desliga o LED 2
}
// Senão (Botao pressionado)
else {
digitalWrite(ledPin2,HIGH ); // Liga o LED 2
}
if (buttonState == LOW ){
  tone(buzzerPin, 2000); //Liga o buzzer
}
  else {
    noTone(buzzerPin);} //Desliga o buzzer
}
#endif

#ifdef ex3
/*Modifique o programa para o buzzer apitar quando o led 1 acender.*/
// Variaveis dos primeiros led/botao
int buttonPin = 2; // Numero do pino do botão de pressão
int ledPin = 13; // Numero do pino do led
int buttonState = 0; // Variável para leitura do estado do botão

//Variaveis dos segundos led/botao
int buttonPin2 = 3; // Numero do pino do botão de pressão
int ledPin2 = 12; // Numero do pino do led
int buttonState2 = 0; // Variável para leitura do estado do botão

//Variavel do buzzer
int buzzerPin = 7; // Numero do pino do buzzer

// Executa uma vez ao ligar ou reiniciar a placa
void setup() {
pinMode(ledPin, OUTPUT); //Inicializa o pino do LED como saída (OUTPUT)
pinMode(buttonPin, INPUT); // Inicializa o pin do botão como entrada (INPUT)
pinMode(ledPin2, OUTPUT); //Inicializa o pino do LED 2 como saída (OUTPUT)
pinMode(buttonPin2, INPUT); // Inicializa o pin do botão 2 como entrada (INPUT)
pinMode(buzzerPin, OUTPUT); //Inicializa o pin do buzzer como saÍda(OUTPUT)
Serial.begin(9600); //Inicia porta serial e define a velocidade de transmissão
}
// Executa infinitamente quando liga a placa
void loop() {
//Lê o estado do botao (HIGH -> +5V -> botão nao press.)(LOW -> 0V botao press)
buttonState = digitalRead(buttonPin);
Serial.println(buttonState);
buttonState2 = digitalRead(buttonPin2);
Serial.println(buttonState2);
// Testa se o botão não está pressionado
// Se sim, o estado do botão e alto (HIGH)
if (buttonState == HIGH) {
digitalWrite(ledPin2, LOW ); // Desliga o LED 2
}
else {
digitalWrite(ledPin2,HIGH ); // Liga o LED 2
}
  
if (buttonState2 == HIGH) {
digitalWrite(ledPin, LOW ); // Desliga o LED 1
}
// Senão (Botao pressionado)
else {
digitalWrite(ledPin,HIGH ); // Liga o LED 1
}
if (buttonState2 == LOW ){
  tone(buzzerPin, 2000); //Liga o buzzer
}
  else {
    noTone(buzzerPin);} //Desliga o buzzer
}
#endif

#ifdef ex4
/*Modifique o programa para o led 1 acender e o buzzer apitar quando o botão 2
é apertado e o led 2 acender e o buzzer apitar quando o botão 1 é apertado.*/
// Variaveis dos primeiros led/botao
int buttonPin = 2; // Numero do pino do botão de pressão
int ledPin = 13; // Numero do pino do led
int buttonState = 0; // Variável para leitura do estado do botão

//Variaveis dos segundos led/botao
int buttonPin2 = 3; // Numero do pino do botão de pressão
int ledPin2 = 12; // Numero do pino do led
int buttonState2 = 0; // Variável para leitura do estado do botão

//Variavel do buzzer
int buzzerPin = 7; // Numero do pino do buzzer

// Executa uma vez ao ligar ou reiniciar a placa
void setup() {
pinMode(ledPin, OUTPUT); //Inicializa o pino do LED como saída (OUTPUT)
pinMode(buttonPin, INPUT); // Inicializa o pin do botão como entrada (INPUT)
pinMode(ledPin2, OUTPUT); //Inicializa o pino do LED 2 como saída (OUTPUT)
pinMode(buttonPin2, INPUT); // Inicializa o pin do botão 2 como entrada (INPUT)
pinMode(buzzerPin, OUTPUT); //Inicializa o pin do buzzer como saÍda(OUTPUT)
Serial.begin(9600); //Inicia porta serial e define a velocidade de transmissão
}
// Executa infinitamente quando liga a placa
void loop() {
//Lê o estado do botao (HIGH -> +5V -> botão nao press.)(LOW -> 0V botao press)
buttonState = digitalRead(buttonPin);
Serial.println(buttonState);
buttonState2 = digitalRead(buttonPin2);
Serial.println(buttonState2);
// Testa se o botão não está pressionado
// Se sim, o estado do botão e alto (HIGH)
if (buttonState == HIGH) {
digitalWrite(ledPin, LOW ); // Desliga o LED 1
}
else {
digitalWrite(ledPin2,HIGH ); // Liga o LED 2
}
  
if (buttonState2 == HIGH) {
digitalWrite(ledPin2, LOW ); // Desliga o LED 2
}
// Senão (Botao pressionado)
else {
digitalWrite(ledPin,HIGH ); // Liga o LED 1
}
if (buttonState == LOW || buttonState2 == LOW){
  tone(buzzerPin, 2000); //Liga o buzzer
}
  else {
    noTone(buzzerPin);} //Desliga o buzzer
}
#endif

#ifdef ex5
//Escreva 2 funções que faça a leitura do estado de cada um dos botões.
// Variaveis dos primeiros led/botao
int buttonPin = 2; // Numero do pino do botão de pressão
int ledPin = 13; // Numero do pino do led
int buttonState = 0; // Variável para leitura do estado do botão

//Variaveis dos segundos led/botao
int buttonPin2 = 3; // Numero do pino do botão de pressão
int ledPin2 = 12; // Numero do pino do led
int buttonState2 = 0; // Variável para leitura do estado do botão

//Variavel do buzzer
int buzzerPin = 7; // Numero do pino do buzzer

// Executa uma vez ao ligar ou reiniciar a placa
void setup() {
pinMode(ledPin, OUTPUT); //Inicializa o pino do LED como saída (OUTPUT)
pinMode(buttonPin, INPUT); // Inicializa o pin do botão como entrada (INPUT)
pinMode(ledPin2, OUTPUT); //Inicializa o pino do LED como saída (OUTPUT)
pinMode(buttonPin2, INPUT); // Inicializa o pin do botão como entrada (INPUT)
pinMode(buzzerPin, OUTPUT); //Inicializa o pin do buzzer como saÍda(OUTPUT)
Serial.begin(9600); //Inicia porta serial e define a velocidade de transmissão
}
//Função para ler o estado do botão 1//
void readButton1(){
buttonState = digitalRead(buttonPin);
Serial.println(buttonState);
}
//Função para ler o estado do botão 2//
void readButton2(){
buttonState2 = digitalRead(buttonPin2);
Serial.println(buttonState2);
}
// Executa infinitamente quando liga a placa
void loop() {
//Função que lê o estado do botao (HIGH -> +5V -> botão nao press.)(LOW -> 0V botao press)l
readButton1();
readButton2();
  
// Testa se o botão não está pressionado
// Se sim, o estado do botão e alto (HIGH)
if (buttonState == HIGH) {
digitalWrite(ledPin, LOW ); // Desliga o LED
}
else {
digitalWrite(ledPin,HIGH ); // Liga o LED
}
if (buttonState2 == HIGH) {
digitalWrite(ledPin2, LOW ); // Desliga o LED 2
}
// Senão (Botao pressionado)
else {
digitalWrite(ledPin2,HIGH ); // Liga o LED 2
}
 if (buttonState2 == LOW || buttonState == LOW )
  {tone(buzzerPin, 2000); //liga buzzer
}
  else
  {noTone(buzzerPin);}
}
#endif

#ifdef ex6 
//Escreva 2 funções que tomam a decisão se acende ou apaga cada um do led.//
// Variaveis dos primeiros led/botao
int buttonPin = 2; // Numero do pino do botão de pressão
int ledPin = 13; // Numero do pino do led
int buttonState = 0; // Variável para leitura do estado do botão

//Variaveis dos segundos led/botao
int buttonPin2 = 3; // Numero do pino do botão de pressão 2
int ledPin2 = 12; // Numero do pino do led 2
int buttonState2 = 0; // Variável para leitura do estado do botão 2

//Variavel do buzzer
int buzzerPin = 7; // Numero do pino do buzzer

// Executa uma vez ao ligar ou reiniciar a placa
void setup() {
pinMode(ledPin, OUTPUT); //Inicializa o pino do LED como saída (OUTPUT)
pinMode(buttonPin, INPUT); // Inicializa o pin do botão como entrada (INPUT)
pinMode(ledPin2, OUTPUT); //Inicializa o pino do LED como saída (OUTPUT)
pinMode(buttonPin2, INPUT); // Inicializa o pin do botão como entrada (INPUT)
pinMode(buzzerPin, OUTPUT); //Inicializa o pin do buzzer como saÍda(OUTPUT)
Serial.begin(9600); //Inicia porta serial e define a velocidade de transmissão
}
//Função para ler o estado do botão 1//
void readButton1(){
buttonState = digitalRead(buttonPin);
Serial.println(buttonState);
}
//Função para ler o estado do botão 2//
void readButton2(){
buttonState2 = digitalRead(buttonPin2);
Serial.println(buttonState2);
}

//Função para tomada de decisão - apagar ou acender o LED 1//
void acendeLED1(){
if (buttonState == HIGH) {
digitalWrite(ledPin, LOW ); // Desliga o LED
}
else {
digitalWrite(ledPin,HIGH ); // Liga o LED
}  
} 

//Função para tomada de decisão - apagar ou acender o LED 2//
void acendeLED2(){
if (buttonState2 == HIGH) {
digitalWrite(ledPin2, LOW ); // Desliga o LED 2
}
else {
digitalWrite(ledPin2,HIGH ); // Liga o LED 2
} 
}

// Executa infinitamente quando liga a placa
void loop() {

readButton1();
readButton2();
acendeLED1();
acendeLED2();


 if (buttonState2 == LOW || buttonState == LOW )
  {tone(buzzerPin, 2000); //liga buzzer
}
  else
  {noTone(buzzerPin);}
}
#endif 

#ifdef ex7
//Escreva 2 funções que tomam a decisão se acende ou apaga cada um do led.//
// Variaveis dos primeiros led/botao
int buttonPin = 2; // Numero do pino do botão de pressão
int ledPin = 13; // Numero do pino do led
int buttonState = 0; // Variável para leitura do estado do botão

//Variaveis dos segundos led/botao
int buttonPin2 = 3; // Numero do pino do botão de pressão 2
int ledPin2 = 12; // Numero do pino do led 2
int buttonState2 = 0; // Variável para leitura do estado do botão 2

//Variavel do buzzer
int buzzerPin = 7; // Numero do pino do buzzer

// Executa uma vez ao ligar ou reiniciar a placa
void setup() {
pinMode(ledPin, OUTPUT); //Inicializa o pino do LED como saída (OUTPUT)
pinMode(buttonPin, INPUT); // Inicializa o pin do botão como entrada (INPUT)
pinMode(ledPin2, OUTPUT); //Inicializa o pino do LED como saída (OUTPUT)
pinMode(buttonPin2, INPUT); // Inicializa o pin do botão como entrada (INPUT)
pinMode(buzzerPin, OUTPUT); //Inicializa o pin do buzzer como saÍda(OUTPUT)
Serial.begin(9600); //Inicia porta serial e define a velocidade de transmissão
}
//Função para ler o estado do botão 1//
void readButton1(){
buttonState = digitalRead(buttonPin);
Serial.println(buttonState);
}
//Função para ler o estado do botão 2//
void readButton2(){
buttonState2 = digitalRead(buttonPin2);
Serial.println(buttonState2);
}

//Função para tomada de decisão - apagar ou acender o LED 1//
void acendeLED1(){
if (buttonState == HIGH) {
digitalWrite(ledPin, LOW ); // Desliga o LED
}
else {
digitalWrite(ledPin,HIGH ); // Liga o LED
}  
} 

//Função para tomada de decisão - apagar ou acender o LED 2
void acendeLED2(){
if (buttonState2 == HIGH) {
digitalWrite(ledPin2, LOW ); // Desliga o LED 2
}
else {
digitalWrite(ledPin2,HIGH ); // Liga o LED 2
} 
}
  
//Função que determina o estado do buzzer
void apitaBuzzer(){
if (buttonState2 == LOW || buttonState == LOW )
 tone(buzzerPin, 2000); //liga buzzer}
else
{noTone(buzzerPin);}}

  
// Executa infinitamente quando liga a placa
void loop(){
readButton1();
readButton2();
acendeLED1();
acendeLED2();
apitaBuzzer(); 
}
#endif 

#ifdef ex8
//Copie o programa abaixo: 
//Execute a música.
//Depois tire a função “delay(5000);” e coloque no programa o botão 1 para iniciar a música.//
#define DO 264
#define RE 297
#define MI 330
#define FA 352
#define SOL 396
#define LA 440
#define SI 495
#define D 500
#define N 29
int notas[][2] = { {SOL, D/2}, {SOL, D/2}, {LA,D*2}, {SOL, D}, {DO*2,D},
{SI,D*3}, {SOL, D/2}, {SOL, D/2}, {LA,D*2}, {SOL,D }, {RE*2,D }, {DO*2,D },
{DO*2,D }, {0,D }, {MI*2,D/2 }, {MI*2,D/2 }, {SOL*2,D*2 }, {MI*2,D }, {DO*2,D
},
{SI,D }, {LA,D }, {0,D }, {FA*2,D/2 }, {FA*2,D/2 }, {MI*2,D*2 }, {DO*2,D },
{RE*2,D }, {DO*2,D }, {DO*2,D*3} };
int duracao;
int nota;
int buzzerPin = 7;
int buttonPin = 2;
int buttonState = 0;
void setup(){
pinMode(buzzerPin,OUTPUT);
pinMode(buttonPin, INPUT); // Inicializa o pin do botão como entrada (INPUT)
}
void loop(){
//Lê o estado do botao (HIGH -> +5V -> botão nao press.)(LOW -> 0V botao press)
buttonState = digitalRead(buttonPin);
Serial.println(buttonState);
for (int i = 0; i < N; i++){
nota = notas[i][0];
duracao = notas[i][1];

  if (buttonState == LOW ) { //Se botão pressionado, música será ligada
  tone(buzzerPin, nota, duracao); // Liga buzzer
  delay(duracao);}

  else{
    noTone(buzzerPin);
  }
}				
}
#endif 