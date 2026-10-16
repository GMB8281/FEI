const int ledCarroVerde = 4;
const int ledCarroAmarelo = 3;
const int ledCarroVermelho = 2;
const int ledPedVermelho = 5;
const int ledPedVerde = 6;
const int botao = 7;

const long tempoTravessia = 5000; // Tempo em milissegundos para o pedestre atravessar

void setup() {
  pinMode(ledCarroVerde, OUTPUT);
  pinMode(ledCarroAmarelo, OUTPUT);
  pinMode(ledCarroVermelho, OUTPUT);
  pinMode(ledPedVermelho, OUTPUT);
  pinMode(ledPedVerde, OUTPUT);
  
  // Configura o botão com resistor pull-up interno (pressionado = LOW)
  pinMode(botao, INPUT_PULLUP);

  // Estado inicial: carros passam (verde), pedestres esperam (vermelho)
  digitalWrite(ledCarroVerde, HIGH);
  digitalWrite(ledCarroAmarelo, LOW);
  digitalWrite(ledCarroVermelho, LOW);
  digitalWrite(ledPedVerde, LOW);
  digitalWrite(ledPedVermelho, HIGH);
}

void loop() {
  // Verifica se o botão foi pressionado
  if (digitalRead(botao) == LOW) {
    delay(50); // Debounce simples
    if (digitalRead(botao) == LOW) {
      
      // 1. Sinal dos carros muda para amarelo
      digitalWrite(ledCarroVerde, LOW);
      digitalWrite(ledCarroAmarelo, HIGH);
      delay(3000); // 3 segundos de amarelo

      // 2. Sinal dos carros muda para vermelho
      digitalWrite(ledCarroAmarelo, LOW);
      digitalWrite(ledCarroVermelho, HIGH);
      delay(1000); // Pausa de segurança

      // 3. Sinal dos pedestres abre (verde)
      digitalWrite(ledPedVermelho, LOW);
      digitalWrite(ledPedVerde, HIGH);
      delay(tempoTravessia);

      // 4. LED vermelho do pedestre pisca antes de fechar
      digitalWrite(ledPedVermelho, HIGH);
      digitalWrite(ledPedVerde, LOW);
      delay(400);
      for (int i = 1; i < 5; i++) {
        digitalWrite(ledPedVermelho, LOW);
        delay(400);
        digitalWrite(ledPedVermelho, HIGH);
        delay(400);
      }

      // 5. Pedestres voltam a fechar (vermelho)
      digitalWrite(ledPedVerde, LOW);
      digitalWrite(ledPedVermelho, HIGH);
      delay(1000); // Pausa de segurança

      // 6. Carros voltam a passar (verde)
      digitalWrite(ledCarroVermelho, LOW);
      digitalWrite(ledCarroVerde, HIGH);
    }
  }
}