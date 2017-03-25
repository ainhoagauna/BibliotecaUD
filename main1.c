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

int main(int argc, char **argv)
{
	int option;
	int total = 0;
	Pelicula peliculas[MAX_LENGHT];

	printf("%d argumento(s) recibido(s). \n", argc);

	if(argc < 3 || argc > 3)
	{
		printf("Se esperan recibir 3 argumentos. Ten en cuenta que se suma el nombre del archivo. \n");
		exit(1);
	}

	if(argc == 3)
	{
		if(argv[2]=='admin' && argv[3]=='admin')
		{
			do
			{

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
	}


	
}












