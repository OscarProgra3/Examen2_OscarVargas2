#include "Mesas.h"

Mesas::Mesas(int pnumero,string ptipo)
{
	numero=pnumero;
	tipo=ptipo;
}
		
int getNumero()
{
	return numero;
}
void setNumero(int tnumero)
{
	numero=tnumero;
}

string getTipo()
{
	return tipo;
}
void setTipo(string ttipo)
{
	tipo=ttipo;
}
		