/*
 * UART.c
 *
 *  Created on: Mar 9, 2018
 *      Author: Adham
 */


#include "std_types.h"
#include "tm4c123gh6pm.h"
extern char s;
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
char UART_InChar(void){//reads character
  while(((UART3_FR_R&UART_FR_RXFE) != 0));
  return((unsigned char)(UART3_DR_R&0xFF));
}
void read_str(char string[])
{
    char n=0;
    string[n]=UART_InChar();
    string[n+1]=UART_InChar();
    n=1;
    while(!(string[n]=='K' && string[n-1]=='O'))
    {
        n++;
        string[n]=UART_InChar();
    }

    string[n+2]='\0';
}

void UART_OutChar(uint8 data){  //sends character
  while((UART3_FR_R&UART_FR_TXFF) != 0);
  UART3_DR_R = data;
}

void send_str (char string[])
{
   char i=0;
    while(string[i]!='\0')
    {
        UART_OutChar(string[i]);
        i++;
    }
}
void send_str_mqtt(char string[]){
    s=0;
   while(s<200){
       UART_OutChar(string[s]);
       s++;
   }
}
/*void read_str_user (char string[])
{
   char i=0;
    string[i]=UART_InChar();
    if(string[i]=='0'){
        i++;
        string[i]=UART_InChar();
        while(string[i]!='#'){
            i++;
            string[i]=UART_InChar();
        }
    }

    string[i]='\0';
}
void read_str_user( char str1[],char str2[])
{
    char j=0,i=0;
    str1[i]=UART_InChar();
    while((str1[i]>=32 && str1[i]<=34)||(str1[i]>=36 && str1[i]<=127)){
        if(UART3_FR_R&UART_FR_RXFE==1)
            return;
        else{
            i++;
            str1[i]=UART_InChar();
        }
    }
    if(str1[i]=='#'){
        str2[j]=UART_InChar();
        while(str2[j]!='#'){
            j++;
            str2[j]=UART_InChar();
        }
    }
    str2[j]='\0';
}
void read_str_user(char string[]){
    char count=0;
    string[count]=UART_InChar();
    while((UART3_FR_R&UART_FR_RXFE) != 0){
        count++;
        string[count]=UART_InChar();
    }
    string[count]='\0';
}*/
void read_str_user (char string[]){
    char n=0;
    while(UART_InChar()!='#');
    string[n]=UART_InChar();
    while(string[n]!='#'){
        n++;
        string[n]=UART_InChar();
    }
    string[n]='\0';
}
void read_conn (char string[]){
    char n=0;
    string[n]=UART_InChar();
    while(!(string[n]=='T'&&string[n-1]=='C'&&string[n-2]=='E'&&string[n-3]=='N'&&string[n-4]=='N'&&string[n-5]=='O'&&string[n-6]=='C')){
        n++;
        string[n]=UART_InChar();
    }
}
/*void read_dot(char string[]){
    char n=0;
        string[n]=UART_InChar();
        while(!(string[n]=='.'&&string[n-1]=='.'&&string[n-2]=='.')){
            n++;
            string[n]=UART_InChar();
        }
}
void read_bytes(char string[]){
    char n=0;
           string[n]=UART_InChar();
           while(!(string[n]=='s'&&string[n-1]=='e'&&string[n-2]=='t'&&string[n-3]=='y'&&string[n-4]=='b')){
               n++;
               string[n]=UART_InChar();
           }
}*/
void Delayms(unsigned long mseconds){
  unsigned long volatile time;
  if(mseconds > 2500000)
    mseconds = 2500000;
  time = (1600 - 1) * mseconds;
  while(time){
    time--;
  }
}



void read_str_mqtt(char* string){
    char n=0;
        string[n]=UART_InChar();
        string[n+1]=UART_InChar();
        n=1;
        while(string[n]!='\0' || string[n-1]!='\0')
        {
            n++;
            string[n]=UART_InChar();
        }

        string[n+2]='\0';
}
