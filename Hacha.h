#include "Armas.h"

#ifndef HACHA_H
#define HACHA_H

class Hacha : public Armas {
	protected:
		int ataque;

	public:
		Hacha();
		~Hacha();
		void setAtaque(int);
		int getAtaque();
		string toString();
};

#endif