#pragma once

#include "Personaje.h"

class Aliado : public Personaje {

public:

	Aliado();
	
private:

};

Aliado::Aliado() : Personaje(){

	setC('#');
}