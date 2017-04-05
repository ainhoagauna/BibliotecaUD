#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "gestion.h"

#define MAX_LENGHT 50
#define ADMIN_IN "admin"
#define ADMIN_PASSWORD "admin"
#define USU_IN "usuario"
#define USU_PASSWORD "usuario"
#define MAX_PELICULAS 	5

int main(int argc, char **argv)
{
	int option;
	int total = 0;

	Pelicula peliculas[MAX_PELICULAS];
		

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
						break;

					case 2: 

																					
						break;

					case 3: 
				
						listaPelicula();
						break;

					case 4: 
						
						ventas();						
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

					if (total < MAX_PELICULAS) 
					{
						alquilarPelicula(&peliculas[total], total);
						total++;
					} else
					{
						printf("No puedes alquilar mas peliculas\n");
					}
					break;	


					case 2: 
						listaPelicula();
						break;

					case 3: 				
						verComentarios();
						break;

					case 4: 
						
						comentarPelicula();
						break;
					case 5:
					
						imprimirAlquiladas();
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












