#include "Carta.h"
#include <string>
#include <vector>

#ifndef	BARAJAS_H
#define BARAJAS_H

using namespace std;

class Barajas
{
	private:
		vector<Carta*> cartas;

	public:
		Barajas(vector<Carta*>);
		
		vector<Carta*> getCartas();
		void setCartas(vector<Carta*>);		

};
#endif