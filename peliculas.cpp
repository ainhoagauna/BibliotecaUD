#include "peliculas.hpp"
#include <iostream>
using namespace std;

namespace contenedorPeliculas{


	Peliculas::Peliculas(string titulo, string genero, double precio, string valoracion)
	{
	this->titulo=titulo;
	this->genero=genero;
	this->precio=precio;
	this->valoracion=valoracion;
	}	

	//metodos set de las variables
	void Peliculas::setTitulo(string titulo)
	{
		this->titulo=titulo;
	}
	void Peliculas::setGenero(string genero)
	{
		this->genero=genero;
	}
	void Peliculas::setPrecio(double precio)
	{
		this->precio=precio;
	}
	void Peliculas::setValoracion(string valoracion)
	{
		this->valoracion=valoracion;
	}
	void Peliculas::setPelicula(string titulo, string genero, double precio, string valoracion)
	{
		this->titulo=titulo;
		this->genero=genero;
		this->precio=precio;
		this->valoracion=valoracion;
	}



	//metodos get de las variables

	string Peliculas::getTitulo(string titulo)
	{
		return this->titulo;
	}

	string Peliculas::getGenero() const
	{
		return this->genero;
	}
	double Peliculas::getPrecio() const
	{
		return this->precio;
	}
	string Peliculas::getValoracion() const
	{
		return this->valoracion;
	}
}