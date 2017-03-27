#pragma once
#include "Aliado.h"
#include <iostream>



using namespace std;

class Marginado:public Aliado
{
protected:
	vector<Objetos*> gear;
	Armas* arma;
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

	//friend ostream& operator << (ostream&, const Marginado); // Operador de flujo.
	//int operator+(Marginado);

};
