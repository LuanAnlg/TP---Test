#pragma once

#include <iostream>

#include "Sprite.h"

class Personaje {

public:

	Personaje();
	~Personaje();

	void setX1(short nx1);
	void setY1(short ny1);
	void setX2(short nx2);
	void setY2(short ny2);
	void setS(std::string nc, std::string nl1, std::string nl2, std::string nl3);

	short getX1() const;
	short getY1() const;
	short getX2() const;
	short getY2() const;
	Sprite getS() const;

	void borrar();
	void dibujar();

private:

	short x1;
	short y1;
	short x2;
	short y2;
	Sprite s;
};

Personaje::Personaje() {

	x1 = 0;
	y1 = 0;
	x2 = 4;
	y2 = 2;
	s.l1 = "     ";
	s.l2 = "     ";
	s.l3 = "     ";
}

Personaje::~Personaje() {}

void Personaje::setX1(short nx1) { x1 = nx1; }
void Personaje::setY1(short ny1) { y1 = ny1; }
void Personaje::setX2(short nx2) { x2 = nx2; }
void Personaje::setY2(short ny2) { y2 = ny2; }
void Personaje::setS(std::string nc, std::string nl1, std::string nl2, std::string nl3) {

	s.c = nc;
	s.l1 = nl1;
	s.l2 = nl2;
	s.l3 = nl3;
}

short Personaje::getX1() const { return x1; }
short Personaje::getY1() const { return y1; }
short Personaje::getX2() const { return x2; }
short Personaje::getY2() const { return y2; }
Sprite Personaje::getS() const { return s; }

void Personaje::borrar() {

	for (int b = 0; b < 3; b++) {
		System::Console::SetCursorPosition(x1, y1 + b); std::cout << "     ";
	}
}
void Personaje::dibujar() {

	System::Console::SetCursorPosition(x1, y1); std::cout << s.c << s.l1;
	System::Console::SetCursorPosition(x1, y1 + 1); std::cout << s.l2;
	System::Console::SetCursorPosition(x1, y1 + 2); std::cout << s.l3 << s.r;
}