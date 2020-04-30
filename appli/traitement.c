#include "motor.h"


State traitement(int16_t data[]){


	State etat = DEFAUT;

	int16_t condition;

	//data[0] : X data[1] : Y data[2] : Z
	if(/*exemple condition*/ data[0] <120 && data[0] >-10 && data[1]>-100 && data[1] < 300 && data[2] > 300){
		etat = AVANCER;
	}
	else if(condition /* Condition ou la main est pench� en arriere*/){
		etat = RECULER;
	}
	else if(condition /*Condition ou la main est a plat*/){
		etat = ARRET;
	}
	else if(condition /*condition ou la main est penche vers la gauche*/){
		etat = GAUCHE;
	}
	else if(condition /*condition ou la main est penche vers la gauche*/){
		etat = DROITE;
	}
	else{
		//etat reste à défaut.
	}

	return etat;
}
