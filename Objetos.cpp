#include "Objetos.h"

Objetos::Objetos(string pMaterial) {
	this -> material = pMaterial;
}

Objetos::~Objetos() {
}

void Objetos::setMaterial(string mat) {
	this -> material = mat;
}

string Objetos::getMaterial() {
	return material;
}