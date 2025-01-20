const int lowestPin = 3;

const int highestPin = 6;

void setup() {
  // put your setup code here, to run once:
  for (int thisPin = lowestPin; thisPin <= highestPin; thisPin++) {

    pinMode(thisPin, OUTPUT);

  }
}

void loop() {
  // iterate over the pins:

  for (int thisPin = lowestPin; thisPin <= highestPin; thisPin++) {

    // fade the LED on thisPin from off to brightest:

    for (int brightness = 0; brightness < 255; brightness++) {

      analogWrite(thisPin, brightness);

      delay(2);

    }

    // fade the LED on thisPin from brightest to off:

    for (int brightness = 255; brightness >= 0; brightness--) {

      analogWrite(thisPin, brightness);

      delay(2);

    }

    // pause between LEDs:

    delay(100);

  }
}
