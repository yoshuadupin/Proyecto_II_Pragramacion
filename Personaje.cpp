#include "Personaje.h"

Personaje::Personaje(){
}

Personaje::~Personaje(){
	//Borrar armas


}

void Personaje::subirNivel(){

}

void Personaje::curarse(){
	
}

string Personaje::getNombre(){
	return nombre;
}
int Personaje::getVida(){
	return vida;
}
int Personaje::getAtaque(){
	return ataque;
}
int Personaje::getDefensa(){
	return defensa;
}

void Personaje::setNombre(string nombre){
	this->nombre = nombre;
}
void Personaje::setVida(int vida){
	this->vida = vida;
}
void Personaje::setAtaque(int ataque){
	this-> ataque  =ataque;
}
void Personaje::setDefensa(int defensa){
	this->defensa = defensa;
}

int Personaje::EXP(){
	srand(time(NULL));
	return ( rand() % 51 + 10);
}



