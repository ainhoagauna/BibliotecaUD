#include "Persona.h"
#include "string.h"

Persona::Persona(const char* nombre, const char* apellido, int num_socio)
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
	virtual Persona::~Persona()
	{
		delete[] nombre;
		delete[] apellido;
	}

	//virtual void PrintInfo();

	void Persona::getNombre() const
	{
		return nombre;
	}
	void Persona::getApellido() const
	{
		return apellido;
	}
