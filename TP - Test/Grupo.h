#pragma once
#include "Personaje.h"
#include "Protagonista.h"
#include "Aliado.h"
#include "vector"

class Grupo
{
public:
	Grupo();
	~Grupo();
	void borrar();
	void mover(short dx, short dy);
	void dibujar();
	void agregar(short pos);
	Personaje* protagonista();

private:
	std::vector<Personaje*>* vecGrupo;
};

Grupo::Grupo() {
	vecGrupo = new std::vector<Personaje*>;
	vecGrupo->push_back(new Protagonista);
}

Grupo::~Grupo()
{
}

void Grupo::agregar(short pos) {
	vecGrupo->push_back(new Aliado);
	vecGrupo->at(pos)->setX(vecGrupo->at(0)->getX());
	vecGrupo->at(pos)->setY(vecGrupo->at(0)->getY());
}

void Grupo::borrar() {
	for (int i = 0; i < vecGrupo->size(); i++) {
		System::Console::SetCursorPosition(vecGrupo->at(i)->getX(), vecGrupo->at(i)->getY());
		std::cout << " ";
	}
}
void Grupo::mover(short dx, short dy) {
	for (int i = vecGrupo->size() - 1; i >= 1; i--) {
		vecGrupo->at(i)->setX(vecGrupo->at(i - 1)->getX());
		vecGrupo->at(i)->setY(vecGrupo->at(i - 1)->getY());
	}
	vecGrupo->at(0)->setX(vecGrupo->at(0)->getX() + dx);
	vecGrupo->at(0)->setY(vecGrupo->at(0)->getY() + dy);
}

void Grupo::dibujar() {
	for (int i = 0; i < vecGrupo->size(); i++) {
		System::Console::SetCursorPosition(vecGrupo->at(i)->getX(), vecGrupo->at(i)->getY());
		std::cout << vecGrupo->at(i)->getC();
	}
}

Personaje* Grupo::protagonista() {
	return vecGrupo->at(0);
}