#pragma once

#include "Personaje.h"
#include "Sprite.h"
#include "Funciones.h"

class Protagonista : public Personaje {

public:

	Protagonista();
	~Protagonista();

private:
	
};

Protagonista::Protagonista() : Personaje(){

	setX1((VX - 5) / 2);
	setY1((VY - 3) / 2);
	setS(BLANCO,
		"!___!",
		"|* *|",
		" \\+/"
		);
}

Protagonista::~Protagonista() {}