#pragma once

#include "Personaje.h"
#include "Funciones.h"

class Protagonista : public Personaje {
	
private:

public:

	Protagonista() {

		setX1((VX - 5) / 2);
		setY1((VY - 3) / 2);
		setS(BLANCO,
			"!___!",
			"|* *|",
			" \\+/"
		);
	}

	~Protagonista() {}
};