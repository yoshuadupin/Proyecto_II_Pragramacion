main:	main.o Objetos.o Casco.o Guantes.o Torso.o Pantalones.o Zapatos.o Capa.o Armas.o Espada.o Daga.o Arco.o Garras.o Lanza.o Hacha.o 
	g++ main.o Objetos.o Casco.o Guantes.o Torso.o Pantalones.o Zapatos.o Capa.o Armas.o Espada.o Daga.o Arco.o Garras.o Lanza.o Hacha.o -o main

main.o:	main.cpp Objetos.h Casco.h Guantes.h Torso.h Pantalones.h Zapatos.h Capa.h Armas.h Espada.h Daga.h Arco.h Garras.h Lanza.h Hacha.h
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

Armas.h:	Armas.cpp Armas.h
	g++ -c Armas.cpp

Espada.h:	Espada.cpp Armas.h Espada.h
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

clean:
	rm *.o main