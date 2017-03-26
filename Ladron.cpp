#include "Ladron.h"
Ladron::Ladron(){
	vida = 150;
	nombre = "SpeedWagon";
	ataque = 20;
	defensa = 5;
	suerte = 7;	
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