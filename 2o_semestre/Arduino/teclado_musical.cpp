int buzzer = 10;
int music [12];

void setup() {
  // Botões
  pinMode(4, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(1, INPUT_PULLUP);
  pinMode(0, INPUT_PULLUP);

  // Buzzer
  pinMode(buzzer, OUTPUT);
}

void do_run() {
  if (digitalRead(4) == LOW) {
    tone(buzzer, 262); // Dó
    delay(1000);
    noTone(buzzer);
  }
}

void re_run() {
  if (digitalRead(3) == LOW) {
    tone(buzzer, 294); // Ré
    delay(1000);
    noTone(buzzer);
  }
}

void mi_run() {
  if (digitalRead(2) == LOW) {
    tone(buzzer, 330); // Mi
    delay(1000);
    noTone(buzzer);
  }
}

void fa_run() {
  if (digitalRead(1) == LOW) {
    tone(buzzer, 349); // Fá
    delay(1000);
    noTone(buzzer);
  }
}

void sol_run() {
  if (digitalRead(0) == LOW) {
    tone(buzzer, 392); // Sol
    delay(1000);
    noTone(buzzer);
  }
}

void loop() {
  do_run();
  re_run();
  mi_run();
  fa_run();
  sol_run();
}