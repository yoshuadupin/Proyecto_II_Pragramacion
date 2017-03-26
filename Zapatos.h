#include "Objetos.h"

#ifndef ZAPATOS_H
#define ZAPATOS_H

class Zapatos:public Objetos
{
protected:
	int def;
public:
	Zapatos(string);
	~Zapatos();
	
	void setDefensa(int);
	int getDefensa();

	string toString();
};
#endif