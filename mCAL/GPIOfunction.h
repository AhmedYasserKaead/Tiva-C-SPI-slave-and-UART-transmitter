#pragma once


#define u32				unsigned long
#define portA			0x40004000
#define portB			0x40005000
#define portC			0x40006000
#define portD			0x40007000
#define portE			0x40024000
#define portF			0x40025000

#define DATA_Offset		0x3FC 
#define DIR_Offset		0x400
#define AFSEL_Offset	0x420
#define PCTL_Offset		0x52C
#define DEN_Offset		0x51C


#define AFSEL_A (*((volatile u32*)(portA + AFSEL_Offset)))
#define DIR_A (*((volatile u32*)(portA + DIR_Offset)))
#define DIR_B (*((volatile u32*)(portB + DIR_Offset)))
#define DIR_C (*((volatile u32*)(portC + DIR_Offset)))
#define DIR_D (*((volatile u32*)(portD + DIR_Offset)))
#define DIR_E (*((volatile u32*)(portE + DIR_Offset)))
#define DIR_F (*((volatile u32*)(portF + DIR_Offset)))
#define DATA_A (*((volatile u32*)(portA + DATA_Offset)))
#define DATA_B (*((volatile u32*)(portB + DATA_Offset)))
#define DATA_C (*((volatile u32*)(portC + DATA_Offset)))
#define DATA_D (*((volatile u32*)(portD + DATA_Offset)))
#define DATA_E (*((volatile u32*)(portE + DATA_Offset)))
#define DATA_F (*((volatile u32*)(portF + DATA_Offset)))
#define DEN_A (*((volatile u32*)(portA + DEN_Offset)))

void GPIO(char, uint32_t, uint32_t);