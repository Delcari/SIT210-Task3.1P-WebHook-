//moistureSensor signal pin
int moistureSignal = A0;
void setup() {
     //Set the pinmode to input
     pinMode(moistureSignal, INPUT);
}

    String moisture;
void loop() {
    //Read sensor data
    moisture = analogRead(moistureSignal);
	//Send sensor data to '3.1P Web' (thingspeak integration)
    Particle.publish("3.1P Web", moisture, PRIVATE);
    delay(30000);
}