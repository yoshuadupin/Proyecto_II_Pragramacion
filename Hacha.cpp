#include "Hacha.h"

Hacha::Hacha() : Armas("Terminator") {

}

Hacha::~Hacha() {

}

void Hacha::setAtaque(int atk) {
	this -> ataque = atk;
}
int Hacha::getAtaque() {
	return ataque;
}

string Hacha::toString() {
	stringstream ss;
	ss << Armas::getNombre() << "\t" << ataque;

	return ss.str();
}