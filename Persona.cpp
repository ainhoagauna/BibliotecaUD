#include "Persona.hpp"
#include "string.h"

using namespace std;
Persona::Persona()
{
	
}
Persona::Persona(const char *nombre, const char *apellido)
	{
		this->nombre = new char[strlen(nombre) + 1]; //this->name=name si fuera con string
		strcpy(this->nombre, nombre);

		this->apellido = new char[strlen(apellido) + 1]; //this->name=name si fuera con string
		strcpy(this->apellido, apellido);

	}
Persona::Persona(const Persona& p)
	{
		
	
		this->nombre = new char[strlen(p.nombre) + 1];
		strcpy(this->nombre, p.nombre);

		this->apellido = new char[strlen(p.apellido) + 1];
		strcpy(this->apellido, p.apellido);

	
	}
Persona::~Persona()
	{
		delete[] nombre;
		delete[] apellido;
	}

	//virtual void PrintInfo();

const char* Persona::getNombre()
{
	return nombre;
}

const char* Persona::getApellido()
{
	return apellido;
}
