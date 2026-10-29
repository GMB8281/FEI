#include "Servo.h"        // Inclui a biblioteca Servo.h

Servo meuservo;

int angulo = 0;
int sensorValue = 0;

const int analogInPin = A0;  // Pino do potenciômetro
const int ledEsquerda = 3;   // LED da esquerda
const int ledMeio = 4;       // LED do meio
const int ledDireita = 5;    // LED da direita
const int buzzerPin = 6;     // Pino do buzzer

void setup() {
    meuservo.attach(9);     // Pino do servo

    pinMode(ledEsquerda, OUTPUT);
    pinMode(ledMeio, OUTPUT);
    pinMode(ledDireita, OUTPUT);
    pinMode(buzzerPin, OUTPUT); // Configura o pino do buzzer como saída

    Serial.begin(9600);
}

void loop() {
    sensorValue = analogRead(analogInPin);

    // Converte o valor do potenciômetro em ângulo
    angulo = map(sensorValue, 0, 1023, 0, 180);

    // Controla o servo motor
    meuservo.write(angulo);

    // Apaga todos os LEDs e desliga o buzzer antes de verificar a posição
    digitalWrite(ledEsquerda, LOW);
    digitalWrite(ledMeio, LOW);
    digitalWrite(ledDireita, LOW);
    noTone(buzzerPin); // Garante que o buzzer começa desligado

    // Potenciômetro muito para a esquerda (Extremo esquerdo)
    if (sensorValue < 341) {
        digitalWrite(ledEsquerda, HIGH);
        tone(buzzerPin, 1000); // Toca o buzzer a 1000 Hz no extremo esquerdo
    }

    // Potenciômetro aproximadamente no meio
    else if (sensorValue >= 341 && sensorValue <= 682) {
        digitalWrite(ledMeio, HIGH);
        // Buzzer permanece desligado no meio
    }

    // Potenciômetro muito para a direita (Extremo direito)
    else {
        digitalWrite(ledDireita, HIGH);
        tone(buzzerPin, 1500); // Toca o buzzer a 1500 Hz no extremo direito (frequência diferente para diferenciar)
    }

    Serial.println(angulo);

    delay(15);
}