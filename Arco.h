#include "Armas.h"

#ifndef ARCO_H
#define ARCO_H

class Arco:public Armas
{
protected:
	int ataque;
public:
	Arco();
	~Arco();
	
	void setAtaque(int);
	int getAtaque();

	string toString();
};
#endif