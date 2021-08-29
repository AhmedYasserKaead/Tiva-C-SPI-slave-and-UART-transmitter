//
// Created by ayaser on 8/29/2021.
//

#ifndef PROJECT_GP_H
#define PROJECT_GP_H

#define u32     unsigned long

/* PORTS */
#define PTB    1

/* Port Address */
#define PT_B_ADD    0x40005000

/* Port Offset */
#define DATA_OFF    0x3FC
#define DIR_OFF     0x400
#define IS_OFF      0x404
#define IBE_OFF     0x408
#define IEV_OFF     0x40C
#define IM_OFF      0x410
#define RIS_OFF     0x414
#define MIS_OFF     0x418
#define ICR_OFF     0x41C
#define AFSEL_OFF   0x420
#define DR2R_OFF    0x500
#define DR4R_OFF    0x504
#define DR8R_OFF    0x508
#define ODR_OFF     0x50C
#define PUR_OFF     0x510
#define PDR_OFF     0x514
#define SLR_OFF     0x518
#define DEN_OFF     0x51C
#define LOCK_OFF    0x520
#define CR_OFF      0x524
#define AMSEL_OFF   0x528
#define PCTL_OFF    0x52C
#define ADCCTL_OFF      0x530
#define DMACTL_OFF      0x534
#define PeriphID4_OFF   0xFD0
#define PeriphID5_OFF   0xFD4
#define PeriphID6_OFF   0xFD8
#define PeriphID7_OFF   0xFDC
#define PeriphID0_OFF   0xFE0
#define PeriphID1_OFF   0xFE4
#define PeriphID2_OFF   0xFE8
#define PeriphID3_OFF   0xFEC
#define PCellID0_OFF    0xFF0
#define PCellID1_OFF    0xFF4
#define PCellID2_OFF    0xFF8
#define PCellID3_OFF    0xFFC

/* Data Regs */
#define PTB_DATA    (*((volatile u32*)(PT_B_ADD + DATA_OFF)))

/* Direction Regs */
#define PTB_DIR     (*((volatile u32*)(PT_B_ADD + DIR_OFF)))

/* Alternative Function Select Regs */
#define PTB_AFSEL   (*((volatile u32*)(PT_B_ADD + AFSEL_OFF)))

/* Digital Enable Regs */
#define PTB_DEN     (*((volatile u32*)(PT_B_ADD + DEN_OFF)))

/* Port Control Regs */
#define PTB_PCTL    (*((volatile u32*)(PT_B_ADD + PCTL_OFF)))

/* Analog Mode Select Regs */
#define PTB_AMSEL   (*((volatile u32*)(PT_B_ADD + AMSEL_OFF)))


#endif //PROJECT_GP_H
