#ifndef TURNO
#define TURNO
#include "./Tablero.h"

class Turno{
	public:
		int eleccion[2], fila, columna;
		Turno(Pos** listcard);
		int getPlayers(int players);
	private:
		int puntos;
};


#endif

