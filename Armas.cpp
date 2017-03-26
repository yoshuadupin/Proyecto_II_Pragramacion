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