#include "Arco.h"

Arco::Arco() : Armas("Phoenix Bow") {
}

Arco::~Arco() {
}

void Arco::setAtaque(int atk) {
	this -> ataque = atk;
}
int Arco::getAtaque() {
	return ataque;
}

string Arco::toString() {
	stringstream ss;
	ss << Armas::getNombre() << "\t" << ataque;

	return ss.str();
}