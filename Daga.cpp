#include "Daga.h"


Daga::Daga():Armas("Dirk"){
	this->ataque=110;
}

Daga::~Daga(){

}

void Daga::setAtaque(int x){
	this->ataque=x;
}	
int Daga::getAtaque(){
	return ataque;
}	

string Daga::toString(){
	stringstream ss;
	ss<<Armas::getNombre()<<"\t"<<ataque;
	return ss.str();
}
