#include <iostream>
#include "./Tablero.h"
#include <string>
#include <time.h>

struct Pos{
	int id;
	string est[]={"on", "off"};//on:sigue en el tablero, off:ya fue retirada del tablero
};

void Tablero::Crearlist(){//reserva el espacio en memoria de la matriz que almacena las cartas
	for (int i=0;i<4;i++){
		listcard[i]=new Pos[4];
	};
};

void Tablero::Llenarlist(Pos** listcard){//llena la matriz creada en crearlist
	int num=1;
	for (int i=0;i<4;i++){
		for (int j=0;j<4;j+2){
			listcard[i][j].id=num;
			listcard[i][j+1].id=num++;
			listcard[i][j].est=est[0];
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























