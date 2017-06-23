#include "Mesas.h"
#include "Personas.h"
#include "Repartidor.h"
#include "Jugador.h"
#include "Administrador.h"
#include "Barajas.h"
#include "Carta.h"

#include <vector>
#include <iostream>
#include <string>


int main()
{

	vector<Personas*> listapersonas;

	int resp=9;
	while(resp!=3)
	{	

		cout<<endl<<"¿Que es lo que desea realizar?\n1.-Agregar Personas\n2.-Login\n3.-Salir\nIngrese su opcion: ";
		cin>>resp;
		if (resp==1)//agregando personas
		{
			int opcagregar;
			cout<<endl<<"¿A quien desea agregar?\n1.-Administradores\n2.-Repartidores\n3.-Jugadores\nIngrese su opcion: ";
			cin>>opcagregar;

			string nombre,id;
			int edad;
			cout<<endl<<"Ingrese el nombre: ";
			cin>>nombre;
			cout<<endl<<"Ingrese el edad: ";
			cin>>edad;
			bool validarid=false;
			while(validarid==false)
			{
				cout<<endl<<"Ingrese el id(de cuatro digitos porfavor): ";
				cin>>id;

				if (id.size()<5)
				{
					validarid=true;
				}else
				{
					validarid=false;
				}
			}



			if (opcagregar==1)//agregar admin
			{
				int anios;
				string rango;
				double sueldo;

				cout<<endl<<"Ingrese los años de experiencia laboral: ";
				cin>>anios;

				int opcrango=9;
				while(opcrango!=4)
				{
					cout<<endl<<"Rango\n1.-Gerente Tiempo Completo\n2.-Gerente Medio-Tiempo\n3.-Gerente General\n4.-Salir\ningrese su pcion: ";
					cin>>opcrango;

					if (opcrango==1)
					{
						rango="Gerente Tiempo Completo";
					}
					if(opcrango==2)
					{
						rango="Gerente Medio-Tiempo";
					}
					if (opcrango==3)
					{
						rango="Gerente General";
					}
				}//fin opcrango

				cout<<endl<<"Ingrese el sueldo propuesto a ganar: ";
				cin>>sueldo;
				listapersonas.push_back(new Administrador(nombre,edad,id,anios,rango,sueldo));
				cout<<endl<<"Administrador agregado exitosamente"<<endl<<endl;
				
			}	//fin agregar admin
			
			if (opcagregar==2)//agregar repartidores
			{
				string dificultad;
				double dinero;
				Barajas* baraja;

				
				int opcdificultad=9;
				while(opcdificultad!=4)
				{
					cout<<endl<<"Dificultad\n1.-Gerente Tiempo Completo\n2.-Gerente Medio-Tiempo\n3.-Gerente General\n4.-Salir\ningrese su pcion: ";
					cin>>opcdificultad;

					if (opcdificultad==1)
					{
						dificultad="Gerente Tiempo Completo";
					}
					if(opcdificultad==2)
					{
						dificultad="Gerente Medio-Tiempo";
					}
					if (opcdificultad==3)
					{
						dificultad="Gerente General";
					}
				}//fin opcrango	
			}	//fin agregar repartidores
			
			if (opcagregar==3)//agregar jugadores
			{
					
			}	//fin agregar jugadores
			
		}//fin agregando personas
	}

	return 0;
}

