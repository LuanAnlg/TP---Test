#pragma once

#include <cstdlib>

#include "Sprite.h"

short aleatorio(short min, short max) {

	return min + std::rand() % (max - min + 1);
}

std::string color(short c) {

	switch (c) {
	case 0: return ROJO;     break;
	case 1: return NARANJA;  break;
	case 2: return AMARILLO; break;
	case 3: return VERDE;    break;
	case 4: return VIOLETA;  break;
	default:          break;
	}
	return BLANCO;
}