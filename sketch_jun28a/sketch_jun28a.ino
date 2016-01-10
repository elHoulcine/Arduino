
#include "Manoeuvre.h"
#include "ConcreteManoeuvre.h"

Manoeuvre* manoeuvre;   // manoeuvre handler

// ================================================================
// ===                      INITIAL SETUP                       ===
// ================================================================

void setup() {
  // configure LED for output
  pinMode(13, OUTPUT);

  manoeuvre = new Manoeuvre;
  manoeuvre->setState(new Walking);
}

// ================================================================
// ===                    MAIN PROGRAM LOOP                     ===
// ================================================================
void loop() {
  delay(50);
  manoeuvre->execute(10);

}
