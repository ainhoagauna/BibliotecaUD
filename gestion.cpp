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

	myFile.close();

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

	

	ofstream fs;
	fs.open("Usuario.txt", ios::app);//ios:app para que escriba al final 


	fs << p1 << endl;  
   	
	fs.close();
	
	cout << "Este es el usuario guardado: " << endl;
	cout << endl << p1 << endl;
   	cout << "SE HA DADO DE ALTA CORRECTAMENTE!!" << endl;

   
   	
   	cout <<"Ok?"<<endl;

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