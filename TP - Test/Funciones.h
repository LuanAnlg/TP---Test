#pragma once

#include <iostream>
#include <cstdlib>
#include <vector>
#include <windows.h>
#include <string>
#include <conio.h>

#define VX 119
#define VY 29

#define REINICIO     "\033[0m"
#define BLANCO       "\033[0m"
#define ROJO         "\033[31m"
#define NARANJA      "\033[38;5;208m"
#define AMARILLO     "\033[33m"
#define VERDE        "\033[32m"
#define VERDE_OSCURO "\033[32;2m"
#define AZUL         "\033[34m"
#define VIOLETA      "\033[35m" 
#define GRIS         "\033[90m"

short aleatorio(short min, short max) {

	return min + std::rand() % (max - min + 1);
}

struct sprite {

	std::string c = BLANCO;
	std::string l1;
	std::string l2;
	std::string l3;
	std::string r = REINICIO;
};

std::string color(short c) {

	switch (c) {
	case 0: return ROJO;     break;
	case 1: return NARANJA;  break;
	case 2: return AMARILLO; break;
	case 3: return VERDE;    break;
	case 4: return AZUL;     break;
	case 5: return VIOLETA;  break;
	default:return BLANCO;   break;
	}
	return BLANCO;
}



