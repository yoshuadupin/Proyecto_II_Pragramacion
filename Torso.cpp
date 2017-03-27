#include "Torso.h"

Torso::Torso(string pMaterial) : Objetos(pMaterial) {
	if (pMaterial == "Oro") {
		def = 6;
	} else if (pMaterial == "Plata") {
		def = 5;
	} else if (pMaterial == "Acero") {
		def = 4;
	} else {
		def = 3;
	}
}

Torso::~Torso() {
}

void Torso::setDefensa(int pDef) {
	def = pDef;
}

int Torso::getDefensa() {
	return def;
}

string Torso::toString() {
	stringstream ss;
	ss << Objetos::getMaterial() << "\t" << def << endl;

	return ss.str();
}