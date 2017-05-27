#ifndef _USUARIO_H
#define _USUARIO_H
#include <iostream>
#include "Persona.hpp"
#include <string.h>
using namespace std;

class Usuario 
{
	string nombre;
	string apellido;
	int num_socio;
	
public:
	Usuario() {}

	Usuario(const string nombre, const string apellido, const int num_socio);


	const string getNombre() const { return nombre; }
	const string getApellido() const { return apellido; }
	const int getNum_socio() const { return num_socio; }

	friend istream& operator>>(istream& in, Usuario& p); 

};

ostream& operator<<(ostream& out, const Usuario& p); 
#endif