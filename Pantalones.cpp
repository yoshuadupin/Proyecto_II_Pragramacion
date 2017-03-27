#include "Pantalones.h"

Pantalones::Pantalones(string pMaterial) : Objetos(pMaterial) {
	if (pMaterial == "Oro") {
		this -> def = 7;
	} else if (pMaterial == "Plata") {
		this -> def = 5;
	} else if (pMaterial == "Acero") {
		this -> def = 3;
	} else {
		this -> def = 3;
	}
}

Pantalones::~Pantalones() {
}

void Pantalones::setDefensa(int pDef) {
	this -> def = pDef;
}

int Pantalones::getDefensa() {
	return def;
}

string Pantalones::toString() {
	stringstream ss;
	ss << Objetos::getMaterial() << "\t" << def << endl;

	return ss.str();
}