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


void listarMesas(vector<Mesas*> ListaM);
void listarRepartidores(vector<Personas*> ListaT);
void listarJugadores(vector<Personas*> ListaJ);


int main()
{

	vector<Personas*> listapersonas;
	vector<Mesas*> listaMesas;

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
									if (listapersonas.size()==0)
									{
										cout<<endl<<"LO SENTIMOS, NO HAY PERSONAS PARA PODER CREAR LAS MESAS"<<endl;
									}else
									{

										string tipomesa;
										int nmesa;///numero mesa
										cout<<endl<<"Igrese el numero de la mesa: ";
										cin>>nmesa;

										int opctipomesa;
										while(opctipomesa!=4)
										{
											cout<<endl<<"Tipo de mesa\n1.-V.I.P.\n2.-Clasica\n3.-Viajero\n4.-Salir\ningrese su pcion: ";
											cin>>opctipomesa;

											if (opctipomesa==1)
											{
												tipomesa="V.I.P.";
												opctipomesa=4;
											}
											if(opctipomesa==2)
											{
												tipomesa="Clasica";
												opctipomesa=4;
											}
											if (opctipomesa==3)
											{
												tipomesa="Viajero";
												opctipomesa=4;
											}
										}//fin opctipomesa
										
										listarRepartidores(listapersonas);
										int repartidorescogido;
										cout<<"Numero de repartidor a escoger: ";
										cin>>repartidorescogido;

										listarJugadores(listapersonas);
										int jugadorescogido;
										cout<<"Numero de jugador a escoger: ";
										cin>>jugadorescogido;

										Repartidor* repartidorm= dynamic_cast<Repartidor*>(listapersonas.at(repartidorescogido));
										Jugador* jugadorm=dynamic_cast<Jugador*>(listapersonas.at(jugadorescogido));

										listaMesas.push_back(new Mesas(nmesa,tipomesa,jugadorm,repartidorm));
										cout<<endl<<"MESA CREADA EXITOSAMENTE"<<endl;
									}

								}//fin agregar mesa


								if (opcmesa==2)//modificar mesa
								{
									listarMesas(listaMesas);
									int opcmodificar;
									cout<<"Numero de mesa a modificar: ";
									cin>>opcmodificar;

									string tipomesam;
										int nmesam;///numero mesa
										cout<<endl<<"Igrese el numero de la mesa: ";
										cin>>nmesam;

										

										int opctipomesam;
										while(opctipomesam!=4)
										{
											cout<<endl<<"Tipo de mesa\n1.-V.I.P.\n2.-Clasica\n3.-Viajero\n4.-Salir\ningrese su pcion: ";
											cin>>opctipomesam;

											if (opctipomesam==1)
											{
												tipomesam="V.I.P.";
												opctipomesam=4;
											}
											if(opctipomesam==2)
											{
												tipomesam="Clasica";
												opctipomesam=4;
											}
											if (opctipomesam==3)
											{
												tipomesam="Viajero";
												opctipomesam=4;
											}
										}//fin opctipomesa
										
										listarRepartidores(listapersonas);
										int repartidorescogidom;
										cout<<"Numero de repartidor a escoger: ";
										cin>>repartidorescogidom;

										listarJugadores(listapersonas);
										int jugadorescogidom;
										cout<<"Numero de jugador a escoger: ";
										cin>>jugadorescogidom;

										Repartidor* repartidormm= dynamic_cast<Repartidor*>(listapersonas.at(repartidorescogidom));
										Jugador* jugadormm=dynamic_cast<Jugador*>(listapersonas.at(jugadorescogidom));

										Mesas* mesat=new Mesas(nmesam,tipomesam,jugadormm,repartidormm);

										listaMesas.at(opcmodificar)=mesat;
										cout<<endl<<"MESA MODIFICADA EXITOSAMENTE"<<endl;
									


								}//fin modificar mesa
								if (opcmesa==3)//eliminarmesa
								{
									listarMesas(listaMesas);
									int opceliminar;
									cout<<"Numero de mesa a eliminar: ";
									cin>>opceliminar;
									listaMesas.erase(listaMesas.begin()+opceliminar);
									cout<<endl<<"MESA ELIMINADA CON EXITO "<<endl;
									
								}//fin eliminar mesa


							}

						}//fin de login administrador
						if (listapersonas.at(i)->getTipoPersona()=="Jugador")//login jugador
						{
							cout<<"A ENTRADO A EL JUEGO DE BLACK JACK"<<endl;

							for (int j = 0; j < listaMesas.size(); ++j)
							{
									if (listapersonas.at(i)->getNombre()==listaMesas.at(j)->getJugador()->getNombre())
									{
										cout<<endl<<"BIENVENIDO "<<listapersonas.at(i)->getNombre()<<endl;
										cout<<"el numero de su mesa es el : "<<listaMesas.at(j)->getNumero()<<endl;
										cout<<"el tipo de su mesa es : "<<listaMesas.at(j)->getTipo()<<endl;
										cout<<"el repartidor  de su mesa es : "<<listaMesas.at(j)->getRepartidor()->getNombre()<<endl;
										

									}
											
								}
							}
						}//fin login jugador
					}
				}
						
			
		}//fin login





	}

	return 0;
}



void listarRepartidores(vector<Personas*> ListaT)
{
	cout<<endl<<"----------LISTA DE LOS REPARTIDORES---------------------";
	for (int i = 0; i < ListaT.size(); ++i)
	{
		if (ListaT.at(i)->getTipoPersona()=="Repartidor")
		{
				cout << endl<<"        Numero del Repartidor: " << (i) << endl;
			cout << endl<<"N-ombre del repartidor: "<< ListaT.at(i)->getNombre()<<endl;
			cout <<endl<< "----------------------------------------------" << endl;
		}
		
	}
}



void listarJugadores(vector<Personas*> ListaJ)
{
	cout<<endl<<"----------LISTA DE LOS JUGADORE---------------------";
	for (int i = 0; i < ListaJ.size(); ++i)
	{
		if (ListaJ.at(i)->getTipoPersona()=="Jugador")
		{
				cout << endl<<"        Numero del jugador: " << (i) << endl;
			cout << endl<<"Nombre del repartidor: "<< ListaJ.at(i)->getNombre()<<endl;
			cout <<endl<< "----------------------------------------------" << endl;
		}
		
	}
}

void listarMesas(vector<Mesas*> ListaM)
{
	cout<<endl<<"----------LISTA DE LAS MESAS---------------------";
	for (int i = 0; i < ListaM.size(); ++i)
	{
				cout << endl<<"        Numero de opcion de la mesa: " << (i) << endl;
			cout << endl<<"Numero asignado : "<< ListaM.at(i)->getNumero()<<endl;
			cout << endl<<"Tipo de mesa : "<< ListaM.at(i)->getTipo()<<endl;
			
			cout <<endl<< "----------------------------------------------" << endl;
	}
}

