################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/BEEP/beep.c 

OBJS += \
./Drivers/BEEP/beep.o 

C_DEPS += \
./Drivers/BEEP/beep.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BEEP/%.o Drivers/BEEP/%.su Drivers/BEEP/%.cyclo: ../Drivers/BEEP/%.c Drivers/BEEP/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F407xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-BEEP

clean-Drivers-2f-BEEP:
	-$(RM) ./Drivers/BEEP/beep.cyclo ./Drivers/BEEP/beep.d ./Drivers/BEEP/beep.o ./Drivers/BEEP/beep.su

.PHONY: clean-Drivers-2f-BEEP

