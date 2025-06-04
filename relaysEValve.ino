const int relayPin = 7; // Pin digitale collegato al relè

void setup() {
  pinMode(relayPin, OUTPUT); // Imposta il pin come uscita
}

void loop() {
  digitalWrite(relayPin, HIGH); // Accende il relè, attivando l'elettrovalvola
  delay(10000); // Aspetta 1 secondo
  digitalWrite(relayPin, LOW); // Spegne il relè, disattivando l'elettrovalvola
  delay(10000); // Aspetta 1 secondo
}
