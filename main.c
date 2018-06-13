

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
char debug=1;
void UART4_Handler(void)
{
  //  IntMasterDisable();
    test1[3]='z';
    UART4_ICR_R |= (1<<4);
    if(debug==1){
        debug=0;
    }
    else if(debug==0){
        test1[9]='z';
     len=read_str4_user(received_sub);
    for(j=0;j<4;j++)
    {
        if(connection[j]==received_sub[1])
            break;
    }
    }
    //IntMasterEnable();
}
void UART3_Handler(void){
    //IntMasterDisable();
    test1[2]='z';
    UART3_ICR_R |= (1<<4);
    read_str3_user(reading);
    test1[3]='z';
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
   // IntMasterEnable();
}
int main()
{
    //IntMasterDisable();
    uart3_init();
    uart4_init();
    mcu_pub_init();
    test1[0]='z';
    mcu_sub_init();
    test1[1]='z';
    //IntMasterDisable();
    MySub_Init();
    test1[0]='a';
    IntMasterEnable();

    while(true)
    {
        z++;
    }
    return 0;
}
