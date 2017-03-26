#include "Casco.h"

Casco::Casco(string pMaterial):Objetos(pMaterial){
	if (pMaterial=="Oro"){
		this->def=4;
	}else if(pMaterial=="Plata"){
		this->def=3;
	}else if(pMaterial=="Acero"){
		this->def=2;
	}else{
		this->def=1;
	}
}

Casco::~Casco(){

}

void Casco::setDefensa(int pDef){
	this->def=pDef;
}

int Casco::getDefensa(){
	return def;
}

string Casco::toString(){
	stringstream ss;
	ss<<Objetos::getMaterial()<<"\t"<<def<<endl;
	return ss.str();
}

