#include <string>

#ifndef JUGADOR_H
#define JUGADOR_H

using namespace std;

class Jugador : public Personas
{
	private:
		string procedencia;
		string apodo;
		double monto;

	public:
		Jugador(string, string, double);
		
		string getProcedencia();
		void setProcedencia(string);

		string getApodo();
		void setApodo(string);

		double getMonto();
		void setMonto(double);
};
#endif