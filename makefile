main:	main.o Objetos.o Casco.o Guantes.o Torso.o Pantalones.o Zapatos.o Capa.o Armas.o Espada.o Daga.o Arco.o Garras.o Lanza.o Hacha.o Personaje.o Aliado.o Guerrero.o Ladron.o Sacerdote.o Marginado.o Enemigo.o Orco.o BestiaSalvaje.o NoMuerto.o Abismales.o
	g++ main.o Objetos.o Casco.o Guantes.o Torso.o Pantalones.o Zapatos.o Capa.o Armas.o Espada.o Daga.o Arco.o Garras.o Lanza.o Hacha.o Personaje.o Aliado.o Guerrero.o Ladron.o Sacerdote.o Marginado.o Enemigo.o Orco.o BestiaSalvaje.o NoMuerto.o Abismales.o -o main

main.o:	main.cpp Objetos.h Casco.h Guantes.h Torso.h Pantalones.h Zapatos.h Capa.h Armas.h Espada.h Daga.h Arco.h Garras.h Lanza.h Hacha.h Personaje.h Aliado.h Guerrero.h Ladron.h Sacerdote.h Marginado.h Enemigo.h Orco.h BestiaSalvaje.h NoMuerto.h Abismales.h
	g++ -c main.cpp

Objetos.o:	Objetos.cpp Objetos.o
	g++ -c Objetos.cpp

Casco.o:	Casco.cpp Objetos.h Casco.h
	g++ -c Casco.cpp

Guantes.o:	Guantes.cpp Objetos.h Guantes.h
	g++ -c Guantes.cpp

Torso.o:	Torso.cpp Objetos.h Torso.h
	g++ -c Torso.cpp

Pantalones.o:	Pantalones.cpp Objetos.h Pantalones.h
	g++ -c Pantalones.cpp

Zapatos.o: Zapatos.cpp Objetos.h Zapatos.h
	g++ -c Zapatos.cpp

Capa.o:	Capa.cpp Objetos.h Capa.h
	g++ -c Capa.cpp

Armas.o:	Armas.cpp Armas.h
	g++ -c Armas.cpp

Espada.o:	Espada.cpp Armas.h Espada.h
	g++ -c Espada.cpp

Daga.o:	Daga.cpp Armas.h Daga.h
	g++ -c Daga.cpp

Arco.o:	Arco.cpp Armas.h Arco.h
	g++ -c Arco.cpp

Garras.o:	Garras.cpp Armas.h Garras.h
	g++ -c Garras.cpp

Lanza.o:	Lanza.cpp Armas.h Lanza.h
	g++ -c Lanza.cpp

Hacha.o:	Hacha.cpp Armas.h Hacha.h
	g++ -c Hacha.cpp


#Personajes
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