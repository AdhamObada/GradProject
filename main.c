

/**
 * main.c
 */
#include "std_types.h"
#include "UART.h"
#include "tm4c123gh6pm.h"

#include <stdint.h>
#include <stdbool.h>
#include "driverlib/interrupt.h"
#include "MQTTPacket.h"
#include "MQTT.h"



void SystemInit(void){
}
char fml[200];
char test[150];
char test1[100];
char i=0;
char j=0;
char count=0;
char z=0;
int len;
char buf[200];
char buf1[200];
char reading[3];
char s=0;
void Delayms(unsigned long mseconds);
void UART3_Handler(void)
{
    i++;
    UART3_ICR_R |= (1<<4);
    read_str_user(fml);
   // send_str("AT+CIPCLOSE=5\r\n");
   /* send_str("AT+CIPSEND=0,5\r\n");
    Delayms(50);
    send_str("Hello");
    send_str("\r\n");
    Delayms(250);*/
   // MyPublish(reading);
   // IntMasterEnable();
    j++;
}
void UART4_Handler(void){
    UART4_ICR_R |= (1<<4);
    read_str_user(reading);
    MyPublish(reading);
}
int main()
{
    uart_init_Int();
    send_str("AT+CWMODE=3\r\n");
    read_str(test);
    Delayms(1000);
    send_str("AT+CIPMUX=1\r\n");
    read_str(test);
    Delayms(1000);
    send_str("AT+CIPSERVER=1,6969\r\n");
    read_str(test);
    Delayms(1000);
    send_str("AT+CWJAP=\"Adham's iPhone\",\"aboelhamz\"\r\n");
    read_str(test);
    Delayms(1000);
    test1[0]='A';
    //IntMasterDisable();
    MySub_Init();
   // test1[0]='Z';
    //IntMasterEnable();

    while(true)
    {
        z++;
    }
    return 0;
}



