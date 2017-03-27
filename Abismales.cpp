#include "Abismales.h"

Abismales::Abismales(){
	srand(time(NULL));
	//Agrego los Objetos
	string material=Enemigo::getMaterial();
	Objetos* temp1=new Torso(material);
	gear.push_back(temp1);

	//Set Arma
	int weapon=(rand() % 6);
	
	if(weapon==0){
		arma=new Espada();
	}else if(weapon==1){
		arma=new Daga();
	}else if(weapon==2){
		arma=new Arco();
	}else if(weapon==3){
		arma= new Garras(); 
	}else if(weapon==4){
		arma = new Lanza();
	}else {
		arma = new Hacha();
	}

	ataque = arma->getAtaque();
	defensa = gear.back()->getDefensa();
	vida = 300;
	nombre = "Kthulu";;
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
