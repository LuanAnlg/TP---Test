#pragma once

#include "Personaje.h"
#include "Funciones.h"

class Enemigo : public Personaje {

public:

	Enemigo();
	~Enemigo();
	void reposicionar();

private:
	void setEnemigo();
};

void Enemigo::setEnemigo() {

	setX1(aleatorio(0, VX - 4));
	setY1(aleatorio(0, VY - 2));
	setX2(getX1() + 4);
	setY2(getY1() + 2);

	switch (aleatorio(0, 2)) {
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

Enemigo::Enemigo() {

	setEnemigo();
}

Enemigo::~Enemigo() {}

void Enemigo::reposicionar() {

	setEnemigo();
}