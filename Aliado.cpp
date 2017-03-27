#include "Aliado.h"

Aliado::Aliado(){
}

Aliado::~Aliado(){
	
}

string Aliado::getMaterial(){
	srand(time(NULL));

	vector<string> materiales;
	
	materiales.push_back("Cobre");
	materiales.push_back("Acero");
	materiales.push_back("Plata");
	materiales.push_back("Oro");
	
	int retVal=(rand() % 3);
	
	return materiales.at(retVal);
}

void Aliado::subirStacks(){

}
void Aliado::burla(){

}
void Aliado::subirNivel(){

}
void Aliado::curarse(){

}

int  Aliado::atacar(){
	return 0;
}	
bool Aliado::correr(){
	return 0;
}
int  Aliado::defender(){
	return 0;
}
bool Aliado::esquivar(){
	return 0;
}

/*ostream& Aliado::operator << (ostream&, const Aliado& aliado){
	out<<aliado.toString();
	return out;
} // Operador de flujo.*/

int Aliado::operator+(Enemigo enemigo){
	return 0;
}

string Aliado::toString()const {
	stringstream ss;
	
	ss<<"\nNombre: "<<nombre<<"\nVida: "<<vida<<"\nAtaque: "<<ataque<<"\nDefensa: "<<defensa<<"\nSuerte: "<<suerte;
	ss << "\n";

	return ss.str();
}
