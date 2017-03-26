#include "BestiaSalvaje.h"

BestiaSalvaje::BestiaSalvaje(){
	vida = 100;
	nombre = "WereWolf";
	ataque = 10;
	defensa = 5;
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