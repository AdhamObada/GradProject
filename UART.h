/*
 * UART.h
 *
 *  Created on: Mar 9, 2018
 *      Author: Adham
 */
#include "std_types.h"
#ifndef UART_H_
#define UART_H_


void uart3_init(void);
uint8 UART_InChar(void);
void read_str(char str[]);
void UART_OutChar(uint8 data);
void send_str (char* str);
void read_str_user (char string[]);
void read_conn (char string[]);
void send_str_mqtt(char string[]);
void Delayms(unsigned long mseconds);
void EmptyFifo(void);
#endif /* UART_H_ */
