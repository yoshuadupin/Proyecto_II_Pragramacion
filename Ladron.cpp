#include "Ladron.h"
Ladron::Ladron(){
	srand(time(NULL));
	//Agrego los Objetos
	int def=0;
	string material=Aliado::getMaterial();
	Objetos* temp1=new Torso(material);
	gear.push_back(temp1);
	Objetos* temp2=new Pantalones(material);
	gear.push_back(temp1);
	Objetos* temp3=new Casco(material);
	gear.push_back(temp3);

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

	vida = 150;
	nombre = "SpeedWagon";
	ataque = arma->getAtaque();
	defensa = def;
	suerte = 7;	
	exp=0;
}		

 int Ladron::atacar(){
 	num = rand()%70;
 	if(num<suerte){
 		return 2*ataque;
 	}else{
 		return ataque;
 	}
 }	
 bool Ladron::correr(){
 	num = rand()%50;
 	if(num<suerte){
 		return true;
 	}else{
 		return false;
 	}
 }
 int Ladron::defender(){
 	num = rand()%200; 
 	if(num>suerte){
 		return defensa;
 	}else{
 		return defensa*2;
 	}
 }
 bool Ladron::esquivar(){
 	num = rand()%70;
 	if(num<suerte*3){
 		return true;
 	}else{
 		return false;
 	}
 }
	
 void Ladron::subirStacks(){
 	vida += 20;
	ataque += 3;
	defensa += 1;
	suerte += 2;
 }
 void Ladron::burla(){
 	cout<<"!!  Todo lo que tienes me pertenece  !!!"<<endl;
 }
 void Ladron::subirNivel(){
 	if(exp>=100){
 		nivel+=1;
 		subirStacks();
 		exp = 0;
 	}
 }
 void Ladron::curarse(){
 	num = rand()%100;
 	if(num>10){
 		vida+=15;
 	}else{
 		vida+=30;
 	}
 }

Ladron::~Ladron(){
	
}
