#include "Admin.hpp"
#include <iostream>
#include <fstream>

using namespace std;

Admin::Admin(const char* nombre, const char* apellido, int sueldo): Persona(nombre,apellido)
{
	this->sueldo=sueldo;
}

int Admin::getSueldo()
{
	return this->sueldo;
}

//aqiu si hay implementacion,por tanto no es abstracta
void Admin::escribirEnFichero(const char* fichero)
{


	//ofstream fs 
	//fs.open("Administrador.txt")

   // Enviamos una cadena al fichero de salida:
   //fichero << "Hola Andrea" << endl;
   // Cerrar el fichero, 
   // para luego poder abrirlo para lectura:
   //fichero.close();

   
}