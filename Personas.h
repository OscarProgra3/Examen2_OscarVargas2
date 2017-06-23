#include <string>

#ifndef PERSONAS_H
#define PERSONAS_H

using namespace std;

class Personas
{
	protected:
		string nombre;
		int edad;
		int id;



	public:
		Personas(string,int,int);
		//~Personas();

		string getNombre();
		void setNombre(string);

		int getEdad();
		void setEdad(int);

		int getId();
		void set(int);

};
#endif