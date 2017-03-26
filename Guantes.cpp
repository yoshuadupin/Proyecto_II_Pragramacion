#include "Guantes.h"

Guantes::Guantes(string pMaterial):Objetos(pMaterial){
	if (pMaterial=="Oro"){
		this->def=2;
	}else if(pMaterial=="Plata"){
		this->def=1;
	}else if(pMaterial=="Acero"){
		this->def=1;
	}else{
		this->def=1;
	}
}

Guantes::~Guantes(){

}

void Guantes::setDefensa(int pDef){
	this->def=pDef;
}

int Guantes::getDefensa(){
	return def;
}

string Guantes::toString(){
	stringstream ss;
	ss<<Objetos::getMaterial()<<"\t"<<def<<endl;
	return ss.str();
}

