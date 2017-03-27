#include "Lanza.h"

Lanza::Lanza() : Armas("Brandistock") {
	ataque=19;
}

Lanza::~Lanza() {
}

string Lanza::toString() {
	stringstream ss;
	ss << Armas::getNombre() << "\t" << ataque << endl;

	return ss.str();
}