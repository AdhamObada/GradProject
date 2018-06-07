################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
MQTT.obj: ../MQTT.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"E:/gam3a/CC/ccsv7/tools/compiler/ti-cgt-arm_16.9.6.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --include_path="E:/gam3a/GradProject/CCWorkspace/Test" --include_path="C:/Users/ya bedan/git/paho.mqtt.embedded-c/MQTTPacket/src" --include_path="C:/ti/TivaWare_C_Series-2.1.3.156" --include_path="C:/Users/ya bedan/git/paho.mqtt.embedded-c/MQTTPacket/src" --include_path="E:/gam3a/CC/ccsv7/tools/compiler/ti-cgt-arm_16.9.6.LTS/include" --define=ccs="ccs" --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --check_misra="1" --preproc_with_compile --preproc_dependency="MQTT.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

MQTTConnectClient.obj: C:/Users/ya\ bedan/git/paho.mqtt.embedded-c/MQTTPacket/src/MQTTConnectClient.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"E:/gam3a/CC/ccsv7/tools/compiler/ti-cgt-arm_16.9.6.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --include_path="E:/gam3a/GradProject/CCWorkspace/Test" --include_path="C:/Users/ya bedan/git/paho.mqtt.embedded-c/MQTTPacket/src" --include_path="C:/ti/TivaWare_C_Series-2.1.3.156" --include_path="C:/Users/ya bedan/git/paho.mqtt.embedded-c/MQTTPacket/src" --include_path="E:/gam3a/CC/ccsv7/tools/compiler/ti-cgt-arm_16.9.6.LTS/include" --define=ccs="ccs" --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --check_misra="1" --preproc_with_compile --preproc_dependency="MQTTConnectClient.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

MQTTConnectServer.obj: C:/Users/ya\ bedan/git/paho.mqtt.embedded-c/MQTTPacket/src/MQTTConnectServer.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"E:/gam3a/CC/ccsv7/tools/compiler/ti-cgt-arm_16.9.6.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --include_path="E:/gam3a/GradProject/CCWorkspace/Test" --include_path="C:/Users/ya bedan/git/paho.mqtt.embedded-c/MQTTPacket/src" --include_path="C:/ti/TivaWare_C_Series-2.1.3.156" --include_path="C:/Users/ya bedan/git/paho.mqtt.embedded-c/MQTTPacket/src" --include_path="E:/gam3a/CC/ccsv7/tools/compiler/ti-cgt-arm_16.9.6.LTS/include" --define=ccs="ccs" --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --check_misra="1" --preproc_with_compile --preproc_dependency="MQTTConnectServer.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

MQTTDeserializePublish.obj: C:/Users/ya\ bedan/git/paho.mqtt.embedded-c/MQTTPacket/src/MQTTDeserializePublish.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"E:/gam3a/CC/ccsv7/tools/compiler/ti-cgt-arm_16.9.6.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --include_path="E:/gam3a/GradProject/CCWorkspace/Test" --include_path="C:/Users/ya bedan/git/paho.mqtt.embedded-c/MQTTPacket/src" --include_path="C:/ti/TivaWare_C_Series-2.1.3.156" --include_path="C:/Users/ya bedan/git/paho.mqtt.embedded-c/MQTTPacket/src" --include_path="E:/gam3a/CC/ccsv7/tools/compiler/ti-cgt-arm_16.9.6.LTS/include" --define=ccs="ccs" --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --check_misra="1" --preproc_with_compile --preproc_dependency="MQTTDeserializePublish.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

MQTTFormat.obj: C:/Users/ya\ bedan/git/paho.mqtt.embedded-c/MQTTPacket/src/MQTTFormat.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"E:/gam3a/CC/ccsv7/tools/compiler/ti-cgt-arm_16.9.6.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --include_path="E:/gam3a/GradProject/CCWorkspace/Test" --include_path="C:/Users/ya bedan/git/paho.mqtt.embedded-c/MQTTPacket/src" --include_path="C:/ti/TivaWare_C_Series-2.1.3.156" --include_path="C:/Users/ya bedan/git/paho.mqtt.embedded-c/MQTTPacket/src" --include_path="E:/gam3a/CC/ccsv7/tools/compiler/ti-cgt-arm_16.9.6.LTS/include" --define=ccs="ccs" --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --check_misra="1" --preproc_with_compile --preproc_dependency="MQTTFormat.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

