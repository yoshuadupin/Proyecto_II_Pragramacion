main: Personaje.o Aliado.o Guerrero.o Ladron.o Sacerdote.o Marginado.o Enemigo.o Orco.o BestiaSalvaje.o NoMuerto.o Abismales.o main.o
	g++	Personaje.o Aliado.o Guerrero.o Ladron.o Sacerdote.o Marginado.o Enemigo.o Orco.o BestiaSalvaje.o NoMuerto.o Abismales.o main.o -o main

Personaje.o: Personaje.h Personaje.cpp
	g++ -c Personaje.cpp 	

Enemigo.o:	Personaje.h Enemigo.h Enemigo.cpp
	g++ -c Enemigo.cpp
#O tu novia
Orco.o:	Personaje.h Enemigo.o Orco.h Orco.cpp
	g++ -c Orco.cpp

BestiaSalvaje.o:	Personaje.h Enemigo.o BestiaSalvaje.h BestiaSalvaje.cpp
	g++ -c BestiaSalvaje.cpp

NoMuerto.o:	Personaje.h Enemigo.o NoMuerto.h NoMuerto.cpp
	g++ -c NoMuerto.cpp

Abismales.o:	Personaje.h Enemigo.o Abismales.h Abismales.cpp
	g++ -c Abismales.cpp

Aliado.o: Personaje.h Aliado.h Aliado.cpp
	g++ -c Aliado.cpp

Guerrero.o: Personaje.h Aliado.h Guerrero.h Guerrero.cpp
	g++ -c Guerrero.cpp

Ladron.o: Personaje.h Aliado.h Ladron.h Ladron.cpp
	g++ -c Ladron.cpp

Sacerdote.o: Personaje.h Aliado.h Sacerdote.h Sacerdote.cpp
	g++ -c Sacerdote.cpp

Marginado.o: Personaje.h Aliado.h Marginado.h Marginado.cpp
	g++ -c Marginado.cpp

clean:
	rm *.o main

		