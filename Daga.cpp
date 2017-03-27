#include "Daga.h"


Daga::Daga() : Armas("Dirk") {
	 ataque = 20;
}

Daga::~Daga() {
}

void Daga::setAtaque(int x) {
	 ataque = x;
}

int Daga::getAtaque() {
	return ataque;
}	

string Daga::toString() {
	stringstream ss;
	ss << Armas::getNombre() << "\t" << ataque;

	return ss.str();
}