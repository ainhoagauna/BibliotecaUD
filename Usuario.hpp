#ifndef _USUARIO_H
#define _USUARIO_H
#include <iostream>
#include "Persona.hpp"

using namespace std;

class Usuario : public Persona
{
	int num_socio;
public:

	Usuario();
	Usuario(const char* nombre, const char* apellido, int num_socio);	

	void getNum_socio(int num_socio);

	friend istream& operator>>(istream& in, Usuario& u);
};

ostream& operator<<(ostream& out, const Usuario& u); //ostream es un atajo, para evitar el encapsulamiento ESTA FUERA DE LA CLASE
#endif 