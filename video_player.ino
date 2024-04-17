#include <DigiKeyboard.h>

void setup() {
  // Initialize the DigiKeyboard library
  DigiKeyboard.delay(2000); // Delay for system to recognize the USB device
  DigiKeyboard.sendKeyStroke(0); // Release all keys
  DigiKeyboard.delay(500); // Delay before starting
}

void loop() {
  // Open Run prompt by pressing Windows key and 'r'
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); 
  DigiKeyboard.delay(1000); // Delay to ensure Run prompt opens

  // Type "powershell" into Run prompt
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(500); // Delay before pressing Enter
  
  // Press Enter to execute the command in Run prompt
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000); // Delay for PowerShell to open

  // Type the URL into PowerShell and open it in Chrome
  DigiKeyboard.print("Start-Process 'chrome' 'https://www.youtube.com/shorts/GjMoYVxEekE'");
  DigiKeyboard.delay(500); // Delay before pressing Enter
  
  // Press Enter to execute the command in PowerShell
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  // After executing the command, stop further execution
  while (true) {
    // Do nothing
  }
}
