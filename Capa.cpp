#include "Capa.h"

Capa::Capa(string pMaterial) : Objetos(pMaterial) {
	if (pMaterial == "Oro") {
		this -> def = 1;
	} else if (pMaterial == "Plata") {
		this -> def = 1;
	} else if (pMaterial == "Acero") {
		this -> def = 1;
	} else {
		this -> def = 1;
	}
}

Capa::~Capa() {
}

void Capa::setDefensa(int pDef) {
	this -> def = pDef;
}

int Capa::getDefensa() {
	return def;
}

string Capa::toString() {
	stringstream ss;
	ss << Objetos::getMaterial() << "\t" << def << endl;

	return ss.str();
}