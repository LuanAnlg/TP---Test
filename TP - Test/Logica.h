#pragma once

#include "Grupo.h"
#include "Enemigo.h"
#include <conio.h>

class Logica {

public:

    Logica();
    ~Logica();

    void juego();

private:

    Grupo* grupo;
    char tecla;
    Enemigo* enemigo;
    int dx, dy;

    void entrada();
    void limpiar();
    void actualizar();
    void renderizar();
};

Logica::Logica() {

    grupo = new Grupo;
    enemigo = new Enemigo;
    dx = 0;
    dy = 0;
}

Logica::~Logica() {

    delete grupo;
}

void Logica::juego() {

    while (true) {
        entrada();
        limpiar();
        actualizar();
        renderizar();
        _sleep(250);
    }
}

void Logica::entrada() {

    if (_kbhit()) {
        tecla = std::toupper(_getch());
        switch (tecla) {
        case 'R': enemigo->borrar(); enemigo->reposicionar(); break;
        case 'Q': grupo->eliminar();                          break;
        case 'E': grupo->agregar(tecla);                      break;
        case 'W': dx = 0; dy = -3;                            break;
        case 'S': dx = 0; dy = 3;                             break;
        case 'A': dx = -5; dy = 0;                            break;
        case 'D': dx = 5; dy = 0;                             break;
        default:                                              break;
        }
    }
}

void Logica::limpiar() {

    enemigo->borrar();
    grupo->borrar();
}

void Logica::actualizar() {

    grupo->mover(dx, dy);
}

void Logica::renderizar() {

    enemigo->dibujar();
    grupo->dibujar();
}
