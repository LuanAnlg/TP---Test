#pragma once

#include "Funciones.h"

#define R "R) Saltar (descartar un aliado)."

class Pregunta {

private:

	char r;
	std::vector<std::string> ip;
	std::vector<std::string> ir;

public:

	char getRespuesta() const { return r; }

	Pregunta(short n) {

		ip.resize(18);
		ir.resize(10);

		for (int i = 1; i < 17; i++) {
			ip[i] = " ";
		}
		ip[0] = BLANCO;
		ip[17] = REINICIO;

		for (int i = 1; i < 9; i++) {
			ip[i] = " ";
		}
		ir[0] = VERDE;
		ir[8] = "Presione cualquier tecla para continuar";
		ir[9] = REINICIO;

		switch (n) {

		case 1:
			r = 'Q';

			ip[1] = "Cual es el significado actual del termino \"queer\"?";
			ip[2] = ROJO;
			ip[3] = "Q) Un termino descriptivo utilizado por algunas personas para expresar";
			ip[4] = "positivamente su sexualidad y/o expresion de genero.";
			ip[5] = AMARILLO;
			ip[6] = "W) Un termino insultante para referirse a quienes no cumplen con las";
			ip[7] = "expectativas de la sociedad en cuanto a sexualidad y/o expresion de";
			ip[8] = "genero.";
			ip[9] = AZUL;
			ip[10] = "E) Una expresion despectiva que la gente nunca deberia utilizar.";
			ip[11] = GRIS;
			ip[12] = R;

			ir[1] = "El termino \"queer\" ha sido reclamado y utilizado por algunas personas";
			ir[2] = "como una forma de autoidentificacion positiva que abarca una amplia";
			ir[3] = "gama de identidades sexuales y de género fuera de las normas";
			ir[4] = "heteronormativas.";

			break;

		case 2:
			r = 'Q';

			ip[1] = "Cual es la diferencia entre sexo y genero?";
			ip[2] = ROJO;
			ip[3] = "Q) El sexo se refiere a caracteristicas fisicas como genitales,";
			ip[4] = "hormonas y cromosomas, mientras que el genero se refiere al sentido";
			ip[5] = "interno de la identidad de una persona.";
			ip[6] = AMARILLO;
			ip[7] = "W) El sexo se relaciona con el sentido interno de la identidad de una";
			ip[8] = "persona, mientras que el genero se refiere a caracteristicas fisicas";
			ip[9] = "como genitales y hormonas.";
			ip[10] = AZUL;
			ip[11] = "E) El sexo y el genero son terminos intercambiables que se refieren a";
			ip[12] = "lo mismo.";
			ip[13] = GRIS;
			ip[14] = R;

			ir[1] = "El termino \"queer\" ha sido reclamado y utilizado por algunas personas";
			ir[2] = "como una forma de autoidentificacion positiva que abarca una amplia";
			ir[3] = "gama de identidades sexuales y de genero fuera de las normas";
			ir[4] = "heteronormativas.";

			break;

		case 3:
			r = 'W';

			ip[1] = "Cual es el principal significado del termino \"cisgenero\"?";
			ip[2] = ROJO;
			ip[3] = "Q) Para alguien que se siente comodo con las expectativas de la";
			ip[4] = "sociedad para las personas de su genero.";
			ip[5] = AMARILLO;
			ip[6] = "W) Para alguien cuya identidad de genero actual coincide con el sexo";
			ip[7] = "que se le asigno al nacer.";
			ip[8] = AZUL;
			ip[9] = "E) Como un insulto o termino despectivo para las personas que no son";
			ip[10] = "transexuales o que no entienden la terminologia o los pronombres";
			ip[11] = "correctos.";
			ip[12] = GRIS;
			ip[13] = R;

			ir[1] = "Una persona cisgenero es aquella cuya identidad de genero coincide con";
			ir[2] = "el sexo que se le asigno al nacer. Es importante comprender y respetar";
			ir[3] = "la diversidad de identidades de genero dentro de la comunidad LGBTQ+.";

			break;

		case 4:
			r = 'Q';

			ip[1] = "Cual de las siguientes opciones define mejor la \"cisnormatividad\"?";
			ip[2] = ROJO;
			ip[3] = "Q) Las creencias, practicas y sistemas de una sociedad que consideran";
			ip[4] = "que ser cisgenero es mas normal y preferible que ser transgenero.";
			ip[5] = AMARILLO;
			ip[6] = "W) El hecho de que sea mas comun, y por tanto mas normal, que una";
			ip[7] = "persona sea cisgenero que transgenero.";
			ip[8] = AZUL;
			ip[9] = "E) Creencias personales de que ser transexual es pecaminoso o un";
			ip[10] = "signo de enfermedad mental.";
			ip[11] = GRIS;
			ip[12] = R;

			ir[1] = "La cisnormatividad se refiere a la suposicion de que ser cisgenero es";
			ir[2] = "la norma y preferible, lo que puede llevar a la discriminacion y";
			ir[3] = "exclusion de las personas transgenero en la sociedad.";

			break;

		case 5:
			r = 'W';

			ip[1] = "Cual es la relacion entre la misoginia y la transfobia?";
			ip[2] = ROJO;
			ip[3] = "Q) La transfobia y la misoginia son similares porque ambas tratan del";
			ip[4] = "odio y los prejuicios contra las personas por su genero, pero no estan";
			ip[5] = "relacionadas entre si.";
			ip[6] = AMARILLO;
			ip[7] = "W) La transfobia y la misoginia son dos formas de prejuicio";
			ip[8] = "diferentes, pero estan conectadas porque refuerzan la jerarquia de";
			ip[9] = "genero y se basan en la creencia de que la masculinidad es superior a";
			ip[10] = "la feminidad, asi como a las identidades transgenero.";
			ip[11] = AZUL;
			ip[12] = "E) La transfobia y la misoginia significan casi lo mismo: ambas son";
			ip[13] = "ejemplos de odio y prejuicios contra las personas a causa de su genero.";
			ip[14] = GRIS;
			ip[15] = R;

			ir[1] = "Tanto la transfobia como la misoginia son manifestaciones de prejuicio";
			ir[2] = "basadas en el genero. Estan interconectadas porque refuerzan la idea";
			ir[3] = "de que la masculinidad es superior a la feminidad, contribuyendo asi a";
			ir[4] = "la opresion de las mujeres y las personas transgenero. Ambas formas de";
			ir[5] = "prejuicio se basan en la creencia erronea de que ciertos generos son";
			ir[6] = "inherentemente superiores o inferiores a otros.";

			break;

		case 6:
			r = 'E';

			ip[1] = "Cual de las siguientes actividades esta principalmente relacionada con";
			ip[2] = "la \"transicion social\" para una mujer transgenero?";
			ip[3] = ROJO;
			ip[4] = "Q) Solicitar un nuevo pasaporte o visado.";
			ip[5] = AMARILLO;
			ip[6] = "W) Afeitarse la cara.";
			ip[7] = AZUL;
			ip[8] = "E) Llevar pintalabios u otros cosmeticos.";
			ip[9] = GRIS;
			ip[10] = R;

			ir[1] = "La transicion social implica cambios externos para que la expresion de";
			ir[2] = "genero de una persona coincida con su identidad de genero. Esto puede";
			ir[3] = "incluir cambios en la vestimenta, el peinado, el maquillaje y otros";
			ir[4] = "aspectos de presentacion.";

			break;

		case 7:
			r = 'W';

			ip[1] = "Cual de las siguientes actividades esta principalmente relacionada";
			ip[2] = "con la \"transicion medica\"?";
			ip[3] = ROJO;
			ip[4] = "Q) Afeitarse la cara.";
			ip[5] = AMARILLO;
			ip[6] = "W) Tomar testosterona o estrogeno.";
			ip[7] = AZUL;
			ip[8] = "E) Salir del armario ante familiares o amigos.";
			ip[9] = GRIS;
			ip[10] = R;

			ir[1] = "La transicion medica implica el uso de hormonas y otras intervenciones";
			ir[2] = "medicas para modificar las caracteristicas fisicas de una persona y";
			ir[3] = "que se alineen con su identidad de genero.";

			break;

		default:
			std::cout << "error";
			break;
		}
	}
	~Pregunta() {}

	void imprimirPregunta() const {

		for (int i = 0; i < 18; i++) {
			System::Console::SetCursorPosition(25, 5 + i);
			std::cout << ip[i];
		}
	}

	void imprimirRespuesta() const {

		for (int i = 0; i < 10; i++) {
			System::Console::SetCursorPosition(25, 11 + i);
			std::cout << ir[i];
		}
	}
};