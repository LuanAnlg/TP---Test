#pragma once

#include "Personaje.h"
#include "Funciones.h"

class Aliado : public Personaje {

public:

	Aliado(short nt, short nc);
	~Aliado();

private:

};

Aliado::Aliado(short nt, short nc) : Personaje() {
	
	switch (nt) {
	case 0:
		setS(color(nc),
			"///\\\\",
			"(^v^)",
			" \\-/"
		); break;
	case 1: 
		setS(color(nc),
			"//\\\\\\",
			"|^v^|",
			"//-\\\\"
		); break;
	case 2:
		setS(color(nc),
			"///#",
			"|/v^)",
			" |-|"
		); break;
	default: break;
	}
}

Aliado::~Aliado() {}