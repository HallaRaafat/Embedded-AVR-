################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/ADC.prog.c \
../MCAL/Dio_Prog.c \
../MCAL/PWM_prog.c 

OBJS += \
./MCAL/ADC.prog.o \
./MCAL/Dio_Prog.o \
./MCAL/PWM_prog.o 

C_DEPS += \
./MCAL/ADC.prog.d \
./MCAL/Dio_Prog.d \
./MCAL/PWM_prog.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/%.o: ../MCAL/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


