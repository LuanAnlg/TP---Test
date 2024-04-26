#pragma once

#include <vector>

#include "Personaje.h"
#include "Protagonista.h"
#include "Aliado.h"

class Grupo {

public:

	Grupo();
	~Grupo();

	void agregar(char d);
	void eliminar();
	void borrar();
	void mover(short dx, short dy);
	void dibujar();
	

private:

	std::vector<Personaje*>* vecGrupo;
	short aliados = 0;
};

Grupo::Grupo() {

	vecGrupo = new std::vector<Personaje*>;
	vecGrupo->push_back(new Protagonista);
}

Grupo::~Grupo() {

	for (int i = 0; i < vecGrupo->size(); ++i) {
		delete vecGrupo->at(i);
	}
	delete vecGrupo;
}

void Grupo::agregar(char d) {
	
	aliados++;

	vecGrupo->push_back(new Aliado(aleatorio(0, 2), (aliados - 1) % 5)); // para testeo, cambiar despues

	if (aliados > 0) {
		switch (d) {
		case 'W':
			vecGrupo->at(aliados)->setX1(vecGrupo->at(aliados - 1)->getX1());
			vecGrupo->at(aliados)->setY1(vecGrupo->at(aliados - 1)->getY1() - 3);
			break;
		case 'S':
			vecGrupo->at(aliados)->setX1(vecGrupo->at(aliados - 1)->getX1());
			vecGrupo->at(aliados)->setY1(vecGrupo->at(aliados - 1)->getY2() + 1);
			break;
		case 'A':
			vecGrupo->at(aliados)->setX1(vecGrupo->at(aliados - 1)->getX2() + 1);
			vecGrupo->at(aliados)->setY1(vecGrupo->at(aliados - 1)->getY1());
			break;
		case 'D':
			vecGrupo->at(aliados)->setX1(vecGrupo->at(aliados - 1)->getX1() - 3);
			vecGrupo->at(aliados)->setY1(vecGrupo->at(aliados - 1)->getY1());
			break;
		default:
			break;
		}
	}
}

void Grupo::eliminar() {

	if (vecGrupo->size() > 0) {
		vecGrupo->at(aliados)->borrar();
		vecGrupo->erase(vecGrupo->end() - 1);
		aliados--;
	}
}

void Grupo::borrar() {

	for (int i = 0; i < vecGrupo->size(); i++) {
		vecGrupo->at(i)->borrar();
	}
}
void Grupo::mover(short dx, short dy) {

	for (int i = vecGrupo->size() - 1; i >= 1; i--) {
		vecGrupo->at(i)->setX1(vecGrupo->at(i - 1)->getX1());
		vecGrupo->at(i)->setY1(vecGrupo->at(i - 1)->getY1());
	}

	vecGrupo->at(0)->setX1(vecGrupo->at(0)->getX1() + dx);
	vecGrupo->at(0)->setY1(vecGrupo->at(0)->getY1() + dy);
}

void Grupo::dibujar() {

	for (int i = 0; i < vecGrupo->size(); i++) {
		vecGrupo->at(i)->dibujar();
	}
}