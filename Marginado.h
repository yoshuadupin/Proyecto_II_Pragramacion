#pragma once
#include "Aliado.h"

using namespace std;

class Marginado:public Aliado
{
public:
	Marginado();
	~Marginado();

	virtual int atacar();	
	virtual bool correr();
	virtual int defender();
	virtual bool esquivar();
	
	virtual void subirStacks();
	virtual void burla();
	virtual void subirNivel();
	virtual void curarse();	
};
