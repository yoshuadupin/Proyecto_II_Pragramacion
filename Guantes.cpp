#include "Guantes.h"

Guantes::Guantes(string pMaterial) : Objetos(pMaterial) {
	if (pMaterial == "Oro") {
		def = 2;
	} else if (pMaterial == "Plata") {
		def = 1;
	} else if (pMaterial == "Acero") {
		def = 1;
	} else {
		def = 1;
	}
}

Guantes::~Guantes() {
}

void Guantes::setDefensa(int pDef) {
	def = pDef;
}

int Guantes::getDefensa() {
	return def;
}

string Guantes::toString() {
	stringstream ss;
	ss << Objetos::getMaterial() << "\t" << def << endl;

	return ss.str();
}