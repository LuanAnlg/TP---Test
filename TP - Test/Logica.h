#pragma once

#include "Grupo.h"
#include <conio.h>

class Logica {

public:

    Logica();
    ~Logica();

    void juego();

private:

    Grupo* grupo;
    char tecla;
    short aliados;
    int dx, dy;

    void entrada();
    void limpiar();
    void actualizar();
    void renderizar();
};

Logica::Logica() {

    grupo = new Grupo;
    aliados = 0;
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
        case 'E':
            aliados++;
            grupo->agregar(aliados);
            break;
        case 'W':
            dx = 0; dy = -1;
            break;
        case 'S':
            dx = 0; dy = 1;
            break;
        case 'A':
            dx = -1; dy = 0;
            break;
        case 'D':
            dx = 1; dy = 0;
            break;
        default:
            break;
        }
    }
}

void Logica::limpiar() {

    grupo->borrar();
}

void Logica::actualizar() {

    grupo->mover(dx, dy);
}

void Logica::renderizar() {

    grupo->dibujar();
}
