#include "Zapatos.h"

Zapatos::Zapatos(string pMaterial) : Objetos(pMaterial) {
	if (pMaterial=="Oro") {
		 def = 3;
	} else if (pMaterial == "Plata") {
		 def = 3;
	} else if (pMaterial == "Acero") {
		 def = 2;
	} else {
		 def = 1;
	}
}

Zapatos::~Zapatos() {
}

void Zapatos::setDefensa(int pDef) {
	 def = pDef;
}

int Zapatos::getDefensa() {
	return def;
}

string Zapatos::toString() {
	stringstream ss;
	ss << Objetos::getMaterial() << "\t" << def <<endl;
	
	return ss.str();
}