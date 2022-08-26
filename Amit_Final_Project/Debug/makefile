################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include MCAL/subdir.mk
-include HAL/subdir.mk
-include APP/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
Amit_Final_Project.lss \

FLASH_IMAGE += \
Amit_Final_Project.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: Amit_Final_Project.elf secondary-outputs

# Tool invocations
Amit_Final_Project.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Amit_Final_Project.map -mmcu=atmega32 -o "Amit_Final_Project.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Amit_Final_Project.lss: Amit_Final_Project.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Amit_Final_Project.elf  >"Amit_Final_Project.lss"
	@echo 'Finished building: $@'
	@echo ' '

Amit_Final_Project.hex: Amit_Final_Project.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Amit_Final_Project.elf  "Amit_Final_Project.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Amit_Final_Project.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 Amit_Final_Project.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Amit_Final_Project.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
