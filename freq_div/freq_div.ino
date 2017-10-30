const byte inputpin = 3;
const byte inputinterrupt = 1;
const byte outputpin = 7;
const byte denom = 4;
volatile byte count = 0;

void counter(){
  count = count + 1;
  if (count % denom == 0) {
    digitalWrite(outputpin, HIGH);
    digitalWrite(outputpin, LOW);
    count = 0;
  }
}

void setup(){
  pinMode(outputpin, OUTPUT);
  pinMode(inputpin, INPUT_PULLUP);
  attachInterrupt(inputinterrupt, counter, RISING);
}

void loop(){
}