MQTTPacket.obj: C:/Users/ya\ bedan/git/paho.mqtt.embedded-c/MQTTPacket/src/MQTTPacket.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"E:/gam3a/CC/ccsv7/tools/compiler/ti-cgt-arm_16.9.6.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --include_path="E:/gam3a/GradProject/CCWorkspace/Test" --include_path="C:/Users/ya bedan/git/paho.mqtt.embedded-c/MQTTPacket/src" --include_path="C:/ti/TivaWare_C_Series-2.1.3.156" --include_path="C:/Users/ya bedan/git/paho.mqtt.embedded-c/MQTTPacket/src" --include_path="E:/gam3a/CC/ccsv7/tools/compiler/ti-cgt-arm_16.9.6.LTS/include" --define=ccs="ccs" --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --check_misra="1" --preproc_with_compile --preproc_dependency="MQTTPacket.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

MQTTSerializePublish.obj: C:/Users/ya\ bedan/git/paho.mqtt.embedded-c/MQTTPacket/src/MQTTSerializePublish.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"E:/gam3a/CC/ccsv7/tools/compiler/ti-cgt-arm_16.9.6.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --include_path="E:/gam3a/GradProject/CCWorkspace/Test" --include_path="C:/Users/ya bedan/git/paho.mqtt.embedded-c/MQTTPacket/src" --include_path="C:/ti/TivaWare_C_Series-2.1.3.156" --include_path="C:/Users/ya bedan/git/paho.mqtt.embedded-c/MQTTPacket/src" --include_path="E:/gam3a/CC/ccsv7/tools/compiler/ti-cgt-arm_16.9.6.LTS/include" --define=ccs="ccs" --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --check_misra="1" --preproc_with_compile --preproc_dependency="MQTTSerializePublish.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

MQTTSubscribeClient.obj: C:/Users/ya\ bedan/git/paho.mqtt.embedded-c/MQTTPacket/src/MQTTSubscribeClient.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"E:/gam3a/CC/ccsv7/tools/compiler/ti-cgt-arm_16.9.6.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --include_path="E:/gam3a/GradProject/CCWorkspace/Test" --include_path="C:/Users/ya bedan/git/paho.mqtt.embedded-c/MQTTPacket/src" --include_path="C:/ti/TivaWare_C_Series-2.1.3.156" --include_path="C:/Users/ya bedan/git/paho.mqtt.embedded-c/MQTTPacket/src" --include_path="E:/gam3a/CC/ccsv7/tools/compiler/ti-cgt-arm_16.9.6.LTS/include" --define=ccs="ccs" --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --check_misra="1" --preproc_with_compile --preproc_dependency="MQTTSubscribeClient.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

MQTTSubscribeServer.obj: C:/Users/ya\ bedan/git/paho.mqtt.embedded-c/MQTTPacket/src/MQTTSubscribeServer.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"E:/gam3a/CC/ccsv7/tools/compiler/ti-cgt-arm_16.9.6.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --include_path="E:/gam3a/GradProject/CCWorkspace/Test" --include_path="C:/Users/ya bedan/git/paho.mqtt.embedded-c/MQTTPacket/src" --include_path="C:/ti/TivaWare_C_Series-2.1.3.156" --include_path="C:/Users/ya bedan/git/paho.mqtt.embedded-c/MQTTPacket/src" --include_path="E:/gam3a/CC/ccsv7/tools/compiler/ti-cgt-arm_16.9.6.LTS/include" --define=ccs="ccs" --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --check_misra="1" --preproc_with_compile --preproc_dependency="MQTTSubscribeServer.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

