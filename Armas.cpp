#include "Armas.h"

Armas::Armas(string pNombre) {
	this -> nombre = pNombre;

}

Armas::~Armas() {
}

void Armas::setNombre(string nNombre) {
	this -> nombre = nNombre;
}

string Armas::getNombre() {
	return nombre;
}
void Armas::setAtaque(int atk) {
	this -> ataque = atk;
}
int Armas::getAtaque() {
	return ataque;
}
