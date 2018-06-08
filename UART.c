/*
 * UART.c
 *
 *  Created on: Mar 9, 2018
 *      Author: Adham
 */


#include "std_types.h"
#include "tm4c123gh6pm.h"
char dummy[150];  //zebala
void uart3_init(void){
    SYSCTL_RCGCUART_R |= 0x08;
       SYSCTL_RCGCGPIO_R |= 0x00000004;
       UART3_CTL_R &= ~UART_CTL_UARTEN;      // disable UART
     UART3_IBRD_R = 104;                   // IBRD = int(16,000,000 / (16 * 9,600)) = int(104.16666666666667)
     UART3_FBRD_R = 11;                     // FBRD = int(0.16666666666667 * 64 + 0.5) = 11

     UART3_LCRH_R |= ((1<<6)|(1<<5)|(1<<4)); // 8 bit word length (no parity bits, one stop bit, FIFOs)
       UART3_CTL_R |= UART_CTL_UARTEN;       // enable UART
     GPIO_PORTC_AFSEL_R |= 0xC0;           // enable alt funct on PC7 and PC6
       GPIO_PORTC_DEN_R |= 0xC0;             // enable digital I/O on PC7 and PC6
     GPIO_PORTC_PCTL_R = (GPIO_PORTC_PCTL_R&0x00FFFFFF)+0x11000000;    // configure PC7 and PC6 as UART
     GPIO_PORTC_AMSEL_R &= ~0xC0;          // disable analog functionality on PC7 and PC6
     UART3_IM_R|=(1<<4);
     NVIC_EN1_R|=(1<<27);
}
void uart4_init(void){
      SYSCTL_RCGCUART_R |= 0x10;
           SYSCTL_RCGCGPIO_R |= 0x00000004;
           UART4_CTL_R &= ~UART_CTL_UARTEN;      // disable UART
         UART4_IBRD_R = 104;                   // IBRD = int(16,000,000 / (16 * 9,600)) = int(104.16666666666667)
         UART4_FBRD_R = 11;                     // FBRD = int(0.16666666666667 * 64 + 0.5) = 11

         UART4_LCRH_R |= ((1<<6)|(1<<5)|(1<<4)); // 8 bit word length (no parity bits, one stop bit, FIFOs)
           UART4_CTL_R |= UART_CTL_UARTEN;       // enable UART
         GPIO_PORTC_AFSEL_R |= 0x30;           // enable alt funct on PC4 and PC5
           GPIO_PORTC_DEN_R |= 0x30;             // enable digital I/O on PC4 and PC5
         GPIO_PORTC_PCTL_R = (GPIO_PORTC_PCTL_R&0xFF00FFFF)+0x00110000;    // configure PC4 and PC5 as UART
         GPIO_PORTC_AMSEL_R &= ~0x30;          // disable analog functionality on PC4 and PC5
         UART4_IM_R|=(1<<4);
         NVIC_EN1_R|=(1<<28);
}
char UART3_InChar(void){//reads character
  while(((UART3_FR_R&UART_FR_RXFE) != 0));
  return((unsigned char)(UART3_DR_R&0xFF));
}
char UART4_InChar(void){//reads character
  while(((UART4_FR_R&UART_FR_RXFE) != 0));
  return((unsigned char)(UART4_DR_R&0xFF));
}
void read3_str(char string[])
{
    char n=0;
    string[n]=UART3_InChar();
    string[n+1]=UART3_InChar();
    n=1;
    while(!(string[n]=='K' && string[n-1]=='O'))
    {
        n++;
        string[n]=UART3_InChar();
    }

    string[n+2]='\0';
}
void read4_str(char string[])
{
    char n=0;
    string[n]=UART4_InChar();
    string[n+1]=UART4_InChar();
    n=1;
    while(!(string[n]=='K' && string[n-1]=='O'))
    {
        n++;
        string[n]=UART4_InChar();
    }

    string[n+2]='\0';
}
void UART3_OutChar(uint8 data){  //sends character
  while((UART3_FR_R&UART_FR_TXFF) != 0);
  UART3_DR_R = data;
}

void UART4_OutChar(uint8 data){  //sends character
  while((UART4_FR_R&UART_FR_TXFF) != 0);
  UART4_DR_R = data;
}

void send_str3 (char string[])
{
   char i=0;
    while(string[i]!='\0')
    {
        UART3_OutChar(string[i]);
        i++;
    }
}
void send_str4 (char string[])
{
   char i=0;
    while(string[i]!='\0')
    {
        UART4_OutChar(string[i]);
        i++;
    }
}
void send_str3_mqtt(char string[]){
   char s=0;
   while(s<200){
       UART3_OutChar(string[s]);
       s++;
   }
}
void send_str4_mqtt(char string[]){
   char s=0;
   while(s<200){
       UART4_OutChar(string[s]);
       s++;
   }
}
void read_str3_user (char string[]){
    char n=0;
    while(UART3_InChar()!='#');
    string[n]=UART3_InChar();
    while(string[n]!='#'){
        n++;
        string[n]=UART3_InChar();
    }
    string[n]='\0';
}
void read_str4_user (char string[]){
    char n=0;
    while(UART4_InChar()!='#');
    string[n]=UART4_InChar();
    while(string[n]!='#'){
        n++;
        string[n]=UART4_InChar();
    }
    string[n]='\0';
}
void Delayms(unsigned long mseconds){
  unsigned long volatile time;
  if(mseconds > 2500000)
    mseconds = 2500000;
  time = (1600 - 1) * mseconds;
  while(time){
    time--;
  }
}

void mcu_pub_init(void){
        send_str3("AT+CWMODE=3\r\n");
        read3_str(dummy);
        Delayms(1000);
        send_str3("AT+CIPMUX=1\r\n");
        read3_str(dummy);
        Delayms(1000);
        send_str3("AT+CIPSERVER=1,6969\r\n");
        read3_str(dummy);
        Delayms(1000);
        send_str3("AT+CWJAP=\"NotCisco\",\"MeenEhabDah?!!\"\r\n");
        read3_str(dummy);
        Delayms(2000);
}
void mcu_sub_init(void){
        send_str4("AT+CWMODE=1\r\n");
        read4_str(dummy);
        Delayms(1000);
        send_str4("AT+CIPMUX=1\r\n");
        read4_str(dummy);
        Delayms(1000);
        send_str4("AT+CWJAP=\"NotCisco\",\"MeenEhabDah?!!\"\r\n");
        read4_str(dummy);
        Delayms(1000);
}