MQTTUnsubscribeClient.obj: C:/Users/ya\ bedan/git/paho.mqtt.embedded-c/MQTTPacket/src/MQTTUnsubscribeClient.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"E:/gam3a/CC/ccsv7/tools/compiler/ti-cgt-arm_16.9.6.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --include_path="E:/gam3a/GradProject/CCWorkspace/Test" --include_path="C:/Users/ya bedan/git/paho.mqtt.embedded-c/MQTTPacket/src" --include_path="C:/ti/TivaWare_C_Series-2.1.3.156" --include_path="C:/Users/ya bedan/git/paho.mqtt.embedded-c/MQTTPacket/src" --include_path="E:/gam3a/CC/ccsv7/tools/compiler/ti-cgt-arm_16.9.6.LTS/include" --define=ccs="ccs" --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --check_misra="1" --preproc_with_compile --preproc_dependency="MQTTUnsubscribeClient.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

MQTTUnsubscribeServer.obj: C:/Users/ya\ bedan/git/paho.mqtt.embedded-c/MQTTPacket/src/MQTTUnsubscribeServer.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"E:/gam3a/CC/ccsv7/tools/compiler/ti-cgt-arm_16.9.6.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --include_path="E:/gam3a/GradProject/CCWorkspace/Test" --include_path="C:/Users/ya bedan/git/paho.mqtt.embedded-c/MQTTPacket/src" --include_path="C:/ti/TivaWare_C_Series-2.1.3.156" --include_path="C:/Users/ya bedan/git/paho.mqtt.embedded-c/MQTTPacket/src" --include_path="E:/gam3a/CC/ccsv7/tools/compiler/ti-cgt-arm_16.9.6.LTS/include" --define=ccs="ccs" --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --check_misra="1" --preproc_with_compile --preproc_dependency="MQTTUnsubscribeServer.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

UART.obj: ../UART.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"E:/gam3a/CC/ccsv7/tools/compiler/ti-cgt-arm_16.9.6.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --include_path="E:/gam3a/GradProject/CCWorkspace/Test" --include_path="C:/Users/ya bedan/git/paho.mqtt.embedded-c/MQTTPacket/src" --include_path="C:/ti/TivaWare_C_Series-2.1.3.156" --include_path="C:/Users/ya bedan/git/paho.mqtt.embedded-c/MQTTPacket/src" --include_path="E:/gam3a/CC/ccsv7/tools/compiler/ti-cgt-arm_16.9.6.LTS/include" --define=ccs="ccs" --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --check_misra="1" --preproc_with_compile --preproc_dependency="UART.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

main.obj: ../main.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"E:/gam3a/CC/ccsv7/tools/compiler/ti-cgt-arm_16.9.6.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --include_path="E:/gam3a/GradProject/CCWorkspace/Test" --include_path="C:/Users/ya bedan/git/paho.mqtt.embedded-c/MQTTPacket/src" --include_path="C:/ti/TivaWare_C_Series-2.1.3.156" --include_path="C:/Users/ya bedan/git/paho.mqtt.embedded-c/MQTTPacket/src" --include_path="E:/gam3a/CC/ccsv7/tools/compiler/ti-cgt-arm_16.9.6.LTS/include" --define=ccs="ccs" --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --check_misra="1" --preproc_with_compile --preproc_dependency="main.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

tm4c123gh6pm_startup_ccs.obj: ../tm4c123gh6pm_startup_ccs.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"E:/gam3a/CC/ccsv7/tools/compiler/ti-cgt-arm_16.9.6.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --include_path="E:/gam3a/GradProject/CCWorkspace/Test" --include_path="C:/Users/ya bedan/git/paho.mqtt.embedded-c/MQTTPacket/src" --include_path="C:/ti/TivaWare_C_Series-2.1.3.156" --include_path="C:/Users/ya bedan/git/paho.mqtt.embedded-c/MQTTPacket/src" --include_path="E:/gam3a/CC/ccsv7/tools/compiler/ti-cgt-arm_16.9.6.LTS/include" --define=ccs="ccs" --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --check_misra="1" --preproc_with_compile --preproc_dependency="tm4c123gh6pm_startup_ccs.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


