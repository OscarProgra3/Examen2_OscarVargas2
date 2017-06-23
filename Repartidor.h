#include "Personas.h"
#include "Barajas.h"
#include <string>

#ifndef REPARTIDOR_H
#define REPARTIDOR_H

using namespace std;

class Repartidor : public Personas
{
	private:
		string dificultad;
		double dinero;
		Barajas* baraja;


	public:
		Repartidor(string, int,int, string,double,Barajas*);

		string getDificultad();
		void setDificultas(string);

		double getDinero();
		void set Dinero(double);

		Barajas* getBaraja();
		void setBaraja(Barajas*);
	
};
#endif