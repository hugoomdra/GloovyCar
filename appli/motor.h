/*
 * motor.h
 *
 *  Created on: 27 avr. 2020
 *      Author: Germain
 */


typedef enum{
	AVANCER,
	RECULER,
	ARRET,
	GAUCHE,
	DROITE,
	DEFAUT
}state;

#define MOTOR1_FIN GPIO_PIN_8
#define MOTOR1_RIN GPIO_PIN_13
#define MOTOR2_FIN GPIO_PIN_10
#define MOTOR2_RIN GPIO_PIN_15
