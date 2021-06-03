#define PIN_SW1 2
#define PIN_SW2 1
#define PIN_SW3 0

void setup()
{
    pinMode(PIN_SW1, INPUT);
    pinMode(PIN_SW2, INPUT);
    pinMode(PIN_SW3, INPUT);

    Serial.begin(9600);
}

void loop()
{

    Serial.print("sw1=");
    Serial.print(digitalRead(PIN_SW1));
    Serial.print(";sw2=");
    Serial.print(digitalRead(PIN_SW2));
    Serial.print(";sw3=");
    Serial.print(digitalRead(PIN_SW3));
    Serial.print(";status=0\n");

    delay(1000);
}