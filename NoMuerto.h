#pragma once
#include "Enemigo.h"

using namespace std;

class NoMuerto:public Enemigo
{
protected:
	vector<Objetos*> gear;
	Armas* arma;
public:
	NoMuerto();
	~NoMuerto();
	
	virtual int atacar();	
	virtual bool correr();
	virtual int defender();
	virtual bool esquivar();
	
	virtual void burla();
	virtual void gritoAlMorir();
	virtual void gritoAlGanar();
	virtual int decidirQueHacer();	

};
