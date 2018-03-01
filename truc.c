#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#define TAILLE_X 30	//nb de ligne
#define TAILLE_Y 70	//nb de colonne

void creerZone(int t[TAILLE_X][TAILLE_Y]){
	int i,j;
	for(i=0;i<TAILLE_Y;i++){ //mur du haut et du bas
		t[0][i]=1;
		t[TAILLE_X-1][i]=1;}
	for(j=1;j<TAILLE_X-1;j++){ //mur de gauche et de droite
		t[j][0]=1;
		t[j][TAILLE_Y-1]=1;}
	t[10][40]=2;
}

void affichage(int t[TAILLE_X][TAILLE_Y]){
	int i,j;
	for(i=0;i<TAILLE_X;i++){
		for(j=0;j<TAILLE_Y;j++){
			switch(t[i][j]){
				case 1:
					printf("%c",'#'); //mur
					break;
				case 2:
					printf("%c",'*'); //monstre
					break;
				default:
					printf(" "); //vide
			}
		}
		printf("\n");
	}
}

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
