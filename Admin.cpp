#include "Admin.hpp"
#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

Admin::Admin(const char* nombre, const char* apellido,const char* usuario, const char* contrasena, const int sueldo): Persona(nombre,apellido)
{
	this->usuario=new char[strlen(usuario)+1];
	strcpy(this->usuario, usuario);
	this->contrasena=new char[strlen(contrasena)+1];
	strcpy(this->contrasena, contrasena);
	this->sueldo=sueldo;
}

Admin::Admin(const Admin  &a)
{
	this->usuario=new char[strlen(a.usuario)+1];
	strcpy(this->usuario, a.usuario);
	this->contrasena=new char[strlen(a.contrasena)+1];
	strcpy(this->contrasena, a.contrasena);
}

Admin::~Admin()
{
	delete[] usuario;
	delete[] contrasena;
}
const int Admin::getSueldo() 
{
	return this->sueldo;
}

const char* Admin::getUsuario()
{
	return usuario;
}
const char* Admin::getContrasena()
{
	return contrasena;
}
