#ifndef OBJETOS_H
#define OBJETOS_H

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Objetos {
	protected:
		string material;

	public:
		Objetos(string);
		~Objetos();
		void setMaterial(string);
		string getMaterial();
};

#endif