#include <iostream>

Turno::Turno(Pos** listcard){
	puntos=0;
	bool seguir==true;
	while (seguir==true){
		for (int i=0;i<2;i++){
			cout<<"Elige la fila de donde quieres voltear la carta "<<(i+1); cin>>fila;
			cout<<"Elige la columna de donde quieres voltear la carta "<<(i+1); cin>>columna;
			eleccion[i]=listcard[fila][columna].id;
			Voltear(i, j);
			Mostrar();
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


void Turno::Voltear(int i, int j){
	if (listcard[i][j].est==0){
		listcard[i][j].est=1;
	},
	if (listcard[i][j].est==1){
		listcard[i][j].est==0
	};
	if (listcard[i][j].est==2){
		cout<<"La carta ya fue retirada";
	};
};
void Turno::Mostrar(){
	if (listcard[i][j].est==0){
		cout<<listcard[i][j].color;
	}else {
		cout<<listcard[i][j].id;
	}
};


int Turno::getPlayers(int puntos){
	return puntos;
};











