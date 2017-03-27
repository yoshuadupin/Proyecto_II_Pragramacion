#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

char** initializeMatrix(); // Crea la matriz donde se ubicarán los enemigos, el tesoro y la fuente de salud.
void printMatrix(char**, int); // Imprime la matriz.
void freeMatrix(char**, int); // Libera la memoria.
void getOut(char**, int, int, int);
char** setEnemies(char**, int);
void batalla(Personaje* , Personaje*);
bool quienInicia(int , int);

int main(int argc, char* argv[]) {
	srand(time(NULL));	
	ifstream myfile (argv[1]);
	
	if (myfile.is_open()) {
		int cont=0;

	    // TODO: Leer el tamaño de la matriz e inicializarla
		int size;
		char** dungeon = NULL;
		char** newMatrix = NULL;

		myfile >> size;

		dungeon = initializeMatrix();

		// Llenar la matriz desde el archivo.

		for(int i = 0; i < size; i++) {
			for(int j = 0; j < size; j++) {
				myfile >> dungeon[i][j];
			}
		}

		myfile.close();
		newMatrix = setEnemies(dungeon, 5); // El 5 es por el nivel 1.
		cout << endl;
		getOut(dungeon, size, 1, 0); // Implementa 
		freeMatrix(dungeon, size);
	} else {
		cout << "El archivo no existe"; 
	}

	return 0;
}

char** initializeMatrix() {
	char** matrix = new char*[20];

	for (int i = 0; i < 20; ++i) {
		matrix[i] = new char[20];
	}

	return matrix;
}

char** setEnemies(char** matrix, int enemies) {
	int numberX, numberY; // Coordenadas donde se agregará el enemigo.

	srand(time(NULL));

	for (int i = 0; i < enemies; ++i) { // Ingresa enemigos de acuerdo al nivel.
		do { // Valida que no se repitan los números random.
			numberX = rand() % 20;
			numberY = rand() % 20;
		} while (matrix[numberX][numberY] != '.');
		
		matrix[numberX][numberY] = 'E';
	}

	return matrix;
}

void printMatrix(char** matrix, int size) {
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			cout << matrix[i][j];
		}

		cout << endl;
	}
}

void freeMatrix(char** matrix, int size) {
	for(int i = 0; i < size; i++) {
		delete[] matrix[i];
		matrix[i] = NULL;
	}

	delete[] matrix;
}

void getOut(char** matrix, int size, int x, int y) {
	printMatrix(matrix, size);
	cout << endl;
	usleep(300000);

	if (x - 1 >= 0) { // Arriba.
		if (matrix[x - 1][y] == '.') {
			matrix[x][y] = '*';
			getOut(matrix, size, x - 1, y);
		}
	}

   if (y + 1 < size) { // Derecha.
   	if (matrix[x][y + 1] == '.') {
   		matrix[x][y] = '*';
   		getOut(matrix, size, x, y + 1);
   	}
   }

   if (y - 1 >= 0) { // Izquierda.
   	if (matrix[x][y - 1] == '.') {
   		matrix[x][y] = '*';
   		getOut(matrix, size, x, y - 1);
   	}
   }

   if (x + 1 < size) { // Abajo.
   	if (matrix[x + 1][y] == '.') {
   		matrix[x][y] = '*';
   		getOut(matrix, size, x + 1, y);
   	}
   }  
}

void batalla(Personaje* aliado, Personaje* enemigo){
	int opcion;	
	
	int ataqueA;
	int defensaA;
	int ataqueTotaA;
	bool correA = false;
	bool esquivarA = false;

	int ataqueEne;
	int defensaEne;
	int ataqueTotalEne;
	bool correEne = false;
	bool esquivarEne = false;

	do{
		ataqueA = 0;
		defensaA = 0;
		ataqueEne = 0;
		defensaEne = 0;

		//Accion	
		cout<<"Acciones:"<<endl;
		cout<<"1.->Atacar   3.->Correr"<<endl;
		cout<<"2.->Defender 4.->Esquivar"<<endl;
		do{
			cin>>opcion;
		}while(opcion <= 0 || opcion > 4);
		
		if(opcion == 1){
			ataqueA = aliado->atacar();
		}else if(opcion == 3){
			correA = aliado->correr();
		}else if(opcion == 2){
			defensaA = aliado->defender();
		}else if(opcion == 4){
			esquivarA = aliado->esquivar();
		}

		cout<<"Accion del Enemigo:"<<endl;
		opcion = enemigo->decidirQueHacer();

		if(opcion == 1){
			ataqueEne = enemigo->atacar();
		}else if(opcion == 3){
			correEne = enemigo->correr();
		}else if(opcion == 2){
			defensaEne = enemigo->defender();
		}else if(opcion == 4){
			esquivarEne = enemigo->esquivar();
		}

		ataqueTotaA = ataqueA-defensaEne;
		ataqueTotalEne = ataqueEne - defensaA;

		if(esquivarA){
			cout<<"MISS Enemigo"<<endl;
		}else{
			cout<<"Dano: "<<ataqueEne<<endl;
			aliado->setVida(aliado->getVida()-ataqueTotalEne);
			if(aliado->getVida() <= 0){
				cout<<"Enemigo derrotado"<<endl;
				enemigo->gritoAlMorir();
				
			}
		}

		
		if(esquivarA){
			cout<<"MISS Aliado"<<endl;
		}else if(aliado->getVida()>0){
			cout<<"Dano: "<<ataqueEne<<endl;
			enemigo->setVida(enmigo->getVida()-ataqueTotaA);

			if(aliado->getVida() <= 0){
				cout<<"Haz Muerto"<<endl;
				enemigo->gritoAlGanar();
			}
		}

	}while(aliado->getVida() > 0 && enemigo->getVida() > 0 && !correAli && !correEnemi);	
	
	if(correAli && aliado->getVida() > 0){
		cout<<"Lograste Escapar"<<endl;
	}		

	if(correEnemi && enemigo->getVida()> 0){
		cout<<"El enemigo huyo"<<endl;
	}


}

bool quienInicia(int suerteAli, int suerteEnemi){
	if(suerteAli>suerteEnemi){
		return true;
	}else{
		return false;
	}
}


