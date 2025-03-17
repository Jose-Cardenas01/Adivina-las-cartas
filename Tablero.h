#ifndef TABLERO
#define TABLERO
#define BG_BLACK   "\x1B[40m"
#define BG_RED     "\x1B[41m"
#define BG_GREEN   "\x1B[42m"
#define BG_YELLOW  "\x1B[43m"
#define BG_BLUE    "\x1B[44m"
#define BG_MAGENTA "\x1B[45m"
#define BG_CYAN    "\x1B[46m"
#define BG_WHITE   "\x1B[47m"
#define BG_ORANGE  "\x1B[48;2;255;128;0m"
#define BG_LBLUE   "\x1B[48;2;53;149;240m"
#define BG_LGREEN  "\x1B[48;2;17;245;120m"
#define BG_GRAY    "\x1B[48;2;176;174;174m"
#define BG_ROSE    "\x1B[48;2;255;151;203m"

#include <string>

class Tablero{
	public:
		int numrandom, numrandom2;
		struct Pos{
			int id;
			int est[3]={0, 1, 2};//0:esta boca abajo, 1:esta boca arriba, 2:ya se retiro
			std::string color[13]={BG_BLACK, BG_RED, BG_GREEN, BG_YELLOW, BG_BLUE, BG_MAGENTA, BG_CYAN, BG_WHITE, BG_ORANGE, BG_LBLUE, BG_LGREEN, BG_GRAY, BG_ROSE};
		};
		Pos getCard();
	private:
		//Pos** listcard[]=new Pos*[4];
		Pos aux;
		//Crearlist();
		void Revolver();
		void Llenarlist();
		void Cartason();
		Pos listcard[16];
};

#endif