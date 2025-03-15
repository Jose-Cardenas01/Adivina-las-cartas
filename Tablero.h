#ifndef TABLERO
#define TABLERO
#include <colors.h>

class Tablero{
	public:
		int numrandom, numrandom2;
		struct Pos;
	private:
		Pos** listcard[]=new Pos*[4];
		Pos* aux;
		Crearlist();
		Revolver(Pos** listcard);
		Llenarlist(Pos** listcard);
		Cartason(Pos** listcard);
};

#endif