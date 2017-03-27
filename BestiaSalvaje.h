#pragma once
#include "Enemigo.h"

using namespace std;

class BestiaSalvaje:public Enemigo
{
protected:
	vector<Objetos*> gear;
	Armas* arma;
public:
	BestiaSalvaje();
	~BestiaSalvaje();
	
	virtual int atacar();	
	virtual bool correr();
	virtual int defender();
	virtual bool esquivar();
	
	virtual void burla();
	virtual void gritoAlMorir();
	virtual void gritoAlGanar();
	virtual int decidirQueHacer();	
};