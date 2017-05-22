#include "Admin.h"
#include <fstream>
#include <string.h>
void datosAdmin()
{
	
	string nombre="Andrea";
	string apellido="Morillas";
	int sueldo=1000;

	//Admin a=new Admin(nombre, apellido, sueldo);
	fstream fs("Administrador.txt");

	if(!fs.is_open())
	{
		fs.open("Administrador.txt", ios::app);//ios:app para que escriba al final 
	}

   fs << "Hola Holaas" << endl;

   fs << nombre << endl;
   fs << apellido <<endl;
   fs << sueldo << endl;
  
   fs.close();
  }
int main()
{
	

   	datosAdmin();

}




