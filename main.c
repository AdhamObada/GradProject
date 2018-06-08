

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
char test1[100];
char i=0;
char j=0;
char count=0;
char z=0;
int len;
char reading[3];
extern char dummy[150];

void UART4_Handler(void)
{
    IntMasterDisable();
    UART4_ICR_R |= (1<<4);
    read_str4_user(fml);
    IntMasterEnable();
}
void UART3_Handler(void){
    IntMasterDisable();
    UART3_ICR_R |= (1<<4);
    read_str3_user(reading);
    Delayms(250);
    test1[7]='m';
    MyPublish(reading);
    IntMasterEnable();
}
int main()
{
    IntMasterDisable();
    //uart3_init();
    uart4_init();
   // mcu_pub_init();
    mcu_sub_init();
    test1[0]='a';
    //IntMasterDisable();
    MySub_Init();
   // test1[0]='Z';
   // IntMasterEnable();

    while(true)
    {
        z++;
    }
    return 0;
}
