#include "Garras.h"

Garras::Garras() : Armas("Cestus") {
	 ataque=23;
}

Garras::~Garras() {
}

string Garras::toString() {
	stringstream ss;
	ss << Armas::getNombre() << "\t" << ataque;
	
	return ss.str();
}