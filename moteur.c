#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include "affichage.h"
#define TAILLE_X 30	//nb de ligne
#define TAILLE_Y 70	//nb de colonne

void moteur(int tpsJeu){
	int t[TAILLE_X][TAILLE_Y]={0};
	int i=0;
	creerZone(t);
	while(i<tpsJeu){
		affichage(t);
		sleep(0.5);
		i++;
	}
	printf("GAME OVER\n");
}

int main(){
	int tpsJeu=60; //temps de déroulement du jeu en secondes
	moteur(tpsJeu);
	return 0;
}
