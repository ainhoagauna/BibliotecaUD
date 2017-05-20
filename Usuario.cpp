#include "Usuario.hpp"
#include <iostream>

Usuario::Usuario(const char* nombre, const char* apellido, int num_socio) : Persona(nombre, apellido)
{
	this->num_socio=num_socio;
}
	
	
void Usuario::getNum_socio(int num_socio)
{
	return num_socio;
}

istream& operator>>(istream& in, Usuario& u) //istream->del teclado a la memoria(de ahi i)
{
	//no hay this, porque estoy fuera de la clase(no tengogo POint3D::)-->en.h tambien esta fuerda de la clase, aunque este dentro con friend esta fuera de la clase
	cout << "Nombre: ";
	cin >> u.nombre;
	cout << "Y: ";
	cin >> u.apellido;
	cout << "Z: ";
	cin >> u.num_socio;
	return in;
}

ostream& operator<<(ostream& out, const Usuario& u)
{
	out << "(" << u.getNombre() << ", " << u.getApellido() << ", " << u.getNum_socio() << ")";//aqui tengo que hacer .get porque no es friend como arriba
	return out;
}