

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
char z=0;
char reading[6];
volatile char debug=1;
char Buffer[10];
char Buffer_count=0;
char key=120;
char len;
void UART4_Handler(void)
{
   IntMasterDisable();
    UART4_ICR_R |= (1<<4);
    if(debug==1){
        debug=0;
    }
    else{
    test1[9]='z';
    read_str4_user(received_sub);
    }
    IntMasterEnable();
}
int main()
{
   IntMasterDisable();
    uart3_init();
    uart4_init();
    uart5_init();
    mcu_pub_init();
    test1[0]='z';
    mcu_sub_init();
    test1[1]='z';
    MySub_Init();
    test1[0]='a';
   IntMasterEnable();
    while(true)
    {
           z++;
           Buffer[Buffer_count]=UART3_InChar();
           Buffer[Buffer_count]^=key;
          len=convert(Buffer[Buffer_count]);
           MyPublish(temp,len);
           atran++;
           Buffer_count++;
           if(Buffer_count>=10)
               Buffer_count-=10;
    }
    return 0;
}
