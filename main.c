

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
char received_sub[200];
char test1[100];
char i=9;
char j=0;
char count=0;
char z=0;
char reading[6];
short connection_counter=-1;
char connection[4];
extern char dummy[150];
char len;
void UART4_Handler(void)
{
    IntMasterDisable();
    UART4_ICR_R |= (1<<4);
    len=read_str4_user(received_sub);
    for(j=0;j<4;j++)
    {
        if(connection[j]==received_sub[1])
            break;
    }
    send_str3("AT+CIPSEND="); //we are using uart3 to send payload to the sensors not the user.
    send_str3(&j);
    send_str3(",");
    send_str3(&len);
    send_str3("\r\n");
    Delayms(50);
    send_str3(received_sub);
    IntMasterEnable();
}
void UART3_Handler(void){
    IntMasterDisable();
    UART3_ICR_R |= (1<<4);
    read_str3_user(reading);
    char s;
    for (s=0 ; s<4;s++)
    {
        if (connection[s]==reading[1])
            break;

    }
    if(s==4){
        connection_counter++;
        connection[connection_counter]=reading[1];
    }
    Delayms(250);
    MyPublish(reading);
    IntMasterEnable();
}
int main()
{
    IntMasterDisable();
   // uart3_init();
    uart4_init();
   // mcu_pub_init();
    mcu_sub_init();
    test1[0]='a';
    //IntMasterDisable();
   // MySub_Init();
   // test1[0]='Z';
    IntMasterEnable();

    while(true)
    {
        z++;
    }
    return 0;
}
