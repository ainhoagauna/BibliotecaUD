#ifndef _COMENTARIOS_H
#define _COMENTARIOS_H

#include <iostream>
#include <string>

using namespace usd;

class comentarios
{
private:
	string titulo;
	string comentario;

public:
	comentarios(string titulo, string comentario);
	~comentarios();
	
	friend ostream& operator<<(ostream &out, const comentario &c); //no es obligatorio hacerlo con friend

	friend istream& operator>>(istream &in, comentario &c);
};
#endif