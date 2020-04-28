/*
 * motor.c
 *
 *  Created on: 27 avr. 2020
 *      Author: Germain
 */
#include "motor.h"
#include "stm32f1_gpio.h"


void avancer(){
	//moteur 1 et 2 tournent vers l'avant
	HAL_GPIO_WritePin(GPIOA, MOTOR1_FIN, 1);
	HAL_GPIO_WritePin(GPIOB, MOTOR1_RIN, 0);

	HAL_GPIO_WritePin(GPIOA, MOTOR2_FIN, 1);
	HAL_GPIO_WritePin(GPIOB, MOTOR2_RIN, 0);
}

void reculer(){
	//moteur 1 et 2 tournent vers l'arrière
	HAL_GPIO_WritePin(GPIOA, MOTOR1_FIN, 0);
	HAL_GPIO_WritePin(GPIOB, MOTOR1_RIN, 1);

	HAL_GPIO_WritePin(GPIOA, MOTOR2_FIN, 0);
	HAL_GPIO_WritePin(GPIOB, MOTOR2_RIN, 1);
}

void gauche(){
	// moteur 1 vers l'avant et moteur 2 vers l'arrière
	HAL_GPIO_WritePin(GPIOA, MOTOR1_FIN, 1);
	HAL_GPIO_WritePin(GPIOB, MOTOR1_RIN, 0);

	HAL_GPIO_WritePin(GPIOA, MOTOR2_FIN, 0);
	HAL_GPIO_WritePin(GPIOB, MOTOR2_RIN, 1);
}

void droite(){
	// moteur 2 vers l'avant et moteur 1 vers l'arrière
	HAL_GPIO_WritePin(GPIOA, MOTOR1_FIN, 0);
	HAL_GPIO_WritePin(GPIOB, MOTOR1_RIN, 1);

	HAL_GPIO_WritePin(GPIOA, MOTOR2_FIN, 1);
	HAL_GPIO_WritePin(GPIOB, MOTOR2_RIN, 0);
}

void frein(){
	// Les deux moteur sont en frein
	HAL_GPIO_WritePin(GPIOA, MOTOR1_FIN, 1);
	HAL_GPIO_WritePin(GPIOB, MOTOR1_RIN, 1);

	HAL_GPIO_WritePin(GPIOA, MOTOR2_FIN, 1);
	HAL_GPIO_WritePin(GPIOB, MOTOR2_RIN, 1);
}

void arret(){
	//Les deux moteurs sont off (stand-by)
	HAL_GPIO_WritePin(GPIOA, MOTOR1_FIN, 0);
	HAL_GPIO_WritePin(GPIOB, MOTOR1_RIN, 0);

	HAL_GPIO_WritePin(GPIOA, MOTOR2_FIN, 0);
	HAL_GPIO_WritePin(GPIOB, MOTOR2_RIN, 0);
}


void machine_etat(uint16_t tab_data[]){

	state etat = DEFAUT;

	uint16_t valeurs_a_determiner_en_test;
	switch(etat){

		case DEFAUT:
			arret();
			if(tab_data[0]> valeurs_a_determiner_en_test)
				etat = AVANCER;
			//exemple sans les valeurs où nous testerions tab_data[0],
			//tab_data[1] et tab_data[2] qui sont les valeurs X,Y,Z luues
			//par l'accelerometre
			break;

		case AVANCER:
			//si condition etat = RECULER

			//si condition2 etat = ARRET

			//dans chaque état nous vérifirions les valeurs pour aller dans un état ou un autre
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

