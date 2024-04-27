#pragma once

#include "Funciones.h"

#define R "R) Saltar (descartar un aliado)."

class Pregunta {

public:

	Pregunta(short n) {
		for (int i = 0; i < 16; i++) {
			ip[i] = " ";
		}
		switch (n) {
		case 1:
			p = 1;
			r = 'Q';

			ip[0] = "Cual es el significado actual del termino \"queer\"?";
			ip[2] = "Q) Un termino descriptivo utilizado por algunas personas para expresar";
			ip[3] = "positivamente su sexualidad y/o expresion de genero.";
			ip[5] = "W) Un termino insultante para referirse a quienes no cumplen con las";
			ip[6] = "expectativas de la sociedad en cuanto a sexualidad y/o expresión de";
			ip[7] = "genero.";
			ip[9] = "E) Una expresión despectiva que la gente nunca debería utilizar.";
			ip[11] = R;
			
			ir[0] = "El termino \"queer\" ha sido reclamado y utilizado por algunas personas";
			ir[1] = "como una forma de autoidentificacion positiva que abarca una amplia";
			ir[2] = "gama de identidades sexuales y de género fuera de las normas";
			ir[3] = "heteronormativas.";

			break;

		default:
			break;
		}
	}
	~Pregunta() {}

	void imprimirPregunta() {
		for (int i = 0; i < 16; i++) {
			System::Console::SetCursorPosition(25, 6 + i);
			std::cout << ip[i];
		}
	}

	void imprimirRespuesta() {
		for (int i = 0; i < 6; i++) {
			System::Console::SetCursorPosition(25, 12 + i);
			std::cout << ir[i];
		}
	}

private:
	
	short p;
	char r;
	std::string ip[16];
	std::string ir[6];
};