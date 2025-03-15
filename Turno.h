#ifndef TURNO
#define TURNO
#include "./Tablero.h"

class Turno{
	public:
		int eleccion[2], fila, columna;
		Turno(Pos** listcard);
		int getPlayers(int players);
		Voltear();
		Mostrar();
	private:
		int puntos;
};


#endif

