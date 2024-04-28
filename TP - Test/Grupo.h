#pragma once

#include "Personaje.h"
#include "Protagonista.h"
#include "Aliado.h"

class Grupo {

private:

	std::vector<Personaje*>* vecGrupo;
	short aliados = 0;

public:

	Grupo() {

		vecGrupo = new std::vector<Personaje*>;
		vecGrupo->push_back(new Protagonista);
	}

	~Grupo() {

		for (int i = 0; i < vecGrupo->size(); ++i) {
			delete vecGrupo->at(i);
		}
		vecGrupo->clear();
		delete vecGrupo;
	}

	void agregar(short t) {

		if (aliados > -1) {
			vecGrupo->push_back(new Aliado(t, aliados % 6));
			vecGrupo->at(aliados + 1)->setX1(vecGrupo->at(aliados)->getX1());
			vecGrupo->at(aliados + 1)->setY1(vecGrupo->at(aliados)->getY1());
			aliados++;
		}
	}

	void eliminar() {

		if (vecGrupo->size() > 1) {
			vecGrupo->at(aliados)->borrar();
			vecGrupo->erase(vecGrupo->end() - 1);
			aliados--;
		}
	}

	void borrar() {

		for (int i = 0; i < vecGrupo->size(); i++) {
			vecGrupo->at(i)->borrar();
		}
	}

	void mover(short dx, short dy) {

		for (int i = vecGrupo->size() - 1; i >= 1; i--) {
			vecGrupo->at(i)->setX1(vecGrupo->at(i - 1)->getX1());
			vecGrupo->at(i)->setY1(vecGrupo->at(i - 1)->getY1());
		}

		vecGrupo->at(0)->setX1(vecGrupo->at(0)->getX1() + dx);
		vecGrupo->at(0)->setY1(vecGrupo->at(0)->getY1() + dy);
		vecGrupo->at(0)->setX2(vecGrupo->at(0)->getX1() + 4);
		vecGrupo->at(0)->setY2(vecGrupo->at(0)->getY1() + 2);

		if (vecGrupo->at(0)->getY1() < 0) {
			vecGrupo->at(0)->setY1(VY - 2);
		}
		if (vecGrupo->at(0)->getY2() > VY) {
			vecGrupo->at(0)->setY1(0);
		}
		if (vecGrupo->at(0)->getX1() < 0) {
			vecGrupo->at(0)->setX1(VX - 4);
		}
		if (vecGrupo->at(0)->getX2() > VX) {
			vecGrupo->at(0)->setX1(0);
		}
	}

	void dibujar() {

		for (int i = 0; i < vecGrupo->size(); i++) {
			vecGrupo->at(i)->dibujar();
		}
	}

	Personaje* getProtagonista() const {
		return vecGrupo->at(0);
	}

	short getAliados() const{
		return aliados;
	}
};
