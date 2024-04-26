#pragma once

#include "Personaje.h"
#include "Funciones.h"

class Enemigo : public Personaje {

private:

	short tipo;

	void setEnemigo() {
		tipo = aleatorio(0, 2);

		setX1(aleatorio(0, VX - 4));
		setY1(aleatorio(0, VY - 2));
		setX2(getX1() + 4);
		setY2(getY1() + 2);

		switch (tipo) {
		case 0:
			setS(GRIS,
				"///\\\\",
				"('-')",
				" \\-/"
			); break;
		case 1:
			setS(GRIS,
				"//\\\\\\",
				"|'-'|",
				"//-\\\\"
			); break;
		case 2:
			setS(GRIS,
				"///#",
				"|/-')",
				" |-|"
			); break;
		default: break;
		}
	}

public:

	Enemigo() {

		setEnemigo();
	}

	~Enemigo() {}

	void reposicionar() {

		setEnemigo();
	}

	short getTipo() { return tipo; }
};