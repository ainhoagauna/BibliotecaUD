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
	const char admin[5] = "admin";
	const char usuario[7] = "usuario";

	printf("%d argumento(s) recibido(s). \n", argc);

	if(argc < 3 || argc > 3)
	{
		printf("Se esperan recibir 3 argumentos. Ten en cuenta que se suma el nombre del archivo. \n");
		exit(1);
	}
	if(argc == 3)
	{		
		if(strcmp(argv[1],"admin")==0 && strcmp(argv[2],"admin")==0)
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
		else if(strcmp(argv[1],"usuario")==0 && strcmp(argv[2],"usuario")==0)
		{
			do
			{

				option = menuUsuario();


				switch (option)
				{
					case 1: 
									
						break;

					case 2: 
			
						break;

					case 3: 				
						
						break;

					case 4: 
						
						break;

					default:
						return -1;
						break;
			
				}
			}while(option != 0);	

			return 0;
		}
		else
		{
			printf("Argumentos no reconocidos. Fin del programa.\n");
			exit(1);
		}
	}


	
}












