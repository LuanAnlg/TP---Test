#pragma once

#include "Logica.h"
#include "Funciones.h"

class Interfaz {

private:

	Logica* juego;
	char tecla;
	short opcion;
	int puntos;

	void jugar() {

		short preguntas;

		do {
			System::Console::SetCursorPosition(39, 28); std::cout << "Ingrese respuesta y presione [<|](enter).";
			System::Console::SetCursorPosition(40, 14); std::cout << VERDE << "CANTAIDAD DE PREGUNTAS A JUGAR (1 - 30): ";
			std::cin >> preguntas;
			std::cout << REINICIO;
			system("cls");
		} while ((preguntas < 1 || preguntas > 30));


		juego = new Logica(preguntas);
		puntos = juego->juego();
		System::Console::SetCursorPosition(52, 14); std::cout << VERDE << "PUNTAJE:" << puntos << REINICIO;
		delete juego;
		system("pause>0");
		system("cls");
	}

	void tutorial() {
		System::Console::SetCursorPosition(14, 8); std::cout <<  ROJO << "              ^";
		System::Console::SetCursorPosition(14, 9); std::cout << "              |";
		System::Console::SetCursorPosition(14, 10); std::cout << NARANJA << "             [W]";
		System::Console::SetCursorPosition(14, 11); std::cout << "            !___!";
		System::Console::SetCursorPosition(14, 12); std::cout << AMARILLO << "     <- [A] |* *| [D] ->";
		System::Console::SetCursorPosition(14, 13); std::cout << "             \\+/";
		System::Console::SetCursorPosition(14, 14); std::cout << VERDE << "             [S]";
		System::Console::SetCursorPosition(14, 15); std::cout << "              |";
		System::Console::SetCursorPosition(14, 16); std::cout << AZUL << "              v";
		System::Console::SetCursorPosition(14, 18); std::cout << "Te puedes mover con las teclas";
		System::Console::SetCursorPosition(14, 19); std::cout << VIOLETA << "'W', 'A', 'S' 'D' tal y como";
		System::Console::SetCursorPosition(14, 20); std::cout << "se ve en la imagen." << REINICIO;

		System::Console::SetCursorPosition(74, 6); std::cout << ROJO << "Tu objetivo es convertir a tus";
		System::Console::SetCursorPosition(74, 7); std::cout << "enemigos en aliados:";
		System::Console::SetCursorPosition(74, 9); std::cout << NARANJA << "  [Enemigo]        [Aliado]";
		System::Console::SetCursorPosition(74, 10); std::cout << "    ///\\\\           ///\\\\";
		System::Console::SetCursorPosition(74, 11); std::cout << AMARILLO << "    ('-')   ----->  (^v^)";
		System::Console::SetCursorPosition(74, 12); std::cout << "     \\-/             \\-/";
		System::Console::SetCursorPosition(74, 14); std::cout << VERDE << "Para ello tienes que colisionar";
		System::Console::SetCursorPosition(74, 15); std::cout << "con ellos:";
		System::Console::SetCursorPosition(74, 17); std::cout << AZUL << "          !___!//\\\\";
		System::Console::SetCursorPosition(74, 18); std::cout << "          |* *|'-')";
		System::Console::SetCursorPosition(74, 19); std::cout << "           \\+/ \\-/";
		System::Console::SetCursorPosition(74, 21); std::cout << VIOLETA <<"Y responder una pregunta de la";
		System::Console::SetCursorPosition(74, 22); std::cout << "cultura queer." << REINICIO;

		System::Console::SetCursorPosition(39, 28); std::cout << "Presione cualquier tecla para continuar";

		system("pause>0");
		system("cls");

		System::Console::SetCursorPosition(14, 5); std::cout << ROJO << "En cada pregunta tendras 60";
		System::Console::SetCursorPosition(14, 6); std::cout << "segundos para responder:";
		System::Console::SetCursorPosition(14, 8); std::cout << NARANJA << "           'pregunta?'";
		System::Console::SetCursorPosition(14, 9); std::cout << AMARILLO << "      [Q]: primera opcion.";
		System::Console::SetCursorPosition(14, 10); std::cout << "      [W]: segunda opcion.";
		System::Console::SetCursorPosition(14, 11); std::cout << "      [E]: tercera opcion.";
		System::Console::SetCursorPosition(14, 12); std::cout << VERDE << "      [R]: sacrificar aliado";
		System::Console::SetCursorPosition(14, 13); std::cout << "           para saltar";
		System::Console::SetCursorPosition(14, 14); std::cout << "           pregunta.";
		System::Console::SetCursorPosition(14, 16); std::cout << AZUL << "Perderas si:";
		System::Console::SetCursorPosition(14, 17); std::cout << VIOLETA << "* respondes incorrectamente.";
		System::Console::SetCursorPosition(14, 18); std::cout << "* Si no responde dentro de los";
		System::Console::SetCursorPosition(14, 19); std::cout << "* no cuentas con aliados para";
		System::Console::SetCursorPosition(14, 20); std::cout << "  sacrificar y selecionas la";
		System::Console::SetCursorPosition(14, 21); std::cout << "  respuesta 'R'.";
		System::Console::SetCursorPosition(14, 22); std::cout << "* Si no responde dentro de los";
		System::Console::SetCursorPosition(14, 23); std::cout << "  30 segundos." << REINICIO;

		System::Console::SetCursorPosition(74, 7); std::cout << ROJO << "Al finas de cada una se te dara";
		System::Console::SetCursorPosition(74, 8); std::cout << "una pequena explicacion.";
		System::Console::SetCursorPosition(74, 10); std::cout << NARANJA << "Hay hasta 30 preguntas diferentes.";
		System::Console::SetCursorPosition(74, 11); std::cout << "Cuando las termines la partida";
		System::Console::SetCursorPosition(74, 12); std::cout << AMARILLO << "se te dara la cantidad de puntos";
		System::Console::SetCursorPosition(74, 13); std::cout << "que obtuviste basado en la";
		System::Console::SetCursorPosition(74, 14); std::cout << VERDE << "cantidad de aliados que lograste";
		System::Console::SetCursorPosition(74, 15); std::cout << "obtener.";
		System::Console::SetCursorPosition(74, 17); std::cout << AZUL << "            SUERTE!";
		System::Console::SetCursorPosition(74, 19); std::cout << VIOLETA << "             !___!";
		System::Console::SetCursorPosition(74, 20); std::cout <<  "             |^v^|";
		System::Console::SetCursorPosition(74, 21); std::cout << "              \\+/" << REINICIO;

		System::Console::SetCursorPosition(39, 28); std::cout << "Presione cualquier tecla para continuar";

		system("pause>0");
		system("cls");
	}

