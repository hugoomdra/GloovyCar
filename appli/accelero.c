/*
 * accelero.c
 *
 *  Created on: 1 avr. 2020
 *      Author: Germain
 */


#include "config.h"
#if USE_MPU6050
#include "stm32f1xx_hal.h"
#include "stm32f1_mpu6050.h"
#include "stm32f1_sys.h"
#include "stm32f1_gpio.h"
#include "accelero.h"


MPU6050_t datas;

void initAccelero(){
	MPU6050_Init(&datas , NULL  ,NULL, MPU6050_Device_0, MPU6050_Accelerometer_8G, MPU6050_Gyroscope_2000s);
}


uint16_t *tabValeurAccelero(){
	uint16_t tab_accelero;
	MPU6050_ReadAccelerometer(datas);
	tab_accelero[0] = datas.Accelerometer_X;
	tab_accelero[1] = datas.Accelerometer_Y;
	tab_accelero[2] = datas.Accelerometer_Z;
	return tab_accelero;
}




#endif
