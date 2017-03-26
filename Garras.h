#include "Armas.h"

#ifndef GARRAS_H
#define GARRAS_H

class Garras : public Armas {
	protected:
		int ataque;

	public:
		Garras();
		~Garras();
		void setAtaque(int);
		int getAtaque();
		string toString();
};

#endif