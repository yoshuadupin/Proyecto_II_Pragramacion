#include "Hacha.h"

Hacha::Hacha() : Armas("Terminator") {
	ataque=35;
}

Hacha::~Hacha() {
}



string Hacha::toString() {
	stringstream ss;
	ss << Armas::getNombre() << "\t" << ataque;

	return ss.str();
}