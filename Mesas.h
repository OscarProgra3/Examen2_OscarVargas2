#include <string>

#ifndef MESAS_H
#define MESAS_H

using namespace std;

class Mesas
{
	private:
		int numero;
		string tipo;

	public:
		Mesas(int,string);
		
		int getNumero();
		void setNumero(int);

		string getTipo();
		void setTipo(string);
		
};
#endif