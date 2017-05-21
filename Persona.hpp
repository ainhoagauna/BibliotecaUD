#ifndef _PERSONA_H
#define _PERSONA_H

//#include <iostream>

//using namespace std;

class Persona
{
	char *nombre;
	char *apellido;
	

public:
	Persona(const char* nombre, const char* apellido);
	Persona(const Persona &p);
	virtual ~Persona();
	
	const char* getNombre();
	const char* getApellido();

	virtual void escribirEnFichero(const char* fichero) = 0;
	
	
};

#endif
