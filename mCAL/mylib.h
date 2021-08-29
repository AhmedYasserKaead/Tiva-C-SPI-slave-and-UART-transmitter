/*
 * mylib.h
 *
 *  Created on: Aug 29, 2021
 *      Author: amostafa
 */

#ifndef APPLICATION_MYLIB_H_
#define APPLICATION_MYLIB_H_
#define GPIO_CLOCK                                           (*((volatile unsigned long*)0x400FE608))
#define PORT_F                                               (*((volatile unsigned long*)0x40025000))
#define DATA_F                                               (*((volatile unsigned long*)0x400253FC))
#define DIRECTION_F                                          (*((volatile unsigned long*)0x40025400))
#define INTERRUPT_S_F                                        (*((volatile unsigned long*)0x40025404))
#define INTERRUPT_B_EDG_F                                    (*((volatile unsigned long*)0x40025408))
#define INTERRUPT_EVENT_F                                   (*((volatile unsigned long*)0x4002540c))
#define INTERRUPT_MASK_F                                    (*((volatile unsigned long*)0x40025410))
#define R_INTERRUPT_S_F                                      (*((volatile unsigned long*)0x40025414))
#define M_INTERRUPT_S_F                                      (*((volatile unsigned long*)0x40025418))
#define INTERRUPT_CLEAR_F                                    (*((volatile unsigned long*)0x4002541C))
#define ALTERNATE_FSELECT_F                                  (*((volatile unsigned long*)0x40025420))
#define DRIVE_2_F                                            (*((volatile unsigned long*)0x40025500))
#define DRIVE_4_F                                            (*((volatile unsigned long*)0x40025504))
#define DRIVE_8_F                                            (*((volatile unsigned long*)0x40025508))
#define OPEN_DRAIN_F                                         (*((volatile unsigned long*)0x4002550C))
#define PULL_UP_F                                            (*((volatile unsigned long*)0x40025510))
#define PULL_DOWN_F                                          (*((volatile unsigned long*)0x40025514))
#define S_RATE_C_S_F                                         (*((volatile unsigned long*)0x40025518))
#define DIGITAL_E_F                                          (*((volatile unsigned long*)0x4002551C))
#define LOCK_F                                               (*((volatile unsigned long*)0x40025520))
#define COMMIT_F                                             (*((volatile unsigned long*)0x40025524))
#define ANALOG_S_F                                           (*((volatile unsigned long*)0x40025528))
#define PORT_CONTROL_F                                       (*((volatile unsigned long*)0x4002552C))
#define ADC_CONTROL_F                                        (*((volatile unsigned long*)0x40025530))
#define DMA_CONTROL_F                                        (*((volatile unsigned long*)0x40025534))
#define PRF_I_4_F                                            (*((volatile unsigned long*)0x40025FD0))
#define PRF_I_5_F                                            (*((volatile unsigned long*)0x40025FD4))
#define PRF_I_6_F                                            (*((volatile unsigned long*)0x40025FD8))
#define PRF_I_7_F                                            (*((volatile unsigned long*)0x40025FDC))
#define PRF_I_0_F                                            (*((volatile unsigned long*)0x40025FE0))
#define PRF_I_1_F                                            (*((volatile unsigned long*)0x40025FE4))
#define PRF_I_3_F                                            (*((volatile unsigned long*)0x40025FEC))
#define PRIME_CELL_I0_F                                      (*((volatile unsigned long*)0x40025FF0))
#define PRIME_CELL_I1_F                                      (*((volatile unsigned long*)0x40025FF4))
#define PRIME_CELL_I2_F                                      (*((volatile unsigned long*)0x40025FF8))
#define PRIME_CELL_I3_F                                      (*((volatile unsigned long*)0x40025FFC))



















#endif /* APPLICATION_MYLIB_H_ */
