#include "Personas.h"
#include <string>

#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

using namespace std;

class Administrador : public Personas
{
	private: 
		int anios;
		string rango;
		double sueldo;

	public:
	Administrador(string, int, int, int,string,double);

	int getAnios();
	void setAnios(int);

	string getRango();
	void setRango(string);

	double getSueldo();
	void setSueldo(double);	
};
#endif