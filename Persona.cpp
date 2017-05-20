#ifndef _PERSONA_H
#define _PERSONA_H

using namespace std;

class Persona
{
	char* nombre;
	char* apellido;
	

public:
	Persona(const char* nombre, const char* apellido);
	Persona(const Persona& p);
	virtual ~Persona();

	//virtual void PrintInfo();

	void getNombre() const;
	void getApellido() const;
	
	
};

#endif