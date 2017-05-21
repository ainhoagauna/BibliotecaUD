#include "Admin.hpp"
#include <iostream>

using namespace std;

Admin::Admin(const char* nombre, const char* apellido, int sueldo): Persona(nombre,apellido)
{
	this->sueldo=sueldo;
}

int Admin::getSueldo()
{
	return this->sueldo;
}

//aqiu si hay implementacion,por tanto no es abstracta
void Admin::escribirEnFichero(const char* fichero)
{
	cout << "Escribiendo en " << fichero << endl;
}