#ifndef TURNO
#define TURNO
#include "./Tablero.h"

class Turno{
	public:
		int eleccion[2], fila, columna;
		Turno(Pos** listcard);
		int getPlayers(int puntos);
		int get
		Voltear();
		Mostrar();
	private:
		int puntos;
};


#endif

