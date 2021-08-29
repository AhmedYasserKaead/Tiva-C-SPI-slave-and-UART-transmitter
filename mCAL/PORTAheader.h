#pragma once


#define u32				unsigned long
#define portA			0x40004000

#define DATA_Offset		0x3FC 
#define DIR_Offset		0x400
#define AFSEL_Offset	0x420
#define PCTL_Offset		0x52C
#define DEN_Offset		0x51C


#define AFSEL_A (*((volatile u32*)(portA + AFSEL_Offset)))
#define DIR_A (*((volatile u32*)(portA + DIR_Offset)))
#define DATA_A (*((volatile u32*)(portA + DATA_Offset)))
#define PCTL_A (*((volatile u32*)(portA + PCTL_Offset)))
#define DEN_A (*((volatile u32*)(portA + DEN_Offset)))


