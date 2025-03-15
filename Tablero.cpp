#include <iostream>
#include "./Tablero.h"
#include <string>
#include <time.h>

struct Pos{
	int id;
	int est[0, 1, 2]={};//0:esta boca abajo, 1:esta boca arriba, 2:ya se retiro
	string color[]={BG_BLACK, BG_RED, BG_GREEN, BG_YELLOW, BG_BLUE, BG_MAGENTA, BG_CYAN, BG_WHITE, BG_ORANGE, BG_LBLUE, BG_LGREEN, BG_GRAY, BG_ROSE};
};

void Tablero::Crearlist(){//reserva el espacio en memoria de la matriz que almacena las cartas
	for (int i=0;i<4;i++){
		listcard[i]=new Pos[4];
	};
};

void Tablero::Llenarlist(Pos** listcard){//llena la matriz creada en crearlist
	int num=1, random;
	srand(time(NULL));
	random=0+(rand()%13);
	for (int i=0;i<4;i++){
		for (int j=0;j<4;j+2){
			listcard[i][j].id=num;
			listcard[i][j+1].id=num++;
			listcard[i][j].est=est[0];
			listcard[i][j].color=color[random];
		};
	};
};

void Tablero::Revolver(Pos** listcard){//revuelve las cartas
	for (int i=0;i<4;i++){
		for (int j=0;j<4;j++){
			srand(time(NULL));
			numrandom=0+(rand()%(5));
			numrandom2=0+(rand()%(5));
			aux=listcard[i][j];
			listcard[i][j]=listcard[numrandom][numrandom2];
			listcard[numrandom][numrandom2]=aux;
		};
	};
};

void Tablero::Cartason(Pos** listcard){//revisa que cartas estan activas
	int on=0, off=0;
	for (int i=0;i<4;i++){
		for (int j=0;j<4;j++){
			if (listcard[i][j].est==est[0]){
				on+=1;
			} else {
				off+=1;
			};
		};
	};
	if (on==16){
		cout<<"El juego termino, no quedan mas cartas en el tablero";
	} else {
		int cartas=16-off;
		cout<<"Quedan :"<<cartas<<" cartas en el tablero";
	};
};























