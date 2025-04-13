int led = 13;
int pir = 5;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  pinMode(pir, INPUT);
}

void loop() {
  int val = digitalRead(pir);
  Serial.println(val);
  digitalWrite(led, val);
  delay(1000);
}