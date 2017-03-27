#include "Casco.h"

Casco::Casco(string pMaterial) : Objetos(pMaterial) {
	if (pMaterial == "Oro") {
		def = 4;
	} else if (pMaterial == "Plata") {
		def = 3;
	} else if (pMaterial == "Acero") {
		def = 2;
	} else {
		def = 1;
	}
}

Casco::~Casco() {
}

void Casco::setDefensa(int pDef) {
	def = pDef;
}

int Casco::getDefensa() {
	return def;
}

string Casco::toString() {
	stringstream ss;
	ss << Objetos::getMaterial() << "\t" << def << endl;
	
	return ss.str();
}