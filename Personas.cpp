#include "Personas.h"

Personas::Personas(string pnombre,int pedad,string pid)
{
	nombre=pnombre;
	edad=pedad;
	id=pid;

}


string Personas::getNombre()
{
	return nombre;
}
void Personas::setNombre(string tnombre)
{
	nombre=tnombre;
}

int Personas::getEdad()
{
	return edad;
}
void Personas::setEdad(int tedad)
{
	edad=tedad;
}

string Personas::getId()
{
	return id;
}
void Personas::setId(string tid)
{
	id=tid;
}

string Personas::getTipoPersona()
{
	return "";
}