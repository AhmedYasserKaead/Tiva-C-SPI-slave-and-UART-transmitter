#include "UART.h"
#include "C:\Users\ayaser\Documents\TM4C123GH6PM.h"
#include "C:\Users\ayaser\workspace_v10\Testato\mCAL\Timer.h"

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

    GPIO_PORTB_AFSEL_R |= 0x2;
    GPIO_PORTB_DEN_R |= 0x2;
    GPIO_PORTB_PCTL_R |= 0x10;
    GPIO_PORTB_AMSEL_R = 0x00;
}
void UART_TX(){
    unsigned long SW1,x;
    SW1 = GPIO_PORTF_DATA_R & 0x10;
    if(SW1 == 0x10){
        x = 0x00;
    }
    else if(SW1 == 0x00){
        x = 0x01;
    }
    while((UART1_FR_R & (1<<5)) != 0);
    UART1_DR_R = x;
}

