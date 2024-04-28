#pragma once

#include "Pregunta.h"
#include "Funciones.h"

class Trivia {

private:

	short it;
	char tecla;
	std::vector<Pregunta*>* vecPreguntas;

public:
	Trivia(short c) {

		vecPreguntas = new std::vector<Pregunta*>;

		for (int p = 0; p < 30; p++) { // cambiar el 7 despues
			vecPreguntas->push_back(new Pregunta(p));
		}

		it = c;
	}

    ~Trivia() {

        for (int i = 0; i < vecPreguntas->size(); ++i) {
            delete vecPreguntas->at(i);
        }
        vecPreguntas->clear();
        delete vecPreguntas;
    }

    short preguntar() {

        it--;
        short r = -1;

        if (it >= 0) { // prototipo
            short ip = aleatorio(0, 29);

            for (int t = 60; t > 0; t--) {
                vecPreguntas->at(ip)->imprimirPregunta();
                Beep(1000, 100);

                if (_kbhit()) {
                    tecla = std::toupper(_getch());
                    if (tecla == vecPreguntas->at(ip)->getRespuesta()) {
                        r = 0;
                        break;
                    } else if (tecla == 'R') {
                        r = 1;
                        break;
                    } else { break; }
                }

                Sleep(900);
            }

            if (r == -1) {
                r = 2;
            }

            system("cls");
            vecPreguntas->at(ip)->imprimirRespuesta();
            system("pause>0");
            system("cls");
            vecPreguntas->erase(vecPreguntas->begin() + ip);
        }
        return r;
    }

    short getPreguntas() const { return it; }

};