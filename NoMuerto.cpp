#include "NoMuerto.h"

NoMuerto::NoMuerto(){
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
	vida = 150;
	nombre = "Zombie";
	suerte = 2;
}
NoMuerto::~NoMuerto(){
	
}

int NoMuerto::atacar(){
	num = rand()%100;
	if(num<suerte){
		return 2*ataque;
	}else{
		return ataque;
	}

}	
bool NoMuerto:: correr(){
	return false;
}
int NoMuerto::defender(){
	return 1;
}
bool NoMuerto:: esquivar(){
	num = rand()%100;
	if(num>suerte){
		return true;
	}else{
		return false;
	}
}

void NoMuerto:: burla(){
	cout<<"CarnEEEEEEE!!!!"<<endl;
}
void NoMuerto:: gritoAlMorir(){
	cout<<"ggrrgrrgr"<<endl;
}
void NoMuerto:: gritoAlGanar(){
	cout<<"CarnEEEEEEEEE!!!"<<endl;
}
int NoMuerto::decidirQueHacer(){
	num =  1+rand()%4;
	if(num == 1){
		return num;
	}else if(num == 2){
		return 2;
	}else if(num == 3){
		return 3;
	}else {
		return 4;
	}
}