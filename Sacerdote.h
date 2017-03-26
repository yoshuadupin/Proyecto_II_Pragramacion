#pragma once
#include "Aliado.h"

using namespace std;


class Sacerdote:public Aliado
{
public:
	Sacerdote();
	~Sacerdote();
	
	virtual int atacar();	
	virtual bool correr();
	virtual int defender();
	virtual bool esquivar();
	
	virtual void subirStacks();
	virtual void burla();
	virtual void subirNivel();
	virtual void curarse();
};