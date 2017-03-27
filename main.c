#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "gestion.h"

#define MAX_LENGHT 50
#define ADMIN_IN "admin"
#define ADMIN_PASSWORD "admin"
#define USU_IN "usuario"
#define USU_PASSWORD "usuario"

int main(int argc, char **argv)
{
	int option;
	int total = 0;
	Pelicula peliculas[MAX_LENGHT];
	//const char admin[5] = "admin";
	//const char usuario[7] = "usuario";

	//printf("%d argumento(s) recibido(s). \n", argc);

	if(argc < 3 || argc > 3)
	{
		printf("Se esperan recibir 3 argumentos. Ten en cuenta que se suma el nombre del archivo. \n");
		exit(1);
	}
	if(argc == 3)
	{		
		if(strcmp(argv[1],ADMIN_IN)==0 && strcmp(argv[2],ADMIN_PASSWORD)==0)
		{
			do
			{

				option = menuAdmin();

				switch (option)
				{
					case 1: 

						anyadirPelicula();
						menuAdmin();				
						break;

					case 2: 

						//eliminarPelicula();															
						break;

					case 3: 
				
						listaPelicula();
						menuAdmin();
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
		else if(strcmp(argv[1],USU_IN)==0 && strcmp(argv[2],USU_PASSWORD)==0)
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
						listaPelicula();
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
			printf("Nombre y/o contraseña incorrectos\n");
			exit(1);
		}
	}


	
}












