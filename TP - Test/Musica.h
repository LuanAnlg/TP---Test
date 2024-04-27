#pragma once

#include "Funciones.h"

class Musica {

public:

	Musica() {

        acordes = {
            {261.63, 329.63, 392.00},   // C
            {220.00, 261.63, 329.63},   // Am
            {349.23, 440.00, 523.25},   // F
            {392.00, 493.88, 587.33}    // G
        };
    }

	~Musica() {}

    void reproducir(short& m) {

        if (m < 0 || m >= 23) {
            m = 0;
        }
        else { m++; }
        int a = m / 6;
        int n = m % 6;
        Beep(acordes[a][n % 3], 250);
    }


private:

    std::vector<std::vector<double>> acordes;
};