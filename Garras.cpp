#include "Garras.h"

Garras::Garras() : Armas("Cestus") {
}

Garras::~Garras() {
}

void Garras::setAtaque(int atk) {
	this -> ataque = atk;
}

int Garras::getAtaque() {
	return ataque;
}

string Garras::toString() {
	stringstream ss;
	ss << Armas::getNombre() << "\t" << ataque;
	
	return ss.str();
}