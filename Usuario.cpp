#include "Usuario.hpp"
#include <iostream>

Usuario::Usuario()
{

}
Usuario::Usuario(const char* nombre, const char* apellido, int num_socio) : Persona(nombre, apellido)
{
	this->num_socio=num_socio;
}
	
	
int Usuario::getNum_socio()
{
	return num_socio;
}

/*

istream& operator>>(istream& in, Usuario& p) //istream->del teclado a la memoria(de ahi i)
{
	//no hay this, porque estoy fuera de la clase(no tengogo POint3D::)-->en.h tambien esta fuerda de la clase, aunque este dentro con friend esta fuera de la clase
	cout << "Nombre: ";
	cin >> p.x;
	cout << "Apellido: ";
	cin >> p.y;
	cout << "Numero de socio: ";
	cin >> p.z;
	return in;
}

ostream& operator<<(ostream& out, const Point3D& p)
{
	out << "(" << p.getNombre() << ", " << p.getApellido() << ", " << p.getSocio() << ")";//aqui tengo que hacer .get porque no es friend como arriba
	return out;
}
*/