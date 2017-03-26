#pragma once
#include "Aliado.h"

using namespace std;

class Ladron:public Aliado
{
public:
	Ladron();
	~Ladron();
	
	virtual int atacar();	
	virtual bool correr();
	virtual int defender();
	virtual bool esquivar();
	
	virtual void subirStacks();
	virtual void burla();
	virtual void subirNivel();
	virtual void curarse();
};