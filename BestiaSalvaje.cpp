#include "BestiaSalvaje.h"

BestiaSalvaje::BestiaSalvaje(){
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
	vida = 100;
	nombre = "WereWolf";
	suerte = 5;
}
BestiaSalvaje::~BestiaSalvaje(){
	
}

int BestiaSalvaje::atacar(){
	num = rand()%100;
	if(num<suerte){
		return 2*ataque;
	}else{
		return ataque;
	}

}	
bool BestiaSalvaje:: correr(){
		num = rand()%100;
 	if(num<5){
 		return true;
 	}else{
 		return false;
 	}

}
int BestiaSalvaje::defender(){
	return 0;
}
bool BestiaSalvaje:: esquivar(){
	num = rand()%100;
	if(num>suerte*9){
		return true;
	}else{
		return false;
	}
}

void BestiaSalvaje:: burla(){
	cout<<"Woof woof grrrrr!!!!"<<endl;
}
void BestiaSalvaje:: gritoAlMorir(){
	cout<<"[gemidos de agonia]"<<endl;
}
void BestiaSalvaje:: gritoAlGanar(){
	cout<<"WOOOOOOOOOOOOOOOOOOOOOO!!!"<<endl;
}
int BestiaSalvaje::decidirQueHacer(){
	num =  rand()%100;
	if(num <= 50){
		return 1;
	}else if(num == 75){
		return 2;
	}else if(num == 80){
		return 3;
	}else if(num == 90){
		return 4;
	}
}