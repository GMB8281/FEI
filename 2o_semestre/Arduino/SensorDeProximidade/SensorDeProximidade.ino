
const int trigPin = 3;
const int echoPin = 2;
long duracao;
float distancia_cm;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(10);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(20);
  digitalWrite(trigPin, LOW);
  duracao = pulseIn(echoPin, HIGH);
  distancia_cm = duracao * 0.0343 / 2;
  Serial.println(distancia_cm);
  delay(500); // Espera meio Segundo
  if (distancia_cm >= 30) {//distancia_cm >= 30 cm
digitalWrite (13, LOW);
}
else {// distancia_cm <30cm
digitalWrite (13, HIGH);
}

}