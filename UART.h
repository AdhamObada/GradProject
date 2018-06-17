/*
 * UART.h
 *
 *  Created on: Mar 9, 2018
 *      Author: Adham
 */
#include "std_types.h"
#ifndef UART_H_
#define UART_H_
extern char dummy[150];  //zebala
extern char dummy1[150];

void uart3_init(void);
void uart4_init(void);
uint8 UART3_InChar(void);
uint8 UART4_InChar(void);
void read3_str(char str[]);
void read4_str(char str[]);
void UART3_OutChar(uint8 data);
void UART4_OutChar(uint8 data);
void send_str3 (char* str);
void send_str4 (char* str);
void read_str3_user (char string[]);
void read_str4_user (char string[]);
void send_str3_mqtt(char string[]);
void send_str4_mqtt(char string[]);
void Delayms(unsigned long mseconds);
void mcu_sub_init(void);
void mcu_pub_init(void);
void send_str5 (char string[]);
void UART5_OutChar(uint8 data);
void uart5_init(void);
#endif /* UART_H_ */
