#ifndef OBJETOS_H
#define OBJETOS_H

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Objetos {
	protected:
		string material;
		int def;

	public:
		Objetos(string);
		~Objetos();
		void setMaterial(string);
		string getMaterial();
		void setDefensa(int);
		int getDefensa();
		virtual string toString()=0;
};

#endif