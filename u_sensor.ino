const int TriggerPin = 8;
const int EchoPin = 9;
long Duration = 0;
void setup() 
{
  pinMode(TriggerPin, OUTPUT);
  pinMode(EchoPin, INPUT);
  Serial.begin(9600);

}

void loop() 
{
  digitalWrite(TriggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(TriggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(TriggerPin, LOW);

  Duration = pulseIn(EchoPin, HIGH); //wait for the echo pin to get high return the Duration in microseconds

  long Distance_cm =0.034* Duration;

  Serial.print("Distance = ");
  Serial.print(Distance_cm);
  Serial.println("cm");

  delay(1000);


}

