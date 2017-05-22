#include "Usuario.h"
#include <fstream>
int main()
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

	return 0;
}
