#include <string>

#ifndef PERSONAS_H
#define PERSONAS_H

using namespace std;

class Personas
{
	protected:
		string nombre;
		int edad;
		string id;



	public:
		Personas(string,int,string);
		//~Personas();

		string getNombre();
		void setNombre(string);

		int getEdad();
		void setEdad(int);

		string getId();
		void setId(string);

		virtual string getTipoPersona();		

};
#endif