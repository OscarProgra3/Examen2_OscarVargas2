#include "Mesas.h"

Mesas::Mesas(int pnumero,string ptipo,Jugador* pjugador, Repartidor* prepartidor)
{
	numero=pnumero;
	tipo=ptipo;
	jugador=pjugador;
	repartidor=prepartidor;
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


Jugador* Mesas::getJugador()
{
	return jugador;
}
void Mesas::setJugador(Jugador* tjugador)
{
	jugador=tjugador;
}

Repartidor* Mesas::getRepartidor()
{
	return repartidor;
}
void Mesas::setRepartidor(Repartidor* trepartidor)
{
	repartidor=trepartidor;
}