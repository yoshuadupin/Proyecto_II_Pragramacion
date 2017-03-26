#include "Marginado.h"

Marginado::Marginado(){
	vida = 100;
	nombre = "Ilich";
	ataque = 20;
	defensa =5;
	suerte = 1;	
}		

 int Marginado::atacar(){
 	num = rand()%100;
 	if(num+3<suerte){
 		this->subirStacks();
 		return 2*ataque;
 	}else{
 		return ataque;
 	}
 }	
 bool Marginado::correr(){
 	num = rand()%100;
 	if(num<suerte){
 		return true;
 	}else{
 		return false;
 	}
 }
 int Marginado::defender(){
 	num = rand()%100; 
 	if(num>suerte*5){
 		return defensa;
 	}else{
 		return defensa*2;
 	}
 }
 bool Marginado::esquivar(){
 	num = rand()%100;
 	if(num<suerte*3){
 		return true;
 	}else{
 		return false;
 	}
 }
	
 void Marginado::subirStacks(){
 	vida += 50;
	ataque += 15;
	defensa += 10;
	suerte += 3;
 }
 void Marginado::burla(){
 	if(suerte<10){
 		cout<<"!!  No podre terminar esta cruzada !!!"<<endl;
 	}else{
 		cout<<" !!  Las cosas han cambiado bestia inmunda !!!"<<endl;
 	}
 }
 void Marginado::subirNivel(){
 	if(exp>=100){
 		nivel+=1;
 		subirStacks();
 		exp = 10;
 	}
 }
 void Marginado::curarse(){
 	num = rand()%100;
 	if (suerte<10){
 		if(num>10){
 			vida+=10;
 		}else{
 			vida+=20;
 		}
 	}else {
 		if(num>50){
 			vida+=10;
 		}else{
 			vida+=100;
 		}
 	}
 	
 }

Marginado::~Marginado(){
	
}