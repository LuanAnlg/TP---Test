#include "Grupo.h"
#include "conio.h"

class Logica
{
public:
	Logica();
	~Logica();
	void juego();

private:
	Grupo* grupo;
	char tecla;
	short aliados;
	int dx, dy;
};

Logica::Logica()
{
	grupo = new Grupo;
	aliados = 0;
	dx = 0;
	dy = 0;
}

Logica::~Logica()
{
}

void Logica::juego() {
	while (true) {
		if (_kbhit()) {
			tecla = std::toupper(_getch());
			switch (tecla) {
			case 'E':
				aliados++;
				grupo->agregar(aliados);
				break;
			case 'W':
				dx = 0; dy = -1;
				break;
			case 'S':
				dx = 0; dy = 1;
				break;
			case 'A':
				dx = -1; dy = 0;
				break;
			case 'D':
				dx = 1; dy = 0;
				break;
			default:
				break;
			}
		}
		grupo->borrar();
		grupo->mover(dx, dy);
		grupo->dibujar();
		_sleep(250);
	}
}
