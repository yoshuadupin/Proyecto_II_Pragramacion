#include "Objetos.h"

#ifndef CAPA_H
#define CAPA_H

class Capa: public Objetos
{
protected:
	int def;
public:
	Capa(string);
	~Capa();
	
	void setDefensa(int);
	int getDefensa();

	string toString();
};
#endif