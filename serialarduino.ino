int led = 6;
void setup () {
   pinMode(led, OUTPUT); 
   Serial.begin(9600); 
}

void loop () {
   if (Serial.available()) { 
      char b = Serial.read();
      if (b == '1') { 
         digitalWrite(led, HIGH);
      }
      if (b == '0') { 
         digitalWrite(led, LOW);
      }
   }
}
