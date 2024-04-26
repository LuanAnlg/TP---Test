#pragma once

#include "Grupo.h"
#include "Enemigo.h"
#include <conio.h>

class Logica {

private:

    Grupo* grupo;
    char tecla;
    Enemigo* enemigo;
    int dx, dy;

    bool AABBcolision(Personaje* pro, Enemigo* ene) {
        bool estaDerecha = pro->getX1() >= ene->getX2();
        bool estaIzquierda = pro->getX2() <= ene->getX1();
        bool estaArriba = pro->getY2() <= ene->getY1();
        bool estaAbajo = pro->getY1() >= ene->getY2();
        return !(estaDerecha || estaIzquierda || estaArriba || estaAbajo);
    }

    void entrada() {

        if (_kbhit()) {
            tecla = std::toupper(_getch());
            switch (tecla) {
            case 'Q': grupo->eliminar();                          break;
            case 'W': dx = 0; dy = -3;                            break;
            case 'S': dx = 0; dy = 3;                             break;
            case 'A': dx = -5; dy = 0;                            break;
            case 'D': dx = 5; dy = 0;                             break;
            default:                                              break;
            }
        }
    }

    void limpiar() {
        grupo->borrar();
    }

    void actualizar() {

        grupo->mover(dx, dy);

        if (AABBcolision(grupo->getProtagonista(), enemigo)) {
            enemigo->borrar();
            grupo->agregar(tecla, enemigo->getTipo());
            enemigo->reposicionar();
        }
    }
    void renderizar() {
        if (!AABBcolision(grupo->getProtagonista(), enemigo)) {
            enemigo->dibujar();
        }
        grupo->dibujar();
    }

public:

    Logica() {

        grupo = new Grupo;
        enemigo = new Enemigo;
        dx = 0;
        dy = 0;
    }

    ~Logica() {

        delete grupo;
    }

    void juego() {
        while (true) {
            entrada();
            limpiar();
            actualizar();
            renderizar();
            _sleep(250);
        }
    }
};