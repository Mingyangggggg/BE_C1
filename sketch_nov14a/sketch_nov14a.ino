const  int TouchPin= D6;


void setup() {
    Serial.begin(9600);
    pinMode(TouchPin, INPUT);
    pinMode(LED_BUILTIN_AUX, OUTPUT);
}

void loop() {
    int sensorValue = digitalRead(TouchPin);
    if(sensorValue==0)
    {
        digitalWrite(LED_BUILTIN_AUX,HIGH);
        Serial.println("recieve");
    }
    else
    {
        digitalWrite(LED_BUILTIN_AUX,LOW);
        Serial.println("no_recieve");
    }
    delay(500);
}
