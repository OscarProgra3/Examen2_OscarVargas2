#include <string>

#ifndef CARTAS_H
#define CARTAS_H

using namespace std;

class Carta
{
	private:
		int valor;
		string simbolo;
		string color;

	public:
		Carta(int,string,string);
		
		int getValor();
		void setValor(int);

		string getSimbolo();
		void setSimbolo(string);

		string getColor();
		void setColor(string);

};
#endif