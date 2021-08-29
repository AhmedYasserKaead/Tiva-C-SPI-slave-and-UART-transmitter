#include <stdio.h>
#include "LED_Control.h"
#include "C:\Users\ayaser\Documents\TM4C123GH6PM.h"
#include "C:\Users\amostafa\workspace_v10\FINAL PROJECT\mylib.h"

void SW_ini()
{
    GPIO_CLOCK |= 0x20;
    LOCK_F = 0X4C4F434B;
    COMMIT_F = 0x0F;
    PULL_UP_F = 0X10;
    DIRECTION_F |= 0X0E;
    DIGITAL_E_F |= 0x1E;
}

void LedInit()
{
     GPIO_CLOCK |= 0x20;
     DIRECTION_F = 0x0E;
     DIGITAL_E_F = 0X0E;
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


