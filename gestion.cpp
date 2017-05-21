#include <iostream>
#include "Admin.hpp"
#include "Usuario.hpp"
#include "Persona.hpp"
#include "gestion.hpp"
#include <iostream>
#include <fstream>
#include "string"

using namespace std;

void altaUsuario()
{
	
	cout<< "Introduzca los datos del usuario nuevo: "<<endl;
	cout<< " "<<endl;
	cout<< "Nombre: "<<endl;
	//string nombre;
	//cin>> nombre;
	//cout<< "Hola: "<< nombre <<endl;

	cout<< "Apellido: "<<endl;
	//string apellido;
	//cin>> apellido;
	cout<< "Numero de socio: "<<endl;
	//string num_socio;
	//cin>>num_socio;
	
	//Usuario *u=new Usuario(nombre,apellido, num_socio);
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


	ofstream fs;
	fs.open("Administrador.txt", ios::app);//ios:app para que escriba al final 

	// Enviamos una cadena al fichero de salida:
   fs << "Hola Andrea" << endl;
   // Cerrar el fichero, 
   // para luego poder abrirlo para lectura:
  


	//escribirEnFichero(fs);
	

	//ofstream fs("Administrador.txt"); 

   fs << a << endl;
  
   fs.close();

	//delete p2; // El destructor es polimorfico y se llama de forma correcta empezando por Alumno


	

}