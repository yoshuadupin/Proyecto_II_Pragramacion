#pragma once
#include "Enemigo.h"

using namespace std;

class Abismales:public Enemigo
{
public:
	Abismales();
	~Abismales();
	
	virtual int atacar();	
	virtual bool correr();
	virtual int defender();
	virtual bool esquivar();
	
	virtual void burla();
	virtual void gritoAlMorir();
	virtual void gritoAlGanar();
	virtual int decidirQueHacer();		
};