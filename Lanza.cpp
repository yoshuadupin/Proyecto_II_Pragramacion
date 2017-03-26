#include "Lanza.h"

Lanza::Lanza() : Armas("Brandistock") {

}

Lanza::~Lanza() {

}

void Lanza::setAtaque(int atk) {
	this -> ataque = atk;
}

int Lanza::getAtaque() {
	return ataque;
}

string Lanza::toString() {
	stringstream ss;
	ss << Armas::getNombre() << "\t" << ataque << endl;

	return ss.str();
}