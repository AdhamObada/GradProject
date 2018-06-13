/*
 * MQTT.c
 *
 *  Created on: Mar 31, 2018
 *      Author: Adham
 */

#include "MQTTPacket.h"
#include "uart.h"
#include <stdint.h>
#include <stdbool.h>
#include "driverlib/interrupt.h"
char test2[100];
void MyPublish(char* reading){
    test2[0]='s';
    MQTTPacket_connectData data = MQTTPacket_connectData_initializer;
   char buf[200];
   char buf1[200];
   char buf2[200];
    MQTTString topicString = MQTTString_initializer;
    char* payload = reading;
    int payloadlen = strlen(payload);
    int buflen = sizeof(buf);
    int buflen1= sizeof(buf1);
    int buflen2= sizeof(buf2);

    data.clientID.cstring = "me";
    data.keepAliveInterval = 20;
    data.cleansession = 1;


   int len = MQTTSerialize_connect(buf, buflen, &data); /* 1 */
   send_str3("AT+CIPSTART=4,\"TCP\",\"iot.eclipse.org\",1883,600\r\n");
   Delayms(1000);
   send_str3("AT+CIPSEND=4,16\r\n");  // reading 6
   Delayms(50);
   send_str3_mqtt(buf);
   Delayms(1000);
    topicString.cstring = "MyTemp";


    len += MQTTSerialize_publish(buf1,buflen1, 0, 0, 0, 0, topicString, payload, payloadlen); /* 2 */
    send_str3("AT+CIPSEND=4,16\r\n");
    Delayms(50);
    send_str3_mqtt(buf1);
    Delayms(1000);

    len += MQTTSerialize_disconnect(buf2,buflen2); /* 3 */
    send_str3("AT+CIPSEND=4,1\r\n");
    Delayms(50);
    send_str3_mqtt(buf2);
    Delayms(1000);
    send_str3("AT+CIPCLOSE=4\r\n");

}

void MySub_Init(){
    MQTTPacket_connectData data = MQTTPacket_connectData_initializer;
       char buf[200];
       char buf1[200];
        int buflen = sizeof(buf);
        int buflen1 = sizeof(buf1);
        int msgid = 1;
        MQTTString topicString = MQTTString_initializer;
        int req_qos = 0;


        IntMasterDisable();
        send_str4("AT+CIPSTART=\"TCP\",\"iot.eclipse.org\",1883,1200\r\n");
        Delayms(1000);


        data.clientID.cstring = "me";
        data.keepAliveInterval = 1200;
        data.cleansession = 1;

       int len = MQTTSerialize_connect(buf, buflen, &data);
        send_str4("AT+CIPSEND=16\r\n");
        Delayms(50);
        send_str4_mqtt(buf);
        Delayms(1000);

        topicString.cstring = "MyTemp"; //topic

       len = MQTTSerialize_subscribe(buf1, buflen1, 0, msgid, 1, &topicString, &req_qos); //new buf for sub packet

       send_str4("AT+CIPSEND=13\r\n");
       Delayms(50);
       send_str4_mqtt(buf1);
       Delayms(1000);
     //  IntMasterEnable();
       test2[1]='z';
}
