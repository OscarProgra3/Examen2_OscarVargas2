#include "Barajas.h"

Barajas::Barajas(vector<Carta*> pcartas)
{
	cartas=pcartas;
}
		
vector<Carta*> Barajas::getCartas()
{
	return cartas;
}
void Barajas::setCartas(vector<Carta*> tcartas)
{
	cartas=tcartas;
}		