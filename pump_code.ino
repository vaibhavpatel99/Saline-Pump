int motorPin = 3;
void setup()
{
pinMode(motorPin, OUTPUT);
Serial.begin(9600);
while (! Serial);
}
void loop()
{
int potVal = analogRead(A0);
int rotSpeed = map(potVal, 300, 1023, 130, 255);
if (potVal < 350){
 rotSpeed = 0;
}
analogWrite(motorPin, rotSpeed);
Serial.print("Potentiometer Value ");
Serial.print(potVal);
Serial.print(" Pump Speed ");
Serial.println(rotSpeed);
}
