
#include <xc.h>
#include "main.h"
#include "clock.h"
#include "gpio.h"

void main(void) {
      
    /* Config clock */
    CLOCK_Initialize();
    
    /* Config PortA */
    PortA_Initialize();
    
    /* Config PortB */
    PortB_Initialize();

    /* Config PortC */
    PortC_Initialize();
    
    /* Config PortD */
    PortD_Initialize();
    
    /* Config PortE */
    PortE_Initialize();
    
    /* Config PortF */
    PortF_Initialize();  
    
    
    /* infinite loop */
    while(1)
    {
     
                        
    } /* while*/
    
    return;
} /* main */