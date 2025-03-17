#include "./Jugadores.h"

int main(){
	Jugadores jug;
	Turno tur;
	Tablero mesa;
	
	jug.Jugadores();
	mesa.Crearlist();
	mesa.Llenarlist();
	mesa.Revolver();
	int num=jug.numplayer;
	struct Puntos=jug.Puntos;
	Puntos Players[num]=jug.players;
	for (int i=0;i<num;i++){
		jug.Jugar(&tur);
		jug.ContadorPuntos(tur.getPuntos(), i);
		mesa.Cartason();
	};
};



