#include "Usuario.hpp"
#include <iostream>
#include <string.h>
#include <ctype.h> 


Usuario::Usuario(string nombre,  string apellido, int num_socio) 
{

	this->nombre = nombre;
	this->apellido = apellido;
	this->num_socio=num_socio;
};



istream& operator>>(istream& in, Usuario& p) 
{

	cout << "Nombre: ";
	cin >> p.nombre;
	cout << "Apellido: ";
	cin >> p.apellido;
	cout << "Numero socio: ";
	cin >> p.num_socio;
	cout << endl;
	return in;
}

ostream& operator<<(ostream& out, const Usuario& p)
{
	out << p.getNombre() << " "<<p.getApellido() << " " << p.getNum_socio();
	//out << "----------------------" << endl;
	return out;
}
