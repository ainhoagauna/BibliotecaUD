#include "comentarios.hpp"


comentarios::comentarios(string titulo, sring comentario)
{
	this->titulo=titulo;
	this->comentario=comentario;
}

ostream& operator<<(ostream &out, const comentario &c)
{
	out << "Pelicula: " << c.titulo << " " << c.comentario << ")";
	return out;
}

istream& operator>>(istream &in, comentario &c)
{
	char c;
	in >> c >> c.titulo >> c >> c.titulo >> c;
	return in;	
}