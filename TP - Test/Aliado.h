#pragma once
#include "Personaje.h"

class Aliado : public Personaje
{
public:
	Aliado();
	~Aliado();
	
private:

};

Aliado::Aliado() {
	this->c = '#';
}

Aliado::~Aliado()
{
}
