#pragma once
#include "Personaje.h"

class Enemigo:public Personaje
{
public:
	Enemigo();
	~Enemigo();

	virtual int atacar() = 0;	
	virtual bool correr() = 0;
	virtual int defender() = 0;
	virtual bool esquivar() = 0;
	
	virtual void burla();
	
	virtual void gritoAlMorir();
	virtual void gritoAlGanar();
	virtual int decidirQueHacer();/////Random para eligir una opcion en el menu;
	
};
