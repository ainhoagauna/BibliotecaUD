#include "peliculas.hpp"
#include <iostream>
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
