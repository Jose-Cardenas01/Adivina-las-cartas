#include <iostream>
#include "./Turno.h"

Turno::Turno(){
	Pos card[16]=getCard();
	puntos=0;
	bool seguir=true;
	while (seguir==true){
		for (int i=0;i<2;i++){
			cout<<"Elige la fila de donde quieres voltear la carta "<<(i+1); cin>>posicion;
			eleccion[i]=card[posicion].id;
			Voltear(i);
			Mostrar(i);
		};
		if (eleccion[0]==eleccion[1]){
			puntos+=1;
			card[posicion].est=mesa.Pos.est[1];
			cout<<"EL jugador a ganado un punto";
		} else {
			cout<<"Las cartas seleccionadas no coinciden";
			seguir=false;
		};
	};
};


void Turno::Voltear(int i){
	if (mesa.listcard[i].est==0){
		mesa.listcard[i].est=1;
	};
	if (mesa.listcard[i].est==1){
		mesa.listcard[i].est==0
	};
	if (mesa.listcard[i].est==2){
		cout<<"La carta ya fue retirada";
	};
};

void Turno::Mostrar(int i){
	if (listcard[i].est==1){
		cout<<listcard[i].color;
	}else {
		cout<<listcard[i].id;
	}
};


int Turno::getPuntos(){
	return puntos;
};











