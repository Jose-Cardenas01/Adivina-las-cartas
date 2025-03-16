#include "./Jugadores.h"
#include <iostream>

Jugadores::Jugadores(){
	cout<<"Ingrese los jugadores (2-4)"; cin>>numplayer;
	for (int i=0;i<numplayer;i++){
		players[i].id=(i+1);
		players[i].puntos=0;
	};
};

struct Puntos{
	int id, puntos;
};

void Jugadores::Jugar(Turno* turno){
	turno->Turno(Pos** listcard);
};

void Jugadores::ContadorPuntos(puntos+=getPuntos, int i){
	players[i].puntos=puntos;
};
	
void Jugadores::Ganador(){
	int win, puntos=0;
	for (int i=0;i<numplayer;i++){
		if (players[i].puntos>puntos){
			puntos=players[i].puntos;
			win=players[i].id;
		};
	};
	cout<<"El ganador es el JUGADOR "<<win<<" con "<<puntos<<" puntos";
};



