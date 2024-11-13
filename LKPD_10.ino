//Raffi Chandra w
//XI TAV 2
const int buttonPin = 26;
void setup() {
  pinMode(buttonPpin, INPUT);
  Serial.begin(9600);
}
void loop() {
  int(buttonState = digitalRead(buttonPin);
  Serial.print("Tombol ditekan: ");
  if (buttonState == HIGH) {
    Serial.println("YA";
  } else {
    Serial.println("TIDAK");
  delay(100)
}