#include "Enemigo.h"

Enemigo::Enemigo(){

}

Enemigo::~Enemigo(){
	
}

void Enemigo::burla(){

}

string Enemigo::getMaterial(){
	srand(time(NULL));

	vector<string> materiales;
	
	materiales.push_back("Cobre");
	materiales.push_back("Acero");
	materiales.push_back("Plata");
	materiales.push_back("Oro");
	
	int retVal=(rand() % 3);
	
	return materiales.at(retVal);
}

void Enemigo::gritoAlMorir(){
	
}
void Enemigo::gritoAlGanar(){
	
}
int Enemigo::decidirQueHacer(){
	
}/////Random para eligir una opcion en el menu;

int  Enemigo::atacar(){
 	return 0;
 }	
 bool Enemigo::correr(){
 	return 0;
 }
 int  Enemigo::defender(){
 	return 0;
 }
 bool Enemigo::esquivar(){
 	return 0;
 }