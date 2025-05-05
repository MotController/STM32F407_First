################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/BSP/BEEP/beep.c 

OBJS += \
./Drivers/BSP/BEEP/beep.o 

C_DEPS += \
./Drivers/BSP/BEEP/beep.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/BEEP/%.o Drivers/BSP/BEEP/%.su Drivers/BSP/BEEP/%.cyclo: ../Drivers/BSP/BEEP/%.c Drivers/BSP/BEEP/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F407xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Drivers/BSP/LED -I../Drivers/BSP/BEEP -I../Drivers/BSP/KEY -I../Drivers/BSP/EXTI -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-BSP-2f-BEEP

clean-Drivers-2f-BSP-2f-BEEP:
	-$(RM) ./Drivers/BSP/BEEP/beep.cyclo ./Drivers/BSP/BEEP/beep.d ./Drivers/BSP/BEEP/beep.o ./Drivers/BSP/BEEP/beep.su

.PHONY: clean-Drivers-2f-BSP-2f-BEEP

