#pragma once
#include "iostream"

class Personaje
{
public:
	Personaje();
	~Personaje();
	void setX(short nx);
	void setY(short ny);
	short getX();
	short getY();
	char getC();
protected:
	short x;
	short y;
	char c;
};

Personaje::Personaje() {
}

Personaje::~Personaje() { }

void Personaje::setX(short nx) { this->x = nx; }
void Personaje::setY(short ny) { this->y = ny; }
short Personaje::getX() { return this->x; }
short Personaje::getY() { return this->y; }
char Personaje::getC() { return this->c; }
