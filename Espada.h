#include "Armas.h"

#ifndef ESPADA_H
#define ESPADA_H

class Espada : public Armas {
	public:
		Espada();
		~Espada();
		void setAtaque(int);
		int getAtaque();
		string toString();
};

#endif