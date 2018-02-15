#include <stdio.h>
#include <unistd.h>
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
					printf("%c",'¤'); //monstre
					break;
				default:
					printf(" "); //vide
			}
		}
		printf("\n");
	}
}

int main(){
	int t[TAILLE_X][TAILLE_Y]={0};
	creerZone(t);
	affichage(t);
	return 0;
}
