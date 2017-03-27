#include "Capa.h"

Capa::Capa(string pMaterial) : Objetos(pMaterial) {
	if (pMaterial == "Oro") {
		def = 1;
	} else if (pMaterial == "Plata") {
		def = 1;
	} else if (pMaterial == "Acero") {
		def = 1;
	} else {
		def = 1;
	}
}

Capa::~Capa() {
}

void Capa::setDefensa(int pDef) {
	def = pDef;
}

int Capa::getDefensa() {
	return def;
}

string Capa::toString() {
	stringstream ss;
	ss << Objetos::getMaterial() << "\t" << def << endl;

	return ss.str();
}