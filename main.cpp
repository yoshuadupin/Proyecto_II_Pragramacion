#include "Includes.h"

char** initializeMatrix(); // Crea la matriz donde se ubicarán los enemigos, el tesoro y la fuente de salud.
void printMatrix(char**, int); // Imprime la matriz.
void freeMatrix(char**, int); // Libera la memoria.
void getOut(char**, int, int, int); //
void setEnemies(char**, int);
bool batalla(Personaje* , Personaje*);
bool quienInicia(int , int);
vector<Armas*> getArmas();

int main(int argc, char* argv[]) {
	srand(time(NULL));	
	ifstream myfile (argv[1]);
	int option; // Opción del menú.
	int size; // Tamaño del laberinto.
	char** dungeon = NULL; // Laberinto del texto.
	char** level1 = NULL;
	char** level2 = NULL;
	char** level3 = NULL;
	char** newMatrix1 = NULL;
	char** newMatrix2 = NULL;
	char** newMatrix3 = NULL;
	
	if (myfile.is_open()) {
		int cont=0;

	    // TODO: Leer el tamaño de la matriz e inicializarla
<<<<<<< HEAD
		int size;
		char** dungeon = NULL;
		char** newMatrix = NULL;
=======
>>>>>>> 0d41f43576ca06d5c02d5a126aa400b3b6d0176f

		myfile >> size;

		dungeon = initializeMatrix();
		level1 = initializeMatrix();
		level2 = initializeMatrix();
		level3 = initializeMatrix();

		// Llenar la matriz desde el archivo.

		for(int i = 0; i < size; i++) {
			for(int j = 0; j < size; j++) {
				myfile >> dungeon[i][j];
			}
		}

<<<<<<< HEAD
		myfile.close();
=======
		for(int i = 0; i < size; i++) {
			for(int j = 0; j < size; j++) {
				level1[i][j] = dungeon[i][j];
				level2[i][j] = dungeon[i][j];
				level3[i][j] = dungeon[i][j];
			}
		}
>>>>>>> 0d41f43576ca06d5c02d5a126aa400b3b6d0176f

		myfile.close();

		do {
			cout << "Ingrese el nivel (1, 2 ó 3): ";
			cin >> option;

			if (option == 1) {
<<<<<<< HEAD
				newMatrix = setEnemies(dungeon, 5); // El 5 es por el nivel 1.
=======
				 setEnemies(level1, 5); // El 5 es por el nivel 1.
>>>>>>> 0d41f43576ca06d5c02d5a126aa400b3b6d0176f

				getOut(level1, size, 1, 0);
			} else if (option == 2) {
<<<<<<< HEAD
				newMatrix = setEnemies(dungeon, 10); // El 5 es por el nivel 1.
=======
				setEnemies(level2, 10); // El 5 es por el nivel 1.
>>>>>>> 0d41f43576ca06d5c02d5a126aa400b3b6d0176f

				getOut(level2, size, 1, 0);
			} else if (option == 3) {
<<<<<<< HEAD
				newMatrix = setEnemies(dungeon, 15); // El 5 es por el nivel 1.
=======
				setEnemies(level3, 15); // El 5 es por el nivel 1.
>>>>>>> 0d41f43576ca06d5c02d5a126aa400b3b6d0176f
				
				getOut(level3, size, 1, 0);
			} else {
				option = 4;
			}
			
			cout << endl;
		} while (option != 4);

	} else {
		cout << "El archivo no existe"; 
	}

	freeMatrix(dungeon, size);
	
	return 0;
}

char** initializeMatrix() {
	char** matrix = new char*[20];

	for (int i = 0; i < 20; ++i) {
		matrix[i] = new char[20];
	}

	return matrix;
}

