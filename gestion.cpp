#include <iostream>
#include "Admin.hpp"
#include "Persona.hpp"
#include "gestion.hpp"
#include <iostream>
#include <fstream>

using namespace std;

void altaUsuario()
{
	
	/*
	Usuario u1;
	cout<< "Introduzca los datos del usuario nuevo: "<<endl;
	cin>>u1;
*/
	
}


void printSueldo(Admin &a)
{
	
	cout << a.getSueldo() << endl;
	
}

void printPersonaRef(Persona &p)
{
	cout << "Nombre: " << p.getNombre() << endl;
	cout << "Apellido: " << p.getApellido() << endl;
	
}


void datosAdmin()
{
	cout<< "Hola"<<endl;

	Admin *a = new Admin("Pepito", "Palotes", 1000);


	Persona *p2 = a; //aun siendo abstracta puedo seguir usandolo

	printPersonaRef(*p2); //pasamos una referencia a una persona
	printSueldo(*a); // pasamos una referencia a un alumno


	//a->escribirEnFichero("Administrador.txt");

	ofstream fs("Administrador.txt"); 

  
   fs << p2 << endl;
  
   fs.close();

	//delete p2; // El destructor es polimorfico y se llama de forma correcta empezando por Alumno


	

}