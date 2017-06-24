Main:	Main.o Personas.o Administrador.o   Repartidor.o Jugador.o Barajas.o Carta.o Mesas.o 
	g++ Main.o Personas.o Administrador.o   Repartidor.o Jugador.o Barajas.o Carta.o Mesas.o  -o Main

Main.o:	Main.cpp Personas.h Administrador.h Repartidor.h Jugador.h Barajas.h Carta.h Mesas.h
	g++ -c Main.cpp

Personas.o:	Personas.cpp Personas.h
	g++ -c Personas.cpp

Administrador.o:	Administrador.cpp Administrador.h Personas.h
	g++ -c Administrador.cpp

Repartidor.o: Repartidor.cpp Repartidor.h Personas.h Barajas.h
	g++ -c Repartidor.cpp

Jugador.o: Jugador.cpp Jugador.h Personas.h
	g++ -c Jugador.cpp

Barajas.o: Barajas.cpp Barajas.h Carta.h
	g++ -c Barajas.cpp

Carta.o: Carta.h Carta.h
	g++ -c Carta.cpp

Mesas.o: Mesas.cpp Mesas.h Repartidor.h Jugador.h 
	g++ -c Mesas.cpp

clean:	
	rm -f *.o Main