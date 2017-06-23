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

				int opcrango;
				while(opcrango!=4)
				{
					cout<<endl<<"Rango\n1.-Gerente Tiempo Completo\n2.-Gerente Medio-Tiempo\n3.-Gerente General\n4.-Salir\ningrese su pcion: ";
					cin>>opcrango;

					if (opcrango==1)
					{
						rango="Gerente Tiempo Completo";
						opcrango=4;
					}
					if(opcrango==2)
					{
						rango="Gerente Medio-Tiempo";
						opcrango=4;
					}
					if (opcrango==3)
					{
						rango="Gerente General";
						opcrango=4;
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
				vector<Carta*> cartas;
				
				int opcdificultad=9;
				while(opcdificultad!=4)
				{
					cout<<endl<<"Dificultad\n1.-Dificil\n2.-Intermedio\n3.-Facil\n4.-Salir\ningrese su pcion: ";
					cin>>opcdificultad;

					if (opcdificultad==1)
					{
						dificultad="Dificil";
						opcdificultad=4;
					}
					if(opcdificultad==2)
					{
						dificultad="Intermedio";
						opcdificultad=4;
					}
					if (opcdificultad==3)
					{
						dificultad="Facil";
						opcdificultad=4;
					}
				}//fin opcdificultad

				cout<<endl<<"Ingrese la cantidad de dinero: ";
				cin>>dinero;

				//baraja
				for (int i = 2; i <=14; ++i)
				{
					cartas.push_back(new Carta(i,"♠","negro"));
				}

				for (int i = 2; i <=14; ++i)
				{
					cartas.push_back(new Carta(i,"♥","rojo"));
				}
				for (int i = 2; i <=14; ++i)
				{
					cartas.push_back(new Carta(i,"♣","negro"));
				}
				for (int i = 2; i <=14; ++i)
				{
					cartas.push_back(new Carta(i,"♦","rojo"));
				}

				Barajas* baraja=new Barajas(cartas);

				listapersonas.push_back(new Repartidor(nombre,edad,id,dificultad,dinero,baraja));
				cout<<endl<<"Repartidor agregado exitosamente"<<endl<<endl;
				

			}	//fin agregar repartidores
			
			if (opcagregar==3)//agregar jugadores
			{
				string procedencia,apodo;
				double monto;

				cout<<endl<<"Ingrese la procedencia: ";
				cin>>procedencia;
				
				cout<<endl<<"Ingrese el apodo: ";
				cin>>apodo;

				cout<<endl<<"ingrese el monto";
				cin>>monto;




				listapersonas.push_back(new Jugador(nombre,edad,id,procedencia,apodo,monto));
				cout<<endl<<"Jugador agregado exitosamente"<<endl<<endl;

			}	//fin agregar jugadores
			
		}//fin agregando personas

		if (resp==2)//login
		{

			string username,idactual;

			cout<<endl<<"Ingrese Nombre de usuario: ";
			cin>>username;

			cout<<endl<<"ingrese el id: ";
			cin>>idactual;

				for (int i = 0; i < listapersonas.size(); ++i)
				{
					if (listapersonas.at(i)->getNombre()==username && listapersonas.at(i)->getId()==idactual)
					{
						if (listapersonas.at(i)->getTipoPersona()=="Administrador")
						{
							cout<<endl<<"-----------BIENVENIDO ADMINISTRADOR----------------"<<endl;
							int opcmesa=9;
							while(opcmesa!=4)
							{	
								cout<<endl<<"¿Que es lo que desea realizar?\n1.-Agregar Mesas\n2.-Modificar mesas\n3.-Eliminar mesas\n4.-Salir\nIngrese su opcion: ";
								cin>>opcmesa;
								if (opcmesa==1)//agregar mesa
								{
									/* code */
								}

							}

						}
					}
				}
						
			
		}//fin login





	}

	return 0;
}

