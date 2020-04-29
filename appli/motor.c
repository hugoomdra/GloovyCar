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
	//moteur 1 et 2 tournent vers l'arri�re
	HAL_GPIO_WritePin(GPIOA, MOTOR1_FIN, 0);
	HAL_GPIO_WritePin(GPIOB, MOTOR1_RIN, 1);

	HAL_GPIO_WritePin(GPIOA, MOTOR2_FIN, 0);
	HAL_GPIO_WritePin(GPIOB, MOTOR2_RIN, 1);
}

void gauche(){
	// moteur 1 vers l'avant et moteur 2 vers l'arri�re
	HAL_GPIO_WritePin(GPIOA, MOTOR1_FIN, 1);
	HAL_GPIO_WritePin(GPIOB, MOTOR1_RIN, 0);

	HAL_GPIO_WritePin(GPIOA, MOTOR2_FIN, 0);
	HAL_GPIO_WritePin(GPIOB, MOTOR2_RIN, 1);
}

void droite(){
	// moteur 2 vers l'avant et moteur 1 vers l'arri�re
	HAL_GPIO_WritePin(GPIOA, MOTOR1_FIN, 0);
	HAL_GPIO_WritePin(GPIOB, MOTOR1_RIN, 1);

	HAL_GPIO_WritePin(GPIOA, MOTOR2_FIN, 1);
	HAL_GPIO_WritePin(GPIOB, MOTOR2_RIN, 0);
}

void arret(){
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


void machine_etat(State etat){

	int16_t valeurs_a_determiner_en_test;
	switch(etat){
		case DEFAUT:
			arret();
			//if(bluetooth activ� ){
				//if(tab_data[0]> valeurs_a_determiner_en_test)
					//etat = AVANCER;
				//exemple sans les valeurs o� nous testerions tab_data[0],
				//tab_data[1] et tab_data[2] qui sont les valeurs X,Y,Z luues
				//par l'accelerometre

			//}
			break;

		case AVANCER:
			avancer();
			break;

		case RECULER:
			reculer();
			break;

		case GAUCHE :
			gauche();
			break;

		case DROITE :
			droite();
			break;

		case ARRET :
			arret();
			break;

	}


}

