#include "Includes.h"
#include <ncurses.h>
#include <curses.h>
#include <sstream>

char** initializeMatrix(); // Crea la matriz donde se ubicarán los enemigos, el tesoro y la fuente de salud.
void printMatrix(char**, int); // Imprime la matriz.
void freeMatrix(char**, int); // Libera la memoria.
void getOut(char**, int, int, int); //
void setEnemies(char**, int);
bool batalla(Personaje* , Personaje*);
bool quienInicia(int , int);
vector<Armas*> getArmas();
char*  getString(int);

int main(int argc, char* argv[]) {
	srand(time(NULL));	
	ifstream myfile (argv[1]);
	char option; // Opción del menú.
	int size; // Tamaño del laberinto.
	char** dungeon = NULL; // Laberinto del texto.
	char** level1 = NULL;
	char** level2 = NULL;
	char** level3 = NULL;
	
	if (myfile.is_open()) {
		int cont=0;

	    // TODO: Leer el tamaño de la matriz e inicializarla

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

		for(int i = 0; i < size; i++) {
			for(int j = 0; j < size; j++) {
				level1[i][j] = dungeon[i][j];
				level2[i][j] = dungeon[i][j];
				level3[i][j] = dungeon[i][j];
			}
		}

		myfile.close();
		initscr();
		mvprintw(0 , 15 , "Console's Dungeon");
		refresh();
		do {
			/*cout << "Ingrese el nivel (1, 2 ó 3): ";
			cin >> option;
			*/
			move(1,21);
			printw("Ingrese el nivel (1, 2 ó 3):");
			refresh();
			option = getch();
			refresh();
			

			if (option == '1') {
				 setEnemies(level1, 5); // El 5 es por el nivel 1.

				 getOut(level1, size, 1, 0);
				} else if (option == '2') {
				setEnemies(level2, 10); // El 5 es por el nivel 1.

				getOut(level2, size, 1, 0);
			} else if (option == '3') {
				setEnemies(level3, 15); // El 5 es por el nivel 1.
				
				getOut(level3, size, 1, 0);
			} else {
				option = '4';
			}
			
			cout << endl;
		} while (option != '4');

	} else {
		cout << "El archivo no existe"; 
	}
	endwin();

	freeMatrix(dungeon, size);
	
	return 0;
}
char* getString(int num){
	stringstream ss;
	ss<<num;
	string cad=ss.str();

	char* cons=new char[cad.size()];
	for (int i = 0; i < cad.size(); ++i)
	{
		cons[i]=cad.at(i);
	}
	
	return cons;
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
			//cout << matrix[i][j];
			mvaddch(i+1 , j , matrix[i][j]);
			refresh();
		}

		
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
	stringstream ss;
	char opcion;
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
		move(1, 21);
		printw("Acciones");
		mvprintw(2,21, "1.ATACAR");
		mvprintw(3,21 , "3.CORRER");
		mvprintw(2,30 , "2.DEFENDER");
		mvprintw(3 , 30 , "4.ESQUIVAR");
		refresh();
		noecho();
		opcion = getch();
		
			/*cout << "\nAcciones: " << endl;
			cout << "1. Atacar. \n2. Defender." << endl;
			cout << "3. Correr. \n4. Esquivar. \nOpción: ";
			*/

		

		if (opcion == '1') {
			mvprintw(5 , 21 , "->Aliado ataca");
			ataqueA = aliado -> atacar();
		} else if (opcion == '3') {
			mvprintw(5 , 21 , "->Corrio");
			correA = aliado -> correr();
		} else if (opcion == '2') {
			mvprintw(5 , 21 , "->Uso defensa");
			defensaA = aliado -> defender();
		} else if (opcion == '4') {
			mvprintw(5 , 21 , "->uso esquivar");
			esquivarA = aliado -> esquivar();
		}
		refresh();

		/*cout << "Acción del enemigo: " << endl;*/
		const char* nombre=  (enemigo->getNombre()).c_str();
		mvprintw(7 , 21 , nombre);
		mvprintw(8 ,  21 , "Acciones de Enemigo");
		refresh();	
		opcion = ((char)(dynamic_cast<Enemigo*>(enemigo) -> decidirQueHacer()));
		refresh();
		if (opcion == '1') {
			mvprintw(9 , 21 , "->Aliado ataca");
			ataqueEne = enemigo -> atacar();
			//cout << "Ataque: " << enemigo -> getAtaque() << endl;
			refresh();
		} else if (opcion == '3') {
			mvprintw(9 , 21 , "->Corrio");
			correEne = enemigo -> correr();
			refresh();
		} else if (opcion == '2') {
			mvprintw(9 , 21 , "->Uso defensa");
			defensaEne = enemigo -> defender();
			refresh();
		} else if (opcion == '4') {
			mvprintw(9 , 21 , "->uso esquivar");
			esquivarEne = enemigo -> esquivar();
			refresh();
		}

		refresh();

		ataqueTotaA = ataqueA - defensaEne;
		ataqueTotalEne = ataqueEne - defensaA;
		//cout<<ataqueTotaA<<endl<<ataqueTotalEne;
		//ss<<"Ataque total aliado: "<<ataqueTotaA;
		 //ombre= ss.str().c_str() ;
		//ss.clear();
		
		//stringstream ss1;
		// cout << "Ataque total aliado: " << ataqueTotaA << endl;
		// cout << "Ataque total enemigo: " << ataqueTotalEne << endl;
		//ss1<<"Ataque total enemigo: "<<ataqueTotalEne;
		//nombre= ss1.str().c_str() ;
		mvprintw(11 , 22  , "Ataque total aliado: ");
		printw(getString(ataqueTotaA));
		refresh();
		
		
		mvprintw(12 , 22  ,"Ataque total enemigo: ");
		printw(getString(ataqueTotalEne));
		refresh();

		
		refresh();
		if (esquivarA) {
			//cout << "MISS Enemigo" << endl;
			mvprintw(14 , 21 , "MISS ENEMIGO");				
		} else {
			//cout << "Daño: " << ataqueEne << endl;
			
			aliado -> setVida(aliado -> getVida() - ataqueTotalEne);

			if (enemigo -> getVida() <= 0) {
				//cout<<"Enemigo derrotado"<<endl;
				mvprintw(14 , 21 , "Enemigo derrotado");
				dynamic_cast<Enemigo*>(enemigo)->gritoAlMorir();
				mvprintw(15 , 21 , nombre);
				
			}
		}
		refresh();

		if(esquivarEne) {
			//cout << "MISS Aliado" << endl;
			mvprintw(16 , 21 , "MISS ALIADO");	
		} else if (aliado -> getVida() > 0) {
			//cout << "Daño: "<< ataqueEne << endl;
			
			enemigo -> setVida(enemigo -> getVida() - ataqueTotaA);

			if (aliado -> getVida() <= 0) {
				//cout << "Haz muerto" << endl;
				mvprintw(17 , 21 ,"YOU DIED");
				dynamic_cast<Enemigo*>(enemigo) -> gritoAlGanar();
				return false;
			}
		}
		refresh();
		//getch();
		/*mvprintw(14 , 21 ,"");
		mvprintw(15 , 21 ,"");
		mvprintw(16 , 21 ,"");
		mvprintw(17 , 21 ,"");
		*/
		//refresh();
			
	} while(aliado -> getVida() > 0 && enemigo -> getVida() > 0 && !correA && !correEne);	
	
	if (correA && aliado -> getVida() > 0) {
		/*cout << "Lograste escapar" << endl;
		*/
		mvprintw(14 , 30 , "Lograste escapar");
		return true;
	}		

	if (correEne && enemigo -> getVida() > 0) {
		//cout << "El enemigo huyó" << endl;
		mvprintw(15 , 30 , "El enemigo huyo");
		return true;
	}

	refresh();

	clear();

	
}

bool quienInicia(int suerteAli, int suerteEnemi) {
	if (suerteAli>suerteEnemi) {
		return true;
	} else{
		return false;
	}
}