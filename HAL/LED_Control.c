#include <stdio.h>
#include "LED_Control.h"
#include "C:\Users\ayaser\Documents\TM4C123GH6PM.h"

void SW_ini()
{
    SYSCTL_RCGCGPIO_R |= 0x20;
    GPIO_PORTF_LOCK_R = 0X4C4F434B;
    GPIO_PORTF_CR_R = 0x0F;
    GPIO_PORTF_PUR_R = 0X10;
    GPIO_PORTF_DIR_R |= 0X0E;
    GPIO_PORTF_DEN_R |= 0x1E;
}

void LedInit()
{
     SYSCTL_RCGCGPIO_R |= 0x20;
     GPIO_PORTF_DIR_R = 0x0E;
     GPIO_PORTF_DEN_R = 0X0E;
}

void ASCII()
{
    char s[] ="ON LED";
    int x,i;
    for ( i = 1; i <sizeof(s); i++)
    {
        x=s[i-1];
        printf("%d ",x);
    }
}


