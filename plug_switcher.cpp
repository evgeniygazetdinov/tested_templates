 Arduino Relay Control Code
  
  #define relay A0
  #define interval 600000+(600000*5)
    void setup() {
      pinMode(relay, OUTPUT);
      pinMode(LED_BUILTIN, OUTPUT);
             }

    void loop()
      {
         digitalWrite(LED_BUILTIN,HIGH);
         digitalWrite(relay, HIGH);
         delay(interval);
         digitalWrite(relay, LOW);
         digitalWrite(LED_BUILTIN,LOW);
         delay(interval);
      }
}
}
