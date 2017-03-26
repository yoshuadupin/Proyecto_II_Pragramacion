// O en otras palabras tu novia
#pragma once
#include "Enemigo.h"

using namespace std;


class Orco:public Enemigo
{
public:
	Orco();
	~Orco();
	
	virtual int atacar();	
	virtual bool correr();
	virtual int defender();
	virtual bool esquivar();
	
	virtual void burla();
	virtual void gritoAlMorir();
	virtual void gritoAlGanar();
	virtual int decidirQueHacer();/////Random para eligir una opcion en el menu;

};