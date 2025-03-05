#include <24FJ16GA002.h>
#fuses NOWDT, FRC
#use delay(clock=40000000)

void main() {
   // Set up directions for pins
   set_tris_b(0b00000001); // Configure PIN_B3 as input, others as output

  
   while(TRUE) {
      
      // Toggle between two LEDs based on the switch state
      if (input(PIN_B0) == 0) {
         output_high(PIN_B1); // Turn on LED1
         output_low(PIN_B2);  // Turn off LED2
      } else {
         output_low(PIN_B1);  // Turn off LED1
         output_high(PIN_B2); // Turn on LED2
      }

      // Blink LED3 (PIN_B2) every 2 seconds
      
      output_toggle(PIN_B3);
      delay_ms(500);//
   }
}
