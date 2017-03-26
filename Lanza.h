#include "Armas.h"

#ifndef LANZA_H
#define LANZA_H

class Lanza : public Armas {
	protected:
		int ataque;

	public:
		Lanza();
		~Lanza();
		void setAtaque(int);
		int getAtaque();
		string toString();
};

#endif