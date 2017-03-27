#include "Espada.h"

Espada::Espada() : Armas("Excalibur") {
	 ataque = 30;
}

Espada::~Espada() {
}

void Espada::setAtaque(int atk) {
	 ataque = atk;
}

int Espada::getAtaque() {
	return ataque;
}

string Espada::toString() {
	stringstream ss;
	ss << Armas::getNombre() << "\t" << ataque;
	return ss.str();
}

 