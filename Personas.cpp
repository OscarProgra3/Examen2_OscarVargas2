#include "Personas.h"

Personas::Personas(string pnombre,int pedad,int pid)
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

int Personas::getId()
{
	return id;
}
void Personas::set(int tid)
{
	id=tid;
}
