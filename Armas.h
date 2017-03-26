#include <iostream>
#include <string>
#include <sstream>


using namespace std;

#ifndef ARMAS_H
#define ARMAS_H

class Armas{
protected:
	string nombre;
public:
	Armas(string);
	~Armas();

	void setNombre(string);
	string getNombre();
	
};
#endif