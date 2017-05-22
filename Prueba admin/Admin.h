#include <iostream>
#include <string.h>
using namespace std;

class Admin
{
	string nombre;
	string apellido;
	int sueldo;
	
public:
	Admin() {}

	Admin(string nombre,  string apellido, int sueldo);


	string getNombre() const { return nombre; }
	string getApellido() const { return apellido; }
	int getSueldo() const { return sueldo; }


};
