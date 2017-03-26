#include "Objetos.h"

#ifndef CASCO_H
#define CASCO_H
class Casco:public Objetos
{
protected:
	int def;
public:
	Casco(string);
	~Casco();

	void setDefensa(int);
	int getDefensa();

	string toString();
	
};
#endif