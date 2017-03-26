#include "Armas.h"

#ifndef DAGA_H
#define DAGA_H

class Daga : public Armas {
	protected:
		int ataque;
		
	public:
		Daga();
		~Daga();
		void setAtaque(int);
		int getAtaque();
		string toString();
};

#endif