int greenPin = 4;
int yellowPin = 5;
int redPin = 6;

int greenPin2 = 9;
int yellowPin2 = 10;
int redPin2 = 11;

int sensorPin = A0;

void setup() {
  pinMode(greenPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(redPin, OUTPUT);

  pinMode(greenPin2, OUTPUT);
  pinMode(yellowPin2, OUTPUT);
  pinMode(redPin2, OUTPUT);

  digitalWrite(greenPin, HIGH);
  digitalWrite(redPin2, HIGH);
}

void loop() {

  if(analogRead(sensorPin)<550){
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin2, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(redPin2, HIGH);
  delay(10000);

  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, HIGH);
  delay(4000);
  digitalWrite(yellowPin, LOW);
  
  digitalWrite(redPin, HIGH);
  digitalWrite(redPin2, LOW);
  digitalWrite(greenPin2, HIGH);
  delay(10000);

  digitalWrite(greenPin2, LOW);
  digitalWrite(yellowPin2,HIGH);
  delay(4000);
  digitalWrite(yellowPin2,LOW);
  digitalWrite(redPin2,HIGH);

  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
  }
}
