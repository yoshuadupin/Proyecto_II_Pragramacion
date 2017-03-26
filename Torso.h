#include "Objetos.h"

#ifndef TORSO_H
#define TORSO_H

class Torso:public Objetos
{
protected:
	int def;
public:
	Torso(string);
	~Torso();
	
	void setDefensa(int);
	int getDefensa();

	string toString();
};
#endif