#include "Sacerdote.h"
Sacerdote::Sacerdote(){
	srand(time(NULL));
	//Agrego los Objetos
	int def=0;
	string material=Aliado::getMaterial();
	Objetos* temp1=new Torso(material);
	gear.push_back(temp1);
	def+=gear.back()->getDefensa();
	Objetos* temp2=new Pantalones(material);
	gear.push_back(temp1);
	def+=gear.back()->getDefensa();
	Objetos* temp3=new Casco(material);
	gear.push_back(temp3);
	def+=gear.back()->getDefensa();

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

	
	nombre = "SpeedWagon";
	ataque = arma->getAtaque();
	defensa = def;
	
	vida = 175;
	nombre = "Padre Wolliver";
	suerte = 4;	
}		

 int Sacerdote::atacar(){
 	num = rand()%100;
 	if(num<suerte){
 		return 2*ataque;
 	}else{
 		return ataque;
 	}
 }	
 bool Sacerdote::correr(){
 	num = rand()%100;
 	if(num<suerte){
 		return true;
 	}else{
 		return false;
 	}
 }
 int Sacerdote::defender(){
 	num = rand()%100; 
 	if(num>suerte*10){
 		return defensa;
 	}else{
 		return defensa*2;
 	}
 }
 bool Sacerdote::esquivar(){
 	num = rand()%100;
 	if(num<suerte*3){
 		return true;
 	}else{
 		return false;
 	}
 }
	
 void Sacerdote::subirStacks(){
 	vida += 30;
	ataque += 4;
	defensa += 4;
	suerte += 1;
 }
 void Sacerdote::burla(){
 	cout<<"!!  Limpiare el mundo de estos impios de corazon  !!!"<<endl;
 }
 void Sacerdote::subirNivel(){
 	if(exp>=100){
 		nivel+=1;
 		subirStacks();
 		exp = 10;
 	}
 }
 void Sacerdote::curarse(){
 	num = rand()%100;
 	if(num>20){
 		vida+=30;
 	}else{
 		vida+=60;
 	}
 }

Sacerdote::~Sacerdote(){
	
}
