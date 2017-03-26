#include "Zapatos.h"

Zapatos::Zapatos(string pMaterial):Objetos(pMaterial){
	if (pMaterial=="Oro"){
		this->def=3;
	}else if(pMaterial=="Plata"){
		this->def=3;
	}else if(pMaterial=="Acero"){
		this->def=2;
	}else{
		this->def=1;
	}
}

Zapatos::~Zapatos(){

}

void Zapatos::setDefensa(int pDef){
	this->def=pDef;
}

int Zapatos::getDefensa(){
	return def;
}

string Zapatos::toString(){
	stringstream ss;
	ss<<Objetos::getMaterial()<<"\t"<<def<<endl;
	return ss.str();
}

