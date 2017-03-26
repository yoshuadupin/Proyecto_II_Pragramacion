#include "Objetos.h"

#ifndef GUANTES_H
#define GUANTES_H

class Guantes : public Objetos {
	protected:
		int def;

	public:
		Guantes(string);
		~Guantes();
		void setDefensa(int);
		int getDefensa();
		string toString();
};

#endif