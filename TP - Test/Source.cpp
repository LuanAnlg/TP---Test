#include <iostream>

#include "Logica.h"
#include  "Trivia.h"


int main() {

    std::srand(time(NULL));
    System::Console::CursorVisible = false;

    Logica juego;

    juego.juego();
    
    system("pause>0");

    std::cout << "Fin";

    return 0;
}
