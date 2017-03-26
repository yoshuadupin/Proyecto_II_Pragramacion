#pragma once
#include "Personaje.h"

using namespace std;

class Aliado:public Personaje
{
protected:
	int exp;
	int nivel;
public:
	Aliado();
	~Aliado();

	virtual int atacar() = 0;	
	virtual bool correr() = 0;
	virtual int defender() = 0;
	virtual bool esquivar() = 0;
	
	virtual void subirStacks();
	virtual void burla();
	virtual void subirNivel();
	virtual void curarse();

	
};