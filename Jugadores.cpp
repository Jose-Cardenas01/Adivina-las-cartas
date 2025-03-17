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

void Jugadores::ContadorPuntos(punt, int i){
	players[i].puntos=punt;
};
	
void Jugadores::Ganador(){
	int win1, win2=0, puntos=0;
	for (int i=0;i<numplayer;i++){
		if (players[i].puntos>=puntos){
			if (players[i].puntos>puntos){
				puntos=players[i].puntos;
				win1=players[i].id;
			}else {
				puntos=players[i].puntos;
				win2=players[i].id;
			}
		};
	};
	if (win2!=0){
		cout<<"El ganador es el JUGADOR "<<win1<<" con "<<puntos<<" puntos";
	}else {
		cout<<"Los ganadores son el JUGADORE "<<win1<<" y el JUGADOR "<<win2<<" con "<<puntos<<" puntos";
	};
};

int Jugadores::getPlayers(){
	return numplayer;
};



