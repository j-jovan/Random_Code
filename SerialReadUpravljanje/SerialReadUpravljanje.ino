int serialRead;


void setup() {
  Serial.begin(115200);
}

void loop() {
  if (Serial.available() > 0) {
    int serialRead = Serial.parseInt();
    Serial.println("---");
    Serial.println("Unesi vrednost.");

    if (serialRead == 0) {
      // Nakon sto Serial.available procita i ispise vrednost
      // Uvek stavi da je vrednost open 0
    }
    else {
      Serial.print("Uneta vrednost je: ");
      Serial.println(serialRead);
      Serial.println("***");
    }
  }
}
