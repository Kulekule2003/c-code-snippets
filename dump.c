const int DEVICE_POWER_PIN_1 = 8;
const int DEVICE_POWER_PIN_2 = 9;

// Flag to track if we are in SMS message input mode (after AT+CMGS="...")
bool inSmsMessageMode = false;

void setup() {
  
  Serial.begin(115200);
  delay(100); // Small delay to allow Serial to fully initialize

  Serial.println("Type '#' and press Enter to send CTRL+Z (ASCII 26) for SMS completion.");
  Serial.println("------------------------------------");

}

void loop() {
  // Read from GSM Module (via Serial, as it's connected to pins 0 & 1)
  // and send to Serial Monitor.
  if (Serial.available()) {
    char c = Serial.read();
    // This 'Serial.write(c)' sends the character received from the GSM module
    // back to the Serial Monitor for you to see.
    Serial.write(c);

  
    if (c == '>') {
      inSmsMessageMode = true;
    
    }
  }

  // Read from Serial Monitor and send to GSM Module (via Serial).
  if (Serial.availableForWrite() && Serial.available()) { 
    String incomingCommand = Serial.readStringUntil('\n'); 
    incomingCommand.trim(); 

    if (inSmsMessageMode && incomingCommand.length() > 0 && incomingCommand.charAt(0) != '#') {
  
      Serial.print(incomingCommand);
      Serial.print('\r'); // Add carriage return
      Serial.print('\n'); // Add newline
      // The module won't send until it receives ASCII 26 (CTRL+Z).
    } else if (incomingCommand == "#") {
     
      if (inSmsMessageMode) {
        Serial.println("\nSending ASCII 26 (End of Message) to GSM Module...");
        Serial.write(26); // Send ASCII 26 (Ctrl+Z) to the GSM module
        inSmsMessageMode = false; // Exit SMS message mode
      } else {
        Serial.println("Ignoring '#' - not in SMS message input mode.");
      }
    } else {
 
      Serial.println(incomingCommand);
      inSmsMessageMode = false; // Ensure we are not in SMS message mode for regular commands
    }
  }
}
