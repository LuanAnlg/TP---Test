#pragma once

#include "Personaje.h"

class Protagonista : public Personaje {

public:

	Protagonista();

private:
	
};

Protagonista::Protagonista() : Personaje(){

	setX(10);
	setY(10);
	setC('@');
}