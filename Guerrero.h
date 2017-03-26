#pragma once
#include "Aliado.h"

using namespace std;

class Guerrero: public Aliado
{

public:
	Guerrero();
	~Guerrero();
	

	virtual int atacar();	
	virtual bool correr();
	virtual int defender();
	virtual bool esquivar();
	
	virtual void subirStacks();
	virtual void burla();
	virtual void subirNivel();
	virtual void curarse();
};