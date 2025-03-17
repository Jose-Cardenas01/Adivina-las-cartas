#include <iostream>
#include "./Tablero.h"
#include <time.h>

using namespace std;
/*struct Pos{
	int id;
	int est[0, 1, 2]={};//0:esta boca abajo, 1:esta boca arriba, 2:ya se retiro
	string color[]={BG_BLACK, BG_RED, BG_GREEN, BG_YELLOW, BG_BLUE, BG_MAGENTA, BG_CYAN, BG_WHITE, BG_ORANGE, BG_LBLUE, BG_LGREEN, BG_GRAY, BG_ROSE};
};*/

/*void Tablero::Crearlist(){//reserva el espacio en memoria de la matriz que almacena las cartas
	for (int i=0;i<4;i++){
		listcard[i]=new Pos[4];
	};
};*/

void Tablero::Llenarlist(){//llena la matriz creada en crearlist
	int num=1, random;
	srand(time(NULL));
	//random=0+(rand()%13);
	for (int i=0;i<16;i+=2){
		random=0+(rand()%13);
		listcard[i].id=num;
		listcard[i+1].id=num++;
		listcard[i].est=est[0];
		listcard[i+1].est=est[0];
		listcard[i].color=color[random];
		listcard[i+1].color=color[random];
	};
};

void Tablero::Revolver(){//revuelve las cartas
aux.id=0;
aux.est=est[0];
aux.color=color[0];
	for (int i=0;i<32;i++){
		srand(time(NULL));
		numrandom=0+(rand()%(5));
		aux=listcard[i];
		listcard[i]=listcard[numrandom];
		listcard[numrandom]=aux;
	};
};

void Tablero::Cartason(){//revisa que cartas estan activas
	int on=0, off=0;
	for (int i=0;i<16;i++){
		if (listcard[i].est==est[2]){
			on+=1;
		} else {
			off+=1;
		};
	};
	if (on==16){
		cout<<"El juego termino, no quedan mas cartas en el tablero";
	} else {
		int cartas=16-off;
		cout<<"Quedan :"<<cartas<<" cartas en el tablero";
	};

};

Pos Tablero::getCard(){
	return listcard;
};







