#include "Espada.h"

Espada::Espada():Armas("Excalibur"){
	this->ataque=130;
}

Espada::~Espada(){

}

void Espada::setAtaque(int atk){
	this->ataque=atk;
}

int Espada::getAtaque(){
	return ataque;
}


string Espada::toString(){
	stringstream ss;
	ss<<Armas::getNombre()<<"\t"<<ataque;
	return ss.str();
}