#include "Orco.h"

Orco::Orco(){
	vida = 250;
	nombre = "TuNovia";
	ataque = 15;
	defensa = 10;
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