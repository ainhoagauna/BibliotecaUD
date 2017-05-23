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
void mostrarAdmin()
{
	string line;
	ifstream myFile("Administrador.txt");

	cout<<"Mostrando Administrador...."<<endl;
	cout<<"____________________________"<< endl;

	while(getline(myFile,line))
	{

		cout<< line <<endl;
		cout<<" "<<endl;

	
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
	string nombre="Pepito";
	string apellido="Palotes";
	int sueldo=1000;

	//Admin a=new Admin(nombre, apellido, sueldo);
	fstream fs("Administrador.txt");

	if(!fs.is_open())
	{
		fs.open("Administrador.txt", ios::app);//ios:app para que escriba al final 
	}

   fs << nombre << endl;
   fs << apellido <<endl;
   fs << sueldo << endl;
  
   fs.close();

   mostrarAdmin();

	

}