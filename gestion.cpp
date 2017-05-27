#include <iostream>
#include "Admin.hpp"
#include "Usuario.hpp"
#include "Persona.hpp"
#include "gestion.hpp"
#include <iostream>
#include <fstream>
#include "string.h"

#define MAX_LENGHT 50
using namespace std;


void listaUsuario()
{
	string line;
	ifstream myFile("Usuario.txt");

	
	cout<<"Leyendo usuarios...."<<endl;
	cout<<"________________________________________________________"<< endl;



	
	while(getline(myFile,line))
	{

		cout<< line <<endl;
	
	}	

	
	
	cout<<endl;
	myFile.close();

}

void altaUsuario()
{
	Usuario p1;
	cout << "Introduce los datos del nuevo usuario:" << endl;
	cin >> p1;

	

	ofstream fs;
	fs.open("Usuario.txt", ios::app);//ios:app para que escriba al final 


	fs << p1 << endl;  
   	
	fs.close();
	
	cout << "Este es el usuario guardado: " << endl;
	cout << endl << p1 << endl;
   	cout << "SE HA DADO DE ALTA CORRECTAMENTE!!" << endl<<endl;

     	
  
}


void printSueldo(Admin &a)
{
	cout << "Usuario:" <<a.getUsuario() << endl;
	cout << "Contrasena:" <<a.getContrasena() << endl;
	cout << "Sueldo:" <<a.getSueldo() << endl;

	
}

void printPersonaRef(Persona &p)
{
	cout << "Nombre: " << p.getNombre() << endl;
	cout << "Apellido: " << p.getApellido() << endl;
	
}

void datosAdmin()
{
	Admin *a = new Admin("Pepito", "Palotes", "Admin", "Admin",1000);


	Persona *p2 = a; 

	cout<<"Mostrando Administrador...."<<endl;
	cout<<"____________________________"<< endl;
	printPersonaRef(*p2); 
	printSueldo(*a); 

	cout<<endl;

	delete p2;

}