################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../lib/middleware/dialog.c 

OBJS += \
./lib/middleware/dialog.o 

C_DEPS += \
./lib/middleware/dialog.d 


# Each subdirectory must supply rules for building sources it contributes
lib/middleware/%.o: ../lib/middleware/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -mfloat-abi=soft -DSTM32F1 -DNUCLEO_F103RB -DSTM32F103RBTx -DSTM32 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -I"C:/Users/Germain/Documents/A1/Elec_NUM/Projet/GloovyCar/lib/bsp" -I"C:/Users/Germain/Documents/A1/Elec_NUM/Projet/GloovyCar/lib/bsp/VL53L0X" -I"C:/Users/Germain/Documents/A1/Elec_NUM/Projet/GloovyCar/lib/bsp/MPU6050" -I"C:/Users/Germain/Documents/A1/Elec_NUM/Projet/GloovyCar/lib/bsp/iks01a1" -I"C:/Users/Germain/Documents/A1/Elec_NUM/Projet/GloovyCar/lib/bsp/iks01a1/Common" -I"C:/Users/Germain/Documents/A1/Elec_NUM/Projet/GloovyCar/lib/bsp/iks01a1/hts221" -I"C:/Users/Germain/Documents/A1/Elec_NUM/Projet/GloovyCar/lib/bsp/iks01a1/lis3mdl" -I"C:/Users/Germain/Documents/A1/Elec_NUM/Projet/GloovyCar/lib/bsp/iks01a1/lps22hb" -I"C:/Users/Germain/Documents/A1/Elec_NUM/Projet/GloovyCar/lib/bsp/iks01a1/lps25hb" -I"C:/Users/Germain/Documents/A1/Elec_NUM/Projet/GloovyCar/lib/bsp/iks01a1/lsm6ds0" -I"C:/Users/Germain/Documents/A1/Elec_NUM/Projet/GloovyCar/lib/bsp/iks01a1/lsm6ds3" -I"C:/Users/Germain/Documents/A1/Elec_NUM/Projet/GloovyCar/lib/bsp/tft_ili9341" -I"C:/Users/Germain/Documents/A1/Elec_NUM/Projet/GloovyCar/lib/bsp/tft_pcd8544" -I"C:/Users/Germain/Documents/A1/Elec_NUM/Projet/GloovyCar/lib/bsp/MCP23S17" -I"C:/Users/Germain/Documents/A1/Elec_NUM/Projet/GloovyCar/lib/hal/inc" -I"C:/Users/Germain/Documents/A1/Elec_NUM/Projet/GloovyCar/lib/bsp/Common" -I"C:/Users/Germain/Documents/A1/Elec_NUM/Projet/GloovyCar/lib/bsp/lcd2x16" -I"C:/Users/Germain/Documents/A1/Elec_NUM/Projet/GloovyCar/lib/bsp/MLX90614" -I"C:/Users/Germain/Documents/A1/Elec_NUM/Projet/GloovyCar/lib/bsp/MatrixKeyboard" -I"C:/Users/Germain/Documents/A1/Elec_NUM/Projet/GloovyCar/lib/bsp/MatrixLed" -I"C:/Users/Germain/Documents/A1/Elec_NUM/Projet/GloovyCar/lib/CMSIS/core" -I"C:/Users/Germain/Documents/A1/Elec_NUM/Projet/GloovyCar/lib/CMSIS/device" -I"C:/Users/Germain/Documents/A1/Elec_NUM/Projet/GloovyCar/lib/middleware/FatFs" -I"C:/Users/Germain/Documents/A1/Elec_NUM/Projet/GloovyCar/lib/middleware/FatFs/src" -I"C:/Users/Germain/Documents/A1/Elec_NUM/Projet/GloovyCar/lib/middleware/FatFs/src/drivers" -I"C:/Users/Germain/Documents/A1/Elec_NUM/Projet/GloovyCar/appli"  -Og -g3 -Wall -Wextra -Wconversion -fmessage-length=0 -ffunction-sections -fdata-sections -c -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


