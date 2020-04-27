/*
 * motor.c
 *
 *  Created on: 27 avr. 2020
 *      Author: Germain
 */
#include "motor.h"
#include "stm32f1_gpio.h"

void avancer(){
	HAL_GPIO_WritePin(GPIOA, MOTOR1_FIN, true);
}

void reculer(){

}

void gauche(){

}

void droite(){

}

void arret(){

}

void state(uint16_t tab_data[]){

	state etat = DEFAUT;

	switch(etat){

		case DEFAUT:
			break;

		case AVANCER:
			break;

		case RECULER:
			break;

		case GAUCHE :
			break;

		case DROITE :
			break;

		case ARRET :
			break;

	}


}

