#include <ctime>

#include "Logica.h"

int main() {

    std::srand(time(NULL));
    System::Console::CursorVisible = false;

    Logica juego;

    juego.juego();

    return 0;
}
