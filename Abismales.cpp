#include "Abismales.h"

Abismales::Abismales(){
	vida = 300;
	nombre = "Kthulu";
	ataque = 50;
	defensa = 20;
	suerte = 10;
}
Abismales::~Abismales(){
	
}

int Abismales::atacar(){
	num = 5;
	if(num<suerte){
		return 0.5*ataque;
	}else{
		return ataque;
	}

}	
bool Abismales:: correr(){
	return false;
}
int Abismales::defender(){
	return defensa;
}
bool Abismales:: esquivar(){
	return false;
}

void Abismales:: burla(){
	cout<<"Ph´nglui mglw´nafh Cthulhu R´lyeh wgah´nagl fhtagn ...!!!!"<<endl;
}
void Abismales:: gritoAlMorir(){
	cout<<"[Gritos en un lenguaje desconocida]"<<endl;
}
void Abismales:: gritoAlGanar(){
	cout<<"Cthulhu R'lyeh wgah'nagl fhtagn!!!"<<endl;
}
int Abismales::decidirQueHacer(){
	num =  1+rand()%100;
	if(num <= 25){
		return 1;
	}else if(num <= 50){
		return 2;
	}else if(num <= 80){
		return 3;
	}else if(num<=90){
		return 4;
	}else if(num >95){
		vida = 100;
		return 1;
	}
}
