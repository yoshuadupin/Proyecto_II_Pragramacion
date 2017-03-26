#include "Objetos.h"

#ifndef PANTALONES_H
#define PANTALONES_H

class Pantalones : public Objetos {
	protected:
		int def;

	public:
		Pantalones(string);
		~Pantalones();
		void setDefensa(int);
		int getDefensa();
		string toString();
};

#endif