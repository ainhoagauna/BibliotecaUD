#ifndef _ADMIN_HPP
#define _ADMIN_HPP

#include "Persona.hpp"

class Admin : public Persona
{

	int sueldo;
	char* usuario;
	char* contrasena;
public:
	Admin(const char* nombre, const char* apellido, const char* usuario, const char* contrasena, const int sueldo);
	Admin(const Admin &a);
	~Admin();
	
	const int getSueldo();
	const char* getUsuario();
	const char* getContrasena();
};

#endif