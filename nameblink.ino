// Initiate the value led1 to pin D7 which the LED on the argon is connected to

int led1 = D7;

void setup() {

pinMode(led1, OUTPUT);

}

void loop() {
    
/* To make the LED blink in morse code I will be using a one second delay for letters that require
a long pause and a half second delay for the short pause in a letter's morse code then in between
each letter I will place a 2 second delay to help with see the LED blinking the letters in morse code
*/

// Firstly the first letter in my name is a T, which only requires a long pause so the delay will be 1 second

digitalWrite(led1, HIGH);

delay(500);

digitalWrite(led1, LOW);

delay(1000);

// The second letter in my name is an R, which requires a short pause, long pause then another short pause

digitalWrite(led1, HIGH);

delay(250);

digitalWrite(led1, HIGH);

delay(500);

digitalWrite(led1, HIGH);

delay(250);

digitalWrite(led1, LOW);

delay(1000);

// The third letter in my name is an A, which requires a short pause then a long pause

digitalWrite(led1, HIGH);

delay (250);

digitalWrite(led1, HIGH);

delay (500);

digitalWrite(led1, LOW);

delay(1000);

// The fourth letter in my name is a V, which requires three short pauses followed by a long pause

digitalWrite(led1, HIGH);

delay(250);

digitalWrite(led1, HIGH);

delay(250);

digitalWrite(led1, HIGH);

delay(250);

digitalWrite(led1, HIGH);

delay(500);

digitalWrite(led1, LOW);

delay(1000);

// The fifth letter in my name is an I, which requires two short pauses

digitalWrite(led1, HIGH);

delay(250);

digitalWrite(led1, HIGH);

delay(250);

digitalWrite(led1, LOW);

delay(1000);

// The final letter in my name is an S, which requires three short pauses

digitalWrite(led1, HIGH);

delay(250);

digitalWrite(led1, HIGH);

delay(250);

digitalWrite(led1, HIGH);

delay(250);

digitalWrite(led1, LOW);

delay(1000);

}