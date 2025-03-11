#include <iostream>

Turno::Turno(Pos** listcard){
	puntos=0;
	bool seguir==true;
	while (seguir==true){
		for (int i=0;i<2;i++){
			cout<<"Elige la fila de donde quieres voltear la carta "<<(i+1); cin>>fila;
			cout<<"Elige la columna de donde quieres voltear la carta "<<(i+1); cin>>columna;
			eleccion[i]=listcard[fila][columna].id;
		};
		if (eleccion[0]==eleccion[1]){
			puntos+=1;
			listcard[fila][columna].est=est[1];
			cout<<"EL jugador a ganado un punto";
		} else {
			cout<<"Las cartas seleccionadas no coinciden";
			seguir=false;
		};
	};
};


int Turno::getPlayers(int puntos){
	return puntos;
};











