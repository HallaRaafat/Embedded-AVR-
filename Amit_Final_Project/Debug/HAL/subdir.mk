################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/Hand_Prog.c \
../HAL/LCD_task_prog.c \
../HAL/LED_PROG.c \
../HAL/motion.c 

OBJS += \
./HAL/Hand_Prog.o \
./HAL/LCD_task_prog.o \
./HAL/LED_PROG.o \
./HAL/motion.o 

C_DEPS += \
./HAL/Hand_Prog.d \
./HAL/LCD_task_prog.d \
./HAL/LED_PROG.d \
./HAL/motion.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/%.o: ../HAL/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


