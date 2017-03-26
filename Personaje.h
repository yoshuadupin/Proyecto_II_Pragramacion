#pragma once
#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>
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
	//vector<Arma*> armas;
	//vector<Objeto*> objetos;

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

	virtual void curarse() ;
	virtual void subirNivel();
	
	
	
	
};