	void creditos() {
		System::Console::SetCursorPosition(36, 11); std::cout << "                   ----- CREDITOS -----";
		System::Console::SetCursorPosition(36, 13); std::cout << "Almeida Aguilar, Ivan Almeida: +51 992 165 689";
		System::Console::SetCursorPosition(36, 15); std::cout << "Rafael Sosa, Mariana Alexa: @la._mars";
		System::Console::SetCursorPosition(36, 17); std::cout << "Montoya Torres, Alexander Gabriel: ";

		System::Console::SetCursorPosition(39, 28); std::cout << "Presione cualquier tecla para continuar";

		system("pause>0");
		system("cls");
	}

	void salir() {

		System::Console::SetCursorPosition(55, 13); std::cout << AMARILLO << "GRACIAS!";
		System::Console::SetCursorPosition(55, 14); std::cout << BLANCO << " !___!";
		System::Console::SetCursorPosition(55, 15); std::cout << " |^v^|";
		System::Console::SetCursorPosition(55, 16); std::cout << "  \\+/" << REINICIO;


		System::Console::SetCursorPosition(39, 28); std::cout << "Presione cualquier tecla para terminar";

		system("pause>0");
		exit(0);
	}

public:

	Interfaz() {
	
		tecla = '*';
		opcion = 0;
	}

	~Interfaz() {
	
		delete juego;
	}

	void interfaz() {
		while (true) {
			System::Console::SetCursorPosition(32, 8); std::cout <<  "  ___                        ___                  _";
			System::Console::SetCursorPosition(32, 9); std::cout <<  " / _ \\ _   _  ___  ___ _ __ / _ \\ _   _  ___  ___| |_";
			System::Console::SetCursorPosition(32, 10); std::cout << "| | | | | | |/ _ \\/ _ \\ '__| | | | | | |/ _ \\/ __| __|";
			System::Console::SetCursorPosition(32, 11); std::cout << "| |_| | |_| |  __/  __/ |  | |_| | |_| |  __/\\__ \\ |_ ";
			System::Console::SetCursorPosition(32, 12); std::cout << " \\__\\_\\\\__,_|\\___|\\___|_|   \\__\\_\\\\__,_|\\___||___/\\__|";
			System::Console::SetCursorPosition(32, 15); std::cout << "                        Jugar";
			System::Console::SetCursorPosition(32, 17); std::cout << "                        Tutorial";
			System::Console::SetCursorPosition(32, 19); std::cout << "                        Creditos";
			System::Console::SetCursorPosition(32, 21); std::cout << "                        Salir";
			System::Console::SetCursorPosition(31, 28); std::cout << "[W]: arriba	[S]: abajo	[ ](espacio): selecionar";

			if (_kbhit()) {
				tecla = std::toupper(_getch());
				switch (tecla) {
				case 'W':
					if (opcion == 0) opcion = 3;  else  opcion--; break;
				case 'S':
					if (opcion == 3) opcion = 0; else opcion++; break;
				case ' ':
					system("cls");
					switch (opcion) {
					case 0: jugar(); break;
					case 1: tutorial(); break;
					case 2: creditos(); break;
					case 3: salir(); break;
					default:
						break;
					}
					break;
				default:
					break;
				}
			}
			System::Console::SetCursorPosition(54, 15 + (opcion * 2)); std::cout << ">";
		}
	}
};