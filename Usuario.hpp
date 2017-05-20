#ifndef _USUARIO_H
#define _USUARIO_H
#include "Persona.h"

class Usuario : public Persona
{
	int num_socio;
public:
	Usuario(const char* nombre, const char* apellido, int num_socio);
	
	
	void getNum_socio(int num_socio);
};

#endif 