void setEnemies(char** matrix, int enemies) {
	int numberX, numberY; // Coordenadas donde se agregará el enemigo.

	srand(time(NULL));

	for (int i = 0; i < enemies; ++i) { // Ingresa enemigos de acuerdo al nivel.
		do { // Valida que no se repitan los números random.
			numberX = rand() % 20;
			numberY = rand() % 20;
		} while (matrix[numberX][numberY] != '.');
		
		matrix[numberX][numberY] = 'E';
	}
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
	bool won = true;

	Personaje* abismal = new Abismales();
	Personaje* enemigo = new Guerrero();

	if (matrix[x][y] == 'E') {
		won = batalla(enemigo, abismal);
	}

	if (x - 1 >= 0) { // Arriba.
		if ((matrix[x - 1][y] == '.' || matrix[x - 1][y] == 'E') && won) {
			matrix[x][y] = '*';
			getOut(matrix, size, x - 1, y);
		}
	}

	if (y + 1 < size) { // Derecha.
		if ((matrix[x][y + 1] == '.' || matrix[x][y + 1] == 'E') && won) {
			matrix[x][y] = '*';
			getOut(matrix, size, x, y + 1);
		}
	}

	if (y - 1 >= 0) { // Izquierda.
		if ((matrix[x][y - 1] == '.' || matrix[x][y - 1] == 'E') && won) {
			matrix[x][y] = '*';
			getOut(matrix, size, x, y - 1);
		}
	}

	if (x + 1 < size) { // Abajo.
		if ((matrix[x + 1][y] == '.' || matrix[x + 1][y] == 'E') && won) {
			matrix[x][y] = '*';
			getOut(matrix, size, x + 1, y);
		}
	}

	if (matrix[x][y] == 'T') {
		cout << "Has encontrado el tesoro!" << endl;
	}
}

bool batalla(Personaje* aliado, Personaje* enemigo){
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

	do {
		ataqueA = 0;
		defensaA = 0;
		ataqueEne = 0;
		defensaEne = 0;

		// Acción.

		do {
			cout << "\nAcciones: " << endl;
			cout << "1. Atacar. \n2. Defender." << endl;
			cout << "3. Correr. \n4. Esquivar. \nOpción: ";
			
			cin >> opcion;
		} while(opcion <= 0 || opcion > 4);
		
		if (opcion == 1) {
			ataqueA = aliado -> atacar();
		} else if (opcion == 3) {
			correA = aliado -> correr();
		} else if (opcion == 2) {
			defensaA = aliado -> defender();
		} else if (opcion == 4) {
			esquivarA = aliado -> esquivar();
		}

		cout << "Acción del enemigo: " << endl;
		opcion = dynamic_cast<Enemigo*>(enemigo) -> decidirQueHacer();

		if (opcion == 1) {
			ataqueEne = enemigo -> atacar();
			cout << "Ataque: " << enemigo -> getAtaque() << endl;
		} else if (opcion == 3) {
			correEne = enemigo -> correr();
		} else if (opcion == 2) {
			defensaEne = enemigo -> defender();
		} else if (opcion == 4) {
			esquivarEne = enemigo -> esquivar();
		}

		ataqueTotaA = ataqueA - defensaEne;
		ataqueTotalEne = ataqueEne - defensaA;
		cout << "Ataque total aliado: " << ataqueTotaA << endl;
		cout << "Ataque total enemigo: " << ataqueTotalEne << endl;

		if (esquivarA) {
			cout << "MISS Enemigo" << endl;
		} else {
			cout << "Daño: " << ataqueEne << endl;
			aliado -> setVida(aliado -> getVida() - ataqueTotalEne);

			if (aliado -> getVida() <= 0) {
				cout<<"Enemigo derrotado"<<endl;
				dynamic_cast<Enemigo*>(enemigo) -> gritoAlMorir();
				
			}
		}

		if (esquivarA) {
			cout << "MISS Aliado" << endl;
		} else if (aliado -> getVida() > 0) {
			cout << "Daño: "<< ataqueEne << endl;
			enemigo -> setVida(enemigo -> getVida() - ataqueTotaA);

			if (aliado -> getVida() <= 0) {
				cout << "Haz muerto" << endl;
				dynamic_cast<Enemigo*>(enemigo) -> gritoAlGanar();
			}
		}

	} while(aliado -> getVida() > 0 && enemigo -> getVida() > 0 && !correA && !correEne);	
	
	if (correA && aliado -> getVida() > 0) {
		cout << "Lograste escapar" << endl;

		return true;
	}		

	if (correEne && enemigo -> getVida() > 0) {
		cout << "El enemigo huyó" << endl;

		return true;
	}

	if (aliado -> getVida() < 0) {
		cout << "El enemigo huyó" << endl;

		return false;
	}
}

bool quienInicia(int suerteAli, int suerteEnemi) {
	if (suerteAli>suerteEnemi) {
		return true;
	} else{
		return false;
	}
}