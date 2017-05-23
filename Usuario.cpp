#include "Usuario.hpp"
#include <iostream>
#include <string.h>

Usuario::Usuario(string nombre,  string apellido, int num_socio) 
{

	this->nombre = nombre;
	this->apellido = apellido;
	this->num_socio=num_socio;
};



istream& operator>>(istream& in, Usuario& p) //istream->del teclado a la memoria(de ahi i)
{
	//no hay this, porque estoy fuera de la clase(no tengogo POint3D::)-->en.h tambien esta fuerda de la clase, aunque este dentro con friend esta fuera de la clase
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
	out << "Nombre:" << p.getNombre() <<endl;
	out << "Apellido: " << p.getApellido() <<endl;
	out << "Numero de socio: " << p.getNum_socio() <<endl;
	//out << "----------------------" << endl;
	return out;
}
