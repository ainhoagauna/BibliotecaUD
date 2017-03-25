#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "gestion.h"

#define MAX_LENGHT 50

typedef struct
{
	char nombre;
	char genero;
	double precio;
	double valoracion;

}Pelicula;

int main(void)
{
	int option;
	int total = 0;
	Pelicula peliculas[MAX_LENGHT];

	do{

	option = menuAdmin();


	switch (option)
		{
			case 1: 

				anyadirPelicula();				
				break;

			case 2: //eliminarPelicula();
			
				break;


			case 3: 
				
				listaPelicula();
				break;

			case 4: 
			printf("cuarta opcion\n");
			//printf("Ventas:%.2f\n", CalcularVentas(peliculas, total));
				break;

			default:
				return -1;
				break;

			
		}
	}while(option!=0);

	

	return 0;
}












