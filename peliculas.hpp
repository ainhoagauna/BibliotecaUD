#ifndef _PELICULAS_H
#define _PELICULAS_H

#include <iostream>
#include <string>
using namespace std;



class peliculas{

private:
	string titulo;
	string genero;
	double precio;
	string valoracion;
	string fic;

public:
	peliculas(){}

	peliculas(string titulo, string genero, double precio, string valoracion);

	
	void setTitulo(string titulo);
	void setGenero(string genero);
	void setPrecio(double precio);
	void setValoracion(string valoracion);
	void setPelicula(string titulo, string genero, double precio, string valoracion);
	//void EliminarPelicula(string fic);

	string getTitulo() const;
	string getGenero() const;
	double getPrecio() const;
	string getValoracion() const;

	//void clonado(Peliculas* p);
	
};



#endif