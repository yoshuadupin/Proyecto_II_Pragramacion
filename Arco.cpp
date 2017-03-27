#include "Arco.h"

Arco::Arco() : Armas("Phoenix Bow") {
	ataque=25;
}

Arco::~Arco() {
}


string Arco::toString() {
	stringstream ss;
	ss << Armas::getNombre() << "\t" << ataque;

	return ss.str();
}



