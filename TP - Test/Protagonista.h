#pragma once
#include "Personaje.h"

class Protagonista : public Personaje {
public:
	Protagonista();
	~Protagonista();

private:
	
};

Protagonista::Protagonista() {
	this->x = 10;
	this->y = 10;
	this->c = '@';
}

Protagonista::~Protagonista() {

}