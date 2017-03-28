#include "Guerrero.h"

Guerrero::Guerrero(){
	vida = 200;
	nombre = "Udyr";
	ataque = 25;
	defensa = 10;
	suerte = 5;	
	exp=0;
}		
	
 int Guerrero::atacar(){
 	num = rand()%100;
 	if(num<suerte){
 		return 2*ataque;
 	}else{
 		return ataque;
 	}
 }	
 bool Guerrero::correr(){
 	num = rand()%100;
 	if(num<suerte){
 		return true;
 	}else{
 		return false;
 	}
 }
 int Guerrero::defender(){
 	num = rand()%100; 
 	if(num>suerte){
 		return defensa;
 	}else{
 		return defensa*2;
 	}
 }
 bool Guerrero::esquivar(){
 	num = rand()%100;
 	if(num>suerte*3){
 		return true;
 	}else{
 		return false;
 	}
 }
	
 void Guerrero::subirStacks(){
 	vida += 25;
	ataque += 5;
	defensa += 2;
	suerte += 1;
 }
 void Guerrero::burla(){
 	cout<<"!!!Mi destino es morir en la batalla!!!"<<endl;
 }
 void Guerrero::subirNivel(){
 	if(exp>=100){
 		nivel+=1;
 		subirStacks();
 		exp = 0;
 	}
 }
 void Guerrero::curarse(){
 	num = rand()%100;
 	if(num>3){
 		vida+=10;
 	}else{
 		vida+=60;
 	}
 }

Guerrero::~Guerrero(){

}
