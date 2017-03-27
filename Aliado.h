#pragma once
#include "Personaje.h"
#include "Enemigo.h"
#include <vector>


using namespace std;

class Aliado:public Personaje
{
protected:
	int exp;
	int nivel;
	
public:
	Aliado();
	~Aliado();

	virtual string getMaterial();

	virtual int atacar();	
	virtual bool correr();
	virtual int defender();
	virtual bool esquivar();
	
	virtual void subirStacks();
	virtual void burla();
	virtual void subirNivel();
	virtual void curarse();

	friend ostream& operator<<(ostream&, const Aliado); // Operador de flujo.
	int operator+(Enemigo);

	string toString()const;
		

};