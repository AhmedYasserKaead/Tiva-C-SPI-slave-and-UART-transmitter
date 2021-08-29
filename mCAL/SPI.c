#include "SPI.h"
#include "C:\Users\ayaser\Documents\TM4C123GH6PM.h"
#include "C:\Users\ayaser\workspace_v10\Testato\mCAL\Timer.h"
#include "C:\Users\onasser\Desktop\PORTAheader.h"

void SPI_slave()
{
    SYSCTL_RCGCSSI_R |= 0x1; // Enable and provide a clock to SPI0
    SYSCTL_RCGCGPIO_R |= 0x21; // Enable and provide a clock to GPIO PortA and PortF

    AFSEL->A |= 0x3C; // Enable alternate functions on PA2, PA3, PA4, PA5
    PCTL->A |= 0x222200; // Assign SPI signals to PA2, PA3, PA4, PA5
    DEN->A |= 0x3C; // Enable digital functions for PA2, PA3, PA4, PA5
    DIR->A &= ~0x8; // Set PA3 as input

    SSI0_CR1_R = 0x4; // Disable SPI and configure it as a slave
    SSI0_CC_R = 0x0; // Select the SPI Baud Clock Source as system clock
    SSI0_CPSR_R = 0x10; // Set the clock frequency to 1 MHz
    SSI0_CR0_R = 0x7; // Freescale SPI mode, 1 Mbps bit rate, 8 data bits
    SSI0_CR1_R |= 0x2; // Enable SPI

    GPIO_PORTF_LOCK_R = 0x4C4F434B;
    GPIO_PORTF_DIR_R |= 0xE; // Configure LED pins(PF1, PF2, PF3) to be an output
    GPIO_PORTF_DEN_R |= 0xE; // Enable digital functions for LED pins
    GPIO_PORTF_DATA_R &= ~0xE; // Turn off
}
void SPI_RX()
{
    if(SSI0_DR_R == 'W')
    {
        GPIO_PORTF_DATA_R |= 0x0E;       /* If 'W' is received, turn on the White  LED */
      /* SysCtlDelay(10000000); */
      /* delay(1); */
        Delay();
        GPIO_PORTF_DATA_R &= ~0x0E;
    }
    /* else{
        GPIO_PORTF_DATA_R &= ~0x0E;
    } */
    //else if (SSI0_DR_R == 'G'){GPIO_PORTF_DATA_R |= 0x8;} // If 'G' is received, turn on the green LED
  //  else if (SSI0_DR_R == 'B'){GPIO_PORTF_DATA_R |= 0x4;} // If 'B' is received, turn on the blue LED

}
