#include "Repartidor.h"

Repartidor::Repartidor(string pnombre, int pedad,int pid, string pdificultad,double pdinero,Barajas* pbaraja): Personas(pnombre, pedad, pid)
{
	dificultad=pdificultad;
	dinero=pdinero;
	baraja=pbaraja;
}


string Repartidor::getDificultad()
{
	return dificultad;
}
void Repartidor::setDificultas(string tdificultad)
{
	dificultad=tdificultad;
}

double Repartidor::getDinero()
{
	return dinero;
}
void Repartidor::setDinero(double tdinero)
{
	dinero=tdinero;
}

Barajas* Repartidor::getBaraja()
{
	return baraja;
}
void Repartidor::setBaraja(Barajas* tbaraja)
{
	baraja=tbaraja;
}