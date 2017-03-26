#include "NoMuerto.h"

NoMuerto::NoMuerto(){
	vida = 150;
	nombre = "Zombie";
	ataque = 15;
	defensa = 3;
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