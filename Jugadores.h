#ifndef JUGADORES
#define JUGADORES
#include "./Turno.h"
#include <string>

class Jugadores{
	public:
		struct Puntos;
		int numplayer, puntos=0;
		Jugar(Turno* turno);
	private:
		int punt=0;
		ContadorPuntos(int i);
		Jugadores();
		Ganador();
		Puntos players[numplayer];
};


#endif