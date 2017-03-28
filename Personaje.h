#pragma once
#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <sstream>

//Objetos
#include "Zapatos.h"
#include "Torso.h"
#include "Pantalones.h"
#include "Guantes.h"
#include "Casco.h"
#include "Capa.h"

//Armas
#include "Arco.h"
#include "Lanza.h"
#include "Hacha.h"
#include "Garras.h"
#include "Espada.h"
#include "Daga.h"


using namespace std;

class Personaje
{
protected:
	string nombre;
	int vida;
	int ataque;
	int defensa;
	
	int suerte;
	int num;
	//TODO:


public:
	Personaje();
	~Personaje();

	string getNombre();
	int getVida();
	int getAtaque();
	int getDefensa();

	void setNombre(string);
	void setVida(int);
	void setAtaque(int);
	void setDefensa(int);


	//Metodos de la clase:
	virtual int atacar() = 0;	
	virtual bool correr() = 0;
	virtual int defender() = 0;
	virtual bool esquivar() = 0;
	virtual int EXP();
	virtual void curarse() ;
	virtual void subirNivel();
	virtual string getMaterial()=0;
	
	

	};