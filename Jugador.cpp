#include "Jugador.h"

Jugador::Jugador(string pnombre, int pedad,int pid,string pprocedencia, string papodo, double pmonto) : Personas(pnombre, pedad, pid)
{
	procedencia=pprocedencia;
	apodo=papodo;
	monto=pmonto;
}
		

string Jugador::getProcedencia()
{
	return procedencia;
}
void Jugador::setProcedencia(string tprocedencia)
{
	procedencia=tprocedencia;
}

string Jugador::getApodo()
{
	return apodo;
}
void Jugador::setApodo(string tapodo)
{
	apodo=tapodo;
}

double Jugador::getMonto()
{
	return monto;
}
void Jugador::setMonto(double tmonto)
{
	monto=tmonto;
}