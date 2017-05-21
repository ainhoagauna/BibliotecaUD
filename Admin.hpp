#ifndef _ADMIN_HPP
#define _ADMIN_HPP

#include "Persona.hpp"

class Admin : public Persona
{

	int sueldo;
public:
	Admin(const char* nombre, const char* apellido, int sueldo);
	
	int getSueldo();

	virtual void escribirEnFichero(const char* fichero);
};

#endif