#include "Orco.h"

Orco::Orco(){
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
	vida = 250;
	nombre = "TuNovia";
	suerte = 1;
}
Orco::~Orco(){
	
}

int Orco::atacar(){
	num = rand()%100;
	if(num<suerte){
		return 2*ataque;
	}else{
		return ataque;
	}

}	
bool Orco:: correr(){
	return false;
}
int Orco::defender(){
	num = rand()%100; 
	if(num>suerte){
		return defensa;
	}else{
		return defensa*2;
	}
}
bool Orco:: esquivar(){
	num = rand()%100;
	if(num>suerte*9){
		return true;
	}else{
		return false;
	}
}

void Orco:: burla(){
	cout<<"Seras un platillo delicioso!!!!"<<endl;
}
void Orco:: gritoAlMorir(){
	cout<<"HUMANO ESTUPIDO!!!!"<<endl;
}
void Orco:: gritoAlGanar(){
	cout<<"Tus huesos serviran como mondadientes JA JA JA !!!"<<endl;
}
int Orco::decidirQueHacer(){
	num =  1+rand()%4;
	if(num == 1){
		return num;
	}else if(num == 2){
		return num;
	}else if(num == 3){
		return num;
	}else if(num == 4){
		return num;
	}
}