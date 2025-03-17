#ifndef TURNO
#define TURNO
#include "./Tablero.h"

class Turno{
	public:
		int eleccion[2], posicion;
		Turno();
		int getPuntos();
		Voltear();
		Mostrar();
	private:
		Tablero mesa;
		int puntos;
};


#endif

