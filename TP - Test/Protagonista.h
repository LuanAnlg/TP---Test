#pragma once

#include "Personaje.h"
#include "Sprite.h"

class Protagonista : public Personaje {

public:

	Protagonista();
	~Protagonista();

private:
	
};

Protagonista::Protagonista() : Personaje(){

	setX1(10);
	setY1(10);
	setS(BLANCO,
		"!___!",
		"|* *|",
		" \\+/"
		);
}

Protagonista::~Protagonista() {}