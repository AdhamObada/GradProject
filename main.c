

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
char j=0;
char z=0;
char reading[6];
char debug=1;
char Buffer[10];
char Buffer_count=0;
char key=120;
void UART4_Handler(void)
{
    IntMasterDisable();
    test1[3]='z';
    UART4_ICR_R |= (1<<4);
        test1[9]='z';
     read_str4_user(received_sub);
    IntMasterEnable();
}
/*void UART3_Handler(void){
    IntMasterDisable();
    UART3_ICR_R |= (1<<4);
    Buffer[Buffer_count]=UART3_InChar();
    //Buffer[Buffer_count]^=key;
    Buffer_count++;
    if(Buffer_count>=10)
        Buffer_count-=10;
    IntMasterEnable();
}*/
int main()
{
   IntMasterDisable();
    //uart3_init();
    //uart4_init();
    uart5_init();
    mcu_pub_init();
    test1[0]='z';
   //mcu_sub_init();
    test1[1]='z';
    //MySub_Init();
    test1[0]='a';
   IntMasterEnable();
   test1[20]='z';
  // MyPublish(65);
    while(true)
    {
       /* Buffer[Buffer_count]=UART3_InChar();
           Buffer[Buffer_count]^=key;
           MyPublish(&Buffer[Buffer_count]);
           Buffer_count++;
           if(Buffer_count>=10)
               Buffer_count-=10;*/
//subscribe we reading men el senors sha3'alen sawa. publish la2 el 3'alat fel node mcu el publish aw fel strings ely fe mqtt.c
    }
    return 0;
}
