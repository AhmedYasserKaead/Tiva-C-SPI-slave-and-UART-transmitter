#include "C:\Users\onasser\Desktop\GPIOfunction.h"


void GPIO(char PORT, uint32_t PIN, uint32_t DIR)
{
    uint32_t x;
    switch (PORT)
    {
    case 'A': x = DATA_A; break;
    case 'B': x = DATA_B; break;
    case 'C': x = DATA_C; break;
    case 'D': x = DATA_D; break;
    case 'E': x = DATA_E; break;
    case 'F': x = DATA_F; break;
    }
    
    switch (PIN)
    {
    case 0: x |= (1 << 0); break;
    case 1: x |= (1 << 1); break;
    case 2: x |= (1 << 2); break;
    case 3: x |= (1 << 3); break;
    case 4: x |= (1 << 4); break;
    case 5: x |= (1 << 5); break;
    case 6: x |= (1 << 6); break;
    case 7: x |= (1 << 7); break;
    }

    if (DIR == 0)
    {
        switch (PORT)
        {
        case 'A': DIR_A &= (0 << PIN); break;
        case 'B': DIR_B &= (0 << PIN); break;
        case 'C': DIR_C &= (0 << PIN); break;
        case 'D': DIR_D &= (0 << PIN); break;
        case 'E': DIR_E &= (0 << PIN); break;
        case 'F': DIR_F &= (0 << PIN); break;
        }
    }
    if (DIR == 1)
    {
        switch (PORT)
        {
        case 'A': DIR_A |= (1 << PIN); break;
        case 'B': DIR_B |= (1 << PIN); break;
        case 'C': DIR_C |= (1 << PIN); break;
        case 'D': DIR_D |= (1 << PIN); break;
        case 'E': DIR_E |= (1 << PIN); break;
        case 'F': DIR_F |= (1 << PIN); break;
        }