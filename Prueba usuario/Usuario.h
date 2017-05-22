#ifndef _POINT3D_H
#define _POINT3D_H
#include <iostream>
#include <string.h>
using namespace std;

class Usuario
{
	string nombre;
	string apellido;
	int num_socio;
	
public:
	Usuario() {}

	Usuario(string nombre,  string apellido, int num_socio);


	string getNombre() const { return nombre; }
	string getApellido() const { return apellido; }
	int getNum_socio() const { return num_socio; }

	friend istream& operator>>(istream& in, Usuario& p); //sobrecarga --> >> para poder leer de la entrada,FRIEND-->todo lo que sea privado es publico para friend(evita el encapsulamiento)
};

ostream& operator<<(ostream& out, const Usuario& p); //ostream es un atajo, para evitar el encapsulamiento ESTA FUERA DE LA CLASE

#endif