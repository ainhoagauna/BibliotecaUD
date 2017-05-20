#include "Usuario.h"

Usuario::Usuario(const char* nombre, const char* apellido, int num_socio) : Persona(nombre, apellido)
{
	this->num_socio=num_socio;
}
	
	
void Usuario::getNum_socio(int num_socio)
{
	return num_socio;
}