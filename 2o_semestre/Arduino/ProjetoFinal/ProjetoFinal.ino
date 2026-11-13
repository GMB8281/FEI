const int PIN_LED1  = 3;
const int PIN_PIEZO = 4;
const int PIN_PIR   = 5;
const int PIN_TEMP  = A0;
const int PIN_LED2  = 6;
const float LIMITE_TEMP = 24.0;
const int   FREQ_BUZZER = 1000;

const int LED_ON  = LOW;
const int LED_OFF = HIGH;

float lerTemperatura() {
  long soma = 0;
  for (int i = 0; i < 10; i++) {
    soma += analogRead(PIN_TEMP);
    delay(2);
  }
  float leitura = soma / 10.0;
  float tensao  = leitura * (5.0 / 1023.0);
  return (tensao - 0.5) * 100.0;
}

void piezoLigar() {
  tone(PIN_PIEZO, FREQ_BUZZER);
}

void piezoDesligar() {
  noTone(PIN_PIEZO);
  digitalWrite(PIN_PIEZO, HIGH);
}

void desligarTudo() {
  digitalWrite(PIN_LED1, LED_OFF);
  digitalWrite(PIN_LED2, LED_OFF);
  piezoDesligar();
}

void setup() {
  digitalWrite(PIN_LED1, LED_OFF);
  digitalWrite(PIN_LED2, LED_OFF);
  digitalWrite(PIN_PIEZO, HIGH);

  pinMode(PIN_LED1, OUTPUT);
  pinMode(PIN_LED2, OUTPUT);
  pinMode(PIN_PIEZO, OUTPUT);
  pinMode(PIN_PIR, INPUT);

  Serial.begin(9600);
}

void loop() {
  bool presenca = (digitalRead(PIN_PIR) == HIGH);
  float temperatura = lerTemperatura();

  Serial.print("Presenca: ");
  Serial.print(presenca ? "SIM" : "NAO");
  Serial.print(" | Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" C");

  if (presenca) {
    if (temperatura < LIMITE_TEMP) {
      digitalWrite(PIN_LED1, LED_OFF);
      piezoDesligar();
      digitalWrite(PIN_LED2, LED_ON);
    } else {
      digitalWrite(PIN_LED2, LED_OFF);
      digitalWrite(PIN_LED1, LED_ON);
      piezoLigar();
    }
  } else {
    desligarTudo();
  }

  delay(200);
}