#include <hidef.h>      /* common defines and macros */
#include "derivative.h"      /* derivative-specific definitions */    
#include "mc9s12dg256.h"
#include "SmartFireAlarm.h"

void main(void) {
  
  EnableInterrupts;
  
  initializeSensors();
  
  
}