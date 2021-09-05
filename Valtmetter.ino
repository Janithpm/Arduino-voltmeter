float value;
float vout;
float vin;

float R1 = 100000.0;
float R2 = 10000.0;


void setup() {
  Serial.begin(9600);
  Serial.println("DC Voltmeter");

}

void loop() {
  value = analogRead(A0);
  vout = (value * 5) / 1024.0;
  vin = vout / (R2 / (R1 + R2));
  // Serial.write(vin);
  Serial.println(vin);


  delay(100);
}
