#pragma once

#include "Grupo.h"
#include "Enemigo.h"
#include "Trivia.h"

class Logica {

private:

    Grupo* grupo;
    char tecla;
    Enemigo* enemigo;
    int dx, dy;
    short m;
    Trivia* trivia;
    short tr; // trivia resultado
    bool c; // continuar?

    bool AABBcolision(Personaje* pro, Enemigo* ene) {

        bool estaDerecha = pro->getX1() > ene->getX2();
        bool estaIzquierda = pro->getX2() < ene->getX1();
        bool estaArriba = pro->getY2() < ene->getY1();
        bool estaAbajo = pro->getY1() > ene->getY2();
        return !(estaDerecha || estaIzquierda || estaArriba || estaAbajo);
    }

    void reproducir(short& m) {

        std::vector<std::vector<double>> acordes = {
            {261.63, 329.63, 392.00},   // C
            {220.00, 261.63, 329.63},   // Am
            {349.23, 440.00, 523.25},   // F
            {392.00, 493.88, 587.33}    // G
        };

        if (m >= 23) {
            m = 0;
        }
        else { m++; }

        int a = m / 6;
        int n = m % 6;

        Beep(acordes[a][n % 3], 250);
    }

    void entrada() {

        if (_kbhit()) {
            tecla = std::toupper(_getch());
            switch (tecla) {
            case 'W': dx = 0; dy = -3;   break;
            case 'S': dx = 0; dy = 3;    break;
            case 'A': dx = -5; dy = 0;   break;
            case 'D': dx = 5; dy = 0;    break;
            default:                     break;
            }
        }
    }

    void limpiar() {

        grupo->borrar();
    }

    void actualizar() {

        if (trivia->getPreguntas() == 0) {
            c = false;
        }

        if (AABBcolision(grupo->getProtagonista(), enemigo)) {
            enemigo->borrar();
            tr = trivia->preguntar();
            switch (tr) {
            case 0:
                grupo->agregar(enemigo->getTipo());
                enemigo->reposicionar();
                break;
            case 1:
                if (grupo->getAliados() == 0) {
                    c = false;
                }
                else {
                    grupo->eliminar();
                    enemigo->reposicionar();
                }
                break;
            case 2:
            case -1:
                c = false;
                break;
            }
        }

        grupo->mover(dx, dy);
    }
    void renderizar() {
        
        System::Console::SetCursorPosition(1, 1); std::cout << "PUNTAJE: " << grupo->getAliados() * 100;

        grupo->dibujar();

        if (!AABBcolision(grupo->getProtagonista(), enemigo)) {
            enemigo->dibujar();
        }
    }

public:

    Logica(short p) {

        grupo = new Grupo;
        enemigo = new Enemigo;
        dx = 0;
        dy = 0;
        m = 0;
        trivia = new Trivia(p);
        tr = -2;
        c = true;
    }

    ~Logica() {

        delete enemigo;
        delete trivia;
        delete grupo;
    }

    int juego() {

        while (true) {
            entrada();
            limpiar();
            actualizar();
            if (!c) { system("cls");  break; }
            renderizar();
            reproducir(m); // esto es el sleep
        }
        return grupo->getAliados() * 100;
    }
};