#include "Pantalones.h"

Pantalones::Pantalones(string pMaterial) : Objetos(pMaterial) {
	if (pMaterial == "Oro") {
		 def = 7;
	} else if (pMaterial == "Plata") {
		 def = 5;
	} else if (pMaterial == "Acero") {
		 def = 3;
	} else {
		 def = 3;
	}
}

Pantalones::~Pantalones() {
}

void Pantalones::setDefensa(int pDef) {
	 def = pDef;
}

int Pantalones::getDefensa() {
	return def;
}

string Pantalones::toString() {
	stringstream ss;
	ss << Objetos::getMaterial() << "\t" << def << endl;

	return ss.str();
}