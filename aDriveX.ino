// Visual Micro is in vMicro>General>Tutorial Mode
// 
/*
    Name:       aDriveX.ino
    Created:	02/01/2019 20:10:46
    Author:     IMN1OY-PC\jaro1
*/

// Define User Types below here or use a .h file
//


// Define Function Prototypes that use User Types below here or use a .h file
//


// Define Functions below here or use other .ino or cpp files
//

// The setup() function runs once each time the micro-controller starts
void setup()
{
	delay(3000);
	Serial.begin(10400);
	Serial.print(0x33, HEX);
	pinMode(13, OUTPUT);
}

// Add the main program code into the continuous loop() function
void loop()
{
	delay(3000);
	// slow init
	digitalWrite(13, HIGH);
	delay(200);
	digitalWrite(13, LOW);
	delay(400);
	digitalWrite(13, HIGH);
	delay(400);
	digitalWrite(13, LOW);
	delay(400);
	digitalWrite(13, HIGH);
	delay(400);
	digitalWrite(13, LOW);
	Serial.print(0x33, HEX);
}
