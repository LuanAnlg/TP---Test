#pragma once

class Personaje {

public:

	Personaje();

	void setX(short nx);
	void setY(short ny);
	void setC(char nc);

	short getX() const;
	short getY() const;
	char getC() const;

private:

	short x;
	short y;
	char c;
};

Personaje::Personaje() {

	x = 0;
	y = 0;
	c = ' ';
}

void Personaje::setX(short nx) { x = nx; }
void Personaje::setY(short ny) { y = ny; }
void Personaje::setC(char nc) { c = nc; }

short Personaje::getX(void) const { return x; }
short Personaje::getY(void) const { return y; }
char Personaje::getC(void) const { return c; }
