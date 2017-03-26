#include "Torso.h"

Torso::Torso(string pMaterial) : Objetos(pMaterial) {
	if (pMaterial == "Oro") {
		this -> def = 6;
	} else if (pMaterial == "Plata") {
		this -> def = 5;
	} else if (pMaterial == "Acero") {
		this -> def = 4;
	} else {
		this -> def = 3;
	}
}

Torso::~Torso() {
}

void Torso::setDefensa(int pDef) {
	this -> def = pDef;
}

int Torso::getDefensa() {
	return def;
}

string Torso::toString() {
	stringstream ss;
	ss << Objetos::getMaterial() << "\t" << def << endl;

	return ss.str();
}