#include "Mesas.h"

Mesas::Mesas(int pnumero,string ptipo)
{
	numero=pnumero;
	tipo=ptipo;
}
		
int Mesas::getNumero()
{
	return numero;
}
void Mesas::setNumero(int tnumero)
{
	numero=tnumero;
}

string Mesas::getTipo()
{
	return tipo;
}
void Mesas::setTipo(string ttipo)
{
	tipo=ttipo;
}
		