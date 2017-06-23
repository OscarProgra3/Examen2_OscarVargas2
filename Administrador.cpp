#include "Administrador.h"

Administrador::Administrador(string pnombre,int pedad,string pid,int panios,string prango,double psueldo) : Personas(pnombre, pedad, pid)
{
	anios=panios;
	rango=prango;
	sueldo=psueldo;
}

int Administrador::getAnios()
{
	return anios;
}
void Administrador::setAnios(int tanios)
{
	anios=tanios;
}

string Administrador::getRango()
{
	return rango;
}
void Administrador::setRango(string trango)
{
	rango=trango;
}

double Administrador::getSueldo()
{
	return sueldo;
}
void Administrador::setSueldo(double tsueldo)
{
	sueldo=tsueldo;
}

string Administrador::getTipoPersona()
{
	return "Administrador";
}