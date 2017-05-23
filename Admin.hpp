#ifndef _ADMIN_H
#define _ADMIN_H
#include <iostream>
#include <string.h>
#include "Persona.hpp"
using namespace std;

class Admin :protected Persona
{
	string nombre;
	string apellido;
	int sueldo;
	
public:
	Admin() {}

	Admin(string nombre,  string apellido, int sueldo);


	string getNombre() const { return nombre; }
	string getApellido() const { return apellido; }
	int getSueldo() const { return sueldo; }


};
#endif
