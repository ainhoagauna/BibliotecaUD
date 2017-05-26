#include "Admin.hpp"
#include <iostream>
#include <fstream>

using namespace std;

Admin::Admin(const char* nombre, const char* apellido, int sueldo): Persona(nombre,apellido)
{
	this->sueldo=sueldo;
}

int Admin::getSueldo()
{
	return this->sueldo;
}