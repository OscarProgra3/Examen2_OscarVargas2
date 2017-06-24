#include <string>
#include "Repartidor.h"
#include "Jugador.h"


#ifndef MESAS_H
#define MESAS_H

using namespace std;

class Mesas
{
	private:
		int numero;
		string tipo;
		Jugador* jugador;
		Repartidor* repartidor; 

	public:
		Mesas(int,string,Jugador*,Repartidor*);
		
		int getNumero();
		void setNumero(int);

		string getTipo();
		void setTipo(string);

		Jugador* getJugador();
		void setJugador(Jugador*);

		Repartidor* getRepartidor();
		void setRepartidor(Repartidor*);

		
};
#endif