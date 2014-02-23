int LedPin = 13;
char cmd;
void setup()
{
  pinMode(LedPin,OUTPUT);  
  Serial.begin(9600); //set baud rate = 9600
}

void loop()
{
  while (Serial.available()) //connected
  {
    cmd = Serial.read();
    if(cmd == 'q') //press 'q' to turn on LED
    {
      digitalWrite(LedPin,HIGH);
    }
    else if(cmd == 'w') //press 'w' to turn off LED
    {
      digitalWrite(LedPin,LOW);
    }
    else if(cmd >= '0' && cmd <='9') //input value 0~9,  return value + 100
    {
      Serial.print("Input Add 100 = ");
      Serial.println(cmd - '0' + 100);
    }  
  }
}

