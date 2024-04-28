#include <iostream>

#include "Logica.h"
#include  "Trivia.h"
#include "Interfaz.h"


int main() {

    std::srand(time(NULL));
    System::Console::CursorVisible = false;

    /*Logica juego;

    int puntos = juego.juego();

    std::cout << puntos;*/

    Interfaz jueguito;

    jueguito.interfaz();

    system("pause>0");

    return 0;
}
