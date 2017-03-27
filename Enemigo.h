#pragma once
#include "Personaje.h"
#include <vector>

class Enemigo:public Personaje
{
public:
	Enemigo();
	~Enemigo();

	virtual int atacar();	
	virtual bool correr();
	virtual int defender();
	virtual bool esquivar();
	virtual string getMaterial();
	virtual void burla();
	
	virtual void gritoAlMorir();
	virtual void gritoAlGanar();
	virtual int decidirQueHacer();/////Random para eligir una opcion en el menu;
	
};
