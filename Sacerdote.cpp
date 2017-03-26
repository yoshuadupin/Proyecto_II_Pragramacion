#include "Sacerdote.h"
Sacerdote::Sacerdote(){
	vida = 175;
	nombre = "Padre Wolliver";
	ataque = 20;
	defensa =15;
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
