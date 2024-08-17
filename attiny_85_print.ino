#include <DigiKeyboard.h>

void setup() {
  // No setup needed for DigiKeyboard
}

void loop() {
  // Wait for 5 seconds before starting
  DigiKeyboard.delay(5000);

  // Send the Windows+R key combination to open the Run dialog
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);

  // Type 'notepad' and press Enter to open Notepad
  DigiKeyboard.println("notepad");
  DigiKeyboard.delay(500);

  // Type your message in Notepad
  DigiKeyboard.println("subscribe Hack with rohit!");

  // Prevent the loop from running again
  while (1) {}
}