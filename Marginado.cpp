#include "Marginado.h"

Marginado::Marginado(){
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

	exp=0;
	nombre = "SpeedWagon";
	ataque = arma->getAtaque();
	defensa = def;
	vida = 100;
	nombre = "Ilich";
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
/*
ostream& Marginado::operator << (ostream&, const Marginado marginado){
	out<<marginado.toString();
	return out;
} // Operador de flujo.
int Marginado::operator+(Marginado){
	
}

string Function::toString()const {
	stringstream ss;
	ss<<"\nNombre: "<<nombre<<"\nVida: "<<vida<<"\nAtaque: "<<ataque<<"\nDefensa: "<<defensa<<"\nSuerte: "<<suerte;
	ss << "\n";

	return ss.str();
}*/