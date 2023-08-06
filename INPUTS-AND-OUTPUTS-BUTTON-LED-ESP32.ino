// set pin numbers
const int buttonPin = 4;  // Sets the variable of the button pin to D4
const int ledPin =  5;    // Sets the variable of the LED pin to D5

// variable for storing the pushbutton status 
int buttonState = 0;

void setup() {
  Serial.begin(9600);  
  // initialize the pushbutton pin as an input
  pinMode(buttonPin, INPUT);
  // initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // read the state of the pushbutton value
  buttonState = digitalRead(buttonPin);
  Serial.println(buttonState);
  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH
  if (buttonState == HIGH) {
    // turn LED on
    digitalWrite(ledPin, HIGH);
  } else {
    // turn LED off
    digitalWrite(ledPin, LOW);
  }
}
