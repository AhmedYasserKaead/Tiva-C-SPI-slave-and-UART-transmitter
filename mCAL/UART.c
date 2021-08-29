#include "UART.h"
#include "C:\Users\ayaser\Documents\TM4C123GH6PM.h"
#include "C:\Users\ayaser\workspace_v10\Testato\mCAL\Timer.h"
#include "C:\Users\ayaser\workspace_v10\Testato\HAL\LED_Control.h"
#include "C:\Users\ayaser\CLionProjects\ProJecT\GP.h"
#include <stdint.h>
#include <stdlib.h>

void UART_transmit()
{
    SYSCTL_RCGCUART_R |= 0x02;
    SYSCTL_RCGCGPIO_R |= 0x02;

    UART1_CTL_R &= ~0x01;
    UART1_IBRD_R = 104;
    UART1_FBRD_R = 11;
    UART1_LCRH_R |= 0x70;
    UART1_CTL_R |= 0x301;

    PTB_AFSEL |= 0x2;
    PTB_DEN |= 0x2;
    PTB_PCTL |= 0x10;
    PTB_AMSEL = 0x00;
}
void UART_TX(){
    unsigned long x=0, SW1=0;
    while(SW1 == 0x00)
    {
        x=ASCII();
          UART1_DR_R = x;
          SW1 = 69;

    }
    x = 0x10;
    while((UART1_FR_R & (1<<5)) != 0);
    UART1_DR_R = x;
}
