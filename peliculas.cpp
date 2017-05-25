#include "peliculas.hpp"
#include <iostream>
#include <string.h>
#include <fstream>
#include <stdlib.h>
#include <vector>

using namespace std;




	peliculas::peliculas(string titulo, string genero, double precio, string valoracion)
	{
	this->titulo=titulo;
	this->genero=genero;
	this->precio=precio;
	this->valoracion=valoracion;
	}	

	//metodos set de las variables
	void peliculas::setTitulo(string titulo)
	{
		this->titulo=titulo;
	}
	void peliculas::setGenero(string genero)
	{
		this->genero=genero;
	}
	void peliculas::setPrecio(double precio)
	{
		this->precio=precio;
	}
	void peliculas::setValoracion(string valoracion)
	{
		this->valoracion=valoracion;
	}
	void peliculas::setPelicula(string titulo, string genero, double precio, string valoracion)
	{
		this->titulo=titulo;
		this->genero=genero;
		this->precio=precio;
		this->valoracion=valoracion;
	}



	//metodos get de las variables

	string peliculas::getTitulo() const
	{
		return this->titulo;
	}

	string peliculas::getGenero() const
	{
		return this->genero;
	}
	double peliculas::getPrecio() const
	{
		return this->precio;
	}
	string peliculas::getValoracion() const
	{
		return this->valoracion;
	}

vector<peliculas>peliculas::leerDeFichero(string fic)
{
	int numPelicula = 1;
	ifstream ifs(fic.c_str());
	vector<peliculas>vectorPeliculas;
	string dato;
	string nada ="                ";
	double precio;
	string titulo;
	string genero;
	string valoracion;

	ifstream myFile("peliculas.txt");
	
	while(!ifs.eof())
	{

		
		getline(ifs, dato);
		 if(dato != nada ) //Para asegurar que las rayas no se guardan como atributo del trabajador
		 {
		 		cout<< "PELICULA ["<<numPelicula<<"] "<<endl;
		 	
		 		//cout<<"DNI guardado en vector "<<atoi(dato.c_str())<< endl;
		 		
		 		getline(ifs, dato);
		 		titulo = dato;
		 		//cout<<"Nombre guardado en vector "<<dato<<endl;
		 		
		 		getline(ifs, dato);
		 		genero = dato;
		 		//cout<<"Apellido guardado en vector "<<dato<<endl;

		 		precio = atoi(dato.c_str());
		 	
		 		getline(ifs, dato);
		 		valoracion = dato;
		 		//cout<<"Puesto guardado en vector "<<dato<<endl;
		 		
		 }else
		 {
		 	cout<< "Hemos entrado "<<endl;
		 	//Pelicula t1(titulo, genero, precio, valoracion);
		 //	printPelicula(t1);
		 	vectorPeliculas.push_back(t1);
		 	cout<< "Elementos " <<vectorPeliculas.size() <<endl;

			 {cout<<"\n a["<<numPelicula<<"]="<<a[i];

			 }
		 	
		 }
	}

	ifs.close();
	return vectorPeliculas;
}
void peliculas::EliminarPelicula(string fic)
{
	string titulo;
	string genero;
	double precio;
	string valoracion;

	bool comprobacion=false;
	int posicion;
	vector<peliculas>vectorPeliculas;

	cout<<"Lista de las peliculas:"<<endl;
	//Pelicula t1(titulo, genero, precio, valoracion);

	vector<peliculas>vectorPeliculas=t1.leerDeFichero(fic);

	for (int i = 0; i < vectorPeliculas.size; ++i)
	{
		peliculas t =vectorPeliculas[i];
		cout<<"Pelicula"<<i+1<<endl;
		cout<<"\t"<<t.getTitulo<<endl;
		cout<<"\t"<<t.getGenero<<endl;
		cout<<"\t"<<t.getPrecio<<endl;
		cout<<"\t"<<t.getValoracion<<endl;
	}

	do
	{
		cout<<"Introduzca el titulo de la pelicula que desea eliminar"<<endl;
		cin>>titulo;

		for (int i = 0; i <vectorPeliculas.size(); ++i)
		{
			peliculas t=vectorPeliculas[i];
			if(titulo==t.getTitulo())
			{
				comprobacion=true;
				cout<<"Existe!!"<<endl;
				posicion=i;
				break;
			}
			else
			{
				comprobacion=false;
			}
		}
		if(comprobacion==false)
		{
			cout<<"No existe ninguna pelicula registrada con ese titulo"<<endl;
		}
	}
	while(comprobacion !=true);

	vectorPeliculas.erase(vectorPeliculas.begin()+posicion);
	cout<<"NUEVO!!"<<endl;

	for (int i = 0; i < vectorPeliculas.size(); ++i)
	{
		peliculas t=vectorPeliculas[i];
		cout<<"Pelicula"<<i+1<<endl;
		cout<<"\t"<<t.getTitulo<<endl;
		cout<<"\t"<<t.getGenero<<endl;
		cout<<"\t"<<t.getPrecio<<endl;
		cout<<"\t"<<t.getValoracion<<endl;
	}

	if(remove("peliculas.txt") ! =0)
	{
		cout<<"No se ha podido eliminar el fichero"<<endl;
	}
	else
	{
		cout<<"El fichero se ha eliminado correctamente"<<endl;
	}

	for (int i = 0; i < vectorPeliculas.size(); ++i)
	{
		peliculas t=vectorPeliculas[i];
		cout<<"no se que mas"<<endl;
	}
}