/*
 * MQTT.h
 *
 *  Created on: Mar 31, 2018
 *      Author: Adham
 */

#ifndef MQTT_H_
#define MQTT_H_
extern char temp[10];

void MyPublish(char* reading,char len);
void MySub_Init(void);
char convert(char x);

#endif /* MQTT_H_ */
