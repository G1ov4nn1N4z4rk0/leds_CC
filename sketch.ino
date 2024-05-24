#define qtd_led 5
#define botao 15
#define ledv 18

int pinosleds[qtd_led] = {0, 16, 5, 19, 21};

void setup() {
  for (int i = 0; i < qtd_led; i++){
    pinMode(pinosleds[i], OUTPUT);
  }
  pinMode(ledv, OUTPUT);
  pinMode(botao, INPUT_PULLUP);
}

void loop() {
  while (digitalRead(botao) == HIGH){
    digitalWrite(ledv, LOW);
    digitalWrite(ledv, HIGH);
  }
   for (int i = 0; i < qtd_led; i++){
    digitalWrite(pinosleds[i], HIGH);
    delay(500);
    for (int i = 0; i < qtd_led; i++){
    digitalWrite(pinosleds[i], LOW);
  }
  }
}

