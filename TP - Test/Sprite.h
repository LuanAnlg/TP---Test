#pragma once

#include <string>

#define REINICIO "\033[0m"
#define BLANCO   "\033[0m"
#define ROJO     "\033[31m"
#define NARANJA  "\033[38;5;208m"
#define AMARILLO "\033[33m"
#define VERDE    "\033[32m"
#define AZUL     "\033[34m"
#define VIOLETA  "\033[35m" 
#define GRIS     "\033[90m"

struct Sprite {
	std::string c = BLANCO;
	std::string l1;
	std::string l2;
	std::string l3;
	std::string r = REINICIO;
};