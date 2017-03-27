#include <iostream>
#include <string>
#include <sstream>

using namespace std;

#ifndef ARMAS_H
#define ARMAS_H

class Armas {
	protected:
		string nombre;
		int ataque;

	public:
		Armas(string);
		~Armas();
		void setAtaque(int);
		int getAtaque();
		void setNombre(string);
		string getNombre();
		virtual string toString()=0;
};

#endif