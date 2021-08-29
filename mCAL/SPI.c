#include "SPI.h"
#include "C:\Users\ayaser\Documents\TM4C123GH6PM.h"
#include "C:\Users\ayaser\workspace_v10\Testato\mCAL\Timer.h"
#include "C:\Users\onasser\Desktop\PORTAheader.h"
#include "C:\Users\amostafa\workspace_v10\FINAL PROJECT\mylib.h"

void SPI_slave()
{
    SYSCTL_RCGCSSI_R |= 0x1; // Enable and provide a clock to SPI0
    GPIO_CLOCK |= 0x21; // Enable and provide a clock to GPIO PortA and PortF

    AFSEL_A |= 0x3C; // Enable alternate functions on PA2, PA3, PA4, PA5
    PCTL_A |= 0x222200; // Assign SPI signals to PA2, PA3, PA4, PA5
    DEN_A |= 0x3C; // Enable digital functions for PA2, PA3, PA4, PA5
    DIR_A &= ~0x8; // Set PA3 as input

    SSI0_CR1_R = 0x4; // Disable SPI and configure it as a slave
    SSI0_CC_R = 0x0; // Select the SPI Baud Clock Source as system clock
    SSI0_CPSR_R = 0x10; // Set the clock frequency to 1 MHz
    SSI0_CR0_R = 0x7; // Freescale SPI mode, 1 Mbps bit rate, 8 data bits
    SSI0_CR1_R |= 0x2; // Enable SPI

    LOCK_F = 0x4C4F434B;
    DIRECTION_F |= 0xE; // Configure LED pins(PF1, PF2, PF3) to be an output
    DIGITAL_E_F |= 0xE; // Enable digital functions for LED pins
    DATA_F &= ~0xE; // Turn off
}
void SPI_RX()
{
    if(SSI0_DR_R == 'W')
    {
        DATA_F |= 0x0E;       /* If 'W' is received, turn on the White  LED */
      /* SysCtlDelay(10000000); */
      /* delay(1); */
        Delay();
        DATA_F &= ~0x0E;
    }
    /* else{
        DATA_F &= ~0x0E;
    } */
    //else if (SSI0_DR_R == 'G'){DATA_F |= 0x8;} // If 'G' is received, turn on the green LED
  //  else if (SSI0_DR_R == 'B'){DATA_F |= 0x4;} // If 'B' is received, turn on the blue LED

}
