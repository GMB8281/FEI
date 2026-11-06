#include <LiquidCrystal.h>

// Inicializa o LCD
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // Configura o LCD: 16 colunas e 2 linhas
  lcd.begin(16, 2);

  // Exibe a mensagem
  lcd.print("hello, world!");
}

void loop() {
    // método setCursor:
    // posiciona o cursor onde for desejado!
    // coluna 0, linha 1
    // contagem começa do 0
    lcd.setCursor(0, 1);
    // imprime o número de segundos desde o início:
    lcd.print(millis() / 1000);
}