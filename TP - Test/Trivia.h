#pragma once

#include "Pregunta.h"
#include "Funciones.h"

class Trivia {

private:

	short it;
	char tecla;
	std::vector<Pregunta*>* vecPreguntas;

public:
	Trivia() {

		vecPreguntas = new std::vector<Pregunta*>;

		for (int p = 0; p < 7; p++) { // cambiar el 7 despues
			vecPreguntas->push_back(new Pregunta(p + 1));
		}

		it = 6; //cambiar despus es el la ultima pregunta menos 1
	}

    ~Trivia() {

        for (int i = 0; i < vecPreguntas->size(); ++i) {
            delete vecPreguntas->at(i);
        }
        vecPreguntas->clear();
        delete vecPreguntas;
    }

    short preguntar() {
        short r = -1;

        if (it >= 0) { // prototipo
            short ip = aleatorio(0, it);

            for (int t = 30; t > 0; t--) {
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
            it--;
        }

        return r;
    }

    short getPreguntas() { return vecPreguntas->size(); }

};