#include <iostream>
#include "Admin.hpp"
#include "Usuario.hpp"
#include "Persona.hpp"
#include "gestion.hpp"
#include <iostream>
#include <fstream>
#include "string.h"

using namespace std;

void listaUsuario()
{
	string line;
	ifstream myFile("Usuario.txt");

	cout<<"Leyendo usuarios...."<<endl;
	cout<<"________________________________________________________________________________"<< endl;

	while(getline(myFile,line))
	{

		cout<< line <<endl;

	
	}	
}
void altaUsuario()
{
	Usuario p1;
	cout << "Introduce los datos del nuevo usuario:" << endl;
	cin >> p1;

	cout << "Este es el usuario guardado: " << endl;


	cout << endl << p1 << endl;

	ofstream fs;
	fs.open("Usuario.txt", ios::app);//ios:app para que escriba al final 


	fs << p1 << endl;  
   	fs.close();

   	cout << "SE HA DADO DE ALTA CORRECTAMENTE!!" << endl;

   	listaUsuario();
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