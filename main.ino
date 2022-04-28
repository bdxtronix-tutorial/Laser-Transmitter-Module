int ldr = 0; //LDR disambungkan ke pin Analog A0
int ldr_value = 0; //variable untuk menyimpan nilai LDR
const int buzzer = 5;

void setup() {
  Serial.begin(9600); //start the serial monitor
}

void loop() {
  ldr_value = analogRead(ldr); //membaca nilai LDR
  Serial.println(ldr_value); //print NILAI ldr di Serial Monitor
  delay(100); //wait

  if (ldr_value > 900) {
    tone(buzzer, 1000);
    delay(1000); // 1 saat buzzer akan berbunyi ketika trip wire diganggu
  } else {
    noTone(buzzer);
  }

}
