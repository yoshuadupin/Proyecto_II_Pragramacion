#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>
#include <sstream>

using namespace std;

char** initializeMatrix(); // Crea la matriz donde se ubicarán los enemigos, el tesoro y la fuente de salud.
void printMatrix(char**, int); // Imprime la matriz.
void freeMatrix(char**, int); // Libera la memoria.
void getOut(char**, int, int, int);
char** setEnemies(char**, int);
int readInt();

int main(int argc, char* argv[]) {
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
int readInt() {
	string cad="";
	bool esNumero=true;
	do{
		esNumero=true;
		cin>>cad;
		for (int i = 0; i < cad.size(); ++i){	
			if(!isdigit(cad[i])){
				esNumero=false;
			}
		}
		if(!esNumero){
			cout<<"Ingrese un Valor Entero: ";
		}else{
				
			stringstream ss(cad);
 		    int i;
 			ss >> i;
			return i;
		}
		cout<<endl;
	}while(!esNumero);
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