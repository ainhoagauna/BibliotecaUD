#include "peliculas.hpp"
#include <iostream>
#include <string.h>
#include <fstream>
#include <stdlib.h>

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

	string peliculas::getTitulo(string titulo)
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

vector<Pelicula> Pelicula::leerDeFichero(string fic)
{
	int numPelicula = 1;
	ifstream ifs(fic.c_str());
	vector<Pelicula> vectorPeliculas;
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
		 	Pelicula t1(titulo, genero, precio, valoracion);
		 //	printPelicula(t1);
		 	vectorPeliculas.push_back(t1);
		 	cout<< "Elementos " << vectorPeliculas.size() <<endl;
		 	
		 }
	}

	ifs.close();
	return vectorPeliculas;
}