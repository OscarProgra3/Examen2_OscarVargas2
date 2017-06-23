#include "Carta.h"

Carta::Carta(int pvalor,string psimbolo,string pcolor)
{
	valor=pvalor;
	simbolo=psimbolo;
	color=pcolor;
}
		
int Carta::getValor()
{
	return valor;
}
void Carta::setValor(int tvalor)
{
	valor=tvalor;
}

string Carta::getSimbolo()
{
	return simbolo;
}
void Carta::setSimbolo(string tsimbolo)
{
	simbolo=tsimbolo;
}

string Carta::getColor()
{
	return color;
}
void Carta::setColor(string tcolor)
{
	color=tcolor;